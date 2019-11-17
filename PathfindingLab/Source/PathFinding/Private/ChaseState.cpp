// Fill out your copyright notice in the Description page of Project Settings.


#include "ChaseState.h"
#include "SteeringActor.h"


void AChaseState::Start(const ASteeringActor & strActr)
{
	/*
	pseudocode
	strActor.getPathfinder().IsLooping = false;
	MyPathbuilder.getPath(strActr.position, player.position)
	*/
}

void AChaseState::UpdateState(const class ASteeringActor& strActr)
{
	strActr.checkDistance(FVector(1.0f, 1.0f, 1.0f), FVector(1.0f, 1.0f, 1.0f));
	/*
	MyPathbuilder.getPath(strActr.position, player.position)
	*/
}