#pragma once
#include "CoreMinimal.h"
#include "ScriptLibrary.h"
#include "UObject/NoExportTypes.h"
#include "ScriptLibraryScripting.generated.h"

UCLASS(Blueprintable)
class OEISCRIPTING_API UScriptLibraryScripting : public UScriptLibrary {
    GENERATED_BODY()
public:
    UScriptLibraryScripting();
    UFUNCTION(BlueprintCallable)
    static void DebugPrintMessage(const FString& Message);
    
    UFUNCTION(BlueprintCallable)
    static void CallGlobalScript(FGuid GlobalScriptID);
    
    UFUNCTION(BlueprintCallable)
    static void AddDataAssetHardRef(const FString& DataAsset);
    
    UFUNCTION(BlueprintCallable)
    static void AddClassHardRef(const FString& Class);
    
};

