#pragma once
#include "CoreMinimal.h"
#include "WindowWidget.h"
#include "InGameMenuWidget.generated.h"

UCLASS(Abstract, EditInlineNew)
class MAINE_API UInGameMenuWidget : public UWindowWidget {
    GENERATED_BODY()
public:
    UInGameMenuWidget();
};

