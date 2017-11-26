// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "PaperPlaneActor.generated.h"

UCLASS()
class COMP210BUNDLER_API APaperPlaneActor : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	APaperPlaneActor();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;
    
    // Base movement speed
    UPROPERTY(BlueprintReadOnly, Category = movementSpeed)
    float baseSpeed = 1.0f;
    
    // Used to pick a target spawn position
    UPROPERTY(BlueprintReadWrite, Category = targetSpawning)
    FVector SpawnPositionRefOne = FVector(0.0f, 0.0f, 0.0f);
    UPROPERTY(BlueprintReadWrite, Category = targetSpawning)
    FVector SpawnPositionRefTwo = FVector(0.0f, 0.0f, 0.0f);
    UPROPERTY(BlueprintReadWrite, Category = targetSpawning)
    FVector SpawnPosition = FVector(0.0f, 0.0f, 0.0f);
    UPROPERTY(BlueprintReadWrite, Category = targetSpawning)
    float SpawnPositionDistance = 0.0f;
	
	
};
