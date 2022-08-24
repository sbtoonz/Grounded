#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "BaseItemData.h"
#include "EEquipmentSlot.h"
#include "Engine/DataTable.h"
#include "ItemDataFunctionLibrary.generated.h"

class ASpawnedItem;
class AActor;

UCLASS(Blueprintable)
class MAINE_API UItemDataFunctionLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UItemDataFunctionLibrary();
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsRepairTool(const FBaseItemData& ItemData);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsGlider(const FBaseItemData& ItemData);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsArmorSlot(EEquipmentSlot Slot);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool GetItemRowHandleHasTechTreeUnlocks(const FDataTableRowHandle& Handle);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool GetItemDataFilterMatches(const FBaseItemData& ItemData, const FString& FilterText);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static TSoftClassPtr<ASpawnedItem> GetItemDataEquippedActor(const FBaseItemData& ItemData, const AActor* Equipper);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static void GetEquippableStatusEffects(const FBaseItemData& ItemData, TArray<FDataTableRowHandle>& StatusEffects, bool bIncludeHidden);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static void GetConsumableStatusEffects(const FBaseItemData& ItemData, TArray<FDataTableRowHandle>& StatusEffects);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static float GetAverageItemAttackHitStun(const FBaseItemData& ItemData);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static float GetAverageItemAttackDamage(const FBaseItemData& ItemData);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static void GetAttackStatusEffects(const FBaseItemData& ItemData, TArray<FDataTableRowHandle>& StatusEffects);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FDataTableRowHandle GetAttackData(const FBaseItemData& ItemData);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static void GetAllItemStatusEffects(const FBaseItemData& ItemData, TArray<FDataTableRowHandle>& StatusEffects, bool bIncludeHidden);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool CanResearch(const FBaseItemData& ItemData);
    
};

