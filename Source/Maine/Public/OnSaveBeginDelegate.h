#pragma once
#include "CoreMinimal.h"
#include "ESaveGameType.h"
#include "OnSaveBeginDelegate.generated.h"

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnSaveBegin, ESaveGameType, SaveGameType);

