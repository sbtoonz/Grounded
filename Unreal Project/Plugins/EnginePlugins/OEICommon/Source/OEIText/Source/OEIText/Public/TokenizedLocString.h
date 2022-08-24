#pragma once
#include "CoreMinimal.h"
#include "LocString.h"
#include "LocStringTokenValue.h"
#include "TokenizedLocString.generated.h"

USTRUCT(BlueprintType)
struct OEITEXT_API FTokenizedLocString {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FLocString BaseString;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<FLocStringTokenValue> Tokens;
    
    FTokenizedLocString();
};

