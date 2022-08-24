#pragma once
#include "CoreMinimal.h"
#include "GameUserWidget.h"
#include "UINotificationBase.generated.h"

UCLASS(Abstract, Blueprintable, EditInlineNew)
class MAINE_API UUINotificationBase : public UGameUserWidget {
    GENERATED_BODY()
public:
    UUINotificationBase();
};

