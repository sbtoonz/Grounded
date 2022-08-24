#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "GlobalScriptReference.generated.h"

USTRUCT(BlueprintType)
struct OEISCRIPTING_API FGlobalScriptReference {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGuid ID;
    
public:
    FGlobalScriptReference();
};

