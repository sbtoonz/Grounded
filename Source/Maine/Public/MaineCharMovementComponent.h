#pragma once
#include "CoreMinimal.h"
#include "RelevanceOptimizationInterface.h"
#include "EGlidingStyle.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "StartsClimbingDelegateDelegate.h"
#include "EClimbSplineRotationType.h"
#include "EFootstepType.h"
#include "UnderwaterChangedDelegateDelegate.h"
#include "OnSittingModeChangedDelegateDelegate.h"
#include "ECameraDisplayMode.h"
#include "GameplayTagContainer.h"
#include "ClimbableSplineKey.h"
#include "AttractionComponentKey.h"
#include "EDetachSplineReason.h"
#include "Engine/EngineTypes.h"
#include "DamageInfo.h"
#include "MaineCharMovementComponent.generated.h"

class AActor;
class UCurveFloat;
class UFootstepData;
class USoundBase;
class AZiplineLine;
class UCharacterMotionEaterComponent;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class MAINE_API UMaineCharMovementComponent : public UCharacterMovementComponent, public IRelevanceOptimizationInterface {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FStartsClimbingDelegate OnStartsClimbing;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FUnderwaterChangedDelegate OnUnderwaterChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnSittingModeChangedDelegate OnSittingChanged;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxSprintSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxFlySprintSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AnimMaxSpeedMultiplierRange;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AnimAttackMaxSpeedMultiplierRange;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float BlockingSpeedModifier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SprintStaminaRate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float GlideYawRate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float GlideRollRateMultiplier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float GlideBankRollMagnitude;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float GlideMinStartElevation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ZiplineIgnoreCollisionDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ZiplineMaxSpeedMultiplier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ZiplineReattachDelay;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ZiplineExitVelocityMultiplier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ZiplineAscendAccel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ZiplineMaxAscendSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<AActor> ZiplinePropTemplate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxSwimSprintSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ClimbingSprintSpeedMultiplier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag ClimbingSize;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bExitSplinesAtEnds: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EClimbSplineRotationType ClimbSplineRotationType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAnyDamageExitsSpline;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bCanWallCrawl;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCurveFloat* MaxSpeedMultiplier_Nav;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCurveFloat* MaxSpeedMultiplier_Attack;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCurveFloat* MaxSpeedMultiplier_AbsoluteInv;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FClimbableSplineKey AttachedSpline;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FAttractionComponentKey PerchedObject;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EFootstepType, UFootstepData*> FootstepData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CrouchingNoiseMultiplier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUseMovementAudioLoops;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAudioLoopOnGroundOnly;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USoundBase* WalkAudioLoop;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USoundBase* SprintAudioLoop;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MovementLoopFadeInTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MovementLoopFadeOutTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName MovementLoopAttachName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USoundBase* AdditionalMovementAudioLoop;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AdditionalLoopFadeInTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AdditionalLoopFadeOutTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName AdditionalLoopAttachName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AdditionalLoopChance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AdditionalLoopMinDistance;
    
public:
    UMaineCharMovementComponent();
    UFUNCTION(BlueprintCallable)
    void Unperch(EDetachSplineReason Reason);
    
    UFUNCTION(BlueprintCallable)
    bool ToggleSprint();
    
    UFUNCTION(BlueprintCallable)
    bool ToggleGlide();
    
    UFUNCTION(BlueprintCallable)
    bool ToggleAutorun();
    
    UFUNCTION(BlueprintCallable)
    void SetStandingInWater(bool bInWater);
    
    UFUNCTION(BlueprintCallable)
    void SetIsSitting(bool bSitting);
    
    UFUNCTION(BlueprintCallable)
    void SetAutorun(bool bState);
    
    UFUNCTION(BlueprintCallable)
    bool Perch(const FAttractionComponentKey& Target);
    
private:
    UFUNCTION(BlueprintCallable)
    void OnFoliageDamaged(AActor* Sender, float Damage, const FDamageEvent& DamageEvent, FDamageInfo DamageInfo);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsZiplining() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsUnderwater() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsStandingInWater() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsSprinting() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsSitting() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsPerched();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsGliding() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsClimbing() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsAutorunning() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetZiplineReattachTime() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetZiplinePosition() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetZiplineDirectionDown() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetPreviousZiplineChangeTime() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AZiplineLine* GetPreviousZipline() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UCharacterMotionEaterComponent* GetMotionEater() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetMaxGroundSpeed() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EGlidingStyle GetGlidingStyle() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ECameraDisplayMode GetCameraDisplayMode() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AZiplineLine* GetAttachedZipline() const;
    
    UFUNCTION(BlueprintCallable)
    void DetachFromSpline(EDetachSplineReason Reason);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CanZipUp() const;
    
    
    // Fix for true pure virtual functions not being implemented
};

