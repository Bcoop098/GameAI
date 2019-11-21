// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#define print(Format, ...) UE_LOG(LogTemp, Warning, TEXT(Format), ##__VA_ARGS__)
#include "UObject/UObject.h"
#include "StatePrimative.generated.h"

UCLASS()
class PATHFINDING_API UStatePrimative : public UObject
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	UStatePrimative();

	void Init(class AStatePathfinder* owner);
	virtual void StartState();
	virtual void UpdateState(float deltaTime);

protected:
	class AStatePathfinder* Owner = nullptr;
};
