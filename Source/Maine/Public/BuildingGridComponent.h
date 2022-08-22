#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=SceneComponent -FallbackName=SceneComponent
#include "BuildingGridISMKey.h"
#include "PersistentInterface.h"
#include "BuildingRegisteredDelegateDelegate.h"
#include "EBuildingGridSurfaceType.h"
#include "BuildingGridISMMetadata.h"
#include "InstancedBuildingData.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=IntVector -FallbackName=IntVector
#include "DelayedDestructionData.h"
#include "BuildingGridBuildingId.h"
#include "LiteBuildingGrid.h"
#include "EGetCellFlags.h"
#include "EBuildingPlacementMode.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector2D -FallbackName=Vector2D
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Transform -FallbackName=Transform
#include "BuildingGridKey.h"
#include "EBuildingGridSlot.h"
#include "BuildingGridComponent.generated.h"

class UInstancedStaticMeshComponent;
class ABuilding;

UCLASS(BlueprintType, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class MAINE_API UBuildingGridComponent : public USceneComponent, public IPersistentInterface {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable)
    FBuildingRegisteredDelegate OnBuildingPreRegister;
    
    UPROPERTY(BlueprintAssignable)
    FBuildingRegisteredDelegate OnBuildingRegistered;
    
    UPROPERTY(BlueprintAssignable)
    FBuildingRegisteredDelegate OnBuildingBuilt;
    
    UPROPERTY(BlueprintAssignable)
    FBuildingRegisteredDelegate OnBuildingPreUnregister;
    
    UPROPERTY(BlueprintAssignable)
    FBuildingRegisteredDelegate OnBuildingUnregistered;
    
    UPROPERTY(Transient)
    int32 BaseIndex;
    
protected:
    UPROPERTY(EditDefaultsOnly)
    bool bIsDynamicallyCreated;
    
    UPROPERTY(Transient, ReplicatedUsing=OnRep_SurfaceType)
    EBuildingGridSurfaceType SurfaceType;
    
    UPROPERTY(Transient, ReplicatedUsing=OnRep_InstancedBuildings)
    FInstancedBuildingData InstancedBuildings;
    
    UPROPERTY(Export, Transient)
    TMap<FBuildingGridISMKey, UInstancedStaticMeshComponent*> ISMs;
    
    UPROPERTY(Transient)
    TMap<UInstancedStaticMeshComponent*, FBuildingGridISMMetadata> ISMMetadata;
    
    UPROPERTY(Transient)
    TArray<FDelayedDestructionData> DelayedDestroys;
    
    UPROPERTY(Transient, ReplicatedUsing=OnRep_TimeSinceCreation)
    float TimeSinceCreation;
    
    UPROPERTY(Transient)
    FLiteBuildingGrid LiteGrid;
    
public:
    UBuildingGridComponent();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
    UFUNCTION(BlueprintPure)
    FIntVector WorldToGrid(EBuildingPlacementMode PlacementMode, FVector WorldPosition, FVector2D Offset) const;
    
    UFUNCTION(BlueprintPure)
    FTransform SnapToBuildGrid(EBuildingPlacementMode PlacementMode, FVector WorldPosition, FVector2D Offset) const;
    
    UFUNCTION(BlueprintCallable)
    void RegisterChangedCallback(const FBuildingGridKey& GridLocation, ABuilding* Building);
    
protected:
    UFUNCTION()
    void OnRep_TimeSinceCreation();
    
    UFUNCTION()
    void OnRep_SurfaceType();
    
    UFUNCTION()
    void OnRep_InstancedBuildings();
    
public:
    UFUNCTION(BlueprintPure)
    FVector LocalToWorld(FVector LocalLocation) const;
    
    UFUNCTION(BlueprintPure)
    FIntVector LocalToGrid(EBuildingPlacementMode PlacementMode, FVector LocalPosition, FVector2D Offset) const;
    
    UFUNCTION(BlueprintPure)
    FVector KeyToWorldLocation(const FBuildingGridKey& Key);
    
    UFUNCTION(BlueprintPure)
    bool IsSnapOccupied(FIntVector Snap) const;
    
    UFUNCTION(BlueprintPure)
    bool IsBlocked(const FBuildingGridKey& GridLocation) const;
    
    UFUNCTION(BlueprintPure)
    bool HasOverlappingBuilding(const FBuildingGridKey& GridLocation, const ABuilding* Building, float BuildingWorldRotation) const;
    
    UFUNCTION(BlueprintPure)
    bool HasBuildingPrecise(const FBuildingGridKey& GridLocation) const;
    
    UFUNCTION(BlueprintPure)
    bool HasBuildingAdjacent(const FBuildingGridKey& GridLocation, const ABuilding* Building, float BuildingWorldRotation) const;
    
    UFUNCTION(BlueprintPure)
    bool HasBuilding(const FBuildingGridKey& GridLocation) const;
    
    UFUNCTION(BlueprintPure)
    FTransform GridToWorld(FIntVector Position, FVector LocalOffset) const;
    
    UFUNCTION(BlueprintPure)
    FVector GridToLocal(FIntVector Position) const;
    
    UFUNCTION(BlueprintPure)
    EBuildingGridSlot GetWallSlot(float WorldRotation, bool bAllowDiagonal) const;
    
    UFUNCTION(BlueprintPure)
    bool GetUseBuildingIntegrity() const;
    
    UFUNCTION(BlueprintPure)
    EBuildingGridSurfaceType GetSurfaceType() const;
    
    UFUNCTION(BlueprintPure)
    static TArray<FBuildingGridKey> GetSupportsSlots(const FTransform& RelativeTo, const FBuildingGridKey& OriginSlot, const ABuilding* Building, float BuildingWorldRotation);
    
    UFUNCTION(BlueprintPure)
    static TArray<FBuildingGridKey> GetSupportedBySlots(const FTransform& RelativeTo, const FBuildingGridKey& OriginSlot, const ABuilding* Building, float BuildingWorldRotation);
    
    UFUNCTION(BlueprintPure)
    FVector GetSubdivisionOffset() const;
    
    UFUNCTION(BlueprintPure)
    int32 GetSubdivisionCountZ() const;
    
    UFUNCTION(BlueprintPure)
    int32 GetSubdivisionCountY() const;
    
    UFUNCTION(BlueprintPure)
    int32 GetSubdivisionCountX() const;
    
    UFUNCTION(BlueprintPure)
    FIntVector GetSubdivisionCount() const;
    
    UFUNCTION(BlueprintPure)
    TArray<FBuildingGridKey> GetSubdividedBaseFootprint(const FBuildingGridKey& OriginSlot, const ABuilding* Building, float BuildingWorldRotation) const;
    
    UFUNCTION(BlueprintPure)
    static TArray<FBuildingGridKey> GetSoftSlots(const FTransform& RelativeTo, const FBuildingGridKey& OriginSlot, const ABuilding* Building, float BuildingWorldRotation);
    
    UFUNCTION(BlueprintPure)
    FVector GetSnapOffset() const;
    
    UFUNCTION(BlueprintPure)
    static TArray<FBuildingGridKey> GetRawSubdivisions(const FBuildingGridKey& OriginSlot, EGetCellFlags Flags);
    
    UFUNCTION(BlueprintPure)
    FIntVector GetMinCell() const;
    
    UFUNCTION(BlueprintPure)
    FIntVector GetMaxCell() const;
    
    UFUNCTION(BlueprintPure)
    TArray<FBuildingGridKey> GetFlatFootprint(const FBuildingGridKey& OriginSlot, const ABuilding* Building, float BuildingWorldRotation) const;
    
    UFUNCTION(BlueprintPure)
    int32 GetCollapseCountMulti(const TSet<ABuilding*> BuildingBuffer, bool bAllowDesignated) const;
    
    UFUNCTION(BlueprintPure)
    int32 GetCollapseCountAsync(const FBuildingGridBuildingId& BuildingId) const;
    
    UFUNCTION(BlueprintPure)
    int32 GetCollapseCount(const ABuilding* Building) const;
    
    UFUNCTION(BlueprintPure)
    FVector GetCellSize() const;
    
    UFUNCTION(BlueprintPure)
    FVector GetCellExtents() const;
    
    UFUNCTION(BlueprintPure)
    FVector GetBaseCellSize() const;
    
protected:
    UFUNCTION()
    void CheckDetachedDestroy();
    
    
    // Fix for true pure virtual functions not being implemented
};

