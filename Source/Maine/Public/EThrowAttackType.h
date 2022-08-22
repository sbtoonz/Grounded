#pragma once
#include "CoreMinimal.h"
#include "EThrowAttackType.generated.h"

UENUM(BlueprintType)
enum class EThrowAttackType : uint8 {
    None,
    Impact,
    Time,
};

