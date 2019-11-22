// Fill out your copyright notice in the Description page of Project Settings.


#include "ChaseReturnState.h"
#include "StatePathFinder.h"
#include "MyPathBuilderActor.h"

void UChaseReturnState::StartState()
{
	Owner->SetLooping(false);
	Owner->SetPathToFollow(Owner->GetPathBuilder()->getPath((Owner->GetActorLocation() / 100.0), (FVector2D)(Owner->GetLastPatrol() / 100.0)));
	/*
	pseudocode
	strActor.getPathfinder().SetPathToFollow(MyPathbuilder.getPath(strActr.position, patrolStart));

	*/
}

void UChaseReturnState::UpdateState(float deltaTime)
{
	
}
