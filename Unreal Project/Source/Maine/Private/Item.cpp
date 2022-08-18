#include "Item.h"
#include "Net/UnrealNetwork.h"
#include "Templates/SubclassOf.h"

class AActor;
class UAttack;
class UItem;
class USoundCue;
class USpawnedItemLODActor;
class ASpawnedItem;
class USurvivalDamageType;

bool UItem::UsesPowerType(FGameplayTag PowerType) const {
    return false;
}

bool UItem::UsesPower() const {
    return false;
}

bool UItem::UsesAmmo() const {
    return false;
}

float UItem::TryAddPower(FGameplayTag PowerType, float Charges, AActor* InstigatedBy) {
    return 0.0f;
}

int32 UItem::SetStackSize(int32 InStackSize) {
    return 0;
}

void UItem::SetInventorySlot(int32 Slot) {
}

void UItem::RestoreAllDurability() {
}

bool UItem::RemovePowerCharges(float Count) {
    return false;
}

void UItem::RemoveDurability(float Amount) {
}

void UItem::OnRep_SelectedAmmoType() {
}

void UItem::OnRep_PropertyChanged() {
}

void UItem::OnRep_PowerReservoir() {
}

void UItem::OnRep_ItemDataRowHandle(FDataTableRowHandle PreviousHandle) {
}

void UItem::OnRep_IsPowerOn() {
}

void UItem::OnRep_EnhancementChanged() {
}

void UItem::OnPowerStoredChanged(const FGameplayTag& PowerType, float ChargesStored) {
}

bool UItem::IsValidBonusEnhancementType(FGameplayTag EnhancementType) const {
    return false;
}

bool UItem::IsStackFull() const {
    return false;
}

bool UItem::IsPowerFull() const {
    return false;
}

bool UItem::IsPowerEmpty() const {
    return false;
}

bool UItem::IsPersonalKeyItem() const {
    return false;
}

bool UItem::IsPartyKeyItem() const {
    return false;
}

bool UItem::IsLightSource() const {
    return false;
}

bool UItem::IsInstanceOf(const FDataTableRowHandle& Row) const {
    return false;
}

bool UItem::IsFullyCharged() const {
    return false;
}

bool UItem::IsEquipped() const {
    return false;
}

bool UItem::IsCharged() const {
    return false;
}

bool UItem::IsBusy() const {
    return false;
}

bool UItem::IsBroken() const {
    return false;
}

bool UItem::IsAtMaxDurability() const {
    return false;
}

bool UItem::IsArmorItem() const {
    return false;
}

bool UItem::IsAHaulingItem() {
    return false;
}

int32 UItem::IncrementStackSize() {
    return 0;
}

bool UItem::HasTag(FGameplayTag Tag) const {
    return false;
}

bool UItem::HasDurability() const {
    return false;
}

bool UItem::HasConversation() const {
    return false;
}

bool UItem::HasConsumableEffectEver() const {
    return false;
}

bool UItem::HasConsumableEffect() const {
    return false;
}

bool UItem::HasAnyTag(FGameplayTagContainer Tags) const {
    return false;
}

FGameplayTagContainer UItem::GetValidBonusEnhancementTags() const {
    return FGameplayTagContainer{};
}

TArray<UItem*> UItem::GetValidAmmoTypes() const {
    return TArray<UItem*>();
}

FLocString UItem::GetTypeDisplayName() const {
    return FLocString{};
}

float UItem::GetTotalSpoilTime() const {
    return 0.0f;
}

float UItem::GetTotalHatchTime() const {
    return 0.0f;
}

int32 UItem::GetTotalEnhancementLevels() const {
    return 0;
}

float UItem::GetThrowSpeedMultiplierInWater() const {
    return 0.0f;
}

float UItem::GetThrowSpeedMultiplier() const {
    return 0.0f;
}

EThrowAttackType UItem::GetThrowAttackType() const {
    return EThrowAttackType::None;
}

float UItem::GetThrowAttackDelay() const {
    return 0.0f;
}

TArray<FDataTableRowHandle> UItem::GetTechTreeUnlocks() const {
    return TArray<FDataTableRowHandle>();
}

UAttack* UItem::GetSwimmingAttack(int32 Index) {
    return NULL;
}

int32 UItem::GetStackSize() const {
    return 0;
}

ESpoilState UItem::GetSpoilState() const {
    return ESpoilState::None;
}

float UItem::GetSpoilProgress() const {
    return 0.0f;
}

FString UItem::GetSourceCreatureName() const {
    return TEXT("");
}

FName UItem::GetSelectedAmmoType() const {
    return NAME_None;
}

TArray<FDataTableRowHandle> UItem::GetResearchRecipeUnlocks() const {
    return TArray<FDataTableRowHandle>();
}

void UItem::GetRepairRequirements(TArray<FRecipeRequirements>& OutRequirements) const {
}

int32 UItem::GetRemainingAmmo() const {
    return 0;
}

TArray<FDataTableRowHandle> UItem::GetRecipeUnlocks() const {
    return TArray<FDataTableRowHandle>();
}

int32 UItem::GetProcessedResultItemCount(FGameplayTag ProcessingType) const {
    return 0;
}

FDataTableRowHandle UItem::GetProcessedResultItem(FGameplayTag ProcessingType) const {
    return FDataTableRowHandle{};
}

FPowerReservoir UItem::GetPowerReservoir() {
    return FPowerReservoir{};
}

float UItem::GetPowerPercentage() const {
    return 0.0f;
}

USoundCue* UItem::GetPickupAudio() {
    return NULL;
}

float UItem::GetPercentageDamageReduction() const {
    return 0.0f;
}

TArray<FDataTableRowHandle> UItem::GetNewResearchRecipeUnlocks() const {
    return TArray<FDataTableRowHandle>();
}

int32 UItem::GetMaxStackSize() const {
    return 0;
}

int32 UItem::GetMaxHaulingAmount() {
    return 0;
}

float UItem::GetMaxDurability() const {
    return 0.0f;
}

USpawnedItemLODActor* UItem::GetLodItemVisuals() const {
    return NULL;
}

ASpawnedItem* UItem::GetItemVisuals() const {
    return NULL;
}

EItemType UItem::GetItemType() {
    return EItemType::General;
}

FDataTableRowHandle UItem::GetItemRequiredForEnhancement() const {
    return FDataTableRowHandle{};
}

FDataTableRowHandle UItem::GetItemDataRowHandle() const {
    return FDataTableRowHandle{};
}

FBaseItemData UItem::GetItemData() {
    return FBaseItemData{};
}

int32 UItem::GetItemCountRequiredForBonusEnhancement() const {
    return 0;
}

int32 UItem::GetItemCountRequiredForBaseEnhancement() const {
    return 0;
}

bool UItem::GetIsPowerOn() {
    return false;
}

int32 UItem::GetInventorySlot() const {
    return 0;
}

float UItem::GetImpactSoundRange() const {
    return 0.0f;
}

float UItem::GetImpactSoundIntensity() const {
    return 0.0f;
}

FDataTableRowHandle UItem::GetImpactAttack() const {
    return FDataTableRowHandle{};
}

EHUDMarkerType UItem::GetHUDMarkerType() {
    return EHUDMarkerType::None;
}

float UItem::GetHatchProgress() const {
    return 0.0f;
}

float UItem::GetGlideTimeRemaining() const {
    return 0.0f;
}

float UItem::GetGardenModifierValue() const {
    return 0.0f;
}

EGardenModifierType UItem::GetGardenModifierType() const {
    return EGardenModifierType::None;
}

float UItem::GetFlatDamageReduction() const {
    return 0.0f;
}

AActor* UItem::GetEquippedOwner() const {
    return NULL;
}

EEquipmentSlot UItem::GetEquipmentSlot() const {
    return EEquipmentSlot::None;
}

USoundCue* UItem::GetEquipAudio() {
    return NULL;
}

int32 UItem::GetEnhancementLevel() const {
    return 0;
}

float UItem::GetDurabilityRemaining() const {
    return 0.0f;
}

float UItem::GetDurabilityRatio() const {
    return 0.0f;
}

float UItem::GetDurabilityModifier() const {
    return 0.0f;
}

FString UItem::GetDisplayName() const {
    return TEXT("");
}

FLocString UItem::GetDescription() const {
    return FLocString{};
}

float UItem::GetDamageReductionModifier() const {
    return 0.0f;
}

int32 UItem::GetConversationStartNode() const {
    return 0;
}

FGuid UItem::GetConversationID() const {
    return FGuid{};
}

USoundCue* UItem::GetConsumeAudio() {
    return NULL;
}

FGameplayTag UItem::GetBonusEnhancementType() const {
    return FGameplayTag{};
}

int32 UItem::GetBonusEnhancementLevel() const {
    return 0;
}

float UItem::GetBlockStaminaRegenMultiplier() const {
    return 0.0f;
}

float UItem::GetBlockStaminaCost() const {
    return 0.0f;
}

float UItem::GetBlockDamageMultiplier() const {
    return 0.0f;
}

int32 UItem::GetAvailableStackSize() const {
    return 0;
}

FString UItem::GetAttackSpeedText() const {
    return TEXT("");
}

FGameplayTag UItem::GetAttackSpeedTag() const {
    return FGameplayTag{};
}

TSubclassOf<USurvivalDamageType> UItem::GetAttackDamageTypeModifier() const {
    return NULL;
}

uint8 UItem::GetAttackDamageTypeFlags() {
    return 0;
}

float UItem::GetAttackDamageModifier() const {
    return 0.0f;
}

TArray<FName> UItem::GetAmmoTypes() const {
    return TArray<FName>();
}

void UItem::EnablePower(bool bPowerEnabled) {
}

void UItem::DumpPower(const AActor* Dumper) {
}

bool UItem::DestroyOnThrowAttack() const {
    return false;
}

int32 UItem::DecrementStackSize() {
    return 0;
}

bool UItem::ConsumesPowerDuringRest() const {
    return false;
}

void UItem::ConsumeCharge() {
}

bool UItem::CanUse(const AActor* Instigator) const {
    return false;
}

bool UItem::CanTrash() const {
    return false;
}

bool UItem::CanThrowUnderWater() const {
    return false;
}

bool UItem::CanThrow() const {
    return false;
}

bool UItem::CanStack() const {
    return false;
}

bool UItem::CanSpoil() {
    return false;
}

bool UItem::CanRepairNow() const {
    return false;
}

bool UItem::CanRepair() const {
    return false;
}

bool UItem::CanProcess(FGameplayTag ProcessingType) const {
    return false;
}

bool UItem::CanPowerBeUsedInWater() const {
    return false;
}

bool UItem::CanHatch() {
    return false;
}

bool UItem::CanGetBonusEnhancements() const {
    return false;
}

bool UItem::CanEverUse() const {
    return false;
}

bool UItem::CanEverEnhance() const {
    return false;
}

bool UItem::CanEverDumpPower() const {
    return false;
}

bool UItem::CanEquipTo(const AActor* Character) const {
    return false;
}

bool UItem::CanEquip() const {
    return false;
}

bool UItem::CanEnhance() const {
    return false;
}

bool UItem::CanDumpPower() const {
    return false;
}

bool UItem::CanBlock() const {
    return false;
}

bool UItem::CanAttack() const {
    return false;
}

bool UItem::CanAnalyze() const {
    return false;
}

bool UItem::CanAddPower(FGameplayTag PowerType, float Charges) const {
    return false;
}

bool UItem::CanAcceptPowerType(FGameplayTag PowerType) const {
    return false;
}

bool UItem::AppliesPositiveSurvivalStatOnConsume(EStatusEffectType StatusEffectType, bool IgnoreNegativeEffects) {
    return false;
}

bool UItem::AlwaysOn() const {
    return false;
}

int32 UItem::AdjustStackSize(int32 AmountToAdjustBy) {
    return 0;
}

bool UItem::AddCharges(FGameplayTag PowerTag, float ChargesToAdd) {
    return false;
}

void UItem::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UItem, ItemDataRowHandle);
    DOREPLIFETIME(UItem, StackSize);
    DOREPLIFETIME(UItem, InventorySlot);
    DOREPLIFETIME(UItem, SpoilEndTime);
    DOREPLIFETIME(UItem, PausedSpoilProgress);
    DOREPLIFETIME(UItem, HatchEndTime);
    DOREPLIFETIME(UItem, SelectedAmmoType);
    DOREPLIFETIME(UItem, PowerUsed);
    DOREPLIFETIME(UItem, IsPowerOn);
    DOREPLIFETIME(UItem, PowerReservoir);
    DOREPLIFETIME(UItem, DurabilityRemaining);
    DOREPLIFETIME(UItem, SourceCreatureName);
    DOREPLIFETIME(UItem, BaseEnhancementLevel);
    DOREPLIFETIME(UItem, BonusEnhancementLevel);
    DOREPLIFETIME(UItem, BonusEnhancementType);
}

UItem::UItem() {
    this->StackSize = 1;
    this->InventorySlot = -1;
    this->SpoilEndTime = 0.00f;
    this->PausedSpoilProgress = -1.00f;
    this->HatchEndTime = 0.00f;
    this->AttackCombo = NULL;
    this->AlternateAttackCombo = NULL;
    this->SwimmingAttackCombo = NULL;
    this->PowerUsed = 0.00f;
    this->IsPowerOn = false;
    this->DurabilityRemaining = 0.00f;
    this->BaseEnhancementLevel = 0;
    this->BonusEnhancementLevel = 0;
}

