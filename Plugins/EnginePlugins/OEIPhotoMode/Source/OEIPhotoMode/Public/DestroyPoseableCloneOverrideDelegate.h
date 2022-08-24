#pragma once
#include "CoreMinimal.h"
#include "DestroyPoseableCloneOverrideDelegate.generated.h"

class ACharacter;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FDestroyPoseableCloneOverride, ACharacter*, PoseableClone);

