#pragma once
#include "CoreMinimal.h"
#include "TrackedSpawnsChangedDelegate.generated.h"

class UTrackedItemSpawnGroup;

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FTrackedSpawnsChanged, UTrackedItemSpawnGroup*, Sender);

