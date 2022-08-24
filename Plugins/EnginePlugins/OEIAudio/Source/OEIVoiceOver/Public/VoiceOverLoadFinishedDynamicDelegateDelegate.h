#pragma once
#include "CoreMinimal.h"
#include "VoiceOverData.h"
#include "VoiceOverLoadFinishedDynamicDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_DELEGATE_OneParam(FVoiceOverLoadFinishedDynamicDelegate, const FVoiceOverData&, Data);

