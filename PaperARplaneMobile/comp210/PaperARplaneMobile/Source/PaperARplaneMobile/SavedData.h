// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/SaveGame.h"
#include "SavedData.generated.h"

/**
 * 
 */
UCLASS()
class PAPERARPLANEMOBILE_API USavedData : public USaveGame
{
	GENERATED_BODY()
	
public:
    // Highest score on this device
    UPROPERTY(BlueprintReadWrite, Category = SavedData)
    int32 HighScore = 0;
    
    // The previous game's score, because why not
    UPROPERTY(BlueprintReadWrite, Category = SavedData)
    int32 LastScore = 0;
};
