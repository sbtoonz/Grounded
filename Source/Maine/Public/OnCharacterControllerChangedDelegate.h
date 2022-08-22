#pragma once
#include "CoreMinimal.h"
#include "OnCharacterControllerChangedDelegate.generated.h"

class AController;

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnCharacterControllerChanged, AController*, Controller);

