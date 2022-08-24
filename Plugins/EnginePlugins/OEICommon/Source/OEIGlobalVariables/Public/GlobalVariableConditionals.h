#pragma once
#include "CoreMinimal.h"
#include "ConditionalLibrary.h"
#include "UObject/NoExportTypes.h"
#include "EComparisonOperator.h"
#include "GlobalVariableConditionals.generated.h"

UCLASS(Blueprintable)
class OEIGLOBALVARIABLES_API UGlobalVariableConditionals : public UConditionalLibrary {
    GENERATED_BODY()
public:
    UGlobalVariableConditionals();
    UFUNCTION(BlueprintCallable)
    static bool IsGlobalValue(FGuid Variable, EComparisonOperator Operator, int32 Value);
    
    UFUNCTION(BlueprintCallable)
    static bool CompareGlobals(FGuid Variable1, EComparisonOperator Operator, FGuid Variable2);
    
};

