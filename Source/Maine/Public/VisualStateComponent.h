#pragma once
#include "CoreMinimal.h"
#include "EHealthVisualState.h"
#include "CustomVisualStateChangeDelegate.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ActorComponent -FallbackName=ActorComponent
#include "PersistentInterface.h"
#include "HealthStateChangeDelegate.h"
#include "HealthStateMesh.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=RuntimeFloatCurve -FallbackName=RuntimeFloatCurve
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayTags -ObjectName=GameplayTag -FallbackName=GameplayTag
#include "HealthStateMeshList.h"
#include "DamageInfo.h"
#include "VisualStateComponent.generated.h"

class UStaticMeshComponent;
class UHealthComponent;
class AController;
class UBaseLODActor;
class UStaticMesh;

UCLASS(BlueprintType, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class MAINE_API UVisualStateComponent : public UActorComponent, public IPersistentInterface {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable)
    FHealthStateChange OnHealthStateChange;
    
    UPROPERTY(BlueprintAssignable)
    FCustomVisualStateChange OnCustomVisualStateChange;
    
protected:
    UPROPERTY(EditDefaultsOnly)
    FName PrimaryMeshComponentName;
    
    UPROPERTY(EditAnywhere)
    bool bStartActive;
    
    UPROPERTY(EditDefaultsOnly)
    bool bDamageStateEffects;
    
    UPROPERTY(EditDefaultsOnly)
    FRuntimeFloatCurve DamageStateCurve;
    
    UPROPERTY(EditDefaultsOnly)
    int8 DamageMaxLODLevel;
    
    UPROPERTY(Transient, ReplicatedUsing=OnRep_HitLocations)
    TArray<FVector> HitLocations;
    
    UPROPERTY(Transient, ReplicatedUsing=OnRep_HealthState)
    EHealthVisualState HealthState;
    
    UPROPERTY(EditDefaultsOnly)
    TArray<FHealthStateMesh> HealthStateMeshes;
    
    UPROPERTY(EditDefaultsOnly)
    TMap<FGameplayTag, FHealthStateMeshList> AdditionalHealthStateMeshes;
    
    UPROPERTY(Export, Transient)
    UHealthComponent* HealthComponent;
    
    UPROPERTY(Export, Transient)
    UStaticMeshComponent* MeshComponent;
    
public:
    UVisualStateComponent();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
    UFUNCTION(BlueprintCallable)
    void SetCustomVisualState(FGameplayTag CustomVisualState);
    
    UFUNCTION(BlueprintCallable)
    void SetActiveMeshTag(FGameplayTag NewActiveTag);
    
    UFUNCTION(BlueprintCallable)
    void ResetActiveMeshTag();
    
protected:
    UFUNCTION()
    void OnRep_HitLocations();
    
    UFUNCTION()
    void OnRep_HealthState(EHealthVisualState OldHealthState);
    
    UFUNCTION()
    void OnHit(float Damage, const FDamageInfo& DamageInfo, AController* InstigatedBy, UBaseLODActor* DamageCauser, bool IsKillingBlow);
    
    UFUNCTION()
    void OnHealthChange(UHealthComponent* SourceHealthComponent, float CurrentHealth, float OldHealth);
    
public:
    UFUNCTION(BlueprintPure)
    bool HasMeshTag(const FGameplayTag& Tag) const;
    
    UFUNCTION(BlueprintPure)
    UStaticMesh* GetMesh(EHealthVisualState NewHealthState, const FGameplayTag& MeshTag) const;
    
    UFUNCTION(BlueprintCallable)
    void ClearCustomVisualState(FGameplayTag CustomVisualState);
    
    
    // Fix for true pure virtual functions not being implemented
};

