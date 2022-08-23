#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Guid -FallbackName=Guid
#include "GuidSet.generated.h"

USTRUCT()
struct OEICOMMON_API FGuidSet {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    TSet<FGuid> IDs;
    
    FGuidSet();
};

