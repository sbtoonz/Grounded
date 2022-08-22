#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ActorComponent -FallbackName=ActorComponent
#include "BuildingCompleteDelegateDelegate.h"
#include "OnModeChangedDelegateDelegate.h"
#include "BuildingDelegateDelegate.h"
#include "BuildingErrorDelegateDelegate.h"
#include "BuildingGridLocation.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=DataTableRowHandle -FallbackName=DataTableRowHandle
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
#include "EBuildingPlacementFlags.h"
#include "BuildingPlacementComponent.generated.h"

class AActor;
class UActorPoolComponent;
class UCurveFloat;
class ABuilding;
class USoundCue;
class USplineMeshComponent;
class UVisualEffect;

UCLASS(BlueprintType, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class MAINE_API UBuildingPlacementComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable)
    FBuildingCompleteDelegate OnBuildingCompleteDelegate;
    
    UPROPERTY(BlueprintAssignable)
    FOnModeChangedDelegate OnAlternatePlacementModeChangedDelegate;
    
    UPROPERTY(BlueprintAssignable)
    FOnModeChangedDelegate OnRepeatPlacementModeChangedDelegate;
    
    UPROPERTY(BlueprintAssignable)
    FOnModeChangedDelegate OnFlipPlacementModeChangedDelegate;
    
    UPROPERTY(BlueprintAssignable)
    FBuildingDelegate OnBuildingRelocateStart;
    
    UPROPERTY(BlueprintAssignable)
    FBuildingDelegate OnBuildingRelocateCancel;
    
    UPROPERTY(BlueprintAssignable)
    FBuildingDelegate OnBuildingRelocateComplete;
    
    UPROPERTY(BlueprintAssignable)
    FBuildingErrorDelegate OnBuildingErrorChanged;
    
    UPROPERTY(BlueprintAssignable)
    FBuildingDelegate OnBuildingVariantChanged;
    
protected:
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere, ReplicatedUsing=OnRep_IsPlacingBuilding)
    bool IsPlacingBuilding;
    
    UPROPERTY(BlueprintReadOnly, Export, Transient)
    UActorPoolComponent* SnapPool;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TSubclassOf<AActor> BaseSnapObject;
    
    UPROPERTY(BlueprintReadOnly, Transient, ReplicatedUsing=OnRep_PendingBuilding)
    ABuilding* PendingBuilding;
    
    UPROPERTY(Transient)
    FBuildingGridLocation PendingLocation;
    
    UPROPERTY(Transient)
    FBuildingGridLocation ZoopStartLocation;
    
    UPROPERTY(Transient)
    FBuildingGridLocation ZoopUpdatedLocation;
    
    UPROPERTY(Transient)
    TArray<ABuilding*> ZoopedBuildings;
    
    UPROPERTY(Transient, ReplicatedUsing=OnRep_PendingRelocate)
    ABuilding* PendingRelocate;
    
    UPROPERTY(Transient)
    FDataTableRowHandle PendingDataRowHandle;
    
    UPROPERTY(Transient)
    TSubclassOf<ABuilding> BuildingActor;
    
    UPROPERTY(Transient)
    TSubclassOf<ABuilding> BuildingActorFlipped;
    
    UPROPERTY(Transient)
    TSubclassOf<ABuilding> BuildingActorDiagonal;
    
    UPROPERTY(Transient)
    TSubclassOf<ABuilding> BuildingActorWall;
    
    UPROPERTY(Transient)
    TSubclassOf<ABuilding> BuildingActorCeiling;
    
    UPROPERTY(Replicated, Transient)
    float PendingRotation;
    
    UPROPERTY(Transient)
    TArray<AActor*> ActiveSnaps;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float PlacedBuildingLocationLerpTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float PlacedBuildingRotationLerpTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UCurveFloat* LerpCurve;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float FreeBuildingPlacementDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float FreeBuildingGroundDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UCurveFloat* DistanceScoreCurve;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UCurveFloat* PerpendicularDistanceScoreCurve;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UCurveFloat* SocketMatchScoreCurve;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UCurveFloat* PersistentSnapMatchScoreCurve;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float ValidSlotScore;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float BuildingWallMountPlacementDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float BuildingRotateSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 GroundSnapDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 WallMaxTranslateCells;
    
    UPROPERTY(EditDefaultsOnly)
    TSubclassOf<AActor> RelocateVisuals;
    
    UPROPERTY(Export, Transient)
    USplineMeshComponent* RelocateVisualsInstance;
    
    UPROPERTY(EditDefaultsOnly)
    UVisualEffect* BuildingRelocateSuccessEffect;
    
    UPROPERTY(EditDefaultsOnly)
    USoundCue* BuildingRelocateSuccesAudio;
    
public:
    UBuildingPlacementComponent();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
protected:
    UFUNCTION(Reliable, Server, WithValidation)
    void ServerSetRepeatPlacementMode(bool bRepeatMode);
    
public:
    UFUNCTION(Server, Unreliable, WithValidation)
    void ServerSetPlacementRotation(float InPendingRotation, float InActualWorldRotationRadZ);
    
protected:
    UFUNCTION(Reliable, Server, WithValidation)
    void ServerSetFlipPlacementMode(bool bFlipMode);
    
    UFUNCTION(Reliable, Server, WithValidation)
    void ServerSetAlternatePlacementMode(bool bAlternateMode);
    
public:
    UFUNCTION(Reliable, Server, WithValidation)
    void ServerHandleAcceptPlacement(float InPendingRotation, float InActualWorldRotationRadZ);
    
    UFUNCTION(Reliable, Server, WithValidation)
    void ServerExitBuildingPlacement(bool bSuccess);
    
protected:
    UFUNCTION(Reliable, Server, WithValidation)
    void ServerEnterPlaceBuildingMode(FDataTableRowHandle BuildingData, EBuildingPlacementFlags Flags);
    
    UFUNCTION()
    void OnRep_PendingRelocate();
    
    UFUNCTION()
    void OnRep_PendingBuilding();
    
    UFUNCTION()
    void OnRep_IsPlacingBuilding();
    
private:
    UFUNCTION(NetMulticast, Unreliable)
    void MulticastHandleBuildingPlacementSuccessEffects(FVector Location);
    
    UFUNCTION(NetMulticast, Reliable)
    void MulticastClearCustomizationCameraView(ABuilding* Building);
    
public:
    UFUNCTION(BlueprintPure)
    bool IsRelocatingBuilding() const;
    
    UFUNCTION(BlueprintPure)
    bool IsPlacementModeValid() const;
    
    UFUNCTION(BlueprintPure)
    bool GetRepeatPlacementMode() const;
    
    UFUNCTION(BlueprintPure)
    FDataTableRowHandle GetPendingBuildingRowHandle() const;
    
    UFUNCTION(BlueprintPure)
    bool GetPendingBuildingHasUnlockedVariants() const;
    
    UFUNCTION(BlueprintPure)
    ABuilding* GetPendingBuilding() const;
    
    UFUNCTION(BlueprintPure)
    bool GetIsPlacingBuilding() const;
    
    UFUNCTION(BlueprintPure)
    bool GetFlipPlacementMode() const;
    
    UFUNCTION(BlueprintPure)
    bool GetCurrentPlacementHasFlipMode() const;
    
    UFUNCTION(BlueprintPure)
    bool GetCurrentPlacementHasAlternativeMode() const;
    
    UFUNCTION(BlueprintPure)
    FString GetCurrentPlacementErrorString() const;
    
    UFUNCTION(BlueprintPure)
    int32 GetCurrentPlacementError() const;
    
    UFUNCTION(BlueprintPure)
    bool GetAlternatePlacementMode() const;
    
    UFUNCTION(BlueprintCallable)
    void ExitPlaceBuildingMode(bool bSuccess);
    
    UFUNCTION(BlueprintCallable)
    void EnterRelocateMode(ABuilding* Target);
    
    UFUNCTION(BlueprintCallable)
    void EnterPlaceBuildingMode(FDataTableRowHandle BuildingData, bool bAutoAddIngredients, bool bDeployable);
    
    UFUNCTION(Client, Reliable)
    void ClientWarnRelocateCancelled();
    
    UFUNCTION(Client, Reliable)
    void ClientWarnPlacementCanceledByCombat();
    
    UFUNCTION(Client, Reliable)
    void ClientEnterRelocateMode(ABuilding* Target);
    
};

