#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=CharacterMovementComponent -FallbackName=CharacterMovementComponent
#include "RelevanceOptimizationInterface.h"
#include "StartsClimbingDelegateDelegate.h"
#include "UnderwaterChangedDelegateDelegate.h"
#include "OnSittingModeChangedDelegateDelegate.h"
#include "EClimbSplineRotationType.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayTags -ObjectName=GameplayTag -FallbackName=GameplayTag
#include "ClimbableSplineKey.h"
#include "AttractionComponentKey.h"
#include "EFootstepType.h"
#include "EDetachSplineReason.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=DamageEvent -FallbackName=DamageEvent
#include "DamageInfo.h"
#include "EGlidingStyle.h"
#include "ECameraDisplayMode.h"
#include "MaineCharMovementComponent.generated.h"

class AActor;
class UCurveFloat;
class UFootstepData;
class USoundBase;
class AZiplineLine;
class UCharacterMotionEaterComponent;

UCLASS(ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class MAINE_API UMaineCharMovementComponent : public UCharacterMovementComponent, public IRelevanceOptimizationInterface {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable)
    FStartsClimbingDelegate OnStartsClimbing;
    
    UPROPERTY(BlueprintAssignable)
    FUnderwaterChangedDelegate OnUnderwaterChanged;
    
    UPROPERTY(BlueprintAssignable)
    FOnSittingModeChangedDelegate OnSittingChanged;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float MaxSprintSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float MaxFlySprintSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float AnimMaxSpeedMultiplierRange;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float AnimAttackMaxSpeedMultiplierRange;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float BlockingSpeedModifier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float SprintStaminaRate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float GlideYawRate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float GlideRollRateMultiplier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float GlideBankRollMagnitude;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float GlideMinStartElevation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float ZiplineIgnoreCollisionDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float ZiplineMaxSpeedMultiplier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float ZiplineReattachDelay;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float ZiplineExitVelocityMultiplier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float ZiplineAscendAccel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float ZiplineMaxAscendSpeed;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    TSoftClassPtr<AActor> ZiplinePropTemplate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float MaxSwimSprintSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float ClimbingSprintSpeedMultiplier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FGameplayTag ClimbingSize;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    uint8 bExitSplinesAtEnds: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    EClimbSplineRotationType ClimbSplineRotationType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bAnyDamageExitsSpline;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bCanWallCrawl;
    
    UPROPERTY(EditAnywhere)
    UCurveFloat* MaxSpeedMultiplier_Nav;
    
    UPROPERTY(EditAnywhere)
    UCurveFloat* MaxSpeedMultiplier_Attack;
    
    UPROPERTY(EditAnywhere)
    UCurveFloat* MaxSpeedMultiplier_AbsoluteInv;
    
private:
    UPROPERTY(Transient)
    FClimbableSplineKey AttachedSpline;
    
    UPROPERTY(Transient)
    FAttractionComponentKey PerchedObject;
    
    UPROPERTY(EditAnywhere)
    TMap<EFootstepType, UFootstepData*> FootstepData;
    
    UPROPERTY(EditAnywhere)
    float CrouchingNoiseMultiplier;
    
    UPROPERTY(EditAnywhere)
    bool bUseMovementAudioLoops;
    
    UPROPERTY(EditAnywhere)
    bool bAudioLoopOnGroundOnly;
    
    UPROPERTY(EditAnywhere)
    USoundBase* WalkAudioLoop;
    
    UPROPERTY(EditAnywhere)
    USoundBase* SprintAudioLoop;
    
    UPROPERTY(EditAnywhere)
    float MovementLoopFadeInTime;
    
    UPROPERTY(EditAnywhere)
    float MovementLoopFadeOutTime;
    
    UPROPERTY(EditAnywhere)
    FName MovementLoopAttachName;
    
    UPROPERTY(EditAnywhere)
    USoundBase* AdditionalMovementAudioLoop;
    
    UPROPERTY(EditAnywhere)
    float AdditionalLoopFadeInTime;
    
    UPROPERTY(EditAnywhere)
    float AdditionalLoopFadeOutTime;
    
    UPROPERTY(EditAnywhere)
    FName AdditionalLoopAttachName;
    
    UPROPERTY(EditAnywhere)
    float AdditionalLoopChance;
    
    UPROPERTY(EditAnywhere)
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
    UFUNCTION()
    void OnFoliageDamaged(AActor* Sender, float Damage, const FDamageEvent& DamageEvent, FDamageInfo DamageInfo);
    
public:
    UFUNCTION(BlueprintPure)
    bool IsZiplining() const;
    
    UFUNCTION(BlueprintPure)
    bool IsUnderwater() const;
    
    UFUNCTION(BlueprintPure)
    bool IsStandingInWater() const;
    
    UFUNCTION(BlueprintPure)
    bool IsSprinting() const;
    
    UFUNCTION(BlueprintPure)
    bool IsSitting() const;
    
    UFUNCTION(BlueprintPure)
    bool IsPerched();
    
    UFUNCTION(BlueprintPure)
    bool IsGliding() const;
    
    UFUNCTION(BlueprintPure)
    bool IsClimbing() const;
    
    UFUNCTION(BlueprintPure)
    bool IsAutorunning() const;
    
    UFUNCTION(BlueprintPure)
    float GetZiplineReattachTime() const;
    
    UFUNCTION(BlueprintPure)
    float GetZiplinePosition() const;
    
    UFUNCTION(BlueprintPure)
    bool GetZiplineDirectionDown() const;
    
    UFUNCTION(BlueprintPure)
    float GetPreviousZiplineChangeTime() const;
    
    UFUNCTION(BlueprintPure)
    AZiplineLine* GetPreviousZipline() const;
    
    UFUNCTION(BlueprintPure)
    UCharacterMotionEaterComponent* GetMotionEater() const;
    
    UFUNCTION(BlueprintPure)
    float GetMaxGroundSpeed() const;
    
    UFUNCTION(BlueprintPure)
    EGlidingStyle GetGlidingStyle() const;
    
    UFUNCTION(BlueprintPure)
    ECameraDisplayMode GetCameraDisplayMode() const;
    
    UFUNCTION(BlueprintPure)
    AZiplineLine* GetAttachedZipline() const;
    
    UFUNCTION(BlueprintCallable)
    void DetachFromSpline(EDetachSplineReason Reason);
    
    UFUNCTION(BlueprintPure)
    bool CanZipUp() const;
    
    
    // Fix for true pure virtual functions not being implemented
};

