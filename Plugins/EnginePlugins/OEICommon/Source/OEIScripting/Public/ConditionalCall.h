#pragma once
#include "CoreMinimal.h"
#include "ExpressionComponent.h"
#include "ConditionalCall.generated.h"

USTRUCT(BlueprintType)
struct OEISCRIPTING_API FConditionalCall : public FExpressionComponent {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bNot;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Library;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString ScriptCall;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString FullName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Flags;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FString> Parameters;
    
    UPROPERTY(EditAnywhere)
    uint32 FunctionHash;
    
    UPROPERTY(EditAnywhere)
    uint32 ParamHash;
    
public:
    FConditionalCall();
};

