#pragma once
#include "CoreMinimal.h"
#include "SpawnPoseableCloneOverrideDelegate.generated.h"

class APlayerController;
class APawn;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FSpawnPoseableCloneOverride, APlayerController*, ActivatingController, APawn*, OriginalPawn);

