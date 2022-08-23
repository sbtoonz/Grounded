#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Guid -FallbackName=Guid
#include "GuidIntPair.generated.h"

USTRUCT()
struct OEICOMMON_API FGuidIntPair {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FGuid Item1;
    
    UPROPERTY(EditAnywhere)
    int32 Item2;
    
    FGuidIntPair();
};

