#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "ColorThemePlayerDelegateDelegate.generated.h"

class UGlobalColorTheme;
class ASurvivalPlayerState;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FColorThemePlayerDelegate, TSubclassOf<UGlobalColorTheme>, Theme, ASurvivalPlayerState*, UnlockerPlayerState);

