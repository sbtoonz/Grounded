#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=OEIGlobalVariables -ObjectName=GlobalVariableReference -FallbackName=GlobalVariableReference
//CROSS-MODULE INCLUDE V2: -ModuleName=OEICommon -ObjectName=EComparisonOperator -FallbackName=EComparisonOperator
#include "WaveSpawn.generated.h"

class ASurvivalCharacter;

USTRUCT(BlueprintType)
struct FWaveSpawn {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    TSoftClassPtr<ASurvivalCharacter> ActorToSpawn;
    
    UPROPERTY(EditDefaultsOnly)
    int32 SpawnWeight;
    
    UPROPERTY(EditDefaultsOnly)
    FGlobalVariableReference GlobalVariable;
    
    UPROPERTY(EditDefaultsOnly)
    EComparisonOperator GlobalVariableComparisonOperator;
    
    UPROPERTY(EditDefaultsOnly)
    int32 GlobalVariableCompareValue;
    
    MAINE_API FWaveSpawn();
};

