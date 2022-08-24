#pragma once
#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "Types/SlateEnums.h"
#include "EPhotoModeSetting.h"
#include "EPhotoModeValueFormat.h"
#include "LocString.h"
#include "Styling/SlateTypes.h"
#include "PhotoModeSettingWidget.generated.h"

class UPhotoModeSliderBase;
class UHorizontalBox;
class UOverlay;
class UPhotoModeTextBlock;
class UPhotoModeCheckBoxBase;
class UPhotoModeComboBoxBase;
class UTextBlock;
class AActor;
class UPhotoModeSettingWidget;

UCLASS(Blueprintable, EditInlineNew)
class OEIPHOTOMODE_API UPhotoModeSettingWidget : public UUserWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UOverlay* Overlay;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UHorizontalBox* container;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UPhotoModeTextBlock* SettingTitleText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UPhotoModeSliderBase* Slider;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UPhotoModeCheckBoxBase* CheckBox;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UPhotoModeComboBoxBase* ComboBox;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UTextBlock* ValueText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EPhotoModeSetting ControlledSetting;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EPhotoModeValueFormat ValueFormat;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MaximumIntegralDigits;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MaximumFractionalDigits;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName AssociatedTag;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool PrePhotoModeShowHideState;
    
public:
    UPhotoModeSettingWidget();
    UFUNCTION(BlueprintCallable)
    void SetValue(float Value);
    
    UFUNCTION(BlueprintCallable)
    void SetSelectedIndex(int32 Index);
    
private:
    UFUNCTION(BlueprintCallable)
    void SetEquipmentVisibilityForActor(AActor* Actor, bool Visible);
    
    UFUNCTION(BlueprintCallable)
    void SetEquipmentVisibility(bool Visible);
    
public:
    UFUNCTION(BlueprintCallable)
    void SetEnabledState(bool Enabled);
    
    UFUNCTION(BlueprintCallable)
    void SetComboBoxOptions(const TArray<FLocString>& InOptions);
    
    UFUNCTION(BlueprintCallable)
    void SetChecked(ECheckBoxState State);
    
private:
    UFUNCTION(BlueprintCallable)
    void RestorePrePhotoModeState();
    
public:
    UFUNCTION(BlueprintCallable)
    void RefreshSetting();
    
    UFUNCTION(BlueprintCallable)
    void OnSliderValueChanged(float Value);
    
private:
    UFUNCTION(BlueprintCallable)
    void OnSettingChangedSlider(float Value);
    
    UFUNCTION()
    void OnSettingChangedComboBox(const FString& SelectedItem, TEnumAsByte<ESelectInfo::Type> SelectionType);
    
    UFUNCTION(BlueprintCallable)
    void OnSettingChangedCheckBox(bool bChecked);
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnPhotoModeSettingChanged(UPhotoModeSettingWidget* ChangedSetting);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnFocusedHoveredChanged(bool FocusedOrHovered);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnEnabledChanged(bool Enabled);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsInputHovered() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsChecked() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetValue() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetSelectedIndex() const;
    
};

