// Fill out your copyright notice in the Description page of Project Settings.


#include "MovingPlataform.h"

// Sets default values
AMovingPlataform::AMovingPlataform()
{
 	// Set this actor to c	all Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AMovingPlataform::BeginPlay()
{
	Super::BeginPlay();

	GEngine->AddOnScreenDebugMessage(-1, 5.0f, FColor::Red,"Welcome to Obstacle Assault!!");
	
	StartLocation = GetActorLocation();
}

// Called every frame
void AMovingPlataform::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	FVector CurrentLocation = GetActorLocation();
	
	CurrentLocation += PlataformVelocity * DeltaTime;
	
	SetActorLocation(CurrentLocation);

	DistanceMoved = FVector::Dist(StartLocation, CurrentLocation);

	if (DistanceMoved > MaxMoveDistance) {
		FVector MoveDirection = PlataformVelocity.GetSafeNormal();
	
		StartLocation = StartLocation + MoveDirection * MaxMoveDistance;

		SetActorLocation(StartLocation);

		PlataformVelocity = -PlataformVelocity;
	}
}
