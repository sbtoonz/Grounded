#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ActorComponent -FallbackName=ActorComponent
#include "PersistentInterface.h"
#include "OnGameModeChangedDelegateDelegate.h"
#include "EGameMode.h"
#include "CustomGameModeSettings.h"
#include "EGameDifficulty.h"
#include "SurvivalModeManagerComponent.generated.h"

class USurvivalGameModeSettings;

UCLASS(BlueprintType, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class MAINE_API USurvivalModeManagerComponent : public UActorComponent, public IPersistentInterface {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable)
    FOnGameModeChangedDelegate OnGameModeChanged;
    
protected:
    UPROPERTY(Transient, ReplicatedUsing=OnRep_CurrentGameMode)
    EGameMode CurrentGameMode;
    
    UPROPERTY(Transient, ReplicatedUsing=OnRep_CurrentGameMode)
    FCustomGameModeSettings CustomSettings;
    
    UPROPERTY(Transient)
    USurvivalGameModeSettings* GameModeSettings;
    
public:
    USurvivalModeManagerComponent();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
    UFUNCTION(BlueprintCallable)
    void UpdateDifficulty(EGameDifficulty GameDifficulty);
    
    UFUNCTION(BlueprintCallable)
    void UpdateCustomSettings(FCustomGameModeSettings SelectedCustomSettings);
    
    UFUNCTION(BlueprintCallable)
    void SwapToCustom();
    
    UFUNCTION(BlueprintPure)
    bool ShouldEnableBuildingIntegrity() const;
    
    UFUNCTION(BlueprintPure)
    bool ShouldAutoCompleteBuildings() const;
    
    UFUNCTION(Exec)
    void SetGameMode(EGameMode SelectedGameMode);
    
protected:
    UFUNCTION()
    void OnRep_CurrentGameMode();
    
public:
    UFUNCTION(BlueprintPure)
    USurvivalGameModeSettings* GetGameModeSettings() const;
    
    UFUNCTION(BlueprintPure)
    EGameMode GetGameMode() const;
    
    UFUNCTION(BlueprintPure)
    FCustomGameModeSettings GetCustomGameSettings() const;
    
    UFUNCTION(BlueprintPure)
    bool DoRecipesRequireIngredients() const;
    
    UFUNCTION(BlueprintPure)
    bool AreQuestsEnabled() const;
    
    UFUNCTION(BlueprintPure)
    bool AreAllRecipesUnlocked() const;
    
    
    // Fix for true pure virtual functions not being implemented
};

