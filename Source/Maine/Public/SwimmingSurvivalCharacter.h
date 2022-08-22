#pragma once
#include "CoreMinimal.h"
#include "FlySwimSurvivalCharacter.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ETraceTypeQuery -FallbackName=ETraceTypeQuery
#include "SwimmingCharacterMovementSettings.h"
#include "ESwimmingMovementType.h"
#include "SwimmingSurvivalCharacter.generated.h"

class AActor;
class UArrowComponent;
class ASurvivalAIController;

UCLASS(Abstract)
class MAINE_API ASwimmingSurvivalCharacter : public AFlySwimSurvivalCharacter {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, Export, VisibleAnywhere)
    UArrowComponent* ForwardArrow;
    
    UPROPERTY(BlueprintReadWrite, Export, VisibleAnywhere)
    UArrowComponent* UpArrow;
    
    UPROPERTY(BlueprintReadWrite, Export, VisibleAnywhere)
    UArrowComponent* DownArrow;
    
    UPROPERTY(BlueprintReadWrite, Export, VisibleAnywhere)
    UArrowComponent* LeftArrow;
    
    UPROPERTY(BlueprintReadWrite, Export, VisibleAnywhere)
    UArrowComponent* RightArrow;
    
    UPROPERTY(Export, Transient)
    TArray<UArrowComponent*> ArrowTraceComponents;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bCanUseSteeringBehavior;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float SurfaceBuffer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FSwimmingCharacterMovementSettings DefaultMovementSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TMap<ESwimmingMovementType, FSwimmingCharacterMovementSettings> CharacterMovementSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float AvoidanceLength_Forward;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float AvoidanceLength_Side;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float AvoidanceStrength_Forward;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float AvoidanceStrength_Side;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float AvoidanceStrengthMultiplier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float AvoidanceSideLengthExtension;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float MaxVerticalAngleDot;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float CreaturePushMultiplier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float MultiHitStrengthMultiplier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float SphereCastRadius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float ClampFactor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float LevelOutFactor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float AvoidanceInterpSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bCanSprintDuringWander;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float WanderAngle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<AActor*> ActorsToIgnore;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    TEnumAsByte<ETraceTypeQuery> TraceType;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    float MaxAllowableFleeTime;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    float MaxTimeBeforeSprint;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    float MinTimeBeforeSprint;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    float SprintDuration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bShowArrowTrace;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bShowDirection;
    
private:
    UPROPERTY(Transient)
    ASurvivalAIController* AIController;
    
public:
    ASwimmingSurvivalCharacter();
    UFUNCTION()
    float GetMinWanderHeight() const;
    
    UFUNCTION()
    float GetMaxWanderHeight() const;
    
    UFUNCTION(BlueprintCallable)
    bool GetCanUseSteeringBehaviors();
    
    UFUNCTION(BlueprintCallable)
    void EnableSteeringBehavior(bool bSteeringEnabled);
    
};

