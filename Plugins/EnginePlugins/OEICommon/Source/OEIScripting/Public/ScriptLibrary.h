#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "GlobalScriptReference.h"
#include "UObject/NoExportTypes.h"
#include "ScriptLibrary.generated.h"

UCLASS(Blueprintable)
class OEISCRIPTING_API UScriptLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UScriptLibrary();
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FGlobalScriptReference MakeGlobalScriptReference(FGuid ID);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FGuid GetGlobalScriptID(const FGlobalScriptReference& GlobalScript);
    
};

