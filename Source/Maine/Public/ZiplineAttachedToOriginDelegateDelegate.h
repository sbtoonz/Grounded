#pragma once
#include "CoreMinimal.h"
#include "ZiplineAttachedToOriginDelegateDelegate.generated.h"

class UZiplineAnchor;
class AZiplineLine;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FZiplineAttachedToOriginDelegate, UZiplineAnchor*, Sender, AZiplineLine*, Line);

