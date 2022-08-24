#pragma once
#include "CoreMinimal.h"
#include "WidgetBuilding.h"
#include "GameplayTagContainer.h"
#include "ChargesChangedDelegateDelegate.h"
#include "PowerReservoir.h"
#include "ResourceAnalyzer.generated.h"

class UAnimMontage;
class USkeletalMeshComponent;

UCLASS(Abstract, Blueprintable)
class MAINE_API AResourceAnalyzer : public AWidgetBuilding {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FChargesChangedDelegate OnChargesChanged;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_PowerReservoir, meta=(AllowPrivateAccess=true))
    FPowerReservoir PowerReservoir;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MaxPowerCapacity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 InitialCharges;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag PowerType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 HoursPerCharge;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    float LastUpdateTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimMontage* AnalyzeAnim;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, Transient, meta=(AllowPrivateAccess=true))
    USkeletalMeshComponent* SkelMesh;
    
public:
    AResourceAnalyzer();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnRep_PowerReservoir();
    
    UFUNCTION(BlueprintCallable, NetMulticast, Unreliable)
    void MulticastPlayAnimMontage(UAnimMontage* AnimMontage);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsFullyCharged() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsCharging() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasCharges() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetNextChargeTime() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetChargeCount() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetChargeCapacity() const;
    
};

