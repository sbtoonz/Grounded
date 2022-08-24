#pragma once
#include "CoreMinimal.h"
#include "GameUserWidget.h"
#include "GameFramework/PlayerInput.h"
#include "AnyControlMapping.h"
#include "GameFramework/PlayerInput.h"
#include "KeybindingDisplay.generated.h"

class UTextBlock;
class UImage;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class MAINE_API UKeybindingDisplay : public UGameUserWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UTextBlock* Text;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UImage* ButtonImage;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAnyControlMapping BoundControl;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
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

