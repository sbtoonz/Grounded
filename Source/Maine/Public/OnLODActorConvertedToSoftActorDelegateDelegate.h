#pragma once
#include "CoreMinimal.h"
#include "OnLODActorConvertedToSoftActorDelegateDelegate.generated.h"

class UBaseLODActor;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnLODActorConvertedToSoftActorDelegate, UBaseLODActor*, LODActor);

