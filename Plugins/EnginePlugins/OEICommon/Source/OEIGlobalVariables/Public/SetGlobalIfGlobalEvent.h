#pragma once
#include "CoreMinimal.h"
#include "ScriptEvent.h"
#include "GlobalVariableReference.h"
#include "SetGlobalIfGlobalEvent.generated.h"

UCLASS(Blueprintable, CollapseCategories, EditInlineNew)
class OEIGLOBALVARIABLES_API USetGlobalIfGlobalEvent : public UScriptEvent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGlobalVariableReference GlobalVariable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 VariableValue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGlobalVariableReference ConditionalGlobalVariable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ConditionalValue;
    
    USetGlobalIfGlobalEvent();
};

