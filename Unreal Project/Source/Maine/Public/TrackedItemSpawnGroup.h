#pragma once
#include "CoreMinimal.h"
#include "PersistentInterface.h"
#include "UObject/Object.h"
#include "UObject/NoExportTypes.h"
#include "ItemSpawnGroup.h"
#include "TrackedSpawnsChangedDelegate.h"
#include "ItemSpawnPointData.h"
#include "ItemSpawnGroupEvent.h"
#include "TrackedItemSpawnGroup.generated.h"

class AActor;
class UItemSpawnGroupData;

UCLASS(BlueprintType)
class MAINE_API UTrackedItemSpawnGroup : public UObject, public IPersistentInterface {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly)
    AActor* Owner;
    
    UPROPERTY(BlueprintReadOnly)
    UItemSpawnGroupData* ItemSpawnGroupData;
    
    UPROPERTY(BlueprintReadOnly)
    FItemSpawnGroup SpawnPoints;
    
    UPROPERTY(BlueprintAssignable)
    FTrackedSpawnsChanged OnTrackedSpawnsChanged;
    
    UTrackedItemSpawnGroup();
    UFUNCTION()
    void OnRest(float RestDuration);
    
    UFUNCTION()
    void OnGlobalVariableChangedEvent(const FGuid& GlobalVariableID, int32 VariableValue, AActor* Instigator);
    
    UFUNCTION(BlueprintPure)
    TArray<FItemSpawnPointData> GetSpawnPointsToAffect(const FItemSpawnGroupEvent& Event) const;
    
    UFUNCTION(BlueprintPure)
    TArray<FItemSpawnPointData> GetAllSpawnPoints() const;
    
    
    // Fix for true pure virtual functions not being implemented
};

