// Fill out your copyright notice in the Description page of Project Settings.

#include "PaperPlaneActorCPP.h"


// Sets default values
APaperPlaneActorCPP::APaperPlaneActorCPP()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void APaperPlaneActorCPP::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void APaperPlaneActorCPP::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

// Changes current speed based on whether the plane is diving or climbing
void APaperPlaneActorCPP::AdjustSpeedFromHeightChange(float DeltaNormalisedHeight, float DeltaTime)
{
    if (DeltaNormalisedHeight < 0.0f)
    // Diving
    {
        CurrentSpeed = CurrentSpeed - (MaximumSpeed - CurrentSpeed) * DeltaNormalisedHeight * DeltaTime * AccelerationModifier;
    }
    else
    // Climbing
    {
        CurrentSpeed = CurrentSpeed + (MinimumSpeed - CurrentSpeed) * DeltaNormalisedHeight * DeltaTime * AccelerationModifier;
    }
}

void APaperPlaneActorCPP::ResetAeroplaneVariables()
{
    CurrentSpeed = 0.5f;
    DefaultSpeed = CurrentSpeed;
    MaximumSpeed = 1.8f;
    MinimumSpeed = 0.2f;
    AccelerationModifier = 1.2f;
    DefaultIdleCirclingRate = 180.0f;
    CanMove = false;
    FlyToNewPosition = false;
    IdleBankingAngle = 40.0f;
}
