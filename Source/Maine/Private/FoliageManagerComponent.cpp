#include "FoliageManagerComponent.h"
#include "Net/UnrealNetwork.h"

class UFoliageType_InstancedStaticMesh;
class UBaseLODActor;
class AActor;

void UFoliageManagerComponent::SetSwappedActor(const FFoliageKey& Key, UBaseLODActor* Actor) {
}

void UFoliageManagerComponent::SetFoliageInstanceDefaultState(FFoliageKey FoliageKey) {
}

UBaseLODActor* UFoliageManagerComponent::ReplaceFoliageMeshWithBlueprintActor(FFoliageKey FoliageKey, EFoliageSwapFlags Flags) {
    return NULL;
}

void UFoliageManagerComponent::RemoveFoliageInstance(FFoliageKey FoliageKey, EFoliageOperationFlags Flags) {
}

void UFoliageManagerComponent::ReaddFoliageInstance(FFoliageKey FoliageKey, EFoliageOperationFlags Flags) {
}

void UFoliageManagerComponent::OnRest(float RestDuration) {
}

void UFoliageManagerComponent::OnRep_RemovedFoliageItems() {
}

void UFoliageManagerComponent::OnRep_AddedFoliageItems() {
}

void UFoliageManagerComponent::MulticastPlayFoliageInteractEffects_Implementation(const TArray<FTransform>& SpawnTransforms, FFoliageKey FoliageKey) {
}

bool UFoliageManagerComponent::IsRemovedFoliageInstance(const FFoliageKey& FoliageKey) const {
    return false;
}

bool UFoliageManagerComponent::IsFullyRemovedFoliage(const FFoliageKey& FoliageKey) const {
    return false;
}

void UFoliageManagerComponent::HandleGlobalVariableChanged(const FGuid& GlobalVariableID, int32 VariableValue, AActor* Instigator) {
}

bool UFoliageManagerComponent::GetVisibleTransform(FFoliageKey FoliageKey, FTransform& Transform, bool bWorldSpace) const {
    return false;
}

FFoliageKey UFoliageManagerComponent::GetNearestInstanceOfType(const TArray<UFoliageType_InstancedStaticMesh*>& Types, const FVector& Center) const {
    return FFoliageKey{};
}

TArray<FFoliageKey> UFoliageManagerComponent::GetInstancesOverlappingSphereOfType(UFoliageType_InstancedStaticMesh* Type, const FVector& Center, float Radius, bool bSphereInWorldSpace) const {
    return TArray<FFoliageKey>();
}

TArray<FFoliageKey> UFoliageManagerComponent::GetInstancesOverlappingSphere(const FVector& Center, float Radius, bool bSphereInWorldSpace) const {
    return TArray<FFoliageKey>();
}

TArray<FFoliageKey> UFoliageManagerComponent::GetInstancesOverlappingBox(const FBox& Box, bool bBoxInWorldSpace) const {
    return TArray<FFoliageKey>();
}

bool UFoliageManagerComponent::GetFoliageIsClimbable(FFoliageKey FoliageKey, FGameplayTag ClimberTag) const {
    return false;
}

bool UFoliageManagerComponent::GetFoliageHasClimbRole(FFoliageKey FoliageKey, FGameplayTag RoleTag) const {
    return false;
}

bool UFoliageManagerComponent::GetCurrentTransform(FFoliageKey FoliageKey, FTransform& Transform, bool bWorldSpace) const {
    return false;
}

UBaseLODActor* UFoliageManagerComponent::GetBlueprintInstance(FFoliageKey FoliageKey) const {
    return NULL;
}

void UFoliageManagerComponent::ClearGroundFoliage(FVector Location, float Radius, FBox BoundingBox) {
}

void UFoliageManagerComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UFoliageManagerComponent, RemovedFoliageItems);
    DOREPLIFETIME(UFoliageManagerComponent, AddedFoliageItems);
}

UFoliageManagerComponent::UFoliageManagerComponent() {
}

