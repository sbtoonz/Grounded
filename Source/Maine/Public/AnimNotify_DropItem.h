#pragma once
#include "CoreMinimal.h"
#include "Animation/AnimNotifies/AnimNotify.h"
#include "EEquipmentSlot.h"
#include "AnimNotify_DropItem.generated.h"

UCLASS(Blueprintable, CollapseCategories)
class MAINE_API UAnimNotify_DropItem : public UAnimNotify {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EEquipmentSlot DropSlot;
    
    UAnimNotify_DropItem();
};

