#pragma once
#include "CoreMinimal.h"
#include "GameUserWidget.h"
#include "HUDSCABFoodWidget.generated.h"

class UWidgetAnimation;
class UImage;
class USoundBase;

UCLASS(Abstract, EditInlineNew)
class MAINE_API UHUDSCABFoodWidget : public UGameUserWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, Transient)
    UWidgetAnimation* FoodDanger;
    
    UPROPERTY(BlueprintReadWrite, Transient)
    UWidgetAnimation* FoodGainAnim;
    
    UPROPERTY(BlueprintReadWrite, Export)
    UImage* WarningCircle;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    USoundBase* FoodGainSound;
    
public:
    UHUDSCABFoodWidget();
};

