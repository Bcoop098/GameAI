// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "DijkstraPathFinding.generated.h"

/**
 * 
 */
UCLASS()
class DIJKSTRA_API UDijkstraPathFinding : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()
		UFUNCTION(BlueprintCallable)
		static void dijkstraPathing();
};
