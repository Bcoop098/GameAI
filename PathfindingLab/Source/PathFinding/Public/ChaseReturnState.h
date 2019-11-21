// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "StatePrimative.h"
#include "ChaseReturnState.generated.h"

/**
 * 
 */
UCLASS()
class PATHFINDING_API AChaseReturnState : public AStatePrimative
{
	GENERATED_BODY()
	
public:
	virtual void Start(const class ASteeringActor& strActr) override;
	virtual void UpdateState(const class ASteeringActor& strActr) override;
};
