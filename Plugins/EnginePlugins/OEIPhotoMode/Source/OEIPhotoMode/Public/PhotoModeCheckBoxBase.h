#pragma once
#include "CoreMinimal.h"
#include "Components/CheckBox.h"
#include "Styling/SlateBrush.h"
#include "PhotoModeCheckBoxBase.generated.h"

UCLASS(Blueprintable)
class OEIPHOTOMODE_API UPhotoModeCheckBoxBase : public UCheckBox {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSlateBrush CheckedImage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSlateBrush UncheckedImage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSlateBrush CheckedPressedImage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSlateBrush UncheckedPressedImage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSlateBrush HoveredFocusedCheckedImage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSlateBrush HoveredFocusedUncheckedImage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool Focused;
    
public:
    UPhotoModeCheckBoxBase();
protected:
    UFUNCTION(BlueprintCallable)
    void SetBrushes(FSlateBrush InCheckedImage, FSlateBrush InUncheckedImage, FSlateBrush InCheckedPressedImage, FSlateBrush InUncheckedPressedImage, FSlateBrush InHoveredFocusedCheckedImage, FSlateBrush InHoveredFocusedUncheckedImage);
    
    UFUNCTION(BlueprintCallable)
    void OnFocusChanged(bool HasFocus);
    
};

