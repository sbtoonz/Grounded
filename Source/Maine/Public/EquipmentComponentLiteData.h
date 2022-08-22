#pragma once
#include "CoreMinimal.h"
#include "ComponentLiteData.h"
#include "EquipmentSlotsFlags.h"
#include "EquipmentComponentLiteData.generated.h"

UCLASS()
class MAINE_API UEquipmentComponentLiteData : public UComponentLiteData {
    GENERATED_BODY()
public:
    UPROPERTY(VisibleAnywhere)
    FEquipmentSlotsFlags HasEquipmentSlots;
    
    UEquipmentComponentLiteData();
};

