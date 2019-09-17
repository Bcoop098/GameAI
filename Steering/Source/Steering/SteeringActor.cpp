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
	Velocity += Seperation();

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

	for (int i = 0; i < AllSteeringActors.Num(); i++)
	{
		if (AllSteeringActors[i] == this)
			continue;

		temp = Position - AllSteeringActors[i]->Position;
		if (temp.Size() <= radius)
		{
			avoidVect += temp.GetSafeNormal();
		}
	}

	return avoidVect.GetSafeNormal();
}

FVector	ASteeringActor::Alignment()
{
	FVector alignVect = FVector(0, 0, 0);
	FVector temp = FVector(0, 0, 0);

	for (int i = 0; i < AllSteeringActors.Num(); i++)
	{
		if (AllSteeringActors[i] == this)
			continue;

		temp = Position - AllSteeringActors[i]->Position;
		if (temp.Size() <= radius)
		{

		}
	}

	return alignVect;
}

FVector ASteeringActor::Cohesion()
{
	FVector cohesVect = FVector(0, 0, 0);
	FVector temp = FVector(0, 0, 0);

	for (int i = 0; i < AllSteeringActors.Num(); i++)
	{
		if (AllSteeringActors[i] == this)
			continue;

		temp = Position - AllSteeringActors[i]->Position;
		if (temp.Size() <= radius)
		{

		}
	}

	return cohesVect;
}