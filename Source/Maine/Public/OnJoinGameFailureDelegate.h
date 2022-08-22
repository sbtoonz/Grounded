#pragma once
#include "CoreMinimal.h"
#include "EJoinSessionFailureResult.h"
#include "OnJoinGameFailureDelegate.generated.h"

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnJoinGameFailure, EJoinSessionFailureResult, Result);

