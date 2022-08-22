#pragma once
#include "CoreMinimal.h"
#include "EVisualEffectMeshType.generated.h"

UENUM(BlueprintType)
enum class EVisualEffectMeshType : uint8 {
    None,
    Character,
    MainHand,
    OffHand,
    MeshTag,
};

