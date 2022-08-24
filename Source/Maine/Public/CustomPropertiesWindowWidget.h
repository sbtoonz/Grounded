#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "InteractionWidget.h"
#include "OnCustomPropertyInputChangedDelegate.h"
#include "CustomPropertiesWindowWidget.generated.h"

class UCanvasPanel;
class UVerticalBox;
class UCustomPropertyWidget;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class MAINE_API UCustomPropertiesWindowWidget : public UInteractionWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UCanvasPanel* container;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UVerticalBox* SettingsBox;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UCustomPropertyWidget> CustomPropertyWidgetClass;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnCustomPropertyInputChanged OnCustomPropertyChanged;
    
    UCustomPropertiesWindowWidget();
    UFUNCTION(BlueprintCallable)
    void ResetToDefaults();
    
    UFUNCTION(BlueprintCallable)
    void OnInputChanged(FName PropertyName, float PropertyValue);
    
    UFUNCTION(BlueprintCallable)
    UCustomPropertyWidget* GetWidgetForProperty(FName Property);
    
};

