#pragma once
#include "CoreMinimal.h"
#include "GameButtonWidget.h"
#include "MainMenuButtonWidget.generated.h"

class UButton;
class UTextBlock;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class MAINE_API UMainMenuButtonWidget : public UGameButtonWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UButton* Button_MainMenuInner;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UTextBlock* ButtonTextElement;
    
public:
    UMainMenuButtonWidget();
};

