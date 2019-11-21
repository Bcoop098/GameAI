// Fill out your copyright notice in the Description page of Project Settings.


#include "ChaseState.h"
#include "SteeringActor.h"

void AChaseState::Start(const ASteeringActor & strActr)
{
	/*
	pseudocode
	strActor.getPathfinder().IsLooping = false;
	strActor.getPathfinder().SetPath(MyPathbuilder.getPath(strActr.position, player.position));

	*/
}

void AChaseState::UpdateState(const ASteeringActor& strActr)
{
	//strActor.getPathfinder().SetPath(MyPathbuilder.getPath(strActr.position, player.position));
}