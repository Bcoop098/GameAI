// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#define print(Format, ...) UE_LOG(LogTemp, Warning, TEXT(Format), ##__VA_ARGS__)
#include "GameFramework/Actor.h"
#include "StatePrimative.generated.h"

UCLASS()
class PATHFINDING_API AStatePrimative : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AStatePrimative();

	virtual void Start(const class ASteeringActor& strActr);
	virtual void UpdateState(const class ASteeringActor& strActr);


	void CANTHISWORK();
};
