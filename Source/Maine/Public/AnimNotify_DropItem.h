#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=AnimNotify -FallbackName=AnimNotify
#include "EEquipmentSlot.h"
#include "AnimNotify_DropItem.generated.h"

UCLASS(CollapseCategories)
class MAINE_API UAnimNotify_DropItem : public UAnimNotify {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    EEquipmentSlot DropSlot;
    
    UAnimNotify_DropItem();
};

