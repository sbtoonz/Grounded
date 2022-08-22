#pragma once
#include "CoreMinimal.h"
#include "GameUserWidget.h"
#include "CustomProperty.h"
#include "ECustomPropertyInputType.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=OEIText -ObjectName=LocString -FallbackName=LocString
//CROSS-MODULE INCLUDE V2: -ModuleName=SlateCore -ObjectName=ESelectInfo -FallbackName=ESelectInfo
#include "CustomPropertyWidget.generated.h"

class UHorizontalBox;
class UOverlay;
class UPhotoModeCheckBoxBase;
class UPhotoModeTextBlock;
class UPhotoModeSliderBase;
class UPhotoModeComboBoxBase;
class USizeBox;
class UTextBlock;

UCLASS(Abstract, EditInlineNew)
class MAINE_API UCustomPropertyWidget : public UGameUserWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export)
    UOverlay* Overlay;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export)
    UHorizontalBox* container;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export)
    UPhotoModeTextBlock* SettingTitleText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export)
    UPhotoModeSliderBase* Slider;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export)
    USizeBox* CheckBoxSizeBox;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export)
    UPhotoModeCheckBoxBase* CheckBox;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export)
    UPhotoModeComboBoxBase* ComboBox;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export)
    UTextBlock* ValueText;
    
    UPROPERTY()
    FCustomProperty CachedPropertyInfo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 MaximumIntegralDigits;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 MaximumFractionalDigits;
    
    UCustomPropertyWidget();
    UFUNCTION(BlueprintImplementableEvent)
    void SetInputStyles(ECustomPropertyInputType InputType);
    
    UFUNCTION(BlueprintCallable)
    void SetEnabledState(bool Enabled);
    
    UFUNCTION(BlueprintCallable)
    void SetComboBoxOptions(const TArray<FLocString>& InOptions);
    
    UFUNCTION()
    void ResetToDefaults();
    
    UFUNCTION()
    void OnSliderValueChanged(float Value);
    
private:
    UFUNCTION()
    void OnSettingChangedSlider(float Value);
    
    UFUNCTION()
    void OnSettingChangedComboBox(const FString& SelectedItem, TEnumAsByte<ESelectInfo::Type> SelectionType);
    
    UFUNCTION()
    void OnSettingChangedCheckBox(bool bChecked);
    
public:
    UFUNCTION(BlueprintImplementableEvent)
    void OnEnabledChanged(bool Enabled);
    
};

