#pragma once
#include "CoreMinimal.h"
#include "ScriptCall.generated.h"

USTRUCT(BlueprintType)
struct OEISCRIPTING_API FScriptCall {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Library;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Script;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Flags;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FString> Parameters;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ConditionalIndex;
    
    UPROPERTY(EditAnywhere)
    uint32 FunctionHash;
    
    UPROPERTY(EditAnywhere)
    uint32 ParamHash;
    
public:
    FScriptCall();
};

