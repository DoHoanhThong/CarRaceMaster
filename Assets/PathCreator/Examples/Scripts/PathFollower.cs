﻿using System;
using System.Collections;
using System.Collections.Generic;
using System.Linq;
using UnityEngine;
using UnityEngine.Rendering;
using Random = UnityEngine.Random;
using DG.Tweening;
using Cinemachine;
using AmplifyMotion;

namespace PathCreation.Examples
{
    // Moves along a path at constant speed.
    // Depending on the end of path instruction, will either loop, reverse, or stop at the end of the path.
    public class PathFollower : MonoBehaviour
    {
        public PathCreator pathCreator;
        public EndOfPathInstruction endOfPathInstruction;
        public float speed = 5;
        public float MaxSpeed = 7;
        public float acclearionRate = 5f;
        public float minSpeed = .5f;
        public float declarationRate = 10f;

        public float distanceTravelled;
        public float finishlineDistance;

        public float distanceCovered;
        public float startDistance = 0f;



        Vector3 EvaluatedPosition;
        Quaternion rot;
        Quaternion mainCarRot, childCarRot;

        [Range(-1f, 1f)]
        public float deviation;
        [SerializeField] private float tobogganWidth = 2;
        [SerializeField] private float offsetFromGround;
        public float absDeviationAcceleration;
        public bool onPath = true;
        public bool deviationModifAuthorization = true;
        [NonSerialized] public float speedMultiplicator = 1;



        public float ejectionThresold;
        [SerializeField] private float ejectionForce;
        private float _lastDeviation;

        [Header("Flying parameters")]


       public float flyingSpeed = 1;
       public float fallSpeed = 1;

        CameraFollowRotate roadCam;

        public bool istransation;

        public TrailRenderer backLight1;
        public TrailRenderer backLight2;

        public TrailRenderer skidMark1;
        public TrailRenderer skidMark2;

        private Vector3 skidT1;
        private Vector3 skidT2;

        public ParticleSystem warpEffect;

        public ParticleSystem spark;
        public ParticleSystem dropspark;

        public ParticleSystem nos;
        public ParticleSystem dust;

        public ParticleSystem dead;

        public bool isCountdown;

        public bool isStart;

        public bool isfinish;

        public bool canFly;

        float falltimeCounter = 0f;

        public GameObject WingLeft, WingRight;
        public Transform Car;
        public Transform CameraLookAt;
        public GameObject leftWingTrail, RightWingTrail;

        DistanceCounter distance;

        public Player playerControl;

        public bool landBoost;

        public GameObject solidcar;
        public GameObject brokencar;

        public float finishDistanceTravelled;

        private void Awake()
        {
            distance = GetComponent<DistanceCounter>();
            Car = transform.GetChild(0);
        }

        void Start()
        {
            skidT1 = skidMark1.transform.localPosition;
            skidT2 = skidMark2.transform.localPosition;

            landBoost = false;
            backLight1.emitting = false;
            backLight2.emitting = false;

            skidMark1.emitting = false;
            skidMark2.emitting = false;

            isStart = false;
            isCountdown = false;
            canFly = true;
          
            if (pathCreator != null)
            {
                distanceTravelled = startDistance;
                EvaluatedPosition = pathCreator.path.GetPointAtDistance(distanceTravelled, endOfPathInstruction);
                rot.eulerAngles = Vector3.zero;
                transform.SetPositionAndRotation(EvaluatedPosition, rot);



            }

        }


        public void WingActivity(bool open)
        {
            if (open)
            {
                leftWingTrail.SetActive(true);
                RightWingTrail.SetActive(true);
                WingLeft.transform.DOLocalRotate(Vector3.zero, .5f, RotateMode.Fast);
                WingRight.transform.DOLocalRotate(Vector3.zero, .5f, RotateMode.Fast);
                DOVirtual.DelayedCall(.4f, () =>
                {
                    leftWingTrail.GetComponent<TrailRenderer>().emitting = true;
                    RightWingTrail.GetComponent<TrailRenderer>().emitting = true;
                });

            }
            else
            {
                leftWingTrail.SetActive(false);
                RightWingTrail.SetActive(false);
                leftWingTrail.GetComponent<TrailRenderer>().emitting = false;
                RightWingTrail.GetComponent<TrailRenderer>().emitting = false;
                WingLeft.transform.DOLocalRotate(new Vector3(0f, -90f, 0f), .5f, RotateMode.Fast);
                WingRight.transform.DOLocalRotate(new Vector3(0f, 90f, 0f), .5f, RotateMode.Fast);
            }
        }

        Vector3 childSavedPosition;

        void LateUpdate()
        {
            RaycastHit hit;

            if (isStart)
            {
                backLight1.emitting = true;
                backLight2.emitting = true;
            }


            

            if (!isStart)
            {
                EvaluatedPosition = pathCreator.path.GetPointAtDistance(distanceTravelled, endOfPathInstruction);
                rot = pathCreator.path.GetRotationAtDistance(distanceTravelled, endOfPathInstruction);
                mainCarRot.eulerAngles = new Vector3(rot.eulerAngles.x, rot.eulerAngles.y, 0);
                if (Mathf.Abs(deviation) > 0.48)
                {
                    rot.eulerAngles = new Vector3(rot.eulerAngles.x, rot.eulerAngles.y + deviation * (-10f), deviation * 35);
                    offsetFromGround = 0.18f;
                }
                else
                {
                    rot.eulerAngles = new Vector3(rot.eulerAngles.x, rot.eulerAngles.y + deviation * (-10f), deviation * 10);
                    offsetFromGround = 0.035f;
                }

                transform.SetPositionAndRotation(EvaluatedPosition, mainCarRot);

                CameraLookAtControl(landed);

                if (Physics.Raycast(EvaluatedPosition + Vector3.up + transform.right * deviation * tobogganWidth / 2f, Vector3.down, out hit, 5,
                  1 << 9))
                {
                    Vector3 EvaluatedPosition1;
                    EvaluatedPosition1 = hit.point + hit.normal * offsetFromGround;
                    Car.SetPositionAndRotation(EvaluatedPosition1, rot);


                }
            }

            if (pathCreator != null && isStart)
            {
                speed += acclearionRate * Time.deltaTime;
                if (speed > MaxSpeed) speed = MaxSpeed;
            }

            if (pathCreator != null && onPath && !istransation && isStart)
            {
                
                distanceCovered = (distanceTravelled - startDistance);
                float deviationMultiplicator = (1f - Mathf.Abs(deviation) / 6f);
                distanceTravelled += speed * speedMultiplicator * deviationMultiplicator * Time.deltaTime;
                if (isfinish && distanceTravelled >= finishDistanceTravelled) distanceTravelled = finishDistanceTravelled;

                EvaluatedPosition = pathCreator.path.GetPointAtDistance(distanceTravelled, endOfPathInstruction);
                rot = pathCreator.path.GetRotationAtDistance(distanceTravelled, endOfPathInstruction);

                mainCarRot.eulerAngles = new Vector3(rot.eulerAngles.x, rot.eulerAngles.y, 0);
                transform.SetPositionAndRotation(EvaluatedPosition, mainCarRot);

                childCarRot.eulerAngles = new Vector3(rot.eulerAngles.x, rot.eulerAngles.y, deviation * 45f * Mathf.Abs(deviation));
                offsetFromGround = .4f * Mathf.Abs(deviation);

                if (Physics.Raycast(EvaluatedPosition + transform.right * deviation * tobogganWidth / 2f + Vector3.up, Vector3.down, out hit, 5, 1 << 9))
                {
                    Vector3 childCarPosition = hit.point + hit.normal * offsetFromGround;
                    Car.transform.SetPositionAndRotation(childCarPosition, childCarRot);

                }
                else if (landed)
                {
                    Car.transform.SetPositionAndRotation(childSavedPosition, childCarRot);
                }



                CameraLookAtControl(landed);

                if (speed > MaxSpeed - 0.1f && !isfinish)
                {
                    warpEffect.gameObject.SetActive(true);
                }

                else if (speed < MaxSpeed - 0.1f)
                {
                    warpEffect.gameObject.SetActive(false);
                }

                if (Mathf.Abs(deviation) > 0.6f)
                {
                    if (!spark.isPlaying)
                    {
                        spark.Play();
                    }

                }
                else
                {
                    spark.Stop();
                }


                if (Mathf.Abs(deviation) > ejectionThresold && canFly)
                {

                    StartFly();

                }


            }

            else if (!onPath) //The character is flying
            {

                if (!istransation)
                {
                    fallSpeed += .1f * Time.fixedDeltaTime;
                    if (fallSpeed >= .525f) fallSpeed = .525f;
                    transform.position += Time.fixedDeltaTime * flyingSpeed * transform.forward - transform.up * fallSpeed;

                    if (Physics.Raycast(transform.position, Vector3.down, out hit, 1f, 1 << 9))
                    {
                        distanceTravelled = pathCreator.path.GetClosestDistanceAlongPath(transform.position);
                        distanceCovered = (distanceTravelled - startDistance);
                        Land();
                    }
                }
                else
                {
                    float upflyingSpeed = flyingSpeed / 2f;
                    transform.position += Time.deltaTime * upflyingSpeed * transform.forward;
                }

            }

            absDeviationAcceleration = Mathf.Abs(_lastDeviation - deviation);

            _lastDeviation = deviation;

            distance.distance = distanceTravelled;

        }

        public bool landed = false;

        public void Land()
        {
            MaxSpeed = MaxSpeed + 10f;
            speed = MaxSpeed;
            landBoost = true;
            playerControl.permitControl = false;
            istransation = true;
            falltimeCounter = 0f;
            fallSpeed = 0f;
            childSavedPosition = Car.transform.position;

            skidMark1.transform.parent = Car;
            skidMark1.transform.localPosition = skidT1;


            skidMark2.transform.parent = Car;
            skidMark2.transform.localPosition = skidT2;

            deviation = LandDeviation();
            playerControl.targetDeviation = deviation;

            EvaluatedPosition = pathCreator.path.GetPointAtDistance(distanceTravelled, endOfPathInstruction);
            rot = pathCreator.path.GetRotationAtDistance(distanceTravelled, endOfPathInstruction);


            childCarRot.eulerAngles = new Vector3(rot.eulerAngles.x, rot.eulerAngles.y, deviation * 45f * Mathf.Abs(deviation));
            offsetFromGround = .4f * Mathf.Abs(deviation);

            Vector3 childCarPosition;
            Vector3 childNextPosition = EvaluatedPosition + transform.right * deviation * tobogganWidth / 2f;
            RaycastHit hit;

            if (Physics.Raycast(childNextPosition + Vector3.up, Vector3.down, out hit, 5, 1 << 9))
            {
                childCarPosition = hit.point + hit.normal * offsetFromGround;
                childSavedPosition = childCarPosition;
            }


            nos.gameObject.SetActive(true);
            DOVirtual.DelayedCall(1.5f, () =>
            {
                MaxSpeed = 50f;
                nos.gameObject.SetActive(false);
                dropspark.Stop();
                landBoost = false;
            });



            DOVirtual.DelayedCall(1f, () =>
            {
                skidMark1.gameObject.transform.parent = null;
                skidMark2.gameObject.transform.parent = null;
            });


            WingActivity(false);
            dust.Play();

           
            ShakeCamera(2f, 0.2f);

            onPath = true;
            backLight1.emitting = true;
            backLight2.emitting = true;
            dropspark.Play();


            landed = true;
            istransation = false;
            playerControl.permitControl = true;

            HapticManager.Instance.PlayHaptic(HapticType.MediumImpact);

        }

        public float LandDeviation()
        {
            float land_deviation = 0f;

            Vector3 pathPos = pathCreator.path.GetPointAtDistance(distanceTravelled, endOfPathInstruction);
            Vector3 playerCurrentPosition = Car.transform.position;
            Vector3 targetDir = Car.transform.position - pathPos;
            float sign = Vector3.SignedAngle(targetDir, Car.transform.forward, Vector3.up) > 0 ? -1 : 1;


            land_deviation = .77f * Vector3.Distance(playerCurrentPosition, pathPos) / 4.15f;
            if (land_deviation >= .75f) land_deviation = .75f;

            return sign * land_deviation;
        }


        public void CameraLookAtControl(bool _landed)
        {
            if (_landed)
            {
                skidMark1.Clear();
                skidMark2.Clear();
                skidMark1.emitting = true;
                skidMark2.emitting = true;

                CameraLookAt.transform.position = Car.transform.position;
                GameManager.Instance.cameraManagement.PlayerFlyLand(false);
                landed = false;
            }

            if (Mathf.Abs(deviation) >= .4f)
            {
                CameraLookAt.transform.localPosition = new Vector3(Mathf.Lerp(CameraLookAt.transform.localPosition.x, 1.35f * deviation, 2f * Time.deltaTime), 0f, 0f);
            }
            else
            {
                CameraLookAt.transform.localPosition = new Vector3(Mathf.Lerp(CameraLookAt.transform.localPosition.x, 0f, 2f * Time.deltaTime), 0f, 0f);

            }
        }




        public void StartFly()
        {

            
            Vector3 newRot = transform.eulerAngles;
            newRot.x = 0;
            newRot.z = 0;
            transform.eulerAngles = newRot;
            backLight1.emitting = false;
            backLight2.emitting = false;

            skidMark1.emitting = false;
            skidMark2.emitting = false;

            dust.Stop();

            warpEffect.gameObject.SetActive(false);

            spark.Stop();
            dropspark.Stop();
            playerControl.DisallowControl();

            StartCoroutine(MakePlayerFly());

            HapticManager.Instance.PlayHaptic(HapticType.LightImpact);
        }



        public IEnumerator MakePlayerFly()
        {
            onPath = false;
            istransation = true;
            float t = 0;


            float currentYPos = transform.position.y;
            float upflyingSpeed = flyingSpeed / 1.5f;
            Vector3 childPosition = Car.position;
            Vector3 childMiddlePosition = Vector3.zero;
            Car.DOLocalRotate(Vector3.zero, .75f);

            WingActivity(true);
            GameManager.Instance.cameraManagement.PlayerFlyLand(true);

            while (t < 1)
            {
                t += Time.deltaTime / .4f;
                childPosition += Time.deltaTime * upflyingSpeed * transform.forward;
                Vector3 nextPosition = new Vector3(childPosition.x, currentYPos, childPosition.z) + Vector3.up * ejectionForce;
                transform.position = Vector3.Lerp(transform.position, nextPosition, t);
                Car.localPosition = Vector3.Lerp(Car.localPosition, childMiddlePosition, t);
                CameraLookAt.transform.localPosition = Vector3.Lerp(CameraLookAt.localPosition, childMiddlePosition, t);

                yield return Time.deltaTime;
            }

            istransation = false;
            nos.gameObject.SetActive(false);



        }

        void OnPathChanged()
        {
            distanceTravelled = pathCreator.path.GetClosestDistanceAlongPath(transform.position);
        }

        IEnumerator IncreaseCamerasmoothness()
        {

            while (roadCam.smoothness < 75)
            {
                roadCam.smoothness = roadCam.smoothness + 40f * Time.deltaTime;
                yield return new WaitForSeconds(0.0001f);
            }


        }

        public void ApplyDeviationStop(float duration) { StartCoroutine(DeviationStop(duration)); }
        private IEnumerator DeviationStop(float duration)
        {
            deviationModifAuthorization = false;

            yield return new WaitForSeconds(duration);
            deviationModifAuthorization = true;

        }


        public void ApplyTempDeviation(float modification, float duration) { StartCoroutine(TempDeviation(modification, duration)); }
        private IEnumerator TempDeviation(float modification, float duration)
        {
            deviationModifAuthorization = false;
            dropspark.Play();
            float timer = 0;

            //Using a while is usually not safe, but the lines here are full safe
            while (timer < duration)
            {
                float delta = Time.fixedDeltaTime * (modification / duration);
                deviation += delta;
                timer += Time.fixedDeltaTime;
                yield return new WaitForFixedUpdate();
            }
            deviationModifAuthorization = true;
            dropspark.Stop();
        }

        public void ApplyTempMultiplicator(float multiplicator, float duration) { StartCoroutine(TempMultiplicator(multiplicator, duration)); }
        private IEnumerator TempMultiplicator(float multiplicator, float duration)
        {
            speedMultiplicator += (multiplicator - 1f);

            nos.gameObject.SetActive(true);
            dropspark.Play();
            ShakeCamera(0.6f, duration + 0.4f);

            yield return new WaitForSeconds(duration);

            speedMultiplicator -= (multiplicator - 1f);

            yield return new WaitForSeconds(duration + 0.4f);

            nos.gameObject.SetActive(false);
            dropspark.Stop();
        }

        private IEnumerator CountDown()
        {
            yield return new WaitForSeconds(4f);
            isStart = true;
            backLight1.emitting = true;
            backLight2.emitting = true;
        }

        public void ShakeCamera(float intensity, float time)
        {
            if (!isfinish)
            {
                GameManager.Instance.cameraManagement.ShakeCamera(intensity, time);
            }

        }

    }

}

