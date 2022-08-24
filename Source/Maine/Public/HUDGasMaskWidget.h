#pragma once
#include "CoreMinimal.h"
#include "GameUserWidget.h"
#include "HUDGasMaskWidget.generated.h"

class UWidgetAnimation;
class UImage;
class UOverlay;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class MAINE_API UHUDGasMaskWidget : public UGameUserWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UImage* WarningImage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UImage* InHazardIcon;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UOverlay* DurabilityOverlay;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UWidgetAnimation* GlideWarningAnim;
    
public:
    UHUDGasMaskWidget();
};

