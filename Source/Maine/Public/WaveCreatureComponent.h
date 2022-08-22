#pragma once
#include "CoreMinimal.h"
#include "SharedAsyncTraceClient.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ActorComponent -FallbackName=ActorComponent
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
#include "ActorCustomTickFunction.h"
#include "EWaveAttackState.h"
#include "WaveCreatureComponent.generated.h"

class AWaveSpawnTarget;
class AWaveSpawnRegionVolume;

UCLASS(BlueprintType, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class MAINE_API UWaveCreatureComponent : public UActorComponent, public ISharedAsyncTraceClient {
    GENERATED_BODY()
public:
    UPROPERTY()
    float DeinstanceRadius;
    
    UPROPERTY()
    float DistanceMovedToDeinstance;
    
    UPROPERTY()
    float TimeBetweenDeinstances;
    
    UPROPERTY()
    float LastDeinstanceTime;
    
    UPROPERTY()
    FVector LastDeinstanceLocation;
    
    UPROPERTY()
    FActorCustomTickFunction TargetContactTick;
    
    UPROPERTY()
    float MaxTimeWithoutContact;
    
    UPROPERTY()
    float TimeWithoutContact;
    
    UPROPERTY()
    FActorCustomTickFunction CreatureStuckTick;
    
    UPROPERTY()
    float MinDistanceToTravelForNotStuck;
    
    UPROPERTY()
    FVector LastLocationForStuckTick;
    
    UPROPERTY()
    FActorCustomTickFunction DistanceToBaseTick;
    
    UPROPERTY()
    float MinTravelDistanceForProgress;
    
    UPROPERTY()
    float LastDistToBase;
    
    UPROPERTY()
    FActorCustomTickFunction ProjectedDistanceTick;
    
    UPROPERTY()
    float MinProjectedProgressDistance;
    
    UPROPERTY()
    float LastProjectedDistance;
    
    UPROPERTY()
    FActorCustomTickFunction WaterOverlapTick;
    
    UPROPERTY()
    bool bIsUnderwater;
    
    UPROPERTY()
    FActorCustomTickFunction WaveRetreatTick;
    
    UPROPERTY()
    float RetreatTimeLimit;
    
    UPROPERTY()
    float RetreatRandRange;
    
    UPROPERTY()
    float RetreatStartTime;
    
    UPROPERTY()
    FActorCustomTickFunction CheckNewDestinationTick;
    
    UPROPERTY()
    float NewDestinationCheckThreshold;
    
    UPROPERTY()
    float TimeInBaseRadius;
    
private:
    UPROPERTY()
    AWaveSpawnTarget* SpawnTarget;
    
public:
    UWaveCreatureComponent();
    UFUNCTION(BlueprintCallable)
    void SetIsUnderWater(bool UnderWater);
    
protected:
    UFUNCTION()
    void OnWaveRegionRemovedFromBase(int32 BaseIndex, AWaveSpawnRegionVolume* Region);
    
public:
    UFUNCTION()
    void OnWaveAttackStateChanged(EWaveAttackState AttackState);
    
    
    // Fix for true pure virtual functions not being implemented
};

