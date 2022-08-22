#pragma once
#include "CoreMinimal.h"
#include "EEquipmentSlot.h"
#include "ArmorEquipmentSlot.generated.h"

class UItem;

USTRUCT(BlueprintType)
struct FArmorEquipmentSlot {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly)
    EEquipmentSlot EquipmentSlot;
    
    UPROPERTY(BlueprintReadOnly)
    float DurabilityRatio;
    
    UPROPERTY(BlueprintReadOnly)
    TWeakObjectPtr<UItem> Armor;
    
    MAINE_API FArmorEquipmentSlot();
};

