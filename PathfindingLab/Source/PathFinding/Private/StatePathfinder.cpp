// Fill out your copyright notice in the Description page of Project Settings.


#include "StatePathfinder.h"
#include "MyPathBuilderActor.h"

void AStatePathfinder::BeginPlay()
{
	Super::BeginPlay();

	for (int i = 0; i < statesForSeeker.Num(); ++i)
	{
		UStatePrimative* ptr = NewObject<UStatePrimative>(this, statesForSeeker[i].Get());
		ptr->Init(this);
		stateObjects.Add(ptr);
	}

	currentState = EState::ES_Patrol;

	TArray<FVector> temp = pathBuilder->getPath(Point1, (FVector2D)Point2);
	patrolRoute.Append(temp);
	temp.Reset();

	temp = pathBuilder->getPath(Point2, (FVector2D)Point3);
	patrolRoute.Append(temp);
	temp.Reset();

	temp = pathBuilder->getPath(Point3, (FVector2D)Point4);
	patrolRoute.Append(temp);
	temp.Reset();

	temp = pathBuilder->getPath(Point4, (FVector2D)Point1);
	patrolRoute.Append(temp);
	temp.Reset();
}

void AStatePathfinder::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	if (checkCone(this->GetActorLocation(), TargetPos))
	{
		currentState = EState::ES_Chase;
		stateObjects[(int)currentState]->StartState();
	}

	
	/*else if(escapeTime >= 4)
	{
		currentState = statesForSeeker[ReturnPatrol];
		statesForSeeker[0].GetDefaultObject()->Start(ThisClass());
	}
	float distance = (Position - PatrolStart).Size(); //determines how close the actor is to the start of patrol
	
	else if(distance <= 100.0f && currentState = statesForSeeker[ReturnPatrol])
	{
		currentState = statesForSeeker[Patrol];
		statesForSeeker[0].GetDefaultObject()->Start(ThisClass());
	}*/
	

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
