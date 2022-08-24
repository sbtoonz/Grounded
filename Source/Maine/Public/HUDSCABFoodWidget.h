#pragma once
#include "CoreMinimal.h"
#include "GameUserWidget.h"
#include "HUDSCABFoodWidget.generated.h"

class UWidgetAnimation;
class UImage;
class USoundBase;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class MAINE_API UHUDSCABFoodWidget : public UGameUserWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UWidgetAnimation* FoodDanger;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UWidgetAnimation* FoodGainAnim;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UImage* WarningCircle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USoundBase* FoodGainSound;
    
public:
    UHUDSCABFoodWidget();
};

