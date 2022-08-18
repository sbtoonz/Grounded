#pragma once
#include "CoreMinimal.h"
#include "ESpawnIntervalBehavior.h"
#include "ItemSpawnGroupEvent.h"
#include "UObject/Object.h"
// #include "GlobalVariableReference.h"
#include "ESpawnProximityBehavior.h"
// #include "EComparisonOperator.h"
#include "ItemSpawnGroupData.generated.h"

class UTexture2D;

UCLASS(BlueprintType)
class MAINE_API UItemSpawnGroupData : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    UTexture2D* BillboardSprite;
    
    UPROPERTY(EditDefaultsOnly)
    TArray<FItemSpawnGroupEvent> Events;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    bool NeverReuseSpawnPoints;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    ESpawnProximityBehavior PlayerProximityBehavior;
    
    UPROPERTY(EditAnywhere)
    bool RaycastSoftSpawns;
    
    // UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    // FGlobalVariableReference SpawnGlobalVariable;
    
    // UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    // EComparisonOperator GlobalVariableComparisonOperator;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    int32 GlobalVariableCompareValue;
    
    UPROPERTY(EditAnywhere)
    bool ForceDespawnOnConditionNotMet;
    
    UPROPERTY(EditAnywhere)
    float PlayerSpawnDistance;
    
    UPROPERTY(EditAnywhere)
    float SpawnEvaluateInterval;
    
    UPROPERTY(EditAnywhere)
    float PlayerDistanceCheckInterval;
    
    UItemSpawnGroupData();
    UFUNCTION(BlueprintPure)
    bool HasGlobalVariableCondition() const;
    
    UFUNCTION(BlueprintPure)
    bool HasEventInterval(ESpawnIntervalBehavior Event) const;
    
};

