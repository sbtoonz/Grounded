#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "PossessableInterface.h"
#include "ETargetPriorityType.h"
#include "EBuildingTargettingType.h"
#include "Perception/AIPerceptionTypes.h"
#include "AITargettingComponent.generated.h"

class AActor;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class MAINE_API UAITargettingComponent : public UActorComponent, public IPossessableInterface {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SuspiciousThreshold;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DangerThreshold;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TargetExpirationTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ThreatDecayTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DamageThreatModifier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float HearingThreatModifier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TargetDistanceModifier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EBuildingTargettingType BuildingTargetType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ETargetPriorityType TargetPriorityType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bTargetsCanExpire;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool UseRandomTarget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float RandomTargetModeSelectInterval;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ProbabilitySelectedRandomModeTarget;
    
    UPROPERTY(EditAnywhere, Transient)
    TWeakObjectPtr<AActor> CachedRandomTargetKey;
    
public:
    UAITargettingComponent();
private:
    UFUNCTION(BlueprintCallable)
    void ValidateTargets();
    
    UFUNCTION(BlueprintCallable)
    void OnPerceptionUpdate(AActor* Actor, FAIStimulus Stimulus);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AActor* GetTargetActor() const;
    
    UFUNCTION(BlueprintCallable)
    void CacheRandomOverrideTarget();
    
    UFUNCTION(BlueprintCallable)
    void CacheCurrentTarget();
    
    
    // Fix for true pure virtual functions not being implemented
};

