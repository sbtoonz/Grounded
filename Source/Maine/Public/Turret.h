#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "CombatTrackerInterface.h"
#include "Building.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=DataTableRowHandle -FallbackName=DataTableRowHandle
#include "PlayerCombatTracker.h"
#include "Turret.generated.h"

class UAttack;
class USoundBase;
class APawn;
class UAnimMontage;
class USceneComponent;
class UPrimitiveComponent;
class USkeletalMeshComponent;
class UAttackHandlerComponent;
class UProximityInventoryComponent;
class ASurvivalPlayerCharacter;

UCLASS(Abstract)
class MAINE_API ATurret : public ABuilding, public ICombatTrackerInterface {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere)
    TSubclassOf<APawn> TurretPawnClass;
    
    UPROPERTY(EditAnywhere)
    uint8 bAttachMountedCharacter: 1;
    
    UPROPERTY(EditAnywhere)
    UAnimMontage* CharacterMountMontage;
    
    UPROPERTY(EditAnywhere)
    FName MountAttachSocket;
    
    UPROPERTY(EditAnywhere)
    FName UnmountSocket;
    
    UPROPERTY(EditAnywhere)
    uint8 bHideMountedCharacter: 1;
    
    UPROPERTY(EditAnywhere)
    float MaxPitchDown;
    
    UPROPERTY(EditAnywhere)
    float MaxPitchUp;
    
    UPROPERTY(EditAnywhere)
    float MaxYawDelta;
    
    UPROPERTY(EditAnywhere)
    float TurretRotationInterpSpeed;
    
    UPROPERTY(EditAnywhere)
    FDataTableRowHandle TurretAttackData;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float AttackCooldown;
    
    UPROPERTY(BlueprintReadOnly)
    float CooldownTimer;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FDataTableRowHandle AmmoItemData;
    
    UPROPERTY(EditAnywhere)
    uint8 bCanAutoFire: 1;
    
    UPROPERTY(EditAnywhere)
    USoundBase* HorizontalMovementAudioLoop;
    
    UPROPERTY(EditAnywhere)
    USoundBase* VerticalMovementAudioLoop;
    
    UPROPERTY(EditAnywhere)
    FName HorizonalMovementParameter;
    
    UPROPERTY(EditAnywhere)
    FName VerticalMovementParameter;
    
    UPROPERTY(EditAnywhere)
    float MovementLoopFadeInTime;
    
    UPROPERTY(EditAnywhere)
    float MovementLoopFadeOutTime;
    
    UPROPERTY(Transient)
    UAttack* TurretAttack;
    
    UPROPERTY(Export, Transient)
    USceneComponent* TurretComponent;
    
    UPROPERTY(Export, Transient)
    USceneComponent* TurretBaseComponent;
    
    UPROPERTY(Export, Transient)
    TArray<UPrimitiveComponent*> VisibiltyComponents;
    
    UPROPERTY(Export, Transient)
    USkeletalMeshComponent* SkelMesh;
    
    UPROPERTY(Replicated)
    uint8 bIsBusy: 1;
    
    UPROPERTY(Replicated, Transient)
    TArray<FPlayerCombatTracker> CombatTrackers;
    
    UPROPERTY(Replicated, Transient)
    uint8 bInCombat: 1;
    
    UPROPERTY(Export)
    UAttackHandlerComponent* AttackHandlerComponent;
    
    UPROPERTY(BlueprintReadOnly, Export)
    UProximityInventoryComponent* ProximityInventoryComponent;
    
    UPROPERTY(BlueprintReadOnly, ReplicatedUsing=OnRep_MountedCharacter)
    ASurvivalPlayerCharacter* MountedCharacter;
    
public:
    ATurret();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
protected:
    UFUNCTION(BlueprintImplementableEvent)
    void OnTurretExit(ASurvivalPlayerCharacter* Character);
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnTurretEnter(ASurvivalPlayerCharacter* Character);
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnTurretAttack(bool bAttackSuccess);
    
    UFUNCTION()
    void OnRep_MountedCharacter(ASurvivalPlayerCharacter* PreviousCharacter);
    
    UFUNCTION(NetMulticast, Reliable)
    void MulticastNotifyTurretAttack(bool bAttackSuccess);
    
    
    // Fix for true pure virtual functions not being implemented
};

