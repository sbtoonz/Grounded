#pragma once
#include "CoreMinimal.h"
#include "WindowWidget.h"
#include "PauseWindowWidget.generated.h"

UCLASS(Abstract, Blueprintable, EditInlineNew)
class MAINE_API UPauseWindowWidget : public UWindowWidget {
    GENERATED_BODY()
public:
    UPauseWindowWidget();
};

