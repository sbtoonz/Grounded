#pragma once
#include "CoreMinimal.h"
#include "SettingChangedStringDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FSettingChangedString, const FString&, NewValue);

