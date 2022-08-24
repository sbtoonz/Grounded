#pragma once
#include "CoreMinimal.h"
#include "ConditionalLibrary.h"
#include "UObject/NoExportTypes.h"
#include "ConditionalLibraryScripting.generated.h"

UCLASS(Blueprintable)
class OEISCRIPTING_API UConditionalLibraryScripting : public UConditionalLibrary {
    GENERATED_BODY()
public:
    UConditionalLibraryScripting();
    UFUNCTION(BlueprintCallable)
    static bool CallGlobalConditional(FGuid GlobalScriptID);
    
    UFUNCTION(BlueprintCallable)
    static bool AlwaysTrue();
    
    UFUNCTION(BlueprintCallable)
    static bool AlwaysFalse();
    
};

