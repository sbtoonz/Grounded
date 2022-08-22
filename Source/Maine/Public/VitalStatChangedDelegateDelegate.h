#pragma once
#include "CoreMinimal.h"
#include "VitalStatChangedDelegateDelegate.generated.h"

class UVitalStat;
class UInterestCore;

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FVitalStatChangedDelegate, UInterestCore*, Sender, const UVitalStat*, Stat);

