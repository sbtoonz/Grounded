#include "PlayerUpgradeComponent.h"
#include "Net/UnrealNetwork.h"

void UPlayerUpgradeComponent::ServerUnlockUpgradeTier_Implementation(FDataTableRowHandle UpgradeRowHandle, bool bIgnoreCost) {
}
bool UPlayerUpgradeComponent::ServerUnlockUpgradeTier_Validate(FDataTableRowHandle UpgradeRowHandle, bool bIgnoreCost) {
    return true;
}

void UPlayerUpgradeComponent::OnRep_PlayerUpgrades() {
}

int32 UPlayerUpgradeComponent::GetUpgradeTier(FDataTableRowHandle UpgradeRowHandle) const {
    return 0;
}

int32 UPlayerUpgradeComponent::GetUpgradeCost(FDataTableRowHandle UpgradeRowHandle) const {
    return 0;
}

int32 UPlayerUpgradeComponent::GetTotalSpentPoints() const {
    return 0;
}

int32 UPlayerUpgradeComponent::GetRemainingUpgradePoints() const {
    return 0;
}

int32 UPlayerUpgradeComponent::GetPerkCountBonus() const {
    return 0;
}

int32 UPlayerUpgradeComponent::GetMaxUpgradeTier(FDataTableRowHandle UpgradeRowHandle) const {
    return 0;
}

bool UPlayerUpgradeComponent::CanUpgradeTier(FDataTableRowHandle UpgradeRowHandle, bool bIgnoreCost) const {
    return false;
}

void UPlayerUpgradeComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UPlayerUpgradeComponent, PlayerUpgrades);
}

UPlayerUpgradeComponent::UPlayerUpgradeComponent() {
}

