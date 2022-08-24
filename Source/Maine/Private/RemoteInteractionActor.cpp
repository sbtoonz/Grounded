#include "RemoteInteractionActor.h"
#include "Net/UnrealNetwork.h"

class AActor;

void ARemoteInteractionActor::Use_Implementation(AActor* InstigatedBy) {
}

void ARemoteInteractionActor::OnRep_InteractedByList() {
}

void ARemoteInteractionActor::HandleRemoteInteractionState_Implementation(bool bIsRemoteInteracted) {
}

FText ARemoteInteractionActor::GetUseText_Implementation(const AActor* InstigatedBy) const {
    return FText::GetEmpty();
}

EInteractionType ARemoteInteractionActor::GetUseInteractionType_Implementation(const AActor* InstigatedBy) const {
    return EInteractionType::None;
}

bool ARemoteInteractionActor::CanUse_Implementation(const AActor* InstigatedBy) const {
    return false;
}

void ARemoteInteractionActor::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(ARemoteInteractionActor, InteractedByList);
}

ARemoteInteractionActor::ARemoteInteractionActor() {
    this->HoldToUse = false;
    this->OverrideInteractAnim = NULL;
}

