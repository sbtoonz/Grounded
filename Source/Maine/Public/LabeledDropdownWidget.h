#pragma once
#include "CoreMinimal.h"
#include "BaseSettingsWidget.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=SlateCore -ObjectName=ESelectInfo -FallbackName=ESelectInfo
#include "LabeledDropdownWidget.generated.h"

class UBaseOptionsDropdownAsset;
class UComboBoxString;

UCLASS(Abstract, EditInlineNew)
class MAINE_API ULabeledDropdownWidget : public UBaseSettingsWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, Export)
    UComboBoxString* DropdownSelection;
    
    UPROPERTY(BlueprintReadOnly)
    UBaseOptionsDropdownAsset* DropDownAsset;
    
    UPROPERTY(Transient)
    int32 LastConfirmedValue;
    
public:
    ULabeledDropdownWidget();
protected:
    UFUNCTION()
    void OnSelectionChanged(const FString& SelectedItem, TEnumAsByte<ESelectInfo::Type> SelectionType);
    
public:
    UFUNCTION(BlueprintCallable)
    void InitManual(int32 SelectedIndex);
    
    UFUNCTION(BlueprintCallable)
    void Init(const TArray<FString>& Options, int32 SelectedIndex);
    
};

