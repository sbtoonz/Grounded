#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "InteractionWidget.h"
#include "OnCustomPropertyInputChangedDelegate.h"
#include "CustomPropertiesWindowWidget.generated.h"

class UCanvasPanel;
class UVerticalBox;
class UCustomPropertyWidget;

UCLASS(Abstract, EditInlineNew)
class MAINE_API UCustomPropertiesWindowWidget : public UInteractionWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export)
    UCanvasPanel* container;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export)
    UVerticalBox* SettingsBox;
    
    UPROPERTY(EditDefaultsOnly)
    TSubclassOf<UCustomPropertyWidget> CustomPropertyWidgetClass;
    
    UPROPERTY(BlueprintAssignable)
    FOnCustomPropertyInputChanged OnCustomPropertyChanged;
    
    UCustomPropertiesWindowWidget();
    UFUNCTION(BlueprintCallable)
    void ResetToDefaults();
    
    UFUNCTION()
    void OnInputChanged(FName PropertyName, float PropertyValue);
    
    UFUNCTION(BlueprintCallable)
    UCustomPropertyWidget* GetWidgetForProperty(FName Property);
    
};

