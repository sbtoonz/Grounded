// Fill out your copyright notice in the Description page of Project Settings.


#include "TestCheater.h"
#include "SurvivalCheatManager.h"
#include "SurvivalPlayerCharacter.h"
#include "SurvivalCharacter.h"

// Sets default values
ATestCheater::ATestCheater()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void ATestCheater::BeginPlay()
{
	Super::BeginPlay();	
}

// Called every frame
void ATestCheater::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	ASurvivalPlayerCharacter Character = {
	};
	if(Character.StaminaComponent == nullptr) return;
	if(staminaFlag)
	{
		SetStam();
	}
}


void ATestCheater::UnlockAll()
{
	USurvivalCheatManager CheatManager;
	CheatManager.UnlockAllPerks();
	CheatManager.UnlockAllRecipes(RecipeUnlockMode::IncludeHidden);
	CheatManager.UnlockAllColorThemes();
	CheatManager.UnlockAllKeyItems();
	CheatManager.UnlockAllTechTrees();
	CheatManager.UnlockAllPOIs();
	CheatManager.UnlockAllTechTreeRecipes();
	
}


void ATestCheater::SetStam()
{
	UStaminaComponent StaminaComponent;
	ASurvivalPlayerCharacter PlayerCharacter = {
	};
	PlayerCharacter.StaminaComponent->CurrentStamina = 100;
	PlayerCharacter.StaminaComponent->RegenRate = 1000;
}


