#pragma once
#include "CoreMinimal.h"
#include "EEquipmentSlot.h"
#include "ArmorEquipmentSlot.generated.h"

class UItem;

USTRUCT(BlueprintType)
struct FArmorEquipmentSlot {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EEquipmentSlot EquipmentSlot;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DurabilityRatio;
    
    UPROPERTY(EditAnywhere)
    TWeakObjectPtr<UItem> Armor;
    
    MAINE_API FArmorEquipmentSlot();
};

