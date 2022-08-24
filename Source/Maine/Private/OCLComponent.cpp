#include "OCLComponent.h"
#include "Net/UnrealNetwork.h"

class AActor;

void UOCLComponent::Unlock(AActor* InstigatedBy) {
}

void UOCLComponent::ToggleOpen(AActor* InstigatedBy) {
}

void UOCLComponent::ToggleLock(AActor* InstigatedBy) {
}

void UOCLComponent::Open(AActor* InstigatedBy) {
}

void UOCLComponent::OnRep_IsOpen(bool bWasOpen) {
}

void UOCLComponent::OnRep_IsLocked() {
}

void UOCLComponent::MulticastNotifyOpenStateChanged_Implementation(bool bOpen, AActor* InstigatedBy) {
}

void UOCLComponent::Lock(AActor* InstigatedBy) {
}

bool UOCLComponent::IsOpen() const {
    return false;
}

bool UOCLComponent::IsLocked() const {
    return false;
}

bool UOCLComponent::HasKeyToUnlock(const AActor* InstigatedBy) const {
    return false;
}

void UOCLComponent::Close(AActor* InstigatedBy) {
}

void UOCLComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UOCLComponent, bIsLocked);
    DOREPLIFETIME(UOCLComponent, bIsOpen);
}

UOCLComponent::UOCLComponent() {
    this->bStartLocked = false;
    this->bUnlockAlsoOpens = true;
    this->bConsumeKey = false;
    this->bIsLocked = false;
    this->bIsOpen = false;
    this->bAllowInteractToOpen = true;
    this->KeyCount = 1;
    this->bHideRecipeIfUnknown = false;
}

