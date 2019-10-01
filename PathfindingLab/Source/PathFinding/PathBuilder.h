// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"

/**
 * 
 */
class PATHFINDING_API PathBuilder
{
public:
	PathBuilder();
	~PathBuilder();

	static PathBuilder* Instance;

	static PathBuilder* getInstance();

	TArray<FVector> getPath(FVector postion, FVector target);

	void changeGrid(int num);

private:
	static const int GRID_SCALE_X = 37;
	static const int GRID_SCALE_Y = 37;

	bool theGrid[GRID_SCALE_X][GRID_SCALE_Y] = {false};

};
