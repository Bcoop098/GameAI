// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "DrawDebugHelpers.h"
#include "MyPathBuilderActor.generated.h"

UCLASS()
class PATHFINDING_API AMyPathBuilderActor : public AActor
{
	GENERATED_BODY()
	
public:
	// Sets default values for this actor's properties
	AMyPathBuilderActor();
	~AMyPathBuilderActor();

	UFUNCTION(BlueprintCallable, Category = "AStarPath")
		TArray<FVector> getPath(FVector postion, FVector2D target);

	UFUNCTION(BlueprintCallable, Category = "AStarPath")
		void changeGrid(int num);

	UFUNCTION(BlueprintCallable, Category = "AStarPath")
		void setGrid(const TArray<FVector>& listOfWalls);

	UFUNCTION(BlueprintCallable, Category = "AStarPath")
		void resetGrid();

	UFUNCTION(BlueprintCallable, Category = "AStarPath")
		FVector checkPoint(FVector target);

	UFUNCTION(BlueprintCallable, Category = "AStarPath")
		FVector2D checkPoint2D(FVector2D target);

	UPROPERTY(BlueprintReadOnly)
		TArray<FVector> Walls;

	UPROPERTY(EditAnywhere)
		bool AstarActive = true;

private:
	static const int GRID_SCALE_X = 30;
	static const int GRID_SCALE_Y = 30;

	
	struct Node
	{
		bool blocked;
		int dist;
		
		Node* prev;

		FVector2D pos;

		TArray<Node*> neighbors;

		~Node()
		{
			int neighborCount = neighbors.Num();

			for (int i = neighborCount; i >= 0; i--)
			{
				neighbors[i] = nullptr;
			}

			neighbors.Empty();
		}
	};

	Node* theGrid[GRID_SCALE_X][GRID_SCALE_Y];

	FVector redPos;

	FVector2D targetPos;
	float GridScale = 100.0;

	TArray<Node*> openList;

	int FindBestIndex();
	float Heuristic(Node* ptr);


};
