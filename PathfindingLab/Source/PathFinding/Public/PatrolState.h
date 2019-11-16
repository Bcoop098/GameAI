// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "StatePrimative.h"
#include "PatrolState.generated.h"

/**
 * 
 */
UCLASS()
class PATHFINDING_API APatrolState : public AStatePrimative
{
	GENERATED_BODY()
public:

	virtual void UpdateState(const class ASteeringActor& strActr) override;
};
