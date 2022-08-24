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

UCLASS(Abstract, Blueprintable, EditInlineNew)
class MAINE_API UWindowWidget : public UGameUserWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FWindowClosedDelegate OnWindowClosed;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bLimitsFramerate;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bHidesHUD;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bShowsCursor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EWindowPauseBehavior PauseBehavior;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsPopUpWindow;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsFullscreenWindow;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bGarbageCollectOnClose;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSoftClassPtr<UWindowWidget>> PreloadWindows;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bCacheOnClose;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bForceThirdPerson;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bShowPlayerIsBusy;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bRefreshOnOwnerInventoryChange;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bResetOnOwnerInventoryChange;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EWindowInputMode InputMode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<TSubclassOf<UWindowWidget>> PreloadedWindows;
    
public:
    UWindowWidget();
protected:
    UFUNCTION(BlueprintCallable)
    void SetFramerateLimitOnWidgetStackChanged();
    
public:
    UFUNCTION(BlueprintCallable)
    void SetDefaultUserFocus();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void ResetWidget();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void RefreshWidget();
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void HandleWindowClosed();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EWindowInputMode GetInputMode() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent, BlueprintPure)
    UWidget* GetDefaultUserFocus() const;
    
    UFUNCTION(BlueprintCallable)
    void CloseWindow();
    
};

