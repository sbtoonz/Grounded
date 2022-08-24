#pragma once
#include "CoreMinimal.h"
#include "WindowWidget.h"
#include "IncapacitateWindowWidget.generated.h"

UCLASS(Abstract, Blueprintable, EditInlineNew)
class MAINE_API UIncapacitateWindowWidget : public UWindowWidget {
    GENERATED_BODY()
public:
    UIncapacitateWindowWidget();
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void EnableChatLog();
    
};

