#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=OEIText -ObjectName=LocString -FallbackName=LocString
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=DataTableRowHandle -FallbackName=DataTableRowHandle
#include "ItemBonusEnhancementData.generated.h"

class USurvivalDamageType;
class UObject;

USTRUCT(BlueprintType)
struct FItemBonusEnhancementData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FLocString LocalizedDisplayName;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    TSoftObjectPtr<UObject> Icon;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    TSoftObjectPtr<UObject> ItemSlotBG;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    TSubclassOf<USurvivalDamageType> DamageType;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    uint8 bUnlockStatusEffects: 1;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    TArray<FDataTableRowHandle> EnhancementItems;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FDataTableRowHandle ExtraRepairItem;
    
    MAINE_API FItemBonusEnhancementData();
};

