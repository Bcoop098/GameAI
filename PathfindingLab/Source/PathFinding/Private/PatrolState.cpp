// Fill out your copyright notice in the Description page of Project Settings.


#include "PatrolState.h"
#include "StatePathfinder.h"

void UPatrolState::StartState()
{
	Owner->SetLooping(true);
	Owner->SetPathToFollow(Owner->GetPatrol());
}
void UPatrolState::UpdateState(float deltaTime)
{
	//print("On Patrol");
}