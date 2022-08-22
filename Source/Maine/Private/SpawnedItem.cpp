#include "SpawnedItem.h"
#include "Net/UnrealNetwork.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=OEICommon -ObjectName=ObsidianIDComponent -FallbackName=ObsidianIDComponent

class APawn;
class UPhysicalMaterial;
class AActor;
class ASurvivalCharacter;
class UItem;
class UPrimitiveComponent;
class APhysicsVolume;
class USoundCue;
class UBaseLODActor;
class USurvivalGameInstance;
class UObject;
class UGoapAction;

bool ASpawnedItem::ValidateItemData_Implementation(TArray<FText>& ValidationErrors) const {
    return false;
}

void ASpawnedItem::TickZipline(float DeltaTime) {
}

void ASpawnedItem::TickBuoyancy(float DeltaTime) {
}

void ASpawnedItem::TickAttached(float DeltaTime) {
}

void ASpawnedItem::Throw(APawn* Thrower, FVector Impulse, FVector AngularImpulse) {
}

void ASpawnedItem::StartThrownAttack(AActor* Thrower) {
}

void ASpawnedItem::SetEquippedOwner(ASurvivalCharacter* NewOwner) {
}

int32 ASpawnedItem::RemoveItem_Implementation(UItem* InItem, int32 Count) {
    return 0;
}

void ASpawnedItem::OnWaveComplete(EWaveCompletionReason Reason) {
}



void ASpawnedItem::OnRep_RootComponentAsleep() {
}

void ASpawnedItem::OnRep_IsAttached() {
}

void ASpawnedItem::OnRep_AttachedZipline() {
}

void ASpawnedItem::OnPhysicsWake(UPrimitiveComponent* SleepingComponent, FName BoneName) {
}

void ASpawnedItem::OnPhysicsSleep(UPrimitiveComponent* SleepingComponent, FName BoneName) {
}





void ASpawnedItem::OnDefenseComplete(bool Success) {
}

void ASpawnedItem::NotifySwapped_Implementation(bool bFromDamage) {
}

void ASpawnedItem::NotifySpawned_Implementation() {
}


bool ASpawnedItem::IsThrownAttackTimerActive() const {
    return false;
}

bool ASpawnedItem::IsHaulingItem() const {
    return false;
}

bool ASpawnedItem::IsEmbeddableMaterial_Implementation(const UPhysicalMaterial* Material) const {
    return false;
}

void ASpawnedItem::HandleTouch(AActor* Actor) {
}

void ASpawnedItem::HandleThrowAttackTimerExpired() {
}

void ASpawnedItem::HandlePhysicsVolumeChanged(APhysicsVolume* Volume) {
}

bool ASpawnedItem::GetThrowStraight() const {
    return false;
}

USoundCue* ASpawnedItem::GetPickupAudio() {
    return NULL;
}

TArray<UItem*> ASpawnedItem::GetItems_Implementation() const {
    return TArray<UItem*>();
}

UItem* ASpawnedItem::GetItem() const {
    return NULL;
}

ASurvivalCharacter* ASpawnedItem::GetEquippedOwner() const {
    return NULL;
}

USoundCue* ASpawnedItem::GetEquipAudio() {
    return NULL;
}

ASurvivalCharacter* ASpawnedItem::GetDroppedBySpawnedActor() {
    return NULL;
}

UBaseLODActor* ASpawnedItem::GetDroppedBy() const {
    return NULL;
}

float ASpawnedItem::GetDistanceFromThrownLocation() const {
    return 0.0f;
}

USoundCue* ASpawnedItem::GetConsumeAudio() {
    return NULL;
}

AActor* ASpawnedItem::GetAttackOwner() const {
    return NULL;
}

void ASpawnedItem::DoDetach() {
}

void ASpawnedItem::DelayedDestroy() {
}

void ASpawnedItem::ClearThrownAttackTimer() {
}

bool ASpawnedItem::CanUse(const AActor* InstigatedBy) const {
    return false;
}

bool ASpawnedItem::CanEquipTo(const AActor* Actor) const {
    return false;
}

bool ASpawnedItem::CanEquip() const {
    return false;
}

bool ASpawnedItem::CanAddItems_Implementation(const TArray<UItem*>& InItems) const {
    return false;
}

bool ASpawnedItem::CanAddItemRowHandles_Implementation(const TArray<FDataTableRowHandle>& ItemRowHandles) const {
    return false;
}

bool ASpawnedItem::CanAddItemRowHandle_Implementation(FDataTableRowHandle ItemRowHandle) const {
    return false;
}

bool ASpawnedItem::CanAddItem_Implementation(UItem* InItem) const {
    return false;
}

TArray<UGoapAction*> ASpawnedItem::AllocateGOAPActions_Implementation(USurvivalGameInstance* GameInstance, UObject* InOwner) {
    return TArray<UGoapAction*>();
}

void ASpawnedItem::AddItem_Implementation(UItem* InItem, bool bIsNewItem) {
}

void ASpawnedItem::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(ASpawnedItem, Item);
    DOREPLIFETIME(ASpawnedItem, bIsTickingAttack);
    DOREPLIFETIME(ASpawnedItem, bRootComponentAsleep);
    DOREPLIFETIME(ASpawnedItem, bIsAttached);
    DOREPLIFETIME(ASpawnedItem, AttachedZipline);
}

ASpawnedItem::ASpawnedItem() {
    this->OverrideGameHourLifetime = 0.00f;
    this->bUseOverrideGameHourLifetime = false;
    this->bLifetimeDespawnWhenProxiedOnly = true;
    this->LiteData = NULL;
    this->ObsidianIDComponent = CreateDefaultSubobject<UObsidianIDComponent>(TEXT("ObsidianIDComponent"));
    this->Item = NULL;
    this->EquippedOwner = NULL;
    this->AttackOwner = NULL;
    this->bIsThrown = false;
    this->bHasImpacted = false;
    this->bCanAiInteract = true;
    this->CanLODItem = true;
    this->bInteractOnTouch = false;
    this->bDisableCollisionOnSleep = true;
    this->bSleepPhysicsDuringWaves = true;
    this->bIgnorePawnCollision = false;
    this->EmbedOnHit = ESpawnedItemEmbedType::None;
    this->MinimumEmbedNormal = 0.35f;
    this->bRotateOnEmbed = false;
    this->bThrowStraight = false;
    this->bIsTickingAttack = false;
    this->bThrowAttackCleared = false;
    this->bRootComponentAsleep = false;
    this->bIsAttached = false;
    this->ZiplineMaxSpeedMultiplier = 2.50f;
    this->PhysicsImpactAudio = NULL;
    this->bOverrideImpactSettings = false;
    this->OverrideImpactEffectDelay = 0.10f;
    this->OverrideMinImpactThreshold = 150.00f;
    this->OverrideMaxImpactThreshold = 3000.00f;
    this->OverrideMinImpactVolume = 0.05f;
    this->OverrideMaxImpactVolume = 1.00f;
    this->bUpdateTickRateWhenNotRendered = false;
    this->AttachedZipline = NULL;
}

