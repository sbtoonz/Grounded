#include "PlayerStatsComponent.h"

class AActor;
class UInventoryComponent;
class UPlayerStatConfig;
class UPointOfInterestDataAsset;
class ASurvivalPlayerState;
class ASurvivalCreature;
class ASurvivalCharacter;
class UDefensePointComponent;

void UPlayerStatsComponent::SetPlayerStatIfLarger(UPlayerStatConfig* PlayerStat, int32 NewValue) {
}

void UPlayerStatsComponent::OnStaminaDepleted(float StaminaRatio) {
}

void UPlayerStatsComponent::OnReviveTarget(AActor* RevivedActor) {
}

void UPlayerStatsComponent::OnPointOfInterestDiscovered(UPointOfInterestDataAsset* PointOfInterest, ASurvivalPlayerState* UnlockerPlayerState) {
}

void UPlayerStatsComponent::OnPhotoTaken() {
}

void UPlayerStatsComponent::OnPetTamed(ASurvivalCreature* Pet) {
}

void UPlayerStatsComponent::OnKill(AActor* KilledActor, const FDamageInfo& DamageInfo) {
}

void UPlayerStatsComponent::OnItemUsed(ASurvivalCharacter* User, FDataTableRowHandle ItemRowHandle) {
}

void UPlayerStatsComponent::OnItemCrafted(UInventoryComponent* Sender, FDataTableRowHandle RecipeHandle) {
}

void UPlayerStatsComponent::OnItemAdded(UInventoryComponent* InventoryComponent, FDataTableRowHandle ItemHandle, bool IsNewItem, int32 Count, int32 TotalCount) {
}

void UPlayerStatsComponent::OnDefensePointComplete(UDefensePointComponent* DefensePoint) {
}

void UPlayerStatsComponent::IncrementPlayerStat(UPlayerStatConfig* PlayerStat, int32 ValueToAdd) {
}

UPlayerStatsComponent::UPlayerStatsComponent() {
}

