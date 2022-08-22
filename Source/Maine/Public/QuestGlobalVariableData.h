#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=OEIGlobalVariables -ObjectName=GlobalVariableReference -FallbackName=GlobalVariableReference
//CROSS-MODULE INCLUDE V2: -ModuleName=OEICommon -ObjectName=EComparisonOperator -FallbackName=EComparisonOperator
#include "QuestGlobalVariableData.generated.h"

USTRUCT(BlueprintType)
struct FQuestGlobalVariableData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    FGlobalVariableReference TriggerStartGlobal;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    EComparisonOperator TriggerStartGlobalComparisonOperator;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    int32 TriggerStartGlobalValue;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    FGlobalVariableReference TriggerCompleteGlobal;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    EComparisonOperator TriggerCompleteGlobalComparisonOperator;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    int32 TriggerCompleteGlobalValue;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    FGlobalVariableReference OnStartGlobalVariable;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    int32 OnStartGlobalVariableValue;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    FGlobalVariableReference OnCompleteGlobalVariable;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    int32 OnCompleteGlobalVariableValue;
    
    MAINE_API FQuestGlobalVariableData();
};

