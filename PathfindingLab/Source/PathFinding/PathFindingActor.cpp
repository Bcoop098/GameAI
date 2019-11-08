// Fill out your copyright notice in the Description page of Project Settings.


#include "PathFindingActor.h"
#include "Kismet/KismetMathLibrary.h"


void APathFindingActor::SetPathToFollow(const TArray<FVector>& newPath)
{
	Path = newPath;
	NeedNewDestination = true;
}

void APathFindingActor::AddToPathFollow(const TArray<FVector>& newPath)
{
	for (const FVector& pos : newPath)
	{
		Path.Add(pos);
	}
}

void APathFindingActor::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	if (NeedNewDestination)
	{
		if (Path.Num() > 0)
		{
			if (IsLooping)
			{
				TargetPos = Path[pos];
				++pos;
				NeedNewDestination = false;
				if (pos >= Path.Num())
				{
					pos = 0;
				}
			}
			else
			{
				TargetPos = Path[0];
				Path.RemoveAt(0);
				NeedNewDestination = false;
			}
		}
	}
	else
	{
		float distanceToDestination = (Position - TargetPos).Size();
		if (distanceToDestination <= ReachRadius)
		{
			NeedNewDestination = true;
		}
	}
}
