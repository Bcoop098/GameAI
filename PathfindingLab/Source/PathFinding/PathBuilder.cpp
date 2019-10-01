// Fill out your copyright notice in the Description page of Project Settings.


#include "PathBuilder.h"

PathBuilder* PathBuilder::Instance = nullptr;

PathBuilder::PathBuilder()
{
}

PathBuilder::~PathBuilder()
{
}

PathBuilder* PathBuilder::getInstance()
{
	if (Instance == NULL)
	{
		Instance = new PathBuilder();
	}
	return Instance;
}

TArray<FVector> PathBuilder::getPath(FVector position, FVector target)
{
	//A* here plz
}

void PathBuilder::changeGrid(int num)
{
	for (int x = 0; x < GRID_SCALE_X; x++)
	{
		for (int y = 0; y < GRID_SCALE_Y; y++)
		{
			theGrid[x][y] = false;
		}
	}

	int xB = 0;
	int yB = 0;

	for (int i = 0; i < num; i++)
	{
		xB = rand() % GRID_SCALE_X;
		yB = rand() % GRID_SCALE_Y;

		if (theGrid[xB][yB] == false)
		{
			theGrid[xB][yB] = true;
		}
		else
		{
			i--;
		}
	}
}

