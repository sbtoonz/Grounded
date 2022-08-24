#pragma once
#include "CoreMinimal.h"
#include "EPersistenceType.generated.h"

UENUM()
enum class EPersistenceType : uint8 {
    None,
    OnceEver,
    OncePerConversation,
    MarkAsRead,
};

