#pragma once
#include "CoreMinimal.h"
#include "BaseSettingsWidget.h"
#include "LabeledToggle.generated.h"

class UCheckBox;
class UTextBlock;

UCLASS(Abstract, EditInlineNew)
class MAINE_API ULabeledToggle : public UBaseSettingsWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(Export)
    UTextBlock* Value;
    
    UPROPERTY(BlueprintReadOnly, Export)
    UCheckBox* ToggleBtn;
    
public:
    ULabeledToggle();
    UFUNCTION(BlueprintCallable)
    void SetIsChecked(bool bInIsChecked);
    
protected:
    UFUNCTION()
    void OnToggleStateChanged(bool bIsToggled);
    
};

