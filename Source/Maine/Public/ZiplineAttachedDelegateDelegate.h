#pragma once
#include "CoreMinimal.h"
#include "ZiplineAttachedDelegateDelegate.generated.h"

class UZiplineAnchor;
class AZiplineLine;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FZiplineAttachedDelegate, UZiplineAnchor*, Sender, AZiplineLine*, Line);

