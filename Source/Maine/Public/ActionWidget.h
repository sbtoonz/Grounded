#pragma once
#include "CoreMinimal.h"
#include "GameUserWidget.h"
#include "GameFramework/PlayerInput.h"
#include "GameFramework/PlayerInput.h"
#include "InputCoreTypes.h"
#include "ActionWidget.generated.h"

class UTextBlock;
class UImage;
class UActionWidget;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class MAINE_API UActionWidget : public UGameUserWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UTextBlock* KeyText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UImage* ButtonImage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName ActionName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAxisPositive;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bShowMouseKeyboardControls;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bShowGamepadControls;
    
public:
    UActionWidget();
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool ShouldShowControl() const;
    
    UFUNCTION(BlueprintCallable)
    void SetShowMouseKeyboardControls(bool bValue);
    
    UFUNCTION(BlueprintCallable)
    void SetShowGamepadControls(bool bValue);
    
    UFUNCTION(BlueprintCallable)
    void SetAction(FName InActionName, bool bInAxisPositive);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Refresh();
    
protected:
    UFUNCTION(BlueprintCallable)
    void NativeOnUsingGamepadChanged(bool bIsUsingGamepad);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsDisplayingSameButton(const UActionWidget* Other) const;
    
protected:
    UFUNCTION(BlueprintCallable)
    void HandleCultureChanged();
    
    UFUNCTION(BlueprintCallable)
    void HandleAxisMappingChanged(const FInputAxisKeyMapping& Value);
    
    UFUNCTION(BlueprintCallable)
    void HandleActionMappingChanged(const FInputActionKeyMapping& Value);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FKey GetFirstActionKey() const;
    
};

