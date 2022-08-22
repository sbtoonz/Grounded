#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector2D -FallbackName=Vector2D
#include "MotionEaterMovedDelegate.generated.h"

class UCharacterMotionEaterComponent;

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FMotionEaterMoved, UCharacterMotionEaterComponent*, Sender, FVector2D, Motion);

