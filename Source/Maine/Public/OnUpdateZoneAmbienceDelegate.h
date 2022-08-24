#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "OnUpdateZoneAmbienceDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnUpdateZoneAmbience, const FDataTableRowHandle, ZoneAudioData, bool, bIsSubmerged);

