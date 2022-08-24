#pragma once
#include "CoreMinimal.h"
#include "BaseSettingsWidget.h"
#include "LabeledToggle.generated.h"

class UCheckBox;
class UTextBlock;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class MAINE_API ULabeledToggle : public UBaseSettingsWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UTextBlock* Value;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UCheckBox* ToggleBtn;
    
public:
    ULabeledToggle();
    UFUNCTION(BlueprintCallable)
    void SetIsChecked(bool bInIsChecked);
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnToggleStateChanged(bool bIsToggled);
    
};

