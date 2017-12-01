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

float APaperPlaneActorCPP::GetHeightAdjustedSpeed(float DeltaNormalisedHeight, float CurrentPlaneSpeed, float DeltaTime, float AccelerationModifier)
{
    if (DeltaNormalisedHeight < 0.0f)
    {
        return CurrentPlaneSpeed - (1.0f - CurrentPlaneSpeed) * DeltaNormalisedHeight * DeltaTime * AccelerationModifier;
    }
    else //return CurrentPlaneSpeed;
    {
        return CurrentPlaneSpeed + (0.2f - CurrentPlaneSpeed) * DeltaNormalisedHeight * DeltaTime * AccelerationModifier;
    }
}

