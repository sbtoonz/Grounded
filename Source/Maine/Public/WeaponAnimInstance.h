#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=AnimInstance -FallbackName=AnimInstance
#include "WeaponAnimInstance.generated.h"

UCLASS(NonTransient)
class MAINE_API UWeaponAnimInstance : public UAnimInstance {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool IsShadowAnim;
    
protected:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool IsFirstPerson;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool IsUnderwater;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool IsMoving;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool IsInAir;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool IsSwimming;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool IsCrouching;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool IsSprinting;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool IsAttacking;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool IsBlocking;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool IsThrowing;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool IsInCombat;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool IsTurning;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool IsEquipping;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float TurnDelta;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float AimPitch;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool bHasAmmo;
    
public:
    UWeaponAnimInstance();
};

