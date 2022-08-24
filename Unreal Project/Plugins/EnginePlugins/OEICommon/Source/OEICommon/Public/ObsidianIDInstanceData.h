#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ActorComponentInstanceData -FallbackName=ActorComponentInstanceData
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Guid -FallbackName=Guid
#include "ObsidianIDInstanceData.generated.h"

USTRUCT()
struct FObsidianIDInstanceData : public FActorComponentInstanceData {
    GENERATED_BODY()
public:
    UPROPERTY()
    FGuid ID;
    
    OEICOMMON_API FObsidianIDInstanceData();
};

