#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Pawn -FallbackName=Pawn
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Rotator -FallbackName=Rotator
#include "DamageDelegateDelegate.h"
#include "TurretPawn.generated.h"

class ASurvivalCharacter;
class ATurret;

UCLASS()
class MAINE_API ATurretPawn : public APawn {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable)
    FDamageDelegate OnKillTarget;
    
protected:
    UPROPERTY(ReplicatedUsing=OnRep_Turret)
    ATurret* Turret;
    
    UPROPERTY(ReplicatedUsing=OnRep_DesiredRotation)
    FRotator DesiredRotation;
    
    UPROPERTY(EditDefaultsOnly)
    float InputRotationScale;
    
    UPROPERTY(EditDefaultsOnly)
    float StickInputRotationScale;
    
public:
    ATurretPawn();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
    UFUNCTION(Reliable, Server, WithValidation)
    void ServerUpdateRotation(FRotator NewDesiredRotation);
    
    UFUNCTION(Reliable, Server, WithValidation)
    void ServerReleaseAttack();
    
    UFUNCTION(Reliable, Server, WithValidation)
    void ServerCancel();
    
    UFUNCTION(Reliable, Server, WithValidation)
    void ServerAttack();
    
protected:
    UFUNCTION()
    void OnRep_Turret(ATurret* PrevTurret);
    
    UFUNCTION()
    void OnRep_DesiredRotation();
    
public:
    UFUNCTION(Client, Reliable)
    void ClientSetEnemy(ASurvivalCharacter* Enemy);
    
};

