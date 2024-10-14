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

	MyInt = 9;

	APlusB = InputA + InputB;

	APlusBFloat = InputAFloat + InputBFloat;

	MyX = MyVector.X;

	MyVector.X = MyVector.Z;
	MyVector.Z = MyX;
}

// Called every frame
void AMovingPlataform::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

