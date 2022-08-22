#pragma once
#include "CoreMinimal.h"
#include "GameUserWidget.h"
#include "GameButtonWidget.generated.h"

UCLASS(Abstract, EditInlineNew)
class MAINE_API UGameButtonWidget : public UGameUserWidget {
    GENERATED_BODY()
public:
    UGameButtonWidget();
};

