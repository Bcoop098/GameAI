// Fill out your copyright notice in the Description page of Project Settings.


#include "PatrolState.h"
#include "SteeringActor.h"


void APatrolState::Start(const ASteeringActor & strActr)
{
	/*
	pseudocode
	strActor.getPathfinder().IsLooping = true;
	strActor.getPathfinder().SetPath(patrolPath);
	*/
}
void APatrolState::UpdateState(const ASteeringActor& strActr)
{
	print("On Patrol");
}