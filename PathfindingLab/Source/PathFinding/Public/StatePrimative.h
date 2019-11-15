// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "StatePrimative.generated.h"

UCLASS()
class PATHFINDING_API AStatePrimative : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AStatePrimative();

	virtual void UpdateState(const TSubclassOf<AActor>& SteeringActor);
};
