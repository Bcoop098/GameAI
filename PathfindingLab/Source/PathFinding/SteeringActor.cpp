// Fill out your copyright notice in the Description page of Project Settings.


#include "SteeringActor.h"
#include "Kismet/KismetMathLibrary.h"



// Sets default values
ASteeringActor::ASteeringActor()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void ASteeringActor::BeginPlay()
{
	Super::BeginPlay();

	Position = GetActorLocation();

	currentState = EState::ES_Patrol;
}

// Called every frame
void ASteeringActor::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	// steering
	SteeringVelocity += (SteeringVelocity * DragForce * DeltaTime);
	SteeringVelocity += (Seek() * SeekStrength * DeltaTime);

	// limit Speed
	if (SteeringVelocity.Size() > MaxSpeed)
	{
		SteeringVelocity = SteeringVelocity.GetSafeNormal() * MaxSpeed;
	}

	// movement
	Position += (SteeringVelocity * DeltaTime);
	SetActorLocation(Position, true);
	Position = GetActorLocation();

	// orientation 
	FRotator PlayerRot = UKismetMathLibrary::FindLookAtRotation(Position, Position + SteeringVelocity);
	SetActorRotation(PlayerRot);

	/*if (checkDistance(this->GetActorLocation, playerPos) && checkCone(this->GetActorLocation, playerPos))
	{
		currentState = statesForSeeker[Chase];
		statesForSeeker[0].GetDefaultObject()->Start(ThisClass());
	}*/

	/*
	else if(escapeTime >= 4)
	{
		currentState = statesForSeeker[ReturnPatrol];
		statesForSeeker[0].GetDefaultObject()->Start(ThisClass());
	}
	float distance = (Position - PatrolStart).Size(); //determines how close the actor is to the start of patrol
	else if(distance <= 100.0f && currentState = statesForSeeker[ReturnPatrol])
	{
		currentState = statesForSeeker[Patrol];
		statesForSeeker[0].GetDefaultObject()->Start(ThisClass());
	}
	*/

	//statesForSeeker[0].GetDefaultObject()->UpdateState(ThisClass());
}

bool ASteeringActor::checkDistance(FVector actorPos, FVector playerPos)
{
	float distance = FVector::Dist(actorPos, playerPos);
	if (distance <= distanceToDetect)
	{
		rad = true;
		return true;
	}

	rad = false;
	return false;
}

bool ASteeringActor::checkDistanceChase(FVector actorPos, FVector playerPos)
{
	float distance = FVector::Dist(actorPos, playerPos);
	if (distance <= distanceToDetectChase)
	{
		rad = true;
		return true;
	}

	rad = false;
	return false;
}

bool ASteeringActor::checkCone(FVector actorPos, FVector playerPos)
{
	//Check if player is in range first
	if (currentState == EState::ES_Patrol && checkDistance(actorPos, playerPos))
	{
		return false;
	}
	else if (currentState == EState::ES_ReturnPatrol && checkDistance(actorPos, playerPos))
	{
		return false;
	}
	else if (currentState == EState::ES_Chase && checkDistanceChase(actorPos, playerPos))
	{
		return false;
	}

	FVector velocityNormal = SteeringVelocity.GetSafeNormal();
	FVector direction = playerPos - actorPos;
	direction.Z = 0.0f;
	FVector directionNormal = direction.GetSafeNormal();
	
	float orient = FVector::DotProduct(velocityNormal, directionNormal);
	if (orient < 0)
	{
		cone = false;
		return false;
	}

	float radian = FMath::Acos(orient);
	
	if (FMath::Abs(FMath::RadiansToDegrees(radian)) < (detectionCone / 2.0f))
	{
		cone = true;
		return true;
	}

	cone = false;
	return false;
}


FVector ASteeringActor::Seek()
{
	FVector dir = TargetPos - Position;
	float distance = dir.Size();
	dir.Z = 0; // consider only 2d plane
	dir.Normalize();

	const float maxSpeedDistance = 500.0f;
	float speedRatio = FMath::Clamp(distance / SeekDecelerationDistance, 0.0f, 1.0f);

	return dir * speedRatio;
}