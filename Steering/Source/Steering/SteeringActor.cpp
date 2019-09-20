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
}

// Called every frame
void ASteeringActor::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	// steering
	Velocity = FVector(0, 0, 0);
	Velocity += Seek();
	Velocity += Seperation()*0.5;
	Velocity += Alignment()*0.3;
	Velocity += Cohesion()*0.3;

	// movement
	Position += (Velocity * MaxSpeed * DeltaTime);
	SetActorLocation(Position);

	// orientation 
	FRotator PlayerRot = UKismetMathLibrary::FindLookAtRotation(Position, Position + Velocity);
	SetActorRotation(PlayerRot);
}

FVector ASteeringActor::Seek()
{
	FVector dir = TargetPos - Position;
	float distance = dir.Size();
	dir.Normalize();

	const float maxSpeedDistance = 500.0f;
	float speedRatio = FMath::Clamp(distance / maxSpeedDistance, 0.0f, 1.0f);

	return dir * speedRatio;
}

FVector ASteeringActor::Seperation()
{
	FVector avoidVect = FVector (0, 0, 0);
	FVector temp = FVector (0, 0, 0);
	int separationCount = 0;

	for (int i = 0; i < AllSteeringActors.Num(); i++)
	{
		if (AllSteeringActors[i] == this)
			continue;

		temp = Position - AllSteeringActors[i]->Position;
		if (temp.Size() <= radius)
		{
			avoidVect += AllSteeringActors[i]->Position - this->Position;
			separationCount++;
		}
	}
	if (separationCount != 0)
	{
		avoidVect /= separationCount;
		avoidVect *= -1.f;
	}

	return avoidVect.GetSafeNormal();
}

FVector	ASteeringActor::Alignment()
{
	FVector alignVect = FVector(0, 0, 0);
	FVector temp = FVector(0, 0, 0);
	int neighborCount = 0;

	for (int i = 0; i < AllSteeringActors.Num(); i++)
	{
		if (AllSteeringActors[i] == this)
			continue;

		temp = Position - AllSteeringActors[i]->Position;
		if (temp.Size() <= radius)
		{
			alignVect += AllSteeringActors[i]->Velocity;
			neighborCount++;
		}
	}
	if (neighborCount != 0)
	{
		alignVect /= neighborCount;
	}
	return alignVect.GetSafeNormal();
}

FVector ASteeringActor::Cohesion()
{
	FVector cohesVect = FVector(0, 0, 0);
	FVector temp = FVector(0, 0, 0);
	int cohesionCount = 0;

	for (int i = 0; i < AllSteeringActors.Num(); i++)
	{
		if (AllSteeringActors[i] == this)
			continue;

		temp = Position - AllSteeringActors[i]->Position;
		if (temp.Size() <= radius)
		{
			cohesVect += AllSteeringActors[i]->Position;
			cohesionCount++;
		}
	}
	if (cohesionCount != 0)
	{
		cohesVect /= cohesionCount;
		cohesVect -= this->Position;
	}

	return cohesVect.GetSafeNormal();
}