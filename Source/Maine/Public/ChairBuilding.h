#pragma once
#include "CoreMinimal.h"
#include "Building.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=OEIText -ObjectName=LocString -FallbackName=LocString
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Transform -FallbackName=Transform
#include "EHealthState.h"
#include "ChairBuilding.generated.h"

class AActor;
class ASurvivalPlayerCharacter;
class UAnimMontage;

UCLASS(Abstract)
class MAINE_API AChairBuilding : public ABuilding {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, Transient, ReplicatedUsing=OnRep_SittingCharacter)
    ASurvivalPlayerCharacter* SittingCharacter;
    
    UPROPERTY(Replicated, Transient)
    bool bUseCooldown;
    
    UPROPERTY(EditAnywhere)
    UAnimMontage* SittingMontage;
    
    UPROPERTY(EditAnywhere)
    FLocString InteractText;
    
public:
    AChairBuilding();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
protected:
    UFUNCTION(BlueprintCallable)
    void SetupSittingCharacterTransform(const FTransform& Transform);
    
    UFUNCTION()
    void ResetChairCooldown();
    
    UFUNCTION()
    void OnRep_SittingCharacter(ASurvivalPlayerCharacter* PreviousCharacter);
    
    UFUNCTION()
    void OnCharacterSittingChanged(bool bSitting);
    
    UFUNCTION()
    void OnCharacterHealthStateChanged(EHealthState NewHealthState);
    
    UFUNCTION()
    void OnCharacterDestroyed(AActor* DestroyedActor);
    
public:
    UFUNCTION(BlueprintPure)
    bool IsOccupied() const;
    
protected:
    UFUNCTION(BlueprintImplementableEvent, BlueprintPure)
    FTransform GetSitTargetTransform() const;
    
};

