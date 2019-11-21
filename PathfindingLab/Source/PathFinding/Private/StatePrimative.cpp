// Fill out your copyright notice in the Description page of Project Settings.


#include "StatePrimative.h"
#include "SteeringActor.h"

// Sets default values
AStatePrimative::AStatePrimative()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = false;

}

void AStatePrimative::Start(const ASteeringActor & strActr)
{

}
void AStatePrimative::UpdateState(const ASteeringActor& strActr)
{

}

void AStatePrimative::CANTHISWORK()
{
	print("FAQ");
}