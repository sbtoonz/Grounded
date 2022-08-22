#pragma once
#include "CoreMinimal.h"
#include "GameButtonWidget.h"
#include "MainMenuButtonWidget.generated.h"

class UButton;
class UTextBlock;

UCLASS(Abstract, EditInlineNew)
class MAINE_API UMainMenuButtonWidget : public UGameButtonWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, Export)
    UButton* Button_MainMenuInner;
    
    UPROPERTY(BlueprintReadOnly, Export)
    UTextBlock* ButtonTextElement;
    
public:
    UMainMenuButtonWidget();
};

