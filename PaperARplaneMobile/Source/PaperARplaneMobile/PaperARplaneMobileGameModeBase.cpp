// Fill out your copyright notice in the Description page of Project Settings.

#include "PaperARplaneMobileGameModeBase.h"

// Adjusts score and number of balloons in level
void APaperARplaneMobileGameModeBase::BalloonCollected()
{
    Score += 1;
    BalloonsNeededToAdvanceToNextLevel -= 1;
    
    if (BalloonsNeededToAdvanceToNextLevel <= 0)
    {
        // Go up a level
        Level += 1;
        // Adjust balloon spawn time, so the game gets harder
        TimeToSpawnNewBalloon *= 0.85f;
        // Reset level advancement requirement
        BalloonsNeededToAdvanceToNextLevel = 10;
    }
  
}

