#pragma once
#include "CoreMinimal.h"
#include "EEquipmentSlot.h"
#include "EquipmentSlotHiddenPrePhotoModeData.generated.h"

USTRUCT(BlueprintType)
struct FEquipmentSlotHiddenPrePhotoModeData {
    GENERATED_BODY()
public:
    UPROPERTY()
    EEquipmentSlot Slot;
    
    UPROPERTY()
    bool WasHidden;
    
    MAINE_API FEquipmentSlotHiddenPrePhotoModeData();
};

