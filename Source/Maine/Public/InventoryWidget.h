#pragma once
#include "CoreMinimal.h"
#include "GameUserWidget.h"
#include "InventoryWidget.generated.h"

UCLASS(Abstract, Blueprintable, EditInlineNew)
class MAINE_API UInventoryWidget : public UGameUserWidget {
    GENERATED_BODY()
public:
    UInventoryWidget();
};

