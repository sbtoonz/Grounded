#pragma once
#include "CoreMinimal.h"
#include "ReviveTargetDelegateDelegate.generated.h"

class AActor;

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FReviveTargetDelegate, AActor*, RevivedActor);

