#pragma once
#include "CoreMinimal.h"
#include "LocString.h"
#include "LocStringTokenValue.h"
#include "TokenizedLocString.generated.h"

USTRUCT(BlueprintType)
struct OEITEXT_API FTokenizedLocString {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLocString BaseString;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FLocStringTokenValue> Tokens;
    
    FTokenizedLocString();
};

