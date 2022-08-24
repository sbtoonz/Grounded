#pragma once
#include "CoreMinimal.h"
#include "EValidationLevel.generated.h"

UENUM()
namespace EValidationLevel {
    enum Type {
        CriticalError,
        Error,
        Warning,
        Info,
    };
}

