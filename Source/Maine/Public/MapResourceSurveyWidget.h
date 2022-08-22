#pragma once
#include "CoreMinimal.h"
#include "BaseMapEntryWidget.h"
#include "MapResourceSurveyWidget.generated.h"

UCLASS(Abstract, EditInlineNew)
class MAINE_API UMapResourceSurveyWidget : public UBaseMapEntryWidget {
    GENERATED_BODY()
public:
    UMapResourceSurveyWidget();
};

