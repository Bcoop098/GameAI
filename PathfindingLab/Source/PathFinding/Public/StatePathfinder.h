// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "PathFindingActor.h"
#include "StatePathfinder.generated.h"

UENUM(BlueprintType)
enum class EState : uint8
{
	ES_Patrol		UMETA(DisplayName = "Patrol"),
	ES_Chase		UMETA(DisplayName = "Chase"),
	ES_ReturnPatrol UMETA(DisplayName = "ReturnPartol")
};

UCLASS()
class PATHFINDING_API AStatePathfinder : public APathFindingActor
{
	GENERATED_BODY()
	
public:

	virtual void Tick(float DeltaTime) override;

	UFUNCTION(BlueprintCallable)
		bool checkDistance(FVector actorPos, FVector playerPos);

	UFUNCTION(BlueprintCallable)
		bool checkDistanceChase(FVector actorPos, FVector playerPos);

	UFUNCTION(BlueprintCallable)
		bool checkCone(FVector actorPos, FVector playerPos);

	UFUNCTION(BlueprintCallable)
		TArray<FVector>& GetPatrol();

	UFUNCTION(BlueprintCallable)
		FVector GetLastPatrol();

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		FVector targetOfPlayer;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		FVector flagPos;

	UFUNCTION(BlueprintCallable)
		FVector getBasePosition();

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		bool beenShotAt;
protected:

	virtual void BeginPlay() override;

	FVector Seperation();

	UFUNCTION(BlueprintCallable)
		FVector BulletAvoidance(FVector bulletPos);

	UPROPERTY()
		TArray<FVector> temp;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		float sepStrength = 900.0f;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		float avoidanceRadius = 115.0f;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		float bulletAvoidRadius = 500.0f;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		FVector Point1 = FVector(0.0, 0.0, 0.0);

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		FVector Point2 = FVector(2900.0, 0.0, 0.0);

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		FVector Point3 = FVector(2900.0, 2900.0, 0.0);

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		FVector Point4 = FVector(0.0, 2900.0, 0.0);

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<FVector> patrolRoute;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FVector lastPatrolPoint;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		FVector bulletPos;
	

	UPROPERTY()
	float escapeTime = 0.0;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		TArray<TSubclassOf<UStatePrimative>> statesForSeeker;

	UPROPERTY()
		TArray<UStatePrimative*> stateObjects;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		EState currentState;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		bool cone = false;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		bool rad = false;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		float detectionCone = 30.f;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		float distanceToDetect = 400.0f;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		float distanceToDetectChase = 800.0f;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		bool shouldShoot = false;

	
};
