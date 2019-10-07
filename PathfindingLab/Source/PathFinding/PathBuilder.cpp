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
	if (Instance == nullptr)
	{
		Instance = new PathBuilder();
	}
	return Instance;
}

TArray<FVector> PathBuilder::getPath(FVector position, FVector target)
{
	//A* here plz
	int distance = 0;
	int indef = INT_MAX;

	//Pseduo
	//Loop through all points of grid 
		//Assign each points distance from the source to be indef (node variable)
		//Assign each points previous point as undefined (pointer to node)
		//Add the current point to a list which will be ran through (que)
	
	//After loop, assign the source point to be 0 (take the position given and assign it on the grid)

	//While que is not empty:
		//take the point(u) with the smallest distance 
		
		//check if u is the target: end the loop if true

		//else remove u from the que
		
		//for each neighbor(v) to u
			//make a int/float (alt) which will be assigned the distance of u + the distance from its neighbor
			//if this alt is less than the distance of v
				//set the distance of v to alt
				//set u to be the previous point to v
	
	//from the target node, work backwards along the path to find the source:
		//List of points (S)  = empty
		//point u = target
		//if previous value of u is defined or if u is
			//while u is defined:
				//insert u to the begining of S
				//set u to be the previous point
	//return the list of all the points it takes for the shortest path.

	/*
		+ Check if line 55 should be in the loop or remain outside
		+ Check there is nothing missing in the logic
		+ Build a bloody node
	*/

	TArray<FVector> path;

	

	return path;
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

