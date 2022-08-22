#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ActorComponent -FallbackName=ActorComponent
#include "ETargetPriorityType.h"
#include "EBuildingTargettingType.h"
#include "PossessableInterface.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=AIModule -ObjectName=AIStimulus -FallbackName=AIStimulus
#include "AITargettingComponent.generated.h"

class AActor;

UCLASS(BlueprintType, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class MAINE_API UAITargettingComponent : public UActorComponent, public IPossessableInterface {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere)
    float SuspiciousThreshold;
    
    UPROPERTY(EditAnywhere)
    float DangerThreshold;
    
    UPROPERTY(EditAnywhere)
    float TargetExpirationTime;
    
    UPROPERTY(EditAnywhere)
    float ThreatDecayTime;
    
    UPROPERTY(EditAnywhere)
    float DamageThreatModifier;
    
    UPROPERTY(EditAnywhere)
    float HearingThreatModifier;
    
    UPROPERTY(EditAnywhere)
    float TargetDistanceModifier;
    
    UPROPERTY(EditAnywhere)
    EBuildingTargettingType BuildingTargetType;
    
    UPROPERTY(EditAnywhere)
    ETargetPriorityType TargetPriorityType;
    
    UPROPERTY(EditAnywhere)
    bool bTargetsCanExpire;
    
    UPROPERTY(EditAnywhere)
    bool UseRandomTarget;
    
    UPROPERTY(EditAnywhere)
    float RandomTargetModeSelectInterval;
    
    UPROPERTY(EditAnywhere)
    float ProbabilitySelectedRandomModeTarget;
    
    UPROPERTY(Transient)
    TWeakObjectPtr<AActor> CachedRandomTargetKey;
    
public:
    UAITargettingComponent();
private:
    UFUNCTION()
    void ValidateTargets();
    
    UFUNCTION()
    void OnPerceptionUpdate(AActor* Actor, FAIStimulus Stimulus);
    
public:
    UFUNCTION(BlueprintPure)
    AActor* GetTargetActor() const;
    
    UFUNCTION()
    void CacheRandomOverrideTarget();
    
    UFUNCTION()
    void CacheCurrentTarget();
    
    
    // Fix for true pure virtual functions not being implemented
};

