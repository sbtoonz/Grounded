#pragma once
#include "CoreMinimal.h"
#include "EEffectorSpaceEnum.generated.h"

UENUM(BlueprintType)
enum EEffectorSpaceEnum {
    ES_Additive,
    ES_World,
    ES_Component,
    ES_MAX UMETA(Hidden),
};

