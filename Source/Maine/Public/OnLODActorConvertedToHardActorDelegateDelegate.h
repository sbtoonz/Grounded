#pragma once
#include "CoreMinimal.h"
#include "OnLODActorConvertedToHardActorDelegateDelegate.generated.h"

class UBaseLODActor;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnLODActorConvertedToHardActorDelegate, UBaseLODActor*, LODActor);

