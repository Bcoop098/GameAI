// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"


class PATHFINDING_API PathBuilder
{
public:
	PathBuilder();
	~PathBuilder();

	static PathBuilder* Instance;

	static PathBuilder* getInstance();

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

};
