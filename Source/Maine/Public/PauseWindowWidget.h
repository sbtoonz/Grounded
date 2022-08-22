#pragma once
#include "CoreMinimal.h"
#include "WindowWidget.h"
#include "PauseWindowWidget.generated.h"

UCLASS(Abstract, EditInlineNew)
class MAINE_API UPauseWindowWidget : public UWindowWidget {
    GENERATED_BODY()
public:
    UPauseWindowWidget();
};

