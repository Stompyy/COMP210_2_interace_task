// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "ARGameMode.generated.h"

/**
 * 
 */
UCLASS()
class COMP210BUNDLER_API AARGameMode : public AGameModeBase
{
	GENERATED_BODY()
	
public:
    
    // New object spawn location
    UPROPERTY(BlueprintReadWrite, Category = targets)
    FVector NewLocation;    
    // Score
    UPROPERTY(BlueprintReadWrite, Category = score)
    int32 score = 0;
	
	
	
};
