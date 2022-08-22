#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=AnimNotifyState -FallbackName=AnimNotifyState
#include "EEquipmentSlot.h"
#include "AnimNotifyState_HideSlot.generated.h"

UCLASS(CollapseCategories, EditInlineNew)
class MAINE_API UAnimNotifyState_HideSlot : public UAnimNotifyState {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditAnywhere)
    EEquipmentSlot ItemSlot;
    
    UPROPERTY(EditAnywhere)
    int32 StanceOverride;
    
public:
    UAnimNotifyState_HideSlot();
};

