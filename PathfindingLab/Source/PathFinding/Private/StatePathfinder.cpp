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


	

	stateObjects[(int)currentState]->StartState();
}

void AStatePathfinder::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	
	SteeringVelocity += (Seperation()*sepStrength * DeltaTime);
	if (beenShotAt)
	{
		SteeringVelocity += (BulletAvoidance(bulletPos)*sepStrength * .5f * DeltaTime);
	}

	if (checkDistanceChase(this->GetActorLocation(), targetOfPlayer))
	{
		if (checkCone(this->GetActorLocation(), targetOfPlayer))
		{
			shouldShoot = true;
		}
	}
	else
		shouldShoot = false;

	if (reset)
	{
		reset = false;
		currentState = EState::ES_Chase;
		stateObjects[(int)currentState]->StartState();
	}

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
		if(currentState != EState::ES_ReturnPatrol)
		{
			currentState = EState::ES_ReturnPatrol;
			stateObjects[(int)currentState]->StartState();
		}
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

FVector AStatePathfinder::Seperation()
{
	FVector avoidVect = FVector(0, 0, 0);
	FVector temp = FVector(0, 0, 0);
	int separationCount = 0;

	for (int i = 0; i < pathBuilder->Walls.Num(); i++)
	{
		/*if (AllSteeringActors[i] == this)
			continue;*/

		temp = Position - pathBuilder->Walls[i];
		if (temp.Size() <= avoidanceRadius)
		{
			avoidVect += GetPathBuilder()->Walls[i] - this->Position;
			separationCount++;
		}
	}
	if (separationCount != 0)
	{
		avoidVect /= separationCount;
		avoidVect *= -1.f;
	}

	avoidVect.Z = 0.0f;
	return avoidVect.GetSafeNormal();
}

FVector AStatePathfinder::BulletAvoidance(FVector bulletPos)
{
	FVector avoidVect = FVector(0, 0, 0);
	FVector temp = FVector(0, 0, 0);
	int separationCount = 0;

	
	temp = Position - bulletPos;
	if (temp.Size() <= bulletAvoidRadius)
	{
		avoidVect += bulletPos - this->Position;
		separationCount++;
	}

	if (separationCount != 0)
	{
		avoidVect /= separationCount;
		avoidVect *= -1.f;
	}

	avoidVect.Z = 0.0f;
	return avoidVect.GetSafeNormal();
}
