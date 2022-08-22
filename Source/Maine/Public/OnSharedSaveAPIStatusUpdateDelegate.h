#pragma once
#include "CoreMinimal.h"
#include "ESharedSaveAPIStatus.h"
#include "OnSharedSaveAPIStatusUpdateDelegate.generated.h"

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnSharedSaveAPIStatusUpdate, ESharedSaveAPIStatus, SharedSaveAPIStatus);

