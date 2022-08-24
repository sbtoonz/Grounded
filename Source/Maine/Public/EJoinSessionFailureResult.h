#pragma once
#include "CoreMinimal.h"
#include "EJoinSessionFailureResult.generated.h"

UENUM()
enum class EJoinSessionFailureResult : uint8 {
    Success,
    SessionIsFull,
    SessionDoesNotExist,
    CouldNotRetrieveAddress,
    AlreadyInSession,
    UnknownError,
};

