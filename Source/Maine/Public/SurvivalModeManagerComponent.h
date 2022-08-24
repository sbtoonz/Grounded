#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "PersistentInterface.h"
#include "CustomGameModeSettings.h"
#include "EGameMode.h"
#include "OnGameModeChangedDelegateDelegate.h"
#include "EGameDifficulty.h"
#include "SurvivalModeManagerComponent.generated.h"

class USurvivalGameModeSettings;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class MAINE_API USurvivalModeManagerComponent : public UActorComponent, public IPersistentInterface {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnGameModeChangedDelegate OnGameModeChanged;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_CurrentGameMode, meta=(AllowPrivateAccess=true))
    EGameMode CurrentGameMode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_CurrentGameMode, meta=(AllowPrivateAccess=true))
    FCustomGameModeSettings CustomSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
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
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool ShouldEnableBuildingIntegrity() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool ShouldAutoCompleteBuildings() const;
    
    UFUNCTION(BlueprintCallable, Exec)
    void SetGameMode(EGameMode SelectedGameMode);
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnRep_CurrentGameMode();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    USurvivalGameModeSettings* GetGameModeSettings() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EGameMode GetGameMode() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FCustomGameModeSettings GetCustomGameSettings() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool DoRecipesRequireIngredients() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool AreQuestsEnabled() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool AreAllRecipesUnlocked() const;
    
    
    // Fix for true pure virtual functions not being implemented
};

