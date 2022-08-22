#pragma once
#include "CoreMinimal.h"
#include "GameUserWidget.h"
#include "AnyControlMapping.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=InputAxisKeyMapping -FallbackName=InputAxisKeyMapping
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=InputActionKeyMapping -FallbackName=InputActionKeyMapping
#include "KeybindingDisplay.generated.h"

class UTextBlock;
class UImage;

UCLASS(Abstract, EditInlineNew)
class MAINE_API UKeybindingDisplay : public UGameUserWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, Export)
    UTextBlock* Text;
    
    UPROPERTY(BlueprintReadOnly, Export)
    UImage* ButtonImage;
    
protected:
    UPROPERTY(BlueprintReadOnly)
    FAnyControlMapping BoundControl;
    
    UPROPERTY(BlueprintReadOnly)
    bool bGamepadControls;
    
public:
    UKeybindingDisplay();
    UFUNCTION(BlueprintCallable)
    void UpdateText();
    
    UFUNCTION(BlueprintCallable)
    void UpdateControl(const FAnyControlMapping& Control);
    
    UFUNCTION(BlueprintCallable)
    void UnsetKey(bool bNotify);
    
    UFUNCTION(BlueprintCallable)
    void SetControl(const FAnyControlMapping& Control, bool bInGamepadControls, bool bNotify);
    
    UFUNCTION(BlueprintCallable)
    void SetAxis(const FInputAxisKeyMapping& Axis, bool bInGamepadControls, bool bNotify);
    
    UFUNCTION(BlueprintCallable)
    void SetAction(const FInputActionKeyMapping& Key, bool bInGamepadControls, bool bNotify);
    
};

