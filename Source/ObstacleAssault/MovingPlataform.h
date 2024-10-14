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

	UPROPERTY(EditAnywhere)
	int32 MyInt = 50;


	UPROPERTY(EditAnyWhere)
	int32 InputA = 0;
	
	UPROPERTY(EditAnyWhere)
	int32 InputB = 0;
	
	UPROPERTY(EditAnyWhere)
	int32 APlusB = 0;

	UPROPERTY(EditAnyWhere)
	float MyFloat = 4.25;

	UPROPERTY(EditAnywhere)
	float InputAFloat = 0;

	UPROPERTY(EditAnywhere)
	float InputBFloat = 0;

	UPROPERTY(EditAnywhere)
	float APlusBFloat;

	UPROPERTY(EditAnywhere)
	bool MyBool = true;

	UPROPERTY(EditAnywhere)
	FVector MyVector = FVector(5, 2, 3);

	UPROPERTY(EditAnyWhere)
	float MyX = 0;
};
