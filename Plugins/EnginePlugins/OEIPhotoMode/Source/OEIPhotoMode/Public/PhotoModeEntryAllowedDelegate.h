#pragma once
#include "CoreMinimal.h"
#include "EPhotoModeEntryAllowedResult.h"
#include "PhotoModeEntryAllowedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_DELEGATE_RetVal(EPhotoModeEntryAllowedResult, FPhotoModeEntryAllowed);

