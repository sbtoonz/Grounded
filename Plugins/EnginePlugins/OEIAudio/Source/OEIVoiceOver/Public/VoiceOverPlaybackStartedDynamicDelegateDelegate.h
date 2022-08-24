#pragma once
#include "CoreMinimal.h"
#include "VoiceOverData.h"
#include "VoiceOverPlaybackStartedDynamicDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_DELEGATE_ThreeParams(FVoiceOverPlaybackStartedDynamicDelegate, const FVoiceOverData&, Data, bool, bPlaybackStarted, float, EstimatedDuration);

