#pragma once
#include "CoreMinimal.h"
#include "GameUserWidget.h"
#include "LocString.h"
#include "EPlatformToggleSetting.h"
#include "BaseSettingsWidget.generated.h"

class ULocalizedTextBlock;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class MAINE_API UBaseSettingsWidget : public UGameUserWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    ULocalizedTextBlock* TitleTextBlock;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLocString DisplayString;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLocString DescString;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bShowKeybindingControls;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bApplyImmediately;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bCacheAndConfirm;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EPlatformToggleSetting PlatformSetting;
    
public:
    UBaseSettingsWidget();
    UFUNCTION(BlueprintCallable)
    void SetLocalizedInfo(FLocString InDisplayString, FLocString InDescString);
    
    UFUNCTION(BlueprintCallable)
    void SetCacheAndConfirm(bool bState);
    
    UFUNCTION(BlueprintCallable)
    void SetApplyImmediately(bool bState);
    
protected:
    UFUNCTION(BlueprintCallable)
    void NotifyHovered();
    
    UFUNCTION(BlueprintCallable)
    void NotifyFocused();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsCacheAndConfirmSetting();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetShowKeybindingControls() const;
    
};

