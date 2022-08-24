#pragma once
#include "CoreMinimal.h"
#include "EPhotoModeEntryAllowedResult.h"
#include "OnPhotoModeEntryUnallowedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnPhotoModeEntryUnallowed, EPhotoModeEntryAllowedResult, Reason);

