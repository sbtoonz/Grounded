#pragma once
#include "CoreMinimal.h"
#include "WaveRegionRemovedFromBaseDelegate.h"
#include "Components/ActorComponent.h"
#include "BuildingGridBuildingId.h"
#include "Base.h"
#include "UObject/NoExportTypes.h"
#include "BaseManagerComponent.generated.h"

class ABuilding;
class AActor;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class MAINE_API UBaseManagerComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FWaveRegionRemovedFromBase OnWaveRegionRemovedFromBase;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MinDistForBase;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<ABuilding*> Buildings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FBuildingGridBuildingId> InstancedBuildingIds;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    TArray<FBase> Bases;
    
public:
    UBaseManagerComponent();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 NumTargetsWithinRangeOfTargetBase(const TArray<AActor*>& Targets, int32 BaseIndex, float Distance) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 NumBases() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsWithinTargetBase(FVector Location, int32 TargetBaseIndex) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsWithinRangeOfBase(FVector Location, float Distance) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsAnyTargetWithinRangeOfBase(const TArray<AActor*>& Targets, float Distance) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasBase() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetTotalHeat() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector GetRandomBaseLocation() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetLargestBaseIndexWithinRangeOfTargetFull(const TArray<AActor*>& Targets, float Distance) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetLargestBaseIndexWithinRangeOfTarget(const TArray<AActor*>& Targets, float Distance) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetHeat(int32 BaseIndex) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetClosestBaseIndexToTargets(const TArray<AActor*>& Targets) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetClosestBaseIndex(FVector Location) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetBaseRadius(int32 BaseIndex) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector GetBaseLocation(int32 BaseIndex) const;
    
};

