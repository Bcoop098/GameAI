// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "SteeringActor.h"
#include "PathFindingActor.generated.h"

UCLASS()
class PATHFINDING_API  APathFindingActor : public ASteeringActor
{
	GENERATED_BODY()
	

public:	

	UFUNCTION(BlueprintCallable)
	void SetPathToFollow(const TArray<FVector>& newPath);

	UFUNCTION(BlueprintCallable)
	void AddToPathFollow(const TArray<FVector>& newPath);


	virtual void Tick(float DeltaTime) override;

protected:

	

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float ReachRadius = 100.0f;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool NeedNewDestination = true;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool IsLooping = true;

	int pos = 0;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<FVector> Path;
};
