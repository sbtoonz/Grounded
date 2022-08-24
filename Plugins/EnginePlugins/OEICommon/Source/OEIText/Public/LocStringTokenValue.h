#pragma once
#include "CoreMinimal.h"
#include "EStringTokenValueType.h"
#include "LocString.h"
#include "LocStringTokenValue.generated.h"

USTRUCT(BlueprintType)
struct OEITEXT_API FLocStringTokenValue {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString TokenName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EStringTokenValueType TokenType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLocString AsLocString;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 AsInteger;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AsFloat;
    
    FLocStringTokenValue();
};

