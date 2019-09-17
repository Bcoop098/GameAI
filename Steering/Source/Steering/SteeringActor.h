// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "SteeringActor.generated.h"

UCLASS()
class STEERING_API ASteeringActor : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ASteeringActor();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

protected:

	FVector Seek();

	FVector Seperation();
	FVector Alignment();
	FVector Cohesion();

	FVector Position = FVector(0,0,0);
	FVector Velocity = FVector(0,0,0);

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float radius = 200.0f;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float MaxSpeed = 100.0f;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FVector TargetPos = FVector(0, 0, 0);

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<ASteeringActor*> AllSteeringActors;
};
