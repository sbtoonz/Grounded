#pragma once
#include "CoreMinimal.h"
#include "DefensePointChargeDelegateDelegate.generated.h"

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FDefensePointChargeDelegate, float, ChargeRatio);

