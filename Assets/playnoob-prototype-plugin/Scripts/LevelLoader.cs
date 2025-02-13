using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;

public class LevelLoader : Singleton <LevelLoader>
{
    public static LevelLoader instance;
    [Header("Check if you want to play from a specific level")]
    public bool playEditorLevel;
    public int editorLevel = 0;
    public bool isInitScene;


    //TODO: specify the initial levels 
    int initialLevels = 1;

    private void OnEnable()
    {

        if (isInitScene)
        {
#if UNITY_EDITOR
            if (playEditorLevel)
            {
                PlayerPrefs.SetInt(Playnoob.Constants.CurrentLevel, editorLevel);

            }
#endif

            LoadLevel();
        }

    }


    //TODO: if the editor level does not have the level loader script
    public int SetLevelIndexForDirectPlay()
    {
        isInitScene = true;
        int currentEditorLevel = SceneManager.GetActiveScene().buildIndex;
        PlayerPrefs.SetInt(Playnoob.Constants.CurrentLevel, currentEditorLevel);
        return currentEditorLevel;
    }

    //Call this method as soon as a level is completed 
    public void LevelCompleted()
    {
        PlayerPrefs.SetInt(Playnoob.Constants.CurrentLevel, PlayerPrefs.GetInt(Playnoob.Constants.CurrentLevel) + 1);
    }


    //Call this method to load next level or restat a level
    public void LoadLevel()
    {
        SceneManager.LoadScene(Actual_Level_Index());
    }


    public int Actual_Level_Index()
    {
        int _current_level = PlayerPrefs.GetInt(Playnoob.Constants.CurrentLevel);
        int _total_levels = SceneManager.sceneCountInBuildSettings - 1;
        int _repeatLevel = _total_levels - initialLevels;
        int _current_level_to_load = _current_level;
        if (_current_level == 0)
        {
            _current_level = 1;
            PlayerPrefs.SetInt(Playnoob.Constants.CurrentLevel, _current_level);
            _current_level_to_load = _current_level;
        }
        else if (_total_levels == 1) //for a game with single level 
        {
            _current_level_to_load = _total_levels;
        }
        else if (_current_level > _total_levels)
        {
            if (_current_level % _repeatLevel <= initialLevels)
            {
                _current_level_to_load = _repeatLevel + (_current_level % _repeatLevel);
            }
            else
            {
                _current_level_to_load = (_current_level % _repeatLevel);
            }
        }
        return _current_level_to_load;
    }

}
