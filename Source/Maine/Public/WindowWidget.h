#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "GameUserWidget.h"
#include "WindowClosedDelegateDelegate.h"
#include "EWindowPauseBehavior.h"
#include "EWindowInputMode.h"
#include "WindowWidget.generated.h"

class UWindowWidget;
class UWidget;

UCLASS(Abstract, EditInlineNew)
class MAINE_API UWindowWidget : public UGameUserWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable)
    FWindowClosedDelegate OnWindowClosed;
    
protected:
    UPROPERTY(EditDefaultsOnly)
    bool bLimitsFramerate;
    
private:
    UPROPERTY(EditDefaultsOnly)
    bool bHidesHUD;
    
    UPROPERTY(EditDefaultsOnly)
    bool bShowsCursor;
    
    UPROPERTY(EditDefaultsOnly)
    EWindowPauseBehavior PauseBehavior;
    
    UPROPERTY(EditDefaultsOnly)
    bool bIsPopUpWindow;
    
    UPROPERTY(EditDefaultsOnly)
    bool bIsFullscreenWindow;
    
    UPROPERTY(EditDefaultsOnly)
    bool bGarbageCollectOnClose;
    
    UPROPERTY(EditDefaultsOnly)
    TArray<TSoftClassPtr<UWindowWidget>> PreloadWindows;
    
    UPROPERTY(EditDefaultsOnly)
    bool bCacheOnClose;
    
    UPROPERTY(EditDefaultsOnly)
    bool bForceThirdPerson;
    
    UPROPERTY(EditDefaultsOnly)
    bool bShowPlayerIsBusy;
    
    UPROPERTY(EditDefaultsOnly)
    bool bRefreshOnOwnerInventoryChange;
    
    UPROPERTY(EditDefaultsOnly)
    bool bResetOnOwnerInventoryChange;
    
    UPROPERTY(EditDefaultsOnly)
    EWindowInputMode InputMode;
    
    UPROPERTY(Transient)
    TArray<TSubclassOf<UWindowWidget>> PreloadedWindows;
    
public:
    UWindowWidget();
protected:
    UFUNCTION()
    void SetFramerateLimitOnWidgetStackChanged();
    
public:
    UFUNCTION(BlueprintCallable)
    void SetDefaultUserFocus();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void ResetWidget();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void RefreshWidget();
    
protected:
    UFUNCTION(BlueprintImplementableEvent)
    void HandleWindowClosed();
    
public:
    UFUNCTION(BlueprintPure)
    EWindowInputMode GetInputMode() const;
    
    UFUNCTION(BlueprintNativeEvent, BlueprintPure)
    UWidget* GetDefaultUserFocus() const;
    
    UFUNCTION(BlueprintCallable)
    void CloseWindow();
    
};

