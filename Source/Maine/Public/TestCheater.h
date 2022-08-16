// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "BuildingPlacementComponent.h"
#include "GameFramework/Actor.h"
#include "TestCheater.generated.h"

UCLASS()
class MAINE_API ATestCheater : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ATestCheater();

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category= "Test Cheater Component")
		UBuildingPlacementComponent * BuildingPlacementComponent;
protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;
	bool staminaFlag;
	bool godMode;
	bool swimMode;
	
	void UnlockAll();
	void SetStam();
};
