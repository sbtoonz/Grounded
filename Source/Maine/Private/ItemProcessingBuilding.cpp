#include "ItemProcessingBuilding.h"
#include "Net/UnrealNetwork.h"

class UItem;
class AActor;
class USceneComponent;
class ASurvivalCharacter;

bool AItemProcessingBuilding::WillQueueProcessingItems() const {
    return false;
}


void AItemProcessingBuilding::TickProcessing(float DeltaTime) {
}

void AItemProcessingBuilding::RemoveItem(UItem* Item, AActor* InInstigator) {
}

void AItemProcessingBuilding::OnRep_ProcessingItemsChanged() {
}

void AItemProcessingBuilding::NotifyWorldItemTake(UItem* Item) {
}

void AItemProcessingBuilding::NotifyProcessingStateChanged_Implementation(FGameplayTag NewProcessingType, int32 CookingSlot) {
}

void AItemProcessingBuilding::MulticastNotifyProcessingStateChanged_Implementation(FGameplayTag NewProcessingType, int32 CookingSlot) {
}

bool AItemProcessingBuilding::IsProcessingAnything() const {
    return false;
}

bool AItemProcessingBuilding::IsItemFinished(int32 Index) const {
    return false;
}

bool AItemProcessingBuilding::IsFull() const {
    return false;
}

FDataTableRowHandle AItemProcessingBuilding::GetResultItemType(int32 Index) const {
    return FDataTableRowHandle{};
}

FGameplayTag AItemProcessingBuilding::GetProcessingType() const {
    return FGameplayTag{};
}

EItemProcessingState AItemProcessingBuilding::GetProcessingState(int32 Index) const {
    return EItemProcessingState::Empty;
}

FName AItemProcessingBuilding::GetProcessingSocketForItem(int32 Index) const {
    return NAME_None;
}

TArray<FItemProcessingData> AItemProcessingBuilding::GetProcessingItems() const {
    return TArray<FItemProcessingData>();
}

UItem* AItemProcessingBuilding::GetProcessingItem(int32 Index) const {
    return NULL;
}

FName AItemProcessingBuilding::GetOutputSocketForItem(int32 Index) const {
    return NAME_None;
}

float AItemProcessingBuilding::GetItemProgress(int32 Index) const {
    return 0.0f;
}

int32 AItemProcessingBuilding::GetCurrentProcessingItemIndex() const {
    return 0;
}

int32 AItemProcessingBuilding::GetCurrentItemCount() const {
    return 0;
}

USceneComponent* AItemProcessingBuilding::GetComponentForSocket(FName SocketName) const {
    return NULL;
}

bool AItemProcessingBuilding::CanProcessItem(const UItem* Item) const {
    return false;
}

bool AItemProcessingBuilding::CanAddItem(const UItem* Item) const {
    return false;
}

void AItemProcessingBuilding::AddItemToProcess(UItem* Item, ASurvivalCharacter* InInstigator, int32 SlotToUse) {
}

void AItemProcessingBuilding::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AItemProcessingBuilding, ProcessingItems);
}

AItemProcessingBuilding::AItemProcessingBuilding() {
    this->MaxSimultaneousItems = 3;
    this->MaxWorkingItems = 3;
    this->FlavorImage = NULL;
}

