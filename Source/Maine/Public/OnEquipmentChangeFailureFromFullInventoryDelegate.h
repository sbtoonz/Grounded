#pragma once
#include "CoreMinimal.h"
#include "EEquipmentChangeFailureFromFullInventoryStimulus.h"
#include "OnEquipmentChangeFailureFromFullInventoryDelegate.generated.h"

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnEquipmentChangeFailureFromFullInventory, EEquipmentChangeFailureFromFullInventoryStimulus, Stimulus);

