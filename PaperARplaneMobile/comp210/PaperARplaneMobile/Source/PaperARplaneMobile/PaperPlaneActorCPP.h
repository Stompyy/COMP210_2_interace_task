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
    
    // PreGame aeroplane displacement from camera, where plane sits just in front of view
    UPROPERTY(BlueprintReadWrite, Category = PreGame)
    float PreGamePlaneHeightDisplacement = 14.0f;
    UPROPERTY(BlueprintReadWrite, Category = PreGame)
    float PreGamePlaneDistanceDisplacement = 14.0f;
    
    // Airplane movement speed variables
    UPROPERTY(BlueprintReadWrite, Category = movementSpeed)
    float CurrentSpeed = 0.5f;
    UPROPERTY(BlueprintReadWrite, Category = movementSpeed)
    float DefaultSpeed = CurrentSpeed;
    UPROPERTY(BlueprintReadWrite, Category = movementSpeed)
    float MaximumSpeed = 1.8f;
    UPROPERTY(BlueprintReadWrite, Category = movementSpeed)
    float MinimumSpeed = 0.2f;
    // Rate of change of acceleration when diving or climbing
    float AccelerationModifier = 1.2f;
    
    // Idle Circling speed, degrees per second
    UPROPERTY(BlueprintReadWrite, Category = movementSpeed)
    float DefaultIdleCirclingRate = 180.0f;
    
    // Initial value for lerping the current speed to default when idle
    UPROPERTY(BlueprintReadWrite, Category = movementSpeed)
    float IdleSpeedStartValue;
    
    // Is airplane movement enabled
    UPROPERTY(BlueprintReadWrite, Category = game)
    bool CanMove = false;
    
    // True when plane is moving to a new location
    UPROPERTY(BlueprintReadWrite, Category = game)
    bool FlyToNewPosition = false;
    
    // Plane roll angle when circling in idle state
    UPROPERTY(BlueprintReadOnly, Category = game)
    float IdleBankingAngle = 40.0f;
    
    // Tolerence for distance check if arrived at destination
    UPROPERTY(BlueprintReadOnly, Category = game)
    float ArrivalDistanceTolerence = 2.0f;
    
    // Volume of balloon collection sound.
    UPROPERTY(BlueprintReadWrite, Category = game)
    float CollectionSoundVolume;
    
    
    // Changes current speed based on whether the plane is diving or climbing
    UFUNCTION(BlueprintCallable, Category = movementSpeed)
    void AdjustSpeedFromHeightChange(float DeltaNormalisedHeight, float DeltaTime);
    
    // Reset all variables on new game
    UFUNCTION(BlueprintCallable, Category = Gamemode)
    void ResetAeroplaneVariables();
    
	
};
