#pragma once
#include "CoreMinimal.h"
#include "LocString.generated.h"

USTRUCT(BlueprintType)
struct OEITEXT_API FLocString {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 StringTableID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 StringID;
    
    UPROPERTY(BlueprintReadWrite)
    FName StringTableName;
    
    FLocString();
};

