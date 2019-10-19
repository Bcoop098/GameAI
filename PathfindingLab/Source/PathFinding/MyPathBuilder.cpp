// Fill out your copyright notice in the Description page of Project Settings.


#include "MyPathBuilder.h"

UMyPathBuilder* UMyPathBuilder::Instance = nullptr;

UMyPathBuilder::UMyPathBuilder()
{
	Node* temp;

	for (int x = 0; x < GRID_SCALE_X; x++)
	{
		for (int y = 0; y < GRID_SCALE_Y; y++)
		{
			temp = new Node();
			temp->blocked = false;
			temp->pos = FVector2D(x, y);
			temp->dist = 1;
			temp->prev = nullptr;
			temp->neighbors = TArray<Node*>();

			theGrid[x][y] = temp;
		}
	}
	for (int x = 0; x < GRID_SCALE_X; x++)
	{
		for (int y = 0; y < GRID_SCALE_Y; y++)
		{
			//Left
			if (x > 0 && x < GRID_SCALE_X)
			{
				theGrid[x][y]->neighbors.Add(theGrid[x][y]);
			}
			//Right
			if (x >= 0 && x < GRID_SCALE_X - 1)
			{
				theGrid[x][y]->neighbors.Add(theGrid[x][y]);
			}
			//Up
			if (y >= 0 && y < GRID_SCALE_Y - 1)
			{
				theGrid[x][y]->neighbors.Add(theGrid[x][y]);
			}
			//Down
			if (y > 0 && y < GRID_SCALE_Y)
			{
				theGrid[x][y]->neighbors.Add(theGrid[x][y]);
			}
		}
	}
	//*/
}

UMyPathBuilder::~UMyPathBuilder()
{
	for (int x = 0; x < GRID_SCALE_X; x++)
	{
		for (int y = 0; y < GRID_SCALE_Y; y++)
		{
			delete theGrid[x][y];
			theGrid[x][y] = nullptr;
		}
	}
}

UMyPathBuilder* UMyPathBuilder::getInstance()
{
	if (Instance == nullptr)
	{
		//Instance = new UMyPathBuilder();
	}
	return Instance;
}

TArray<FVector2D> UMyPathBuilder::getPath(FVector2D position, FVector2D target)
{
	//Pseduo
	//Loop through all points of grid 
		//Assign each points distance from the source to be indef (node variable)
		//Assign each points previous point as undefined (pointer to node)
		//Add the current point to a list which will be ran through (que)

	//After loop, assign the source point to be 0 (take the position given and assign it on the grid)

	/* CODE SEGMENT */
	int distance = 0;
	int indef = INT_MAX;

	TArray<Node*> listOfUncheckedNodes;

	for (int x = 0; x < GRID_SCALE_X; x++)
	{
		for (int y = 0; y < GRID_SCALE_Y; y++)
		{
			if (x != (int)position.X && y != (int)position.Y)
			{
				theGrid[x][y]->dist = indef;
			}
			else
			{
				theGrid[x][y]->dist = distance;
			}
			theGrid[x][y]->prev = nullptr;
			listOfUncheckedNodes.Add(theGrid[x][y]);
		}
	}
	//*/

	//While que is not empty:
		//take the point(u) with the smallest distance 

		//check if u is the target: end the loop if true

		//else remove u from the que

		//for each neighbor(v) to u
			//make a int/float (alt) which will be assigned the distance of u + the distance from its neighbor
			//if this alt is less than the distance of v
				//set the distance of v to alt
				//set u to be the previous point to v

	/* CODE SEGEMENT */
	while (listOfUncheckedNodes.Num() != 0)
	{
		Node* smolPoint = listOfUncheckedNodes[0];
		Node* checkPoint;

		for (int i = 0; i < listOfUncheckedNodes.Num(); i++)
		{
			checkPoint = listOfUncheckedNodes[i];
			if (smolPoint->dist > checkPoint->dist)
			{
				smolPoint = checkPoint;
			}
		}

		if (smolPoint == theGrid[(int)target.X][(int)target.Y])
		{
			continue;
		}
		else
		{
			listOfUncheckedNodes.Remove(smolPoint);
		}

		for (Node* neighbor : smolPoint->neighbors)
		{
			int alt = smolPoint->dist + 1;
			if (alt < neighbor->dist)
			{
				neighbor->dist = alt;
				neighbor->prev = smolPoint;
			}
		}

	}

	//*/

	//from the target node, work backwards along the path to find the source:
		//List of points (S)  = empty
		//point u = target
		//if previous value of u is defined or if u is source
			//while u is defined:
				//insert u to the begining of S
				//set u to be the previous point
	//return the list of all the points it takes for the shortest path.

	/* CODE SEGEMENT */

	Node* tNode = theGrid[(int)target.X][(int)target.Y];
	TArray<FVector2D> path;

	if (tNode->prev != nullptr || tNode == theGrid[(int)position.X][(int)position.Y])
	{
		while (tNode != nullptr)
		{
			path.Insert(tNode->pos, 0);
			tNode = tNode->prev;
		}
	}

	//*/

	/*
		+ Check if line 55 should be in the loop or remain outside
		+ Check there is nothing missing in the logic
		+ Ask if there is a quick way to check path lengths?
		+ Build a bloody node
	*/



	return path;
}

void UMyPathBuilder::changeGrid(int num)
{
	for (int x = 0; x < GRID_SCALE_X; x++)
	{
		for (int y = 0; y < GRID_SCALE_Y; y++)
		{
			theGrid[x][y]->blocked = false;
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
			theGrid[xB][yB]->blocked = true;
		}
		else
		{
			i--;
		}
	}
}