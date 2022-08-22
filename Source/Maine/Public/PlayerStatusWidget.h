#pragma once
#include "CoreMinimal.h"
#include "GameUserWidget.h"
#include "PlayerStatusWidget.generated.h"

UCLASS(Abstract, EditInlineNew)
class MAINE_API UPlayerStatusWidget : public UGameUserWidget {
    GENERATED_BODY()
public:
    UPlayerStatusWidget();
};

