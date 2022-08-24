#pragma once
#include "CoreMinimal.h"
#include "ShowPoseableCloneOverrideDelegate.generated.h"

class ACharacter;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FShowPoseableCloneOverride, ACharacter*, PoseableClone);

