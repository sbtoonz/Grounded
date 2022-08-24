#pragma once
#include "CoreMinimal.h"
#include "EBuildingGridSurfaceType.h"
#include "Components/SceneComponent.h"
#include "PersistentInterface.h"
#include "BuildingGridISMKey.h"
#include "BuildingRegisteredDelegateDelegate.h"
#include "InstancedBuildingData.h"
#include "BuildingGridISMMetadata.h"
#include "DelayedDestructionData.h"
#include "BuildingGridBuildingId.h"
#include "LiteBuildingGrid.h"
#include "UObject/NoExportTypes.h"
#include "EGetCellFlags.h"
#include "EBuildingPlacementMode.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "BuildingGridKey.h"
#include "EBuildingGridSlot.h"
#include "BuildingGridComponent.generated.h"

class UInstancedStaticMeshComponent;
class ABuilding;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class MAINE_API UBuildingGridComponent : public USceneComponent, public IPersistentInterface {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBuildingRegisteredDelegate OnBuildingPreRegister;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBuildingRegisteredDelegate OnBuildingRegistered;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBuildingRegisteredDelegate OnBuildingBuilt;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBuildingRegisteredDelegate OnBuildingPreUnregister;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBuildingRegisteredDelegate OnBuildingUnregistered;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 BaseIndex;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsDynamicallyCreated;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_SurfaceType, meta=(AllowPrivateAccess=true))
    EBuildingGridSurfaceType SurfaceType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_InstancedBuildings, meta=(AllowPrivateAccess=true))
    FInstancedBuildingData InstancedBuildings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, Transient, meta=(AllowPrivateAccess=true))
    TMap<FBuildingGridISMKey, UInstancedStaticMeshComponent*> ISMs;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<UInstancedStaticMeshComponent*, FBuildingGridISMMetadata> ISMMetadata;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FDelayedDestructionData> DelayedDestroys;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_TimeSinceCreation, meta=(AllowPrivateAccess=true))
    float TimeSinceCreation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FLiteBuildingGrid LiteGrid;
    
public:
    UBuildingGridComponent();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FIntVector WorldToGrid(EBuildingPlacementMode PlacementMode, FVector WorldPosition, FVector2D Offset) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FTransform SnapToBuildGrid(EBuildingPlacementMode PlacementMode, FVector WorldPosition, FVector2D Offset) const;
    
    UFUNCTION(BlueprintCallable)
    void RegisterChangedCallback(const FBuildingGridKey& GridLocation, ABuilding* Building);
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnRep_TimeSinceCreation();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_SurfaceType();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_InstancedBuildings();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector LocalToWorld(FVector LocalLocation) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FIntVector LocalToGrid(EBuildingPlacementMode PlacementMode, FVector LocalPosition, FVector2D Offset) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector KeyToWorldLocation(const FBuildingGridKey& Key);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsSnapOccupied(FIntVector Snap) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsBlocked(const FBuildingGridKey& GridLocation) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasOverlappingBuilding(const FBuildingGridKey& GridLocation, const ABuilding* Building, float BuildingWorldRotation) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasBuildingPrecise(const FBuildingGridKey& GridLocation) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasBuildingAdjacent(const FBuildingGridKey& GridLocation, const ABuilding* Building, float BuildingWorldRotation) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasBuilding(const FBuildingGridKey& GridLocation) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FTransform GridToWorld(FIntVector Position, FVector LocalOffset) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector GridToLocal(FIntVector Position) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EBuildingGridSlot GetWallSlot(float WorldRotation, bool bAllowDiagonal) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetUseBuildingIntegrity() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EBuildingGridSurfaceType GetSurfaceType() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static TArray<FBuildingGridKey> GetSupportsSlots(const FTransform& RelativeTo, const FBuildingGridKey& OriginSlot, const ABuilding* Building, float BuildingWorldRotation);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static TArray<FBuildingGridKey> GetSupportedBySlots(const FTransform& RelativeTo, const FBuildingGridKey& OriginSlot, const ABuilding* Building, float BuildingWorldRotation);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector GetSubdivisionOffset() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetSubdivisionCountZ() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetSubdivisionCountY() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetSubdivisionCountX() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FIntVector GetSubdivisionCount() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<FBuildingGridKey> GetSubdividedBaseFootprint(const FBuildingGridKey& OriginSlot, const ABuilding* Building, float BuildingWorldRotation) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static TArray<FBuildingGridKey> GetSoftSlots(const FTransform& RelativeTo, const FBuildingGridKey& OriginSlot, const ABuilding* Building, float BuildingWorldRotation);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector GetSnapOffset() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static TArray<FBuildingGridKey> GetRawSubdivisions(const FBuildingGridKey& OriginSlot, EGetCellFlags Flags);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FIntVector GetMinCell() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FIntVector GetMaxCell() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<FBuildingGridKey> GetFlatFootprint(const FBuildingGridKey& OriginSlot, const ABuilding* Building, float BuildingWorldRotation) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetCollapseCountMulti(const TSet<ABuilding*> BuildingBuffer, bool bAllowDesignated) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetCollapseCountAsync(const FBuildingGridBuildingId& BuildingId) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetCollapseCount(const ABuilding* Building) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector GetCellSize() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector GetCellExtents() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector GetBaseCellSize() const;
    
protected:
    UFUNCTION(BlueprintCallable)
    void CheckDetachedDestroy();
    
    
    // Fix for true pure virtual functions not being implemented
};

