#pragma once
#include "CoreMinimal.h"
#include "SurvivalCreature.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Rotator -FallbackName=Rotator
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
#include "FlySwimSurvivalCharacter.generated.h"

class UNavigationPathWithProgress;

UCLASS(Abstract)
class MAINE_API AFlySwimSurvivalCharacter : public ASurvivalCreature {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float AcceptableDistanceToWaypoint;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    float RotationInterpSlowDist;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float RollSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float RollStrength;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float MaxPitch;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bWiggleEnabled;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    float InMotionWiggleAmplitude;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    float IdleWiggleAmplitude;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    float PreferredElevation;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    uint8 bAllowStrafe: 1;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    uint8 bAllowPathfinding: 1;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    uint8 bPhysicsOnDeath: 1;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    uint8 bIsInHoldInteraction: 1;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    float DerpFactor;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    float TakeoffLaunchVelocity;
    
protected:
    UPROPERTY(BlueprintReadWrite, Transient)
    FRotator CurrentRotation;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    uint8 bPseudoLargePawn: 1;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    uint8 bDoRecoil: 1;
    
    UPROPERTY(Transient)
    UNavigationPathWithProgress* CurrentNavigationPath;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    FVector WiggleOffset;
    
private:
    UPROPERTY(EditAnywhere)
    uint8 bShowGoalLocation: 1;
    
    UPROPERTY(Transient, ReplicatedUsing=OnRep_BaseSeed)
    int32 BaseSeed;
    
public:
    AFlySwimSurvivalCharacter();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
private:
    UFUNCTION()
    void OnRep_BaseSeed();
    
public:
    UFUNCTION(BlueprintCallable)
    void InterpolateRotationTo(FRotator InTargetRotation, const float DeltaTime);
    
};

