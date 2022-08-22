#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ActorComponent -FallbackName=ActorComponent
#include "BuildingGridBuildingId.h"
#include "WaveRegionRemovedFromBaseDelegate.h"
#include "Base.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
#include "BaseManagerComponent.generated.h"

class ABuilding;
class AActor;

UCLASS(BlueprintType, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class MAINE_API UBaseManagerComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY()
    FWaveRegionRemovedFromBase OnWaveRegionRemovedFromBase;
    
protected:
    UPROPERTY(EditAnywhere)
    float MinDistForBase;
    
    UPROPERTY(Transient)
    TArray<ABuilding*> Buildings;
    
    UPROPERTY(Transient)
    TArray<FBuildingGridBuildingId> InstancedBuildingIds;
    
    UPROPERTY(Replicated)
    TArray<FBase> Bases;
    
public:
    UBaseManagerComponent();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
    UFUNCTION(BlueprintPure)
    int32 NumTargetsWithinRangeOfTargetBase(const TArray<AActor*>& Targets, int32 BaseIndex, float Distance) const;
    
    UFUNCTION(BlueprintPure)
    int32 NumBases() const;
    
    UFUNCTION(BlueprintPure)
    bool IsWithinTargetBase(FVector Location, int32 TargetBaseIndex) const;
    
    UFUNCTION(BlueprintPure)
    bool IsWithinRangeOfBase(FVector Location, float Distance) const;
    
    UFUNCTION(BlueprintPure)
    bool IsAnyTargetWithinRangeOfBase(const TArray<AActor*>& Targets, float Distance) const;
    
    UFUNCTION(BlueprintPure)
    bool HasBase() const;
    
    UFUNCTION(BlueprintPure)
    int32 GetTotalHeat() const;
    
    UFUNCTION(BlueprintPure)
    FVector GetRandomBaseLocation() const;
    
    UFUNCTION(BlueprintPure)
    int32 GetLargestBaseIndexWithinRangeOfTargetFull(const TArray<AActor*>& Targets, float Distance) const;
    
    UFUNCTION(BlueprintPure)
    int32 GetLargestBaseIndexWithinRangeOfTarget(const TArray<AActor*>& Targets, float Distance) const;
    
    UFUNCTION(BlueprintPure)
    int32 GetHeat(int32 BaseIndex) const;
    
    UFUNCTION(BlueprintPure)
    int32 GetClosestBaseIndexToTargets(const TArray<AActor*>& Targets) const;
    
    UFUNCTION(BlueprintPure)
    int32 GetClosestBaseIndex(FVector Location) const;
    
    UFUNCTION(BlueprintPure)
    float GetBaseRadius(int32 BaseIndex) const;
    
    UFUNCTION(BlueprintPure)
    FVector GetBaseLocation(int32 BaseIndex) const;
    
};

