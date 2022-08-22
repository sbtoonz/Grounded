#pragma once
#include "CoreMinimal.h"
#include "GameUserWidget.h"
#include "HUDSCABWaterWidget.generated.h"

class UWidgetAnimation;
class UImage;
class USoundBase;

UCLASS(Abstract, EditInlineNew)
class MAINE_API UHUDSCABWaterWidget : public UGameUserWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, Transient)
    UWidgetAnimation* WaterDanger;
    
    UPROPERTY(BlueprintReadWrite, Transient)
    UWidgetAnimation* WaterGainAnim;
    
    UPROPERTY(BlueprintReadWrite, Export)
    UImage* WarningCircle;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    USoundBase* WaterGainSound;
    
public:
    UHUDSCABWaterWidget();
};

