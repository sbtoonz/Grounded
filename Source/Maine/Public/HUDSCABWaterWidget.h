#pragma once
#include "CoreMinimal.h"
#include "GameUserWidget.h"
#include "HUDSCABWaterWidget.generated.h"

class UWidgetAnimation;
class UImage;
class USoundBase;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class MAINE_API UHUDSCABWaterWidget : public UGameUserWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UWidgetAnimation* WaterDanger;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UWidgetAnimation* WaterGainAnim;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UImage* WarningCircle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USoundBase* WaterGainSound;
    
public:
    UHUDSCABWaterWidget();
};

