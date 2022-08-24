#pragma once
#include "CoreMinimal.h"
#include "GameUserWidget.h"
#include "WebLoginWidget.generated.h"

class UWebBrowser;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class MAINE_API UWebLoginWidget : public UGameUserWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName SubsystemIdentifer;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UWebBrowser* BrowserWidget;
    
    UWebLoginWidget();
protected:
    UFUNCTION(BlueprintCallable)
    void OnLoginUrlChanged(const FText& Text);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnLoginShow();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnLoginHide();
    
protected:
    UFUNCTION(BlueprintCallable)
    void CancelWebLogin();
    
};

