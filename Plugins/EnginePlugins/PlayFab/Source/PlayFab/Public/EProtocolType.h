#pragma once
#include "CoreMinimal.h"
#include "EProtocolType.generated.h"

UENUM()
enum class EProtocolType {
    pfenum_TCP,
    pfenum_UDP,
    pfenum_MAX UMETA(Hidden),
};

