#pragma once
#include "CoreMinimal.h"
#include "GameUserWidget.h"
#include "OnOffToggleWidget.generated.h"

class UTextBlock;
class UCheckBox;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class MAINE_API UOnOffToggleWidget : public UGameUserWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UTextBlock* Label;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UCheckBox* ToggleBtn;
    
public:
    UOnOffToggleWidget();
protected:
    UFUNCTION(BlueprintCallable)
    void OnToggleStateChanged(bool bIsToggled);
    
};

