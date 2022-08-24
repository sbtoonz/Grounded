#pragma once
#include "CoreMinimal.h"
#include "Components/ComboBoxString.h"
#include "Styling/SlateBrush.h"
#include "PhotoModeComboBoxBase.generated.h"

UCLASS(Blueprintable)
class OEIPHOTOMODE_API UPhotoModeComboBoxBase : public UComboBoxString {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSlateBrush NormalStyle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSlateBrush HoveredFocusedStyle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSlateBrush PressedStyle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool Focused;
    
public:
    UPhotoModeComboBoxBase();
protected:
    UFUNCTION(BlueprintCallable)
    void SetBrushes(FSlateBrush InNormalImage, FSlateBrush InHoveredFocusedImage, FSlateBrush InPressedStyle);
    
    UFUNCTION(BlueprintCallable)
    void OnFocusChanged(bool HasFocus);
    
};

