#pragma once
#include "CoreMinimal.h"
#include "GameUserWidget.h"
#include "SaveGameSlotWidget.generated.h"

UCLASS(Abstract, EditInlineNew)
class MAINE_API USaveGameSlotWidget : public UGameUserWidget {
    GENERATED_BODY()
public:
    USaveGameSlotWidget();
};

