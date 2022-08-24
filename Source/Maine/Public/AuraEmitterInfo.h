#pragma once
#include "CoreMinimal.h"
#include "AuraInfoBase.h"
#include "AuraEmitterInfo.generated.h"

class UAuraEmitterComponent;

USTRUCT(BlueprintType)
struct FAuraEmitterInfo : public FAuraInfoBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UAuraEmitterComponent* Emitter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float RadiusSq;
    
    MAINE_API FAuraEmitterInfo();
};

