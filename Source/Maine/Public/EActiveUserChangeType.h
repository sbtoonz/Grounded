#pragma once
#include "CoreMinimal.h"
#include "EActiveUserChangeType.generated.h"

UENUM()
enum class EActiveUserChangeType : uint8 {
    Login,
    LoggingOut,
    Logout,
    SwitchingUser,
    ControllerChange,
};

