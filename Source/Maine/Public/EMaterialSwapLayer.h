#pragma once
#include "CoreMinimal.h"
#include "EMaterialSwapLayer.generated.h"

UENUM()
enum class EMaterialSwapLayer : uint8 {
    Asset,
    Component,
    Dynamic,
    PhobiaController,
    Building,
};

