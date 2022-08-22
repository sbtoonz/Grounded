#pragma once
#include "CoreMinimal.h"
#include "GameUserWidget.h"
#include "WebLoginWidget.generated.h"

class UWebBrowser;

UCLASS(Abstract, EditInlineNew)
class MAINE_API UWebLoginWidget : public UGameUserWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere)
    FName SubsystemIdentifer;
    
public:
    UPROPERTY(BlueprintReadWrite, Export)
    UWebBrowser* BrowserWidget;
    
    UWebLoginWidget();
protected:
    UFUNCTION(BlueprintCallable)
    void OnLoginUrlChanged(const FText& Text);
    
public:
    UFUNCTION(BlueprintImplementableEvent)
    void OnLoginShow();
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnLoginHide();
    
protected:
    UFUNCTION(BlueprintCallable)
    void CancelWebLogin();
    
};

