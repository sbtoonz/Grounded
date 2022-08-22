#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=AnimInstance -FallbackName=AnimInstance
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
#include "EGlidingStyle.h"
#include "ECreatureActivityMode.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayTags -ObjectName=GameplayTag -FallbackName=GameplayTag
#include "CharacterAnimInstance.generated.h"

UCLASS(NonTransient)
class MAINE_API UCharacterAnimInstance : public UAnimInstance {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly)
    bool IsChangingCameraDisplayMode;
    
    UPROPERTY(BlueprintReadOnly)
    bool IsEnteringOrEnteredPhotoMode;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool IsShadowAnim;
    
protected:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float AimPitch;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float Speed;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float SplineDirection;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FVector Velocity;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float Heading;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    uint8 IsMoving: 1;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    uint8 IsInAir: 1;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    uint8 IsFlying: 1;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    uint8 IsSwimming: 1;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    uint8 IsSitting: 1;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    EGlidingStyle GlidingStyle;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    uint8 bIsZiplining: 1;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    uint8 IsCrouching: 1;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    uint8 IsSprinting: 1;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    uint8 IsClimbingSpline: 1;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    uint8 IsAttacking: 1;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    uint8 IsBlocking: 1;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    uint8 IsThrowing: 1;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    uint8 IsInCombat: 1;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    uint8 IsDead: 1;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    uint8 IsIncapacitated: 1;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    uint8 IsReviving: 1;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    uint8 IsUnderwater: 1;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    uint8 IsFirstPerson: 1;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    uint8 HasWeapon: 1;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    uint8 HasOffhand: 1;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    uint8 IsHauling: 1;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    uint8 IsTurning: 1;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    uint8 IsEquipping: 1;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    uint8 IsAuthorityOrLocallyControlled: 1;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    ECreatureActivityMode ActivityMode;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float TurnDelta;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float TurnDeltaSmoothed;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    int32 Stance;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    int32 OffhandStance;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FVector LookAtPoint;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float LookAtDistance;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    uint8 bBigHeadMode: 1;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    uint8 bIKEnabled: 1;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    uint8 bStartDead: 1;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    uint8 bHasFlipperTag: 1;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FGameplayTag FlipperTag;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FGameplayTag VitalTag;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float VitalValue;
    
public:
    UCharacterAnimInstance();
};

