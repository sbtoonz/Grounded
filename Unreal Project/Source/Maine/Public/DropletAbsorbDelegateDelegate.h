#pragma once
#include "CoreMinimal.h"
#include "DropletAbsorbDelegateDelegate.generated.h"

class AActor;

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FDropletAbsorbDelegate, AActor*, Actor);

