#pragma once
#include "CoreMinimal.h"
#include "EItemType.generated.h"

UENUM(BlueprintType)
enum class EItemType : uint8 {
    General,
    PersonalKeyItem,
    PartyKeyItem,
};

