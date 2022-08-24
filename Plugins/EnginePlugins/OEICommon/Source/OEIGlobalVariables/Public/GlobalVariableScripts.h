#pragma once
#include "CoreMinimal.h"
#include "ScriptLibrary.h"
#include "UObject/NoExportTypes.h"
#include "GlobalVariableScripts.generated.h"

class AActor;

UCLASS(Blueprintable)
class OEIGLOBALVARIABLES_API UGlobalVariableScripts : public UScriptLibrary {
    GENERATED_BODY()
public:
    UGlobalVariableScripts();
    UFUNCTION(BlueprintCallable)
    static void SetGlobalValue(FGuid Variable, int32 Value, AActor* Instigator);
    
    UFUNCTION(BlueprintCallable)
    static void SetGlobalIfGlobal(FGuid ConditionVariable, int32 ConditionValue, FGuid Variable, int32 Value, AActor* Instigator);
    
    UFUNCTION(BlueprintCallable)
    static void RandomizeGlobalValueWithGlobals(FGuid Variable, FGuid MinValueGlobal, FGuid MaxValueGlobal, AActor* Instigator);
    
    UFUNCTION(BlueprintCallable)
    static void RandomizeGlobalValue(FGuid Variable, int32 MinValue, int32 MaxValue, AActor* Instigator);
    
    UFUNCTION(BlueprintCallable)
    static void IncrementGlobalValue(FGuid Variable, int32 IncrementValue, AActor* Instigator);
    
};

