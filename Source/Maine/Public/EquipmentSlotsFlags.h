#pragma once
#include "CoreMinimal.h"
#include "EquipmentSlotsFlags.generated.h"

USTRUCT(BlueprintType)
struct FEquipmentSlotsFlags {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    uint8 bMainHand: 1;
    
    UPROPERTY(EditAnywhere)
    uint8 bOffHand: 1;
    
    UPROPERTY(EditAnywhere)
    uint8 bHead: 1;
    
    UPROPERTY(EditAnywhere)
    uint8 bChest: 1;
    
    UPROPERTY(EditAnywhere)
    uint8 bArms: 1;
    
    UPROPERTY(EditAnywhere)
    uint8 bLegs: 1;
    
    UPROPERTY(EditAnywhere)
    uint8 bGlider: 1;
    
    MAINE_API FEquipmentSlotsFlags();
};

