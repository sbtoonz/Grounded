#include "LODActorManagerComponent.h"
#include "Templates/SubclassOf.h"

class UBaseLODActor;
class AActor;
class UActorComponent;
class UBaseLODComponent;

void ULODActorManagerComponent::OnLODActorDestroyed(UBaseLODActor* LODActor) {
}

bool ULODActorManagerComponent::HasAtLeastLODActorsOfExactlyClassSoft(TSoftClassPtr<AActor> Class, int32 Count) const {
    return false;
}

FClassTreeNode ULODActorManagerComponent::GetTrackedActorClassTree() {
    return FClassTreeNode{};
}

TArray<UBaseLODActor*> ULODActorManagerComponent::GetLODActorsOfExactlyLODActorClass(UClass* Class) {
    return TArray<UBaseLODActor*>();
}

TArray<UBaseLODActor*> ULODActorManagerComponent::GetLODActorsOfExactlyClassSoft(TSoftClassPtr<AActor> Class) {
    return TArray<UBaseLODActor*>();
}

TArray<UBaseLODActor*> ULODActorManagerComponent::GetLODActorsOfExactlyClass(TSubclassOf<AActor> Class) {
    return TArray<UBaseLODActor*>();
}

TArray<UBaseLODActor*> ULODActorManagerComponent::GetLODActorsImplementingLODActorClass(UClass* Class) {
    return TArray<UBaseLODActor*>();
}

TArray<UBaseLODActor*> ULODActorManagerComponent::GetLODActorsImplementingClassSoft(TSoftClassPtr<AActor> Class) {
    return TArray<UBaseLODActor*>();
}

TArray<UBaseLODActor*> ULODActorManagerComponent::GetLODActorsImplementingClass(TSubclassOf<AActor> Class) {
    return TArray<UBaseLODActor*>();
}

TArray<TSubclassOf<UBaseLODActor>> ULODActorManagerComponent::GetAllTrackedLODActorClasses() {
    return TArray<TSubclassOf<UBaseLODActor>>();
}

TArray<TSoftClassPtr<AActor>> ULODActorManagerComponent::GetAllTrackedActorClasses() {
    return TArray<TSoftClassPtr<AActor>>();
}

TArray<UBaseLODActor*> ULODActorManagerComponent::GetAllLODActors() {
    return TArray<UBaseLODActor*>();
}

UBaseLODComponent* ULODActorManagerComponent::FindLODComponentForComponent(const UActorComponent* Component) {
    return NULL;
}

UBaseLODActor* ULODActorManagerComponent::FindLODActorForComponent(const UActorComponent* Component) {
    return NULL;
}

UBaseLODActor* ULODActorManagerComponent::FindLODActorForActor(const AActor* Actor) {
    return NULL;
}

UBaseLODActor* ULODActorManagerComponent::FindLODActor(FGuid Guid) {
    return NULL;
}

UBaseLODActor* ULODActorManagerComponent::CreateLODActorOfType(TSoftClassPtr<AActor> ActorClass, FTransform Transform) {
    return NULL;
}

ULODActorManagerComponent::ULODActorManagerComponent() {
    this->SupportedLODComponents.AddDefaulted(10);
}

