// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
//#include "Kismet/BlueprintFunctionLibrary.h"

//UCLASS()
class PATHFINDING_API PathBuilder //: public UBlueprintFunctionLibrary
{
public:
	PathBuilder();
	~PathBuilder();

	static PathBuilder* Instance;

	//UFUNCTION(BlueprintCallable, Catagory = "RossBobert")
	static PathBuilder* getInstance();

	TArray<FVector2D> getPath(FVector2D postion, FVector2D target);

	void changeGrid(int num);

private:
	static const int GRID_SCALE_X = 37;
	static const int GRID_SCALE_Y = 37;
	int FindBestIndex();
	FVector2D targetPos;

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
				delete neighbors[i];
				neighbors[i] = nullptr;
			}

			neighbors.Empty();
		}
	};

	Node* theGrid[GRID_SCALE_X][GRID_SCALE_Y];
	TArray<Node*> openList;

	float Heuristic(Node* ptr);


};
