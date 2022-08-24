#include "PerkComponent.h"
#include "Net/UnrealNetwork.h"

class UPlayerStatConfig;
class AActor;

void UPerkComponent::UnlockPerkTier(FDataTableRowHandle PerkRowHandle, int32 Tier) {
}

void UPerkComponent::ServerUnequipPerk_Implementation(FName PerkName) {
}
bool UPerkComponent::ServerUnequipPerk_Validate(FName PerkName) {
    return true;
}

void UPerkComponent::ServerEquipPerk_Implementation(FName PerkName) {
}
bool UPerkComponent::ServerEquipPerk_Validate(FName PerkName) {
    return true;
}

void UPerkComponent::OnRep_Perks() {
}

void UPerkComponent::OnPlayerStatChanged(UPlayerStatConfig* PlayerStat, int32 Value) {
}

void UPerkComponent::OnGlobalVariableChanged(const FGuid& GlobalVariableID, int32 VariableValue, AActor* Instigator) {
}

bool UPerkComponent::IsPerkEquipped(FDataTableRowHandle PerkRowHandle) {
    return false;
}

bool UPerkComponent::HasAvailablePerkEquip() const {
    return false;
}

TArray<FPerkStatus> UPerkComponent::GetPerks() const {
    return TArray<FPerkStatus>();
}

int32 UPerkComponent::GetNumEquippedPerks() const {
    return 0;
}

int32 UPerkComponent::GetMaxEquippedPerks() const {
    return 0;
}

int32 UPerkComponent::GetDefaultMaxEquippedPerks() const {
    return 0;
}

void UPerkComponent::ClientNotifyUnlockPerk_Implementation(FPerkStatus Perk) {
}

void UPerkComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UPerkComponent, Perks);
}

UPerkComponent::UPerkComponent() {
    this->MaxEquippedPerks = 0;
}

