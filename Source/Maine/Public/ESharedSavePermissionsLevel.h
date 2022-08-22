#pragma once
#include "CoreMinimal.h"
#include "ESharedSavePermissionsLevel.generated.h"

UENUM(BlueprintType)
enum class ESharedSavePermissionsLevel : uint8 {
    None,
    HostOnly,
    HostAndManageFriends,
    FullAdmin,
};

