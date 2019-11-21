// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "StatePrimative.h"
#include "ChaseState.generated.h"

/**
 * 
 */
UCLASS()
class PATHFINDING_API UChaseState : public UStatePrimative
{
	GENERATED_BODY()
	
public:

	virtual void StartState() override;
	virtual void UpdateState(float deltaTime) override;
};
