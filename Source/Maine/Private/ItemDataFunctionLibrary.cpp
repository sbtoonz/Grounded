#include "ItemDataFunctionLibrary.h"

class AActor;
class ASpawnedItem;

bool UItemDataFunctionLibrary::IsRepairTool(const FBaseItemData& ItemData) {
    return false;
}

bool UItemDataFunctionLibrary::IsGlider(const FBaseItemData& ItemData) {
    return false;
}

bool UItemDataFunctionLibrary::IsArmorSlot(EEquipmentSlot Slot) {
    return false;
}

bool UItemDataFunctionLibrary::GetItemRowHandleHasTechTreeUnlocks(const FDataTableRowHandle& Handle) {
    return false;
}

bool UItemDataFunctionLibrary::GetItemDataFilterMatches(const FBaseItemData& ItemData, const FString& FilterText) {
    return false;
}

TSoftClassPtr<ASpawnedItem> UItemDataFunctionLibrary::GetItemDataEquippedActor(const FBaseItemData& ItemData, const AActor* Equipper) {
    return NULL;
}

void UItemDataFunctionLibrary::GetEquippableStatusEffects(const FBaseItemData& ItemData, TArray<FDataTableRowHandle>& StatusEffects, bool bIncludeHidden) {
}

void UItemDataFunctionLibrary::GetConsumableStatusEffects(const FBaseItemData& ItemData, TArray<FDataTableRowHandle>& StatusEffects) {
}

float UItemDataFunctionLibrary::GetAverageItemAttackHitStun(const FBaseItemData& ItemData) {
    return 0.0f;
}

float UItemDataFunctionLibrary::GetAverageItemAttackDamage(const FBaseItemData& ItemData) {
    return 0.0f;
}

void UItemDataFunctionLibrary::GetAttackStatusEffects(const FBaseItemData& ItemData, TArray<FDataTableRowHandle>& StatusEffects) {
}

FDataTableRowHandle UItemDataFunctionLibrary::GetAttackData(const FBaseItemData& ItemData) {
    return FDataTableRowHandle{};
}

void UItemDataFunctionLibrary::GetAllItemStatusEffects(const FBaseItemData& ItemData, TArray<FDataTableRowHandle>& StatusEffects, bool bIncludeHidden) {
}

bool UItemDataFunctionLibrary::CanResearch(const FBaseItemData& ItemData) {
    return false;
}

UItemDataFunctionLibrary::UItemDataFunctionLibrary() {
}

