// Fill out your copyright notice in the Description page of Project Settings.


#include "PatrolState.h"
#include "SteeringActor.h"

void UPatrolState::StartState()
{
	/*
	pseudocode
	strActor.getPathfinder().IsLooping = true;
	strActor.getPathfinder().SetPath(patrolPath);
	*/
}
void UPatrolState::UpdateState(float deltaTime)
{
	print("On Patrol");
}