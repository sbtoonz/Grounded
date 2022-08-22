#pragma once
#include "CoreMinimal.h"
#include "ClimbableSplineKey.h"
#include "StartsClimbingDelegateDelegate.generated.h"

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FStartsClimbingDelegate, FClimbableSplineKey, Spline);

