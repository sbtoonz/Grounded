#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ActorComponent -FallbackName=ActorComponent
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=DataTableRowHandle -FallbackName=DataTableRowHandle
#include "EBlockType.h"
#include "BlockComponent.generated.h"

class UItem;
class UAnimMontage;
class USoundBase;
class UAttack;
class UVisualEffect;

UCLASS(BlueprintType, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class MAINE_API UBlockComponent : public UActorComponent {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Transient, ReplicatedUsing=OnRep_IsBlocking)
    uint8 bIsBlocking: 1;
    
    UPROPERTY(Transient)
    uint8 bWantsToBlock: 1;
    
    UPROPERTY(EditDefaultsOnly)
    UAnimMontage* DefaultBlockAnim;
    
    UPROPERTY(EditAnywhere)
    float BlockAngle;
    
    UPROPERTY(EditAnywhere)
    float DefaultBlockDamageMultiplier;
    
    UPROPERTY(EditAnywhere)
    float PerfectBlockDamageMultiplier;
    
    UPROPERTY(EditAnywhere)
    float PerfectBlockWindow;
    
    UPROPERTY(EditAnywhere)
    float PerfectBlockStunRefundPercentage;
    
    UPROPERTY(EditAnywhere)
    FDataTableRowHandle PerfectBlockAttackData;
    
    UPROPERTY(Transient)
    UAttack* PerfectBlockAttack;
    
    UPROPERTY(EditAnywhere)
    USoundBase* DefaultBlockSound;
    
    UPROPERTY(EditAnywhere)
    USoundBase* DefaultPerfectBlockSound;
    
    UPROPERTY(EditAnywhere)
    USoundBase* LowDurabilityBlockSound;
    
    UPROPERTY(EditAnywhere)
    float LowDurabilityThreshold;
    
    UPROPERTY(EditAnywhere)
    UVisualEffect* BlockEffect;
    
    UPROPERTY(EditAnywhere)
    UVisualEffect* PerfectBlockEffect;
    
    UPROPERTY(EditAnywhere)
    UVisualEffect* OffhandBlockEffect;
    
    UPROPERTY(EditAnywhere)
    UVisualEffect* OffhandPerfectBlockEffect;
    
public:
    UBlockComponent();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
private:
    UFUNCTION()
    void OnStatusEffectsChanged();
    
    UFUNCTION()
    void OnRep_IsBlocking();
    
    UFUNCTION(NetMulticast, Unreliable)
    void MulticastPlayBlockEffects(EBlockType BlockType);
    
public:
    UFUNCTION(BlueprintPure)
    bool IsBlocking() const;
    
    UFUNCTION(BlueprintPure)
    float GetMaxBlockMeter() const;
    
    UFUNCTION(BlueprintPure)
    float GetBlockMeter() const;
    
    UFUNCTION(BlueprintPure)
    UItem* GetBlockItem() const;
    
};

