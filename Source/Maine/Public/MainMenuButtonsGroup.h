#pragma once
#include "CoreMinimal.h"
#include "GameUserWidget.h"
#include "MainMenuButtonsGroup.generated.h"

class UPanelWidget;
class UWidget;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class MAINE_API UMainMenuButtonsGroup : public UGameUserWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UPanelWidget* LayoutPanel;
    
public:
    UMainMenuButtonsGroup();
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UWidget* GetFirstButtonWidget() const;
    
};

