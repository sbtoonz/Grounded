#pragma once
#include "CoreMinimal.h"
#include "MotionEaterCharacterEventDelegate.generated.h"

class ASurvivalCharacter;
class UCharacterMotionEaterComponent;

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FMotionEaterCharacterEvent, UCharacterMotionEaterComponent*, Sender, ASurvivalCharacter*, Character);

