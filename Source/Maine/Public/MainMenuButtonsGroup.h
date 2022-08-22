#pragma once
#include "CoreMinimal.h"
#include "GameUserWidget.h"
#include "MainMenuButtonsGroup.generated.h"

class UPanelWidget;
class UWidget;

UCLASS(Abstract, EditInlineNew)
class MAINE_API UMainMenuButtonsGroup : public UGameUserWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, Export)
    UPanelWidget* LayoutPanel;
    
public:
    UMainMenuButtonsGroup();
    UFUNCTION(BlueprintPure)
    UWidget* GetFirstButtonWidget() const;
    
};

