#pragma once
#include "CoreMinimal.h"
#include "AnyControlMapping.h"
#include "BaseSettingsWidget.h"
#include "AnyControlMappingKey.h"
#include "LabeledKeybinding.generated.h"

class UKeybindingDisplay;

UCLASS(Abstract, EditInlineNew)
class MAINE_API ULabeledKeybinding : public UBaseSettingsWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly)
    FAnyControlMappingKey MappingKey;
    
    UPROPERTY(BlueprintReadOnly)
    bool bGamepadControls;
    
    UPROPERTY(Export)
    UKeybindingDisplay* Binding0;
    
    UPROPERTY(Export)
    UKeybindingDisplay* Binding1;
    
public:
    ULabeledKeybinding();
protected:
    UFUNCTION()
    void OnControlMapping1Changed(FAnyControlMapping Mapping);
    
    UFUNCTION()
    void OnControlMapping0Changed(FAnyControlMapping Mapping);
    
public:
    UFUNCTION(BlueprintCallable)
    void Init();
    
protected:
    UFUNCTION(BlueprintImplementableEvent)
    void BlueprintSetMappingKey(FAnyControlMappingKey Key, bool bInGamepadControls);
    
};

