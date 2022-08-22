#pragma once
#include "CoreMinimal.h"
#include "GameButtonWidget.h"
#include "BottomButtonWidget.generated.h"

UCLASS(Abstract, EditInlineNew)
class MAINE_API UBottomButtonWidget : public UGameButtonWidget {
    GENERATED_BODY()
public:
    UBottomButtonWidget();
    UFUNCTION(BlueprintCallable)
    void SetIsValid(bool bEnabled);
    
protected:
    UFUNCTION(BlueprintImplementableEvent)
    void OnSetIsValid(bool bEnabled);
    
};

