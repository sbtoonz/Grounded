#pragma once
#include "CoreMinimal.h"
#include "GlobalScriptBase.h"
#include "Conditional.h"
#include "GlobalConditional.generated.h"

USTRUCT(BlueprintType)
struct FGlobalConditional : public FGlobalScriptBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FConditional Conditional;
    
public:
    OEISCRIPTING_API FGlobalConditional();
};

