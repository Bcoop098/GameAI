// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "SteeringActor.generated.h"

UCLASS()
class PATHFINDING_API ASteeringActor : public AActor
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

	UFUNCTION(BlueprintCallable)
	bool checkDistance(FVector actorPos, FVector playerPos);

	UFUNCTION(BlueprintCallable)
	bool checkDistanceChase(FVector actorPos, FVector playerPos);

	UFUNCTION(BlueprintCallable)
	bool checkCone(FVector actorPos, FVector playerPos);


protected:

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		bool cone = false;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		bool rad = false;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float detectionCone = 120.0f;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float distanceToDetect = 400.0f;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float distanceToDetectChase = 800.0f;

	FVector Seek();

	FVector Position = FVector(0,0,0);

	UPROPERTY(BlueprintReadOnly)
	FVector SteeringVelocity = FVector(0,0,0);


	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Steering")
	float MaxSpeed = 700.0f;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Steering")
	float DragForce = -0.8f; 

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Steering")
	float SeekStrength = 900.0f;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Steering")
	float SeekDecelerationDistance = 1200.0f;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FVector TargetPos = FVector(0, 0, 0);


};
