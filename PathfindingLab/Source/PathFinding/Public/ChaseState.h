// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "StatePrimative.h"
#include "ChaseState.generated.h"

/**
 * 
 */
UCLASS()
class PATHFINDING_API AChaseState : public AStatePrimative
{
	GENERATED_BODY()
	
public:

	virtual void UpdateState(const TSubclassOf<AActor>& SteeringActor) override;
};
