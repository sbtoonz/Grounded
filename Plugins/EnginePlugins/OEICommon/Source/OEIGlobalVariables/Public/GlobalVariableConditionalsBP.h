#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "EBoolResult.h"
#include "UObject/NoExportTypes.h"
#include "EComparisonOperator.h"
#include "GlobalVariableConditionalsBP.generated.h"

UCLASS(Blueprintable)
class OEIGLOBALVARIABLES_API UGlobalVariableConditionalsBP : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UGlobalVariableConditionalsBP();
    UFUNCTION(BlueprintCallable)
    static bool IsGlobalValue(FGuid Variable, EComparisonOperator Operator, int32 Value, EBoolResult& OutResult);
    
    UFUNCTION(BlueprintCallable)
    static bool CompareGlobals(FGuid Variable1, EComparisonOperator Operator, FGuid Variable2, EBoolResult& OutResult);
    
};

