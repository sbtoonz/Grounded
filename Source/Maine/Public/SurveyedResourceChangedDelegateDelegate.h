#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "SurveyedResourceChangedDelegateDelegate.generated.h"

class UResourceSurveyComponent;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FSurveyedResourceChangedDelegate, UResourceSurveyComponent*, Sender, FDataTableRowHandle, ResourceHandle);

