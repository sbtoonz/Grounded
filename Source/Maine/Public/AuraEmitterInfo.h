#pragma once
#include "CoreMinimal.h"
#include "AuraInfoBase.h"
#include "AuraEmitterInfo.generated.h"

class UAuraEmitterComponent;

USTRUCT(BlueprintType)
struct FAuraEmitterInfo : public FAuraInfoBase {
    GENERATED_BODY()
public:
    UPROPERTY(Export)
    UAuraEmitterComponent* Emitter;
    
    UPROPERTY()
    float RadiusSq;
    
    MAINE_API FAuraEmitterInfo();
};

