// Fill out your copyright notice in the Description page of Project Settings.


#include "ChaseReturnState.h"
#include "StatePathFinder.h"
#include "MyPathBuilderActor.h"

void UChaseReturnState::StartState()
{
	//Owner->SetLooping(false);
	//Owner->GetPathBuilder()->resetGrid();
	Owner->SetPathToFollow(Owner->GetPathBuilder()->getPath((Owner->GetPosition()), ((FVector2D)Owner->getBasePosition())));
	/*
	pseudocode
	strActor.getPathfinder().SetPathToFollow(MyPathbuilder.getPath(strActr.position, patrolStart));

	*/
}

void UChaseReturnState::UpdateState(float deltaTime)
{
	
}
