#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "MotionEaterMovedDelegate.generated.h"

class UCharacterMotionEaterComponent;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FMotionEaterMoved, UCharacterMotionEaterComponent*, Sender, FVector2D, Motion);

