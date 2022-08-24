#pragma once
#include "CoreMinimal.h"
#include "TargetZiplineAnchorChangedDelegateDelegate.generated.h"

class AZiplineSelectorPawn;
class UZiplineAnchor;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FTargetZiplineAnchorChangedDelegate, AZiplineSelectorPawn*, Sender, UZiplineAnchor*, Target);

