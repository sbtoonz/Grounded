#pragma once
#include "CoreMinimal.h"
#include "EServerType.generated.h"

UENUM()
enum class EServerType {
    pfenum_Container,
    pfenum_Process,
    pfenum_MAX UMETA(Hidden),
};

