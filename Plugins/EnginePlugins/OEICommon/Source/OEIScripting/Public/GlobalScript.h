#pragma once
#include "CoreMinimal.h"
#include "GlobalScriptBase.h"
#include "ScriptCall.h"
#include "GlobalScript.generated.h"

USTRUCT(BlueprintType)
struct FGlobalScript : public FGlobalScriptBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FScriptCall> ScriptCalls;
    
public:
    OEISCRIPTING_API FGlobalScript();
};

