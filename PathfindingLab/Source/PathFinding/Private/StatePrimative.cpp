// Fill out your copyright notice in the Description page of Project Settings.


#include "StatePrimative.h"
#include "SteeringActor.h"
#include "StatePathfinder.h"

// Sets default values
UStatePrimative::UStatePrimative()
{

}

void UStatePrimative::Init(AStatePathfinder* owner)
{
	Owner = owner;
}

void UStatePrimative::StartState()
{

}
void UStatePrimative::UpdateState(float deltaTime)
{

}