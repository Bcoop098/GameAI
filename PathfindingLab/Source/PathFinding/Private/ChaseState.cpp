// Fill out your copyright notice in the Description page of Project Settings.


#include "ChaseState.h"
#include "StatePathFinder.h"
#include "MyPathBuilderActor.h"

void UChaseState::StartState()
{
	Owner->SetLooping(false);
	Owner->SetPathToFollow(Owner->GetPathBuilder()->getPath((Owner->GetPosition()), (FVector2D)(Owner->targetOfPlayer)));
	targetTime = maxTargetTime;
}

void UChaseState::UpdateState(float deltaTime)
{
	if (targetTime <= 0.0)
	{
		targetTime = maxTargetTime;
		Owner->GetPathBuilder()->resetGrid();
		Owner->SetPathToFollow(Owner->GetPathBuilder()->getPath(Owner->GetPosition(), (FVector2D)Owner->targetOfPlayer));
	}
	else
	{
		targetTime -= deltaTime;
	}
}