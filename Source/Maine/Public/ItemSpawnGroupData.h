#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "ESpawnIntervalBehavior.h"
#include "ItemSpawnGroupEvent.h"
#include "EComparisonOperator.h"
#include "GlobalVariableReference.h"
#include "ESpawnProximityBehavior.h"
#include "ItemSpawnGroupData.generated.h"

class UTexture2D;

UCLASS(Blueprintable)
class MAINE_API UItemSpawnGroupData : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTexture2D* BillboardSprite;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FItemSpawnGroupEvent> Events;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool NeverReuseSpawnPoints;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESpawnProximityBehavior PlayerProximityBehavior;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool RaycastSoftSpawns;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGlobalVariableReference SpawnGlobalVariable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EComparisonOperator GlobalVariableComparisonOperator;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 GlobalVariableCompareValue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool ForceDespawnOnConditionNotMet;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PlayerSpawnDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SpawnEvaluateInterval;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PlayerDistanceCheckInterval;
    
    UItemSpawnGroupData();
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasGlobalVariableCondition() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasEventInterval(ESpawnIntervalBehavior Event) const;
    
};

