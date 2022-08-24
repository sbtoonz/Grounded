#pragma once
#include "CoreMinimal.h"
#include "ComponentInstanceDataCache.h"
#include "UObject/NoExportTypes.h"
#include "ObsidianIDInstanceData.generated.h"

USTRUCT(BlueprintType)
struct FObsidianIDInstanceData : public FActorComponentInstanceData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGuid ID;
    
    OEICOMMON_API FObsidianIDInstanceData();
};

