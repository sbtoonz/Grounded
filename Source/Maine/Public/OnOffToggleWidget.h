#pragma once
#include "CoreMinimal.h"
#include "GameUserWidget.h"
#include "OnOffToggleWidget.generated.h"

class UCheckBox;
class UTextBlock;

UCLASS(Abstract, EditInlineNew)
class MAINE_API UOnOffToggleWidget : public UGameUserWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, Export)
    UTextBlock* Label;
    
    UPROPERTY(BlueprintReadWrite, Export)
    UCheckBox* ToggleBtn;
    
public:
    UOnOffToggleWidget();
protected:
    UFUNCTION()
    void OnToggleStateChanged(bool bIsToggled);
    
};

