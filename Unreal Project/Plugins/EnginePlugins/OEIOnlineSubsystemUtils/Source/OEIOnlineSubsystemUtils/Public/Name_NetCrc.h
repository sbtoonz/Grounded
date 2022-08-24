#pragma once
#include "CoreMinimal.h"
#include "Name_NetCrc.generated.h"

USTRUCT(BlueprintType)
struct OEIONLINESUBSYSTEMUTILS_API FName_NetCrc {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly)
    FName Name;
    
    FName_NetCrc();
};

