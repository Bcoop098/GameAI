// Fill out your copyright notice in the Description page of Project Settings.


#include "PathBuilder.h"

PathBuilder* PathBuilder::Instance = nullptr;

PathBuilder::PathBuilder()
{
	//ask about the for each on a 2d Array
	/* */

	Node* temp;

	for (int x = 0; x < GRID_SCALE_X; ++x)
	{
		for (int y = 0; y < GRID_SCALE_Y; ++y)
		{
			temp = new Node();
			temp->blocked = false;
			temp->pos = FVector2D(x, y);
			temp->dist = INT_MAX;
			temp->prev = nullptr;
			temp->neighbors = TArray<Node*>();

			theGrid[x][y] = temp;
		}
	}
	for (int x = 0; x < GRID_SCALE_X; ++x)
	{
		for (int y = 0; y < GRID_SCALE_Y; ++y)
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

PathBuilder::~PathBuilder()
{
	for (int x = 0; x < GRID_SCALE_X; ++x)
	{
		for (int y = 0; y < GRID_SCALE_Y; ++y)
		{
			delete theGrid[x][y];
			theGrid[x][y] = nullptr;
		}
	}
}

PathBuilder* PathBuilder::getInstance()
{
	if (Instance == nullptr)
	{
		Instance = new PathBuilder();
	}
	return Instance;
}

TArray<FVector2D> PathBuilder::getPath(FVector2D position, FVector2D target)
{
	//Pseduo
	//Loop through all points of grid 
		//Assign each points distance from the source to be indef (node variable)
		//Assign each points previous point as undefined (pointer to node)
		//Add the current point to a list which will be ran through (que)
	//After loop, assign the source point to be 0 (take the position given and assign it on the grid)

	/* CODE SEGMENT *
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
	
	targetPos = target;
	openList.Empty();

	theGrid[FMath::RoundToInt(position.X)][FMath::RoundToInt(position.Y)]->dist = 0;

	openList.Add(theGrid[FMath::RoundToInt(position.X)][FMath::RoundToInt(position.Y)]);

	/* CODE SEGEMENT */
	while (openList.Num() > 0)
	{
		int smolIndex = FindBestIndex(); // = openList[0];
		

		if (openList[smolIndex] == theGrid[FMath::RoundToInt(targetPos.X)][FMath::RoundToInt(targetPos.Y)])
		{
			break;
		}
		else
		{
			openList.RemoveAt(smolIndex);
		}

		for (Node* neighbor : openList[smolIndex]->neighbors)
		{
			int alt = openList[smolIndex]->dist + 1;
			if (alt < neighbor->dist && !neighbor->blocked)
			{
				neighbor->dist = alt;
				neighbor->prev = openList[smolIndex];
				openList.Add(neighbor);
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

	Node* tNode = theGrid[FMath::RoundToInt(targetPos.X)][FMath::RoundToInt(targetPos.Y)];
	TArray<FVector2D> path;

	if (tNode->prev != nullptr || tNode == theGrid[FMath::RoundToInt(position.X)][FMath::RoundToInt(position.Y)])
	{
		while (tNode != nullptr)
		{
			path.Insert(tNode->pos, 0);
			tNode = tNode->prev;
		}
	}
	
	//*/

	return path;
}

/*
void PathNuilder::aStar
{
	Path(start,end);
	start can be a float vector divide cell by x and y size;
	int(cellX, cellY) // start point;
	openList(FVector2D(cellX,cellY);
	LoopTime
	{
		while(openlist.size > 0//breaks when path is found, check to make sure openlist has values)
		{
			
			//openlist is sorted best to worst(search the list)
			BestIndex = findBestIndex();
			dijkstra best is smallest distance;
			Node* currentNode = openlist[bestIndex]//store the current node
			if(currentNode == destination)
			{
				//build the list to return
				TArray<FVector> Path;
				Path.add(currentNode);
				//search the neighbors, find the smallest distance
				while(current != Start)
				foreach(currentNeighbor)
				{
					current = smallestneighbor;
					Path.add(current);
					
					if(current == start //make sure start is added)
					{
						return;
					}
				}
				return;
			}
			openlist.removeat[bestIndex] //remove the bestIndex from the openlist
			get the neighbors and find the distance from all neighbors to the new node
			if(neighbor distance >distance to neighbor)
			{
				neighbor distance = distancetoneighbor
				openlist.add[neighbor]
			}
		}
	}
}
*/

int PathBuilder::FindBestIndex()
{
	float bestDistance = TNumericLimits<float>::Max();
	int bestIndex = -1;

	for (int i = 0; i < openList.Num(); ++i)
	{
		if (Heuristic(openList[i]) < bestDistance)
		{
			bestDistance = openList[i]->dist;
			bestIndex = i;
		}
	}

	return bestIndex;
}

float PathBuilder::Heuristic(Node* ptr)
{	
	return (FVector2D::Distance(ptr->pos, targetPos));
}

void PathBuilder::changeGrid(int num)
{
	for (int x = 0; x < GRID_SCALE_X; ++x)
	{
		for (int y = 0; y < GRID_SCALE_Y; ++y)
		{
			theGrid[x][y]->blocked = false;
			theGrid[x][y]->dist = INT_MAX;
			theGrid[x][y]->prev = nullptr;
		}
	}

	int xB = 0;
	int yB = 0;

	for (int i = 0; i < num; ++i)
	{
		xB = rand() % GRID_SCALE_X;
		yB = rand() % GRID_SCALE_Y;

		if (theGrid[xB][yB] == false)
		{
			theGrid[xB][yB]->blocked = true;
		}
		else
		{
			--i;
		}
	}
}

