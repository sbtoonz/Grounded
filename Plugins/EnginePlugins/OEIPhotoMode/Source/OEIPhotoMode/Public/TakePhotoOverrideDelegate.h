#pragma once
#include "CoreMinimal.h"
#include "TakePhotoOverrideDelegate.generated.h"

class APhotoPawn;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_DELEGATE_OneParam(FTakePhotoOverride, APhotoPawn*, PhotoPawn);

