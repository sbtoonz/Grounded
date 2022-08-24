#pragma once
#include "CoreMinimal.h"
#include "LocString.generated.h"

USTRUCT(BlueprintType)
struct OEITEXT_API FLocString {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 StringTableID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 StringID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName StringTableName;
    
    FLocString();
};

