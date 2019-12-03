// Fill out your copyright notice in the Description page of Project Settings.


#include "StatePathfinder.h"
#include "MyPathBuilderActor.h"
#include "Kismet/GameplayStatics.h"

void AStatePathfinder::BeginPlay()
{
	Super::BeginPlay();

	for (int i = 0; i < statesForSeeker.Num(); ++i)
	{
		UStatePrimative* ptr = NewObject<UStatePrimative>(this, statesForSeeker[i].Get());
		ptr->Init(this);
		stateObjects.Add(ptr);
	}

	currentState = EState::ES_ReturnPatrol;


	/*temp.Empty();

	temp = pathBuilder->getPath(Point1, FVector2D(Point2.X, Point2.Y));
	patrolRoute.Append(temp);
	temp.Empty();

	temp = pathBuilder->getPath(Point2, FVector2D(Point3.X, Point3.Y));
	patrolRoute.Append(temp);
	temp.Empty();

	temp = pathBuilder->getPath(Point3, FVector2D(Point4.X, Point4.Y));
	patrolRoute.Append(temp);
	temp.Empty();

	temp = pathBuilder->getPath(Point4, FVector2D(Point1.X, Point1.Y));
	patrolRoute.Append(temp);
	temp.Empty();*/

	stateObjects[(int)currentState]->StartState();
}

void AStatePathfinder::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	//Check if player is in cone of vision
	/*if (checkCone(this->GetPosition(), targetOfPlayer))
	{
		if (currentState != EState::ES_Chase)
		{
			currentState = EState::ES_Chase;
			stateObjects[(int)currentState]->StartState();
		}
		escapeTime = 0.0;
	}
	//check if they have been out of sight for too long
	else if (currentState == EState::ES_Chase && escapeTime >= 4.0)
	{
		currentState = EState::ES_ReturnPatrol;
		stateObjects[(int)currentState]->StartState();
	}
	//check if player is out of chase cone
	else if (currentState == EState::ES_Chase && !checkCone(this->GetActorLocation(), targetOfPlayer))
	{
		escapeTime += DeltaTime;
	}
	//check if they made it back to the patrol route
	else if(currentState == EState::ES_ReturnPatrol && Path.Num() < 1)
	{
		currentState = EState::ES_Patrol;
		stateObjects[(int)currentState]->StartState();
	}
	//keeping track of last point visited
	else if (currentState == EState::ES_Patrol)
	{
		lastPatrolPoint = patrolRoute[pos];
	}*/
	if (!hasFlag)
	{
		if (currentState != EState::ES_Chase)
		{
			currentState = EState::ES_Chase;
			stateObjects[(int)currentState]->StartState();
		}
	}
	if(hasFlag)
	{
		currentState = EState::ES_ReturnPatrol;
		stateObjects[(int)currentState]->StartState();
	}

	stateObjects[(int)currentState]->UpdateState(DeltaTime);
}

bool AStatePathfinder::checkDistance(FVector actorPos, FVector playerPos)
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

bool AStatePathfinder::checkDistanceChase(FVector actorPos, FVector playerPos)
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

bool AStatePathfinder::checkCone(FVector actorPos, FVector playerPos)
{
	//Check if player is in range first
	if (currentState == EState::ES_Patrol && !checkDistance(actorPos, playerPos))
	{
		return false;
	}
	else if (currentState == EState::ES_ReturnPatrol && !checkDistance(actorPos, playerPos))
	{
		return false;
	}
	else if (currentState == EState::ES_Chase && !checkDistanceChase(actorPos, playerPos))
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

TArray<FVector>& AStatePathfinder::GetPatrol()
{
	return patrolRoute;
}

FVector AStatePathfinder::GetLastPatrol()
{
	return lastPatrolPoint;
}

FVector AStatePathfinder::getBasePosition()
{
	return basePosition;
}
