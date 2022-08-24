#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "EGlobalScriptType.h"
#include "GlobalScriptBase.generated.h"

USTRUCT(BlueprintType)
struct FGlobalScriptBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Name;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGuid ID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EGlobalScriptType ScriptType;
    
public:
    OEISCRIPTING_API FGlobalScriptBase();
};

