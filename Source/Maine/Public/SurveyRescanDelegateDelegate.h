#pragma once
#include "CoreMinimal.h"
#include "SurveyRescanDelegateDelegate.generated.h"

class UResourceSurveyComponent;

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FSurveyRescanDelegate, UResourceSurveyComponent*, Sender);

