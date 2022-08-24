#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "GlobalConditionalReference.h"
#include "UObject/NoExportTypes.h"
#include "ConditionalLibrary.generated.h"

UCLASS(Blueprintable)
class OEISCRIPTING_API UConditionalLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UConditionalLibrary();
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FGlobalConditionalReference MakeGlobalConditionalReference(FGuid ID);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FGuid GetGlobalConditionalID(const FGlobalConditionalReference& GlobalConditional);
    
};

