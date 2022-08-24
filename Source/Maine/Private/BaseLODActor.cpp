#include "BaseLODActor.h"
#include "Templates/SubclassOf.h"

class AActor;
class UActorLiteData;
class UBaseLODComponent;

void UBaseLODActor::SetLifeSpan(float InLifespan) {
}

void UBaseLODActor::OnFullActorPostInitializeComponents(AActor* Sender) {
}

AActor* UBaseLODActor::K2_GetFullActor() const {
    return NULL;
}

bool UBaseLODActor::IsFullActorTypeSoft(TSoftClassPtr<AActor> BaseType) const {
    return false;
}

bool UBaseLODActor::IsFullActorTypeLite(UActorLiteData* BaseType) const {
    return false;
}

bool UBaseLODActor::IsFullActorType(TSubclassOf<AActor> BaseType) const {
    return false;
}

void UBaseLODActor::HandleLifetimeExpired() {
}

void UBaseLODActor::HandleFullActorDestroyed(AActor* Actor) {
}

float UBaseLODActor::GetLifeSpan() const {
    return 0.0f;
}

UBaseLODComponent* UBaseLODActor::GetComponentByClass(TSubclassOf<UBaseLODComponent> InClass) const {
    return NULL;
}

FTransform UBaseLODActor::GetActorTransform() const {
    return FTransform{};
}

FQuat UBaseLODActor::GetActorRotation() const {
    return FQuat{};
}

FVector UBaseLODActor::GetActorLocation() const {
    return FVector{};
}

FVector UBaseLODActor::GetActorForwardVector() const {
    return FVector{};
}

TSoftClassPtr<AActor> UBaseLODActor::GetActorClassSoft() const {
    return NULL;
}

TSubclassOf<AActor> UBaseLODActor::GetActorClassHard() const {
    return NULL;
}

bool UBaseLODActor::ContainsActorTag(FName Tag) const {
    return false;
}

UBaseLODActor::UBaseLODActor() {
    this->LastFullActorSpawnTime = 0.00f;
    this->StandInActor = NULL;
    this->FullActor = NULL;
    this->ProxyActor = NULL;
    this->AttractionLODComponent = NULL;
    this->TeamLODComponent = NULL;
    this->HaulingLODComponent = NULL;
    this->LootLODComponent = NULL;
    this->ColonyMemberLODComponent = NULL;
}

