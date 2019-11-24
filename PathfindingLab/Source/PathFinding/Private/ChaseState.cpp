// Fill out your copyright notice in the Description page of Project Settings.


#include "ChaseState.h"
#include "StatePathFinder.h"
#include "MyPathBuilderActor.h"

void UChaseState::StartState()
{
	Owner->SetLooping(false);
	Owner->SetPathToFollow(Owner->GetPathBuilder()->getPath((Owner->GetActorLocation()), (FVector2D)(Owner->GetTarget())));
	targetTime = maxTargetTime;
}

void UChaseState::UpdateState(float deltaTime)
{
	if (targetTime <= 0.0)
	{
		targetTime = maxTargetTime;
		Owner->SetPathToFollow(Owner->GetPathBuilder()->getPath(Owner->GetActorLocation(), (FVector2D)Owner->GetTarget()));
	}
	else
	{
		targetTime -= deltaTime;
	}
}