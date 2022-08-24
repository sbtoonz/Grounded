#pragma once
#include "CoreMinimal.h"
#include "EComparisonOperator.h"
#include "GlobalVariableReference.h"
#include "WaveSpawn.generated.h"

class ASurvivalCharacter;

USTRUCT(BlueprintType)
struct FWaveSpawn {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<ASurvivalCharacter> ActorToSpawn;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 SpawnWeight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGlobalVariableReference GlobalVariable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EComparisonOperator GlobalVariableComparisonOperator;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 GlobalVariableCompareValue;
    
    MAINE_API FWaveSpawn();
};

