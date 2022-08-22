#pragma once
#include "CoreMinimal.h"
#include "EWaveCompletionReason.h"
#include "WaveCompleteDelegateDelegate.generated.h"

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FWaveCompleteDelegate, EWaveCompletionReason, Reason);

