// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "MovingPlataform.generated.h"

UCLASS()
class OBSTACLEASSAULT_API AMovingPlataform : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AMovingPlataform();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

private:
	UPROPERTY(EditAnywhere, Category="Movement Properties")
	FVector PlataformVelocity = FVector(100, 0, 0);

	UPROPERTY(EditAnywhere, Category="Movement Properties")
	float MaxMoveDistance = 500;

	UPROPERTY(VisibleAnywhere, Category="Movement Debug")
	FVector StartLocation;

	UPROPERTY(VisibleAnywhere, Category="Movement Debug")
	float DistanceMoved = 0;
	
	// Functions
	void MovePlataform(float DeltaTime);
	void RotatePlataform(float DeltaTime);
};
