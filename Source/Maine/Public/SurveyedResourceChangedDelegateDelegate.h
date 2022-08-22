#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=DataTableRowHandle -FallbackName=DataTableRowHandle
#include "SurveyedResourceChangedDelegateDelegate.generated.h"

class UResourceSurveyComponent;

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FSurveyedResourceChangedDelegate, UResourceSurveyComponent*, Sender, FDataTableRowHandle, ResourceHandle);

