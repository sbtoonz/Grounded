#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ActorComponent -FallbackName=ActorComponent
#include "ReplicatedFoliageSet.h"
#include "PersistentInterface.h"
#include "FoliageDamagedDelegateDelegate.h"
#include "EFoliageSwapFlags.h"
#include "FoliageKey.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Transform -FallbackName=Transform
#include "EFoliageOperationFlags.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Guid -FallbackName=Guid
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Box -FallbackName=Box
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayTags -ObjectName=GameplayTag -FallbackName=GameplayTag
#include "FoliageManagerComponent.generated.h"

class UInstancedStaticMeshComponent;
class UBaseLODActor;
class ARespawnableInstancedMeshGroup;
class AActor;
class UFoliageType_InstancedStaticMesh;

UCLASS(BlueprintType, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class MAINE_API UFoliageManagerComponent : public UActorComponent, public IPersistentInterface {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(Transient, ReplicatedUsing=OnRep_RemovedFoliageItems)
    FReplicatedFoliageSet RemovedFoliageItems;
    
    UPROPERTY(Transient, ReplicatedUsing=OnRep_AddedFoliageItems)
    FReplicatedFoliageSet AddedFoliageItems;
    
    UPROPERTY(Export, Transient)
    TArray<UInstancedStaticMeshComponent*> DefaultRemovedISMs;
    
public:
    UPROPERTY(BlueprintAssignable)
    FFoliageDamagedDelegate OnFoliageDamaged;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    TArray<TSoftClassPtr<ARespawnableInstancedMeshGroup>> SecondaryGroups;
    
    UFoliageManagerComponent();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
    UFUNCTION(BlueprintCallable)
    void SetSwappedActor(const FFoliageKey& Key, UBaseLODActor* Actor);
    
    UFUNCTION(BlueprintCallable)
    void SetFoliageInstanceDefaultState(FFoliageKey FoliageKey);
    
    UFUNCTION(BlueprintCallable)
    UBaseLODActor* ReplaceFoliageMeshWithBlueprintActor(FFoliageKey FoliageKey, EFoliageSwapFlags Flags);
    
    UFUNCTION(BlueprintCallable)
    void RemoveFoliageInstance(FFoliageKey FoliageKey, EFoliageOperationFlags Flags);
    
    UFUNCTION(BlueprintCallable)
    void ReaddFoliageInstance(FFoliageKey FoliageKey, EFoliageOperationFlags Flags);
    
protected:
    UFUNCTION()
    void OnRest(float RestDuration);
    
    UFUNCTION()
    void OnRep_RemovedFoliageItems();
    
    UFUNCTION()
    void OnRep_AddedFoliageItems();
    
public:
    UFUNCTION(NetMulticast, Unreliable)
    void MulticastPlayFoliageInteractEffects(const TArray<FTransform>& SpawnTransforms, FFoliageKey FoliageKey);
    
    UFUNCTION(BlueprintPure)
    bool IsRemovedFoliageInstance(const FFoliageKey& FoliageKey) const;
    
    UFUNCTION(BlueprintPure)
    bool IsFullyRemovedFoliage(const FFoliageKey& FoliageKey) const;
    
    UFUNCTION()
    void HandleGlobalVariableChanged(const FGuid& GlobalVariableID, int32 VariableValue, AActor* Instigator);
    
    UFUNCTION(BlueprintPure)
    bool GetVisibleTransform(FFoliageKey FoliageKey, FTransform& Transform, bool bWorldSpace) const;
    
    UFUNCTION(BlueprintPure)
    FFoliageKey GetNearestInstanceOfType(const TArray<UFoliageType_InstancedStaticMesh*>& Types, const FVector& Center) const;
    
    UFUNCTION(BlueprintPure)
    TArray<FFoliageKey> GetInstancesOverlappingSphereOfType(UFoliageType_InstancedStaticMesh* Type, const FVector& Center, float Radius, bool bSphereInWorldSpace) const;
    
    UFUNCTION(BlueprintPure)
    TArray<FFoliageKey> GetInstancesOverlappingSphere(const FVector& Center, float Radius, bool bSphereInWorldSpace) const;
    
    UFUNCTION(BlueprintPure)
    TArray<FFoliageKey> GetInstancesOverlappingBox(const FBox& Box, bool bBoxInWorldSpace) const;
    
    UFUNCTION(BlueprintPure)
    bool GetFoliageIsClimbable(FFoliageKey FoliageKey, FGameplayTag ClimberTag) const;
    
    UFUNCTION(BlueprintPure)
    bool GetFoliageHasClimbRole(FFoliageKey FoliageKey, FGameplayTag RoleTag) const;
    
    UFUNCTION(BlueprintPure)
    bool GetCurrentTransform(FFoliageKey FoliageKey, FTransform& Transform, bool bWorldSpace) const;
    
    UFUNCTION(BlueprintPure)
    UBaseLODActor* GetBlueprintInstance(FFoliageKey FoliageKey) const;
    
    UFUNCTION(BlueprintCallable)
    void ClearGroundFoliage(FVector Location, float Radius, FBox BoundingBox);
    
    
    // Fix for true pure virtual functions not being implemented
};

