// Fill out your copyright notice in the Description page of Project Settings.

#include "PaperARplaneMobileGameModeBase.h"

// Adjusts score and number of balloons in level
void APaperARplaneMobileGameModeBase::BalloonCollected()
{
    Score += 1;
/*  BalloonsNeededToAdvanceToNextLevel -= 1;
    
    if (BalloonsNeededToAdvanceToNextLevel <= 0)
    {
        // Go up a level
        CurrentLevel += 1;
        // Adjust balloon spawn time, so the game gets harder
        TimeToSpawnNewBalloon *= 0.85f;
        // Reset level advancement requirement
        BalloonsNeededToAdvanceToNextLevel = 10;
    }
*/
}

void APaperARplaneMobileGameModeBase::ResetGameVariables()
{
    GameHasStarted = false;
    CanSpawnBalloons = false;
    CanSpawnSlowBalloon = false;
    CanSpawnFastBalloon = false;
    Score = 0;
    CurrentLevel = 1;
    BalloonsNeededToAdvanceToNextLevel = 5;
    NumberOfBalloons = 0;
    GameTimer = 0.0f;
    TimeToSpawnNewBalloon = 4.0f;
    CurrentLevelTimeAllowed = 30.0f;
}

void APaperARplaneMobileGameModeBase::LevelUp()
{
    switch (CurrentLevel){
        case 0:
            CurrentLevelTimeAllowed = 30.0f;
            BalloonsNeededToAdvanceToNextLevel = 10;
            break;
        case 1:
            CurrentLevelTimeAllowed = 25.0f;
            BalloonsNeededToAdvanceToNextLevel = 10;
            break;
        case 2:
            CurrentLevelTimeAllowed = 20.0f;
            BalloonsNeededToAdvanceToNextLevel = 10;
            break;
        case 3:
            CurrentLevelTimeAllowed = 15.0f;
            BalloonsNeededToAdvanceToNextLevel = 10;
            break;
        case 4:
            CurrentLevelTimeAllowed = 10.0f;
            BalloonsNeededToAdvanceToNextLevel = 10;
            break;
        case 5:
            CurrentLevelTimeAllowed = 10.0f;
            BalloonsNeededToAdvanceToNextLevel = 12;
            break;
        case 6:
            CurrentLevelTimeAllowed = 10.0f;
            BalloonsNeededToAdvanceToNextLevel = 15;
            break;
        case 7:
            CurrentLevelTimeAllowed = 10.0f;
            BalloonsNeededToAdvanceToNextLevel = 18;
            break;
        case 8:
            CurrentLevelTimeAllowed = 10.0f;
            BalloonsNeededToAdvanceToNextLevel = 21;
            break;
        case 9:
            CurrentLevelTimeAllowed = 10.0f;
            BalloonsNeededToAdvanceToNextLevel = 25;
            break;
        case 10:
            CurrentLevelTimeAllowed = 10.0f;
            BalloonsNeededToAdvanceToNextLevel = 30;
            break;
        case 11:
            CurrentLevelTimeAllowed = 10.0f;
            BalloonsNeededToAdvanceToNextLevel = 40;
            break;
        case 12:
            CurrentLevelTimeAllowed = 10.0f;
            BalloonsNeededToAdvanceToNextLevel = 50;
            CurrentLevel++;
            break;
        case 14:
            CurrentLevelTimeAllowed = 10.0f;
            BalloonsNeededToAdvanceToNextLevel = 100;
            break;
        case 15:
            CurrentLevelTimeAllowed = 10.0f;
            BalloonsNeededToAdvanceToNextLevel = 1000;
            break;
        default:
            CurrentLevelTimeAllowed = 10.0f;
            BalloonsNeededToAdvanceToNextLevel = 10000;
            break;
    }
    CurrentLevel++;
}

