#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Pawn.h"
#include "DamageDelegateDelegate.h"
#include "UObject/NoExportTypes.h"
#include "TurretPawn.generated.h"

class ASurvivalCharacter;
class ATurret;

UCLASS(Blueprintable)
class MAINE_API ATurretPawn : public APawn {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDamageDelegate OnKillTarget;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_Turret, meta=(AllowPrivateAccess=true))
    ATurret* Turret;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_DesiredRotation, meta=(AllowPrivateAccess=true))
    FRotator DesiredRotation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float InputRotationScale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float StickInputRotationScale;
    
public:
    ATurretPawn();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerUpdateRotation(FRotator NewDesiredRotation);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerReleaseAttack();
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerCancel();
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerAttack();
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnRep_Turret(ATurret* PrevTurret);
    
    UFUNCTION(BlueprintCallable)
    void OnRep_DesiredRotation();
    
public:
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void ClientSetEnemy(ASurvivalCharacter* Enemy);
    
};

