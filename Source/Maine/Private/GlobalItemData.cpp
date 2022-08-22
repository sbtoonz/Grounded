#include "GlobalItemData.h"
#include "Templates/SubclassOf.h"

class USurvivalDamageType;

FRecipeModData UGlobalItemData::GetRecipeModData(FDataTableRowHandle ItemRowHandle) const {
    return FRecipeModData{};
}

float UGlobalItemData::GetBonusStatModifier(int32 BonusEnhancementLevel, FGameplayTag BonusEnhancementType) const {
    return 0.0f;
}

TArray<FGameplayTag> UGlobalItemData::GetBonusEnhancementTypes() const {
    return TArray<FGameplayTag>();
}

FDataTableRowHandle UGlobalItemData::GetBonusEnhancementRepairItem(FGameplayTag BonusEnhancementType) const {
    return FDataTableRowHandle{};
}

int32 UGlobalItemData::GetBonusEnhancementItemCost(int32 BonusEnhancementLevel) const {
    return 0;
}

FDataTableRowHandle UGlobalItemData::GetBonusEnhancementItem(FGameplayTag BonusEnhancementType, int32 BonusEnhancementLevel) const {
    return FDataTableRowHandle{};
}

TSubclassOf<USurvivalDamageType> UGlobalItemData::GetBonusEnhancementDamageType(FGameplayTag BonusEnhancementType) const {
    return NULL;
}

float UGlobalItemData::GetBaseStatModifier(int32 EnhancementLevel) const {
    return 0.0f;
}

int32 UGlobalItemData::GetBaseEnhancementItemCost(int32 EnhancementLevel) const {
    return 0;
}

int32 UGlobalItemData::GetArmorBonusEnhancementItemCost(int32 BonusEnhancementLevel) const {
    return 0;
}

int32 UGlobalItemData::GetArmorBaseEnhancementItemCost(int32 EnhancementLevel) const {
    return 0;
}

bool UGlobalItemData::DoesBonusEnhancementUnlockStatusEffects(FGameplayTag BonusEnhancementType) const {
    return false;
}

UGlobalItemData::UGlobalItemData() {
    this->DefaultWorldItem = NULL;
    this->DefaultEquippedItem = NULL;
    this->DefaultAIBiteEffect = NULL;
    this->DefaultAIEatEffect = NULL;
    this->AttackDurability = 1.00f;
    this->BlockDurability = 1.00f;
    this->ThrowDurability = 10.00f;
    this->AddChargesDurability = 1.00f;
    this->TotalSpoilingTimeInHours = 2.00f;
    this->TotalFireBurnTimeInHours = 5.00f;
    this->ItemStackBonusPerTier = 5;
    this->MaxItemStackTier = 5;
    this->SciencePerResearch = 20;
    this->ItemUseCooldown = 1.00f;
    this->DefaultCraftingSound = NULL;
    this->LootBag = NULL;
    this->BuildingLootBag = NULL;
    this->MaxBaseEnhancementLevel = 5;
    this->BaseEnhancementBaseCost = 2;
    this->BaseArmorEnhancementBaseCost = 2;
    this->BaseStatModifierPerLevel = 0.10f;
    this->MaxBonusEnhancementLevel = 2;
    this->NumBonusEnhancementTiers = 1;
    this->BonusStatModifierPerLevel = 0.30f;
    this->BonusDamageTypeStatModifierPerLevel = 0.15f;
    this->BonusEnhancementBaseCost = 5;
    this->BonusArmorEnhancementBaseCost = 5;
    this->ImpactEffectDelay = 0.10f;
    this->MinImpactThreshold = 120.00f;
    this->MaxImpactThreshold = 3000.00f;
    this->MinImpactVolume = 0.05f;
    this->MaxImpactVolume = 1.00f;
    this->GasMaskReverb = NULL;
}

