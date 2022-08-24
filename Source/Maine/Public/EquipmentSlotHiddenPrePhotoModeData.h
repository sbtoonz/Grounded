#pragma once
#include "CoreMinimal.h"
#include "EEquipmentSlot.h"
#include "EquipmentSlotHiddenPrePhotoModeData.generated.h"

USTRUCT(BlueprintType)
struct FEquipmentSlotHiddenPrePhotoModeData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EEquipmentSlot Slot;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool WasHidden;
    
    MAINE_API FEquipmentSlotHiddenPrePhotoModeData();
};

