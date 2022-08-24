#pragma once
#include "CoreMinimal.h"
#include "OnSelectedAmmoChangedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnSelectedAmmoChanged, FName, SelectedAmmoName);

