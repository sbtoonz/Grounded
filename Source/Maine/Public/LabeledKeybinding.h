#pragma once
#include "CoreMinimal.h"
#include "AnyControlMapping.h"
#include "BaseSettingsWidget.h"
#include "AnyControlMappingKey.h"
#include "LabeledKeybinding.generated.h"

class UKeybindingDisplay;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class MAINE_API ULabeledKeybinding : public UBaseSettingsWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAnyControlMappingKey MappingKey;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bGamepadControls;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UKeybindingDisplay* Binding0;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UKeybindingDisplay* Binding1;
    
public:
    ULabeledKeybinding();
protected:
    UFUNCTION(BlueprintCallable)
    void OnControlMapping1Changed(FAnyControlMapping Mapping);
    
    UFUNCTION(BlueprintCallable)
    void OnControlMapping0Changed(FAnyControlMapping Mapping);
    
public:
    UFUNCTION(BlueprintCallable)
    void Init();
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BlueprintSetMappingKey(FAnyControlMappingKey Key, bool bInGamepadControls);
    
};

