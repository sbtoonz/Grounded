#include "LootComponent.h"
#include "Net/UnrealNetwork.h"

class AActor;
class UHealthComponent;
class UObject;
class USceneComponent;
class AController;
class UBaseLODActor;
class USurvivalGameInstance;
class UGoapAction;

void ULootComponent::StartCacheSpawnPointVelocities() {
}

void ULootComponent::SpawnLoot(AActor* Looter, ELootSpawnType SpawnType) {
}

void ULootComponent::SetSpawnPointForItem(USceneComponent* SpawnPoint, int32 ItemIndex) {
}

void ULootComponent::SetAllDropChanceMultipliers(float Value) {
}

void ULootComponent::OnDecayed(UHealthComponent* Sender) {
}

void ULootComponent::OnDeath(const FDamageInfo& DamageInfo) {
}

void ULootComponent::OnDamaged(float Damage, const FDamageInfo& DamageInfo, AController* InstigatedBy, UBaseLODActor* DamageCauser, bool IsKillingBlow) {
}

bool ULootComponent::CanDropItem(const FDataTableRowHandle& ItemType) const {
    return false;
}

TArray<UGoapAction*> ULootComponent::AllocateGOAPActions_Implementation(USurvivalGameInstance* GameInstance, UObject* InOwner) {
    return TArray<UGoapAction*>();
}

void ULootComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(ULootComponent, bInteractable);
    DOREPLIFETIME(ULootComponent, bForceGiveBestiaryLootIfLastOfActorClass);
}

ULootComponent::ULootComponent() {
    this->OnLootSpawnSFX = NULL;
    this->bDestroyBody = false;
    this->InteractDelayOnDeath = 1.00f;
    this->TemplateHarvestAction = NULL;
    this->bInteractable = false;
    this->bForceGiveBestiaryLootIfLastOfActorClass = false;
}

