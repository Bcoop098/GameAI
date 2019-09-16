// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Pawn.h"
#include "MyPawn.generated.h"

UCLASS()
class GAMEAI_API AMyPawn : public APawn
{
	GENERATED_BODY()

public:
	// Sets default values for this pawn's properties
	AMyPawn();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;
	
	FVector Seek();
	FVector Flee();
	FVector Wander();

	UPROPERTY(EditAnywhere,BlueprintReadWrite)
	float speed = 10.0f;

	FVector velocity = FVector(2.5f,2.5f,0.0f);
	FVector position;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FVector targetPos = FVector(5.0f,0.0f,1.0f);

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float wanderSize = 0.5f;

};
