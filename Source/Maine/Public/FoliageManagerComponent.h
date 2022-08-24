#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "PersistentInterface.h"
#include "FoliageKey.h"
#include "ReplicatedFoliageSet.h"
#include "FoliageDamagedDelegateDelegate.h"
#include "EFoliageSwapFlags.h"
#include "EFoliageOperationFlags.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "GameplayTagContainer.h"
#include "FoliageManagerComponent.generated.h"

class UInstancedStaticMeshComponent;
class UBaseLODActor;
class ARespawnableInstancedMeshGroup;
class UFoliageType_InstancedStaticMesh;
class AActor;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class MAINE_API UFoliageManagerComponent : public UActorComponent, public IPersistentInterface {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_RemovedFoliageItems, meta=(AllowPrivateAccess=true))
    FReplicatedFoliageSet RemovedFoliageItems;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_AddedFoliageItems, meta=(AllowPrivateAccess=true))
    FReplicatedFoliageSet AddedFoliageItems;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, Transient, meta=(AllowPrivateAccess=true))
    TArray<UInstancedStaticMeshComponent*> DefaultRemovedISMs;
    
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFoliageDamagedDelegate OnFoliageDamaged;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
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
    UFUNCTION(BlueprintCallable)
    void OnRest(float RestDuration);
    
    UFUNCTION(BlueprintCallable)
    void OnRep_RemovedFoliageItems();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_AddedFoliageItems();
    
public:
    UFUNCTION(BlueprintCallable, NetMulticast, Unreliable)
    void MulticastPlayFoliageInteractEffects(const TArray<FTransform>& SpawnTransforms, FFoliageKey FoliageKey);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsRemovedFoliageInstance(const FFoliageKey& FoliageKey) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsFullyRemovedFoliage(const FFoliageKey& FoliageKey) const;
    
    UFUNCTION(BlueprintCallable)
    void HandleGlobalVariableChanged(const FGuid& GlobalVariableID, int32 VariableValue, AActor* Instigator);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetVisibleTransform(FFoliageKey FoliageKey, FTransform& Transform, bool bWorldSpace) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FFoliageKey GetNearestInstanceOfType(const TArray<UFoliageType_InstancedStaticMesh*>& Types, const FVector& Center) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<FFoliageKey> GetInstancesOverlappingSphereOfType(UFoliageType_InstancedStaticMesh* Type, const FVector& Center, float Radius, bool bSphereInWorldSpace) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<FFoliageKey> GetInstancesOverlappingSphere(const FVector& Center, float Radius, bool bSphereInWorldSpace) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<FFoliageKey> GetInstancesOverlappingBox(const FBox& Box, bool bBoxInWorldSpace) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetFoliageIsClimbable(FFoliageKey FoliageKey, FGameplayTag ClimberTag) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetFoliageHasClimbRole(FFoliageKey FoliageKey, FGameplayTag RoleTag) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetCurrentTransform(FFoliageKey FoliageKey, FTransform& Transform, bool bWorldSpace) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UBaseLODActor* GetBlueprintInstance(FFoliageKey FoliageKey) const;
    
    UFUNCTION(BlueprintCallable)
    void ClearGroundFoliage(FVector Location, float Radius, FBox BoundingBox);
    
    
    // Fix for true pure virtual functions not being implemented
};

