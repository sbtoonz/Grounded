#pragma once
#include "CoreMinimal.h"
#include "AuraCountChangedDelegateDelegate.generated.h"

class UAuraReceiverComponent;

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FAuraCountChangedDelegate, UAuraReceiverComponent*, Sender, int32, AuraCount);

