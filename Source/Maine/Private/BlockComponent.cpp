#include "BlockComponent.h"
#include "Net/UnrealNetwork.h"

class UItem;

void UBlockComponent::OnStatusEffectsChanged() {
}

void UBlockComponent::OnRep_IsBlocking() {
}

void UBlockComponent::MulticastPlayBlockEffects_Implementation(EBlockType BlockType) {
}

bool UBlockComponent::IsBlocking() const {
    return false;
}

float UBlockComponent::GetMaxBlockMeter() const {
    return 0.0f;
}

float UBlockComponent::GetBlockMeter() const {
    return 0.0f;
}

UItem* UBlockComponent::GetBlockItem() const {
    return NULL;
}

void UBlockComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UBlockComponent, bIsBlocking);
}

UBlockComponent::UBlockComponent() {
    this->bIsBlocking = false;
    this->bWantsToBlock = false;
    this->DefaultBlockAnim = NULL;
    this->BlockAngle = 360.00f;
    this->DefaultBlockDamageMultiplier = 0.00f;
    this->PerfectBlockDamageMultiplier = 0.00f;
    this->PerfectBlockWindow = 1.00f;
    this->PerfectBlockStunRefundPercentage = 0.25f;
    this->PerfectBlockAttack = NULL;
    this->DefaultBlockSound = NULL;
    this->DefaultPerfectBlockSound = NULL;
    this->LowDurabilityBlockSound = NULL;
    this->LowDurabilityThreshold = 0.25f;
    this->BlockEffect = NULL;
    this->PerfectBlockEffect = NULL;
    this->OffhandBlockEffect = NULL;
    this->OffhandPerfectBlockEffect = NULL;
}

