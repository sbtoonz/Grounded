#pragma once
#include "CoreMinimal.h"
#include "EStringTokenValueType.h"
#include "LocString.h"
#include "LocStringTokenValue.generated.h"

USTRUCT(BlueprintType)
struct OEITEXT_API FLocStringTokenValue {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FString TokenName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    EStringTokenValueType TokenType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FLocString AsLocString;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 AsInteger;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float AsFloat;
    
    FLocStringTokenValue();
};

