// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "StatePrimative.h"
#include "PatrolState.generated.h"

/**
 * 
 */
UCLASS()
class PATHFINDING_API UPatrolState : public UStatePrimative
{
	GENERATED_BODY()
public:

	virtual void StartState() override;
	virtual void UpdateState(float deltaTime) override;
};
