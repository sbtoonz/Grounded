#pragma once
#include "CoreMinimal.h"
#include "OnShowSubtitlesChangedDelegate.generated.h"

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnShowSubtitlesChanged, bool, ShowSubtitles);

