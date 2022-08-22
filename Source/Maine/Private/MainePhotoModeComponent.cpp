#include "MainePhotoModeComponent.h"
#include "Net/UnrealNetwork.h"

void UMainePhotoModeComponent::UIEnterPhotoMode() {
}

void UMainePhotoModeComponent::SetPlayerUsingChatBox(bool InUsingChat) {
}

void UMainePhotoModeComponent::ServerUIEnterPhotoMode_Implementation() {
}

void UMainePhotoModeComponent::ServerNotifyPhotoTaken_Implementation() {
}

void UMainePhotoModeComponent::ClientUIEnterPhotoMode_Implementation() {
}

void UMainePhotoModeComponent::ClientOnPlayerInMenuChanged_Implementation(bool InPlayerInMenu) {
}

void UMainePhotoModeComponent::ClientAddNotificationMessage_Implementation(const FString& Message) {
}

void UMainePhotoModeComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UMainePhotoModeComponent, PlayerIsInteractHolding);
}

UMainePhotoModeComponent::UMainePhotoModeComponent() {
    this->PlayerIsInteractHolding = false;
}

