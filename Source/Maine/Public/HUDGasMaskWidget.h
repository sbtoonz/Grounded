#pragma once
#include "CoreMinimal.h"
#include "GameUserWidget.h"
#include "HUDGasMaskWidget.generated.h"

class UWidgetAnimation;
class UImage;
class UOverlay;

UCLASS(Abstract, EditInlineNew)
class MAINE_API UHUDGasMaskWidget : public UGameUserWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, Export)
    UImage* WarningImage;
    
    UPROPERTY(BlueprintReadWrite, Export)
    UImage* InHazardIcon;
    
    UPROPERTY(BlueprintReadWrite, Export)
    UOverlay* DurabilityOverlay;
    
    UPROPERTY(BlueprintReadWrite, Transient)
    UWidgetAnimation* GlideWarningAnim;
    
public:
    UHUDGasMaskWidget();
};

