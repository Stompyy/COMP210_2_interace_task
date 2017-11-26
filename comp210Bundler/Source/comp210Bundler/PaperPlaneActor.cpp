// Fill out your copyright notice in the Description page of Project Settings.

#include "PaperPlaneActor.h"


// Sets default values
APaperPlaneActor::APaperPlaneActor()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void APaperPlaneActor::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void APaperPlaneActor::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

