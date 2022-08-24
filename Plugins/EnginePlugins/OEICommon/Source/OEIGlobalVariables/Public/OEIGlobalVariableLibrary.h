#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "GlobalVariableReference.h"
#include "UObject/NoExportTypes.h"
#include "OEIGlobalVariableLibrary.generated.h"

UCLASS(Blueprintable)
class OEIGLOBALVARIABLES_API UOEIGlobalVariableLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UOEIGlobalVariableLibrary();
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FGlobalVariableReference MakeGlobalVariableReference(FGuid ID);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FGuid GetGlobalVariableID(const FGlobalVariableReference& Variable);
    
};

