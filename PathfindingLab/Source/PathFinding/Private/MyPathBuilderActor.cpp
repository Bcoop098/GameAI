// Fill out your copyright notice in the Description page of Project Settings.


#include "MyPathBuilderActor.h"

// Sets default values
AMyPathBuilderActor::AMyPathBuilderActor()
{
	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = false;

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
				theGrid[x][y]->neighbors.Add(theGrid[x-1][y]);
			}
			//Right
			if (x >= 0 && x < GRID_SCALE_X - 1)
			{
				theGrid[x][y]->neighbors.Add(theGrid[x+1][y]);
			}
			//Up
			if (y >= 0 && y < GRID_SCALE_Y - 1)
			{
				theGrid[x][y]->neighbors.Add(theGrid[x][y+1]);
			}
			//Down
			if (y > 0 && y < GRID_SCALE_Y)
			{
				theGrid[x][y]->neighbors.Add(theGrid[x][y-1]);
			}
		}
	}
	//*/
}

AMyPathBuilderActor::~AMyPathBuilderActor()
{
	
	/*for (int x = 0; x < GRID_SCALE_X; x++)
	{
		for (int y = 0; y < GRID_SCALE_Y; y++)
		{
			delete theGrid[x][y];
			theGrid[x][y] = nullptr;
		}
	}*/
	
}

TArray<FVector> AMyPathBuilderActor::getPath(FVector position, FVector2D target)
{

	float positionZ = position.Z;

	targetPos = target;
	openList.Empty();

	theGrid[FMath::RoundToInt(position.X)][FMath::RoundToInt(position.Y)]->dist = 0;

	openList.Add(theGrid[FMath::RoundToInt(position.X)][FMath::RoundToInt(position.Y)]);

	/* CODE SEGEMENT */
	while (openList.Num() > 0)
	{
		int smolIndex = FindBestIndex(); // = openList[0];

		Node* current;

		if (openList[smolIndex] == theGrid[FMath::RoundToInt(targetPos.X)][FMath::RoundToInt(targetPos.Y)])
		{
			break;
		}
		else
		{
			current = openList[smolIndex];
			openList[smolIndex] = nullptr;
			openList.RemoveAt(smolIndex);
		}

		for (int i = 0; i < current->neighbors.Num(); ++i)
		{
			int alt = current->dist + 1;
			if (alt < (current->neighbors[i]->dist) && !(current->neighbors[i]->blocked))
			{
				current->neighbors[i]->dist = alt;
				current->neighbors[i]->prev = current;
				openList.Add(current->neighbors[i]);
			}
		}

	}


	Node* tNode = theGrid[FMath::RoundToInt(targetPos.X)][FMath::RoundToInt(targetPos.Y)];
	TArray<FVector> path;

	if (tNode->prev != nullptr || tNode == theGrid[FMath::RoundToInt(position.X)][FMath::RoundToInt(position.Y)])
	{
		while (tNode != nullptr)
		{
			FVector bob = FVector((tNode->pos.X * GridScale + 50), (tNode->pos.Y * GridScale + 50), positionZ);
			path.Insert(bob, 0);
			tNode = tNode->prev;
		}
	}

	//*/
	
	return path;
}

//makes a new path
void AMyPathBuilderActor::changeGrid(int num)
{
	Walls.Empty();

	for (int x = 0; x < GRID_SCALE_X; x++)
	{
		for (int y = 0; y < GRID_SCALE_Y; y++)
		{
			theGrid[x][y]->blocked = false;
			theGrid[x][y]->dist = INT_MAX;
			theGrid[x][y]->prev = nullptr;
		}
	}

	int xB = 0;
	int yB = 0;

	for (int i = 0; i < num; i++)
	{
		xB = (rand() % GRID_SCALE_X);
		yB = (rand() % GRID_SCALE_Y);

		if (theGrid[xB][yB]->blocked == false)
		{
			theGrid[xB][yB]->blocked = true;
			Walls.Add(FVector(xB * GridScale + 50, yB * GridScale + 50, 0));
			DrawDebugSphere(GetWorld(), FVector(xB * GridScale + 50, yB * GridScale + 50, 0), 24, 32, FColor(255, 0, 0),true,-1.0,0,3.0);
		}
		else
		{
			i--;
		}
	}
}


int AMyPathBuilderActor::FindBestIndex()
{
	float bestDistance = TNumericLimits<float>::Max();
	int bestIndex = -1;

	for (int i = 0; i < openList.Num(); ++i)
	{
		if (openList[i]->dist < bestDistance)
		{
			bestDistance = openList[i]->dist;
			bestIndex = i;
		}
	}

	return bestIndex;
}

//Heuristic failed to work, still leaving it in
float AMyPathBuilderActor::Heuristic(Node* ptr)
{
	return (FVector2D::Distance(ptr->pos, targetPos));
}

//checks to make sure the target isn't in a wall
FVector AMyPathBuilderActor::checkPoint(FVector target)
{
	FVector newPoint = target;
	int xB = 0;
	int yB = 0;

	while (theGrid[FMath::RoundToInt(target.X)][FMath::RoundToInt(target.Y)]->blocked)
	{
		xB = rand() % GRID_SCALE_X;
		yB = rand() % GRID_SCALE_Y;
		newPoint = FVector(xB, yB, target.Z);
	} 

	return newPoint;
}


