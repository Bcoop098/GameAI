// Fill out your copyright notice in the Description page of Project Settings.


#include "MyPawn.h"

// Sets default values
AMyPawn::AMyPawn()
{
 	// Set this pawn to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AMyPawn::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AMyPawn::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	velocity = Wander();
	position = GetActorLocation();
	position += (velocity * speed) * DeltaTime;
	SetActorLocation(position);

	

}

// Called to bind functionality to input
void AMyPawn::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

FVector AMyPawn::Seek()
{
	FVector dir = targetPos - position;
	return dir.GetSafeNormal();
}

FVector AMyPawn::Flee()
{
	FVector dir = position - targetPos;
	return dir.GetSafeNormal();
}

FVector AMyPawn::Wander()
{
	FVector randomVec = FVector(FMath::RandRange(-1.0f, 1.0f), FMath::RandRange(-1.0f, 1.0f),0.0f);
	randomVec = randomVec.GetSafeNormal();
	randomVec *= wanderSize;
	return (velocity + randomVec).GetSafeNormal();
}

