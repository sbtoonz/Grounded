#pragma once
#include "CoreMinimal.h"
#include "OnEquipmentVisualsChangedDelegate.generated.h"

class UEquipmentComponent;
class UItem;

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnEquipmentVisualsChanged, UEquipmentComponent*, Sender, UItem*, ForItem);

