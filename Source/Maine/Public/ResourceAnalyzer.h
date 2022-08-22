#pragma once
#include "CoreMinimal.h"
#include "WidgetBuilding.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayTags -ObjectName=GameplayTag -FallbackName=GameplayTag
#include "ChargesChangedDelegateDelegate.h"
#include "PowerReservoir.h"
#include "ResourceAnalyzer.generated.h"

class USkeletalMeshComponent;
class UAnimMontage;

UCLASS(Abstract)
class MAINE_API AResourceAnalyzer : public AWidgetBuilding {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable)
    FChargesChangedDelegate OnChargesChanged;
    
protected:
    UPROPERTY(Transient, ReplicatedUsing=OnRep_PowerReservoir)
    FPowerReservoir PowerReservoir;
    
    UPROPERTY(EditDefaultsOnly)
    int32 MaxPowerCapacity;
    
    UPROPERTY(EditDefaultsOnly)
    int32 InitialCharges;
    
    UPROPERTY(EditDefaultsOnly)
    FGameplayTag PowerType;
    
    UPROPERTY(EditDefaultsOnly)
    int32 HoursPerCharge;
    
    UPROPERTY(Replicated)
    float LastUpdateTime;
    
    UPROPERTY(EditAnywhere)
    UAnimMontage* AnalyzeAnim;
    
    UPROPERTY(Export, Transient)
    USkeletalMeshComponent* SkelMesh;
    
public:
    AResourceAnalyzer();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
protected:
    UFUNCTION()
    void OnRep_PowerReservoir();
    
    UFUNCTION(NetMulticast, Unreliable)
    void MulticastPlayAnimMontage(UAnimMontage* AnimMontage);
    
public:
    UFUNCTION(BlueprintPure)
    bool IsFullyCharged() const;
    
    UFUNCTION(BlueprintPure)
    bool IsCharging() const;
    
    UFUNCTION(BlueprintPure)
    bool HasCharges() const;
    
    UFUNCTION(BlueprintPure)
    float GetNextChargeTime() const;
    
    UFUNCTION(BlueprintPure)
    int32 GetChargeCount() const;
    
    UFUNCTION(BlueprintPure)
    int32 GetChargeCapacity() const;
    
};

