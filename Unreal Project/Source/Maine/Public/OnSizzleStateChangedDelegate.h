#pragma once
#include "CoreMinimal.h"
#include "ESizzleState.h"
#include "OnSizzleStateChangedDelegate.generated.h"

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnSizzleStateChanged, ESizzleState, PreviousState, ESizzleState, CurrentState);

