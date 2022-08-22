#include "HaulingComponent.h"
#include "Net/UnrealNetwork.h"

class UItem;
class AController;
class UBaseLODActor;
class UAttack;
class ACharacter;

void UHaulingComponent::ServerRemoveItem_Implementation(UItem* Item) {
}
bool UHaulingComponent::ServerRemoveItem_Validate(UItem* Item) {
    return true;
}

void UHaulingComponent::ServerDropItem_Implementation() {
}
bool UHaulingComponent::ServerDropItem_Validate() {
    return true;
}

void UHaulingComponent::ServerDropAll_Implementation() {
}
bool UHaulingComponent::ServerDropAll_Validate() {
    return true;
}

void UHaulingComponent::ServerAddItem_Implementation(UItem* Item) {
}
bool UHaulingComponent::ServerAddItem_Validate(UItem* Item) {
    return true;
}

int32 UHaulingComponent::RemoveItem_Implementation(UItem* Item, int32 Count) {
    return 0;
}

void UHaulingComponent::OnStatusEffectChanged() {
}

void UHaulingComponent::OnRep_HauledItems(const TArray<UItem*>& PreviousHauledItems) {
}

void UHaulingComponent::OnDeath(const FDamageInfo& DamageInfo) {
}

void UHaulingComponent::OnDamage(float Damage, const FDamageInfo& DamageInfo, AController* InstigatedBy, UBaseLODActor* DamageCauser, bool IsKillingBlow) {
}

void UHaulingComponent::OnCharacterMovementChanged(ACharacter* Character, TEnumAsByte<EMovementMode> PrevMovementMode, uint8 PreviousCustomMode) {
}

void UHaulingComponent::OnAttackLaunch(UAttack* Attack) {
}

bool UHaulingComponent::IsHaulingThrowableItems() const {
    return false;
}

bool UHaulingComponent::IsHaulingItems() const {
    return false;
}

bool UHaulingComponent::IsHaulingItem(UItem* Item) const {
    return false;
}

void UHaulingComponent::InputDropPressed() {
}

TArray<UItem*> UHaulingComponent::GetItems_Implementation() const {
    return TArray<UItem*>();
}

int32 UHaulingComponent::GetHaulingItemCount() const {
    return 0;
}

FTransform UHaulingComponent::GetDropItemTransform_Implementation(const UItem* Item, FVector Offset) {
    return FTransform{};
}

int32 UHaulingComponent::GetAdjustedCapacity() const {
    return 0;
}

void UHaulingComponent::ClientOnItemAdded_Implementation(FDataTableRowHandle ItemRowHandle) {
}

bool UHaulingComponent::CanAddItems_Implementation(const TArray<UItem*>& Items) const {
    return false;
}

bool UHaulingComponent::CanAddItemRowHandles_Implementation(const TArray<FDataTableRowHandle>& ItemRowHandles) const {
    return false;
}

bool UHaulingComponent::CanAddItemRowHandle_Implementation(FDataTableRowHandle ItemRowHandle) const {
    return false;
}

bool UHaulingComponent::CanAddItem_Implementation(UItem* Item) const {
    return false;
}

void UHaulingComponent::AddItem_Implementation(UItem* Item, bool bIsNewItem) {
}

void UHaulingComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UHaulingComponent, HauledItems);
}

UHaulingComponent::UHaulingComponent() {
    this->Capacity = 1;
    this->bHaulAnything = false;
    this->HaulingInputComponent = NULL;
}

