#pragma once
#include "CoreMinimal.h"
#include "LocString.h"
#include "Templates/SubclassOf.h"
#include "LocString.h"
#include "Engine/DataTable.h"
#include "ItemBonusEnhancementData.generated.h"

class UObject;
class USurvivalDamageType;

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

