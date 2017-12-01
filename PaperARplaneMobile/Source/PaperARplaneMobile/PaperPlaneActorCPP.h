// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "PaperPlaneActorCPP.generated.h"

UCLASS()
class PAPERARPLANEMOBILE_API APaperPlaneActorCPP : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	APaperPlaneActorCPP();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;
    
    // Base movement speed
    UPROPERTY(BlueprintReadWrite, Category = movementSpeed)
    float CurrentSpeed = 0.5f;

    // Used to pick a target spawn position
    UPROPERTY(BlueprintReadWrite, Category = targetSpawning)
    FVector SpawnPositionRefOne = FVector(0.0f, 0.0f, 0.0f);
    UPROPERTY(BlueprintReadWrite, Category = targetSpawning)
    FVector SpawnPositionRefTwo = FVector(0.0f, 0.0f, 0.0f);
    
    // Is plane movement enabled
    UPROPERTY(BlueprintReadWrite, Category = game)
    bool CanMove = false;
    
    // True when plane is moving to a new location
    UPROPERTY(BlueprintReadWrite, Category = game)
    bool FlyToNewPosition = false;
    
    // Timer used to dictate spawning of balloon targets
    UPROPERTY(BlueprintReadWrite, Category = game)
    float GameTimer = 0.0f;
    
    // Plane roll angle when circling in idle state
    UPROPERTY(BlueprintReadOnly, Category = game)
    float IdleBankingAngle = 40.0f;
    
    // Returns new speed based on whether the plane is diving or climbing
    UFUNCTION(BlueprintCallable, Category = movementSpeed)
    float GetHeightAdjustedSpeed(float DeltaNormalisedHeight, float CurrentPlaneSpeed, float DeltaTime, float AccelerationModifier);
    
    // Rate of change of acceleration when diving or climbing
    UPROPERTY(BlueprintReadWrite, Category = movementSpeed)
    float AccelerationModifier = 1.2f;
	
};
