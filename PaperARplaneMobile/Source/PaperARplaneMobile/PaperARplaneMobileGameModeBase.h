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
    UPROPERTY(BlueprintReadOnly, Category = score)
    int32 Score = 0;
    
    UPROPERTY(BlueprintReadOnly, Category = gamemode)
    int32 NumberOfBalloons = 0;
	
    UFUNCTION(BlueprintCallable, Category = score)
    void IncrementScore() { Score += 1; }
    
    UFUNCTION(BlueprintCallable, Category = gamemode)
    void IncreaseBalloonCount() { NumberOfBalloons += 1; }
    
    UFUNCTION(BlueprintCallable, Category = gamemode)
    void DecreaseBalloonCount() { NumberOfBalloons -= 1; }
    
};
