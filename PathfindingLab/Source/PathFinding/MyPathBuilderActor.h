// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "MyPathBuilderActor.generated.h"

UCLASS()
class PATHFINDING_API AMyPathBuilderActor : public AActor
{
	GENERATED_BODY()
public:
	// Sets default values for this actor's properties
	AMyPathBuilderActor();

	UFUNCTION(BlueprintCallable, Category = "AStarPath")
	TArray<FVector2D> getPath(FVector2D postion, FVector2D target);

	void changeGrid(int num);

private:
	static const int GRID_SCALE_X = 37;
	static const int GRID_SCALE_Y = 37;

	struct Node
	{
		bool blocked;
		int dist;
		Node* prev;

		FVector2D pos;
		TArray<Node*> neighbors;
	};

	Node* theGrid[GRID_SCALE_X][GRID_SCALE_Y];
/*
public:

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;
*/
};
