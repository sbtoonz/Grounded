#pragma once
#include "CoreMinimal.h"
#include "GameUserWidget.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=OEIText -ObjectName=LocString -FallbackName=LocString
#include "EPlatformToggleSetting.h"
#include "BaseSettingsWidget.generated.h"

class ULocalizedTextBlock;

UCLASS(Abstract, EditInlineNew)
class MAINE_API UBaseSettingsWidget : public UGameUserWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, Export)
    ULocalizedTextBlock* TitleTextBlock;
    
    UPROPERTY(EditAnywhere)
    FLocString DisplayString;
    
    UPROPERTY(EditAnywhere)
    FLocString DescString;
    
    UPROPERTY(EditAnywhere)
    bool bShowKeybindingControls;
    
    UPROPERTY(EditAnywhere)
    bool bApplyImmediately;
    
    UPROPERTY(EditAnywhere)
    bool bCacheAndConfirm;
    
    UPROPERTY(EditAnywhere)
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
    UFUNCTION(BlueprintPure)
    bool IsCacheAndConfirmSetting();
    
    UFUNCTION(BlueprintPure)
    bool GetShowKeybindingControls() const;
    
};

