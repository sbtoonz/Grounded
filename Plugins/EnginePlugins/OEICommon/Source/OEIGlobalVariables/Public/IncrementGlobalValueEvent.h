#pragma once
#include "CoreMinimal.h"
#include "ScriptEvent.h"
#include "GlobalVariableReference.h"
#include "IncrementGlobalValueEvent.generated.h"

UCLASS(Blueprintable, CollapseCategories, EditInlineNew)
class OEIGLOBALVARIABLES_API UIncrementGlobalValueEvent : public UScriptEvent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGlobalVariableReference GlobalVariable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 IncrementValue;
    
    UIncrementGlobalValueEvent();
};

