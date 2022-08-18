#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "BaseItemData.h"
#include "EEquipmentSlot.h"
#include "Engine/DataTable.h"
#include "ItemDataFunctionLibrary.generated.h"

class AActor;
class ASpawnedItem;

UCLASS(BlueprintType)
class MAINE_API UItemDataFunctionLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UItemDataFunctionLibrary();
    UFUNCTION(BlueprintPure)
    static bool IsRepairTool(const FBaseItemData& ItemData);
    
    UFUNCTION(BlueprintPure)
    static bool IsGlider(const FBaseItemData& ItemData);
    
    UFUNCTION(BlueprintPure)
    static bool IsArmorSlot(EEquipmentSlot Slot);
    
    UFUNCTION(BlueprintPure)
    static bool GetItemRowHandleHasTechTreeUnlocks(const FDataTableRowHandle& Handle);
    
    UFUNCTION(BlueprintPure)
    static bool GetItemDataFilterMatches(const FBaseItemData& ItemData, const FString& FilterText);
    
    UFUNCTION(BlueprintPure)
    static TSoftClassPtr<ASpawnedItem> GetItemDataEquippedActor(const FBaseItemData& ItemData, const AActor* Equipper);
    
    UFUNCTION(BlueprintPure)
    static void GetEquippableStatusEffects(const FBaseItemData& ItemData, TArray<FDataTableRowHandle>& StatusEffects, bool bIncludeHidden);
    
    UFUNCTION(BlueprintPure)
    static void GetConsumableStatusEffects(const FBaseItemData& ItemData, TArray<FDataTableRowHandle>& StatusEffects);
    
    UFUNCTION(BlueprintPure)
    static float GetAverageItemAttackHitStun(const FBaseItemData& ItemData);
    
    UFUNCTION(BlueprintPure)
    static float GetAverageItemAttackDamage(const FBaseItemData& ItemData);
    
    UFUNCTION(BlueprintPure)
    static void GetAttackStatusEffects(const FBaseItemData& ItemData, TArray<FDataTableRowHandle>& StatusEffects);
    
    UFUNCTION(BlueprintPure)
    static FDataTableRowHandle GetAttackData(const FBaseItemData& ItemData);
    
    UFUNCTION(BlueprintPure)
    static void GetAllItemStatusEffects(const FBaseItemData& ItemData, TArray<FDataTableRowHandle>& StatusEffects, bool bIncludeHidden);
    
    UFUNCTION(BlueprintPure)
    static bool CanResearch(const FBaseItemData& ItemData);
    
};

