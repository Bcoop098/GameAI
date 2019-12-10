// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/TriggerSphere.h"
#include "Flag.generated.h"

/**
 * 
 */
UCLASS()
class PATHFINDING_API AFlag : public ATriggerSphere
{
	GENERATED_BODY()
	

public:

	UFUNCTION(BlueprintImplementableEvent, BlueprintCallable)
		void resetFlag();
};
