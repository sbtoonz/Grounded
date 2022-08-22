#pragma once
#include "CoreMinimal.h"
#include "GameUserWidget.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=InputAxisKeyMapping -FallbackName=InputAxisKeyMapping
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=InputActionKeyMapping -FallbackName=InputActionKeyMapping
//CROSS-MODULE INCLUDE V2: -ModuleName=InputCore -ObjectName=Key -FallbackName=Key
#include "ActionWidget.generated.h"

class UTextBlock;
class UActionWidget;
class UImage;

UCLASS(Abstract, EditInlineNew)
class MAINE_API UActionWidget : public UGameUserWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, Export)
    UTextBlock* KeyText;
    
    UPROPERTY(BlueprintReadWrite, Export)
    UImage* ButtonImage;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FName ActionName;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool bAxisPositive;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool bShowMouseKeyboardControls;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool bShowGamepadControls;
    
public:
    UActionWidget();
    UFUNCTION(BlueprintPure)
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
    UFUNCTION()
    void NativeOnUsingGamepadChanged(bool bIsUsingGamepad);
    
public:
    UFUNCTION(BlueprintPure)
    bool IsDisplayingSameButton(const UActionWidget* Other) const;
    
protected:
    UFUNCTION()
    void HandleCultureChanged();
    
    UFUNCTION()
    void HandleAxisMappingChanged(const FInputAxisKeyMapping& Value);
    
    UFUNCTION()
    void HandleActionMappingChanged(const FInputActionKeyMapping& Value);
    
    UFUNCTION(BlueprintPure)
    FKey GetFirstActionKey() const;
    
};

