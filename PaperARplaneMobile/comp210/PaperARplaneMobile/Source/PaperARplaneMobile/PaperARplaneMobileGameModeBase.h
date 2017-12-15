// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "PaperARplaneMobileGameModeBase.generated.h"

/**
 * 
 */
UCLASS()
class PAPERARPLANEMOBILE_API APaperARplaneMobileGameModeBase : public AGameModeBase
{
	GENERATED_BODY()
	
public:
    // Game has started. Triggered by the end of the main menu sequence
    UPROPERTY(BlueprintReadWrite, Category = gamemode)
    bool GameHasStarted = false;
    
    // Level timer that will end the game once it reaches zero
    UPROPERTY(BlueprintReadWrite, Category = gamemode)
    float CurrentLevelTimeAllowed = 30.0f;
    
    // Start spawning balloons
    UPROPERTY(BlueprintReadWrite, Category = gamemode)
    bool CanSpawnBalloons = false;
    UPROPERTY(BlueprintReadWrite, Category = gamemode)
    bool CanSpawnSlowBalloon = true;
    UPROPERTY(BlueprintReadWrite, Category = gamemode)
    bool CanSpawnFastBalloon = true;
    
    // This game's current score and level
    UPROPERTY(BlueprintReadWrite, Category = score)
    int32 Score = 0;
    UPROPERTY(BlueprintReadWrite, Category = gamemode)
    int32 CurrentLevel = 0;
    UPROPERTY(BlueprintReadWrite, Category = gamemode)
    int32 BalloonsNeededToAdvanceToNextLevel = 10;
    
    // This device's saved score data
    UPROPERTY(BlueprintReadWrite, Category = score)
    int32 HighScore = 0;
    UPROPERTY(BlueprintReadWrite, Category = score)
    int32 LastScore = 0;
    
    // Number of balloons currently active in level
    UPROPERTY(BlueprintReadWrite, Category = gamemode)
    int32 NumberOfBalloons = 0;
    
    // Timer used to dictate spawning of balloon targets
    UPROPERTY(BlueprintReadWrite, Category = gamemode)
    float GameTimer = 30.0f;
    UPROPERTY(BlueprintReadWrite, Category = gamemode)
    float TimeToSpawnNewBalloon = 4.0f;
    
    // Used to pick a target spawn position
    UPROPERTY(BlueprintReadWrite, Category = targetSpawning)
    FVector SpawnPositionRefOne = FVector(0.0f, 0.0f, 0.0f);
    UPROPERTY(BlueprintReadWrite, Category = targetSpawning)
    FVector SpawnPositionRefTwo = FVector(0.0f, 0.0f, 0.0f);
    
    
    
    // Adjusts score and number of balloons in level
    UFUNCTION(BlueprintCallable, Category = gamemode)
    void BalloonCollected();
    
    // Resets game variables at end of game
    UFUNCTION(BlueprintCallable, Category = gamemode)
    void ResetGameVariables();
    
    // Level up and set new gameplay variables
    UFUNCTION(BlueprintCallable, Category = gamemode)
    void LevelUp();
    
};
