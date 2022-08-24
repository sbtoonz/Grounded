#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "BuildingDelegateDelegate.h"
#include "Components/ActorComponent.h"
#include "BuildingCompleteDelegateDelegate.h"
#include "OnModeChangedDelegateDelegate.h"
#include "BuildingErrorDelegateDelegate.h"
#include "BuildingGridLocation.h"
#include "Engine/DataTable.h"
#include "EBuildingPlacementFlags.h"
#include "UObject/NoExportTypes.h"
#include "BuildingPlacementComponent.generated.h"

class UActorPoolComponent;
class ABuilding;
class AActor;
class USoundCue;
class USplineMeshComponent;
class UCurveFloat;
class UVisualEffect;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class MAINE_API UBuildingPlacementComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBuildingCompleteDelegate OnBuildingCompleteDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnModeChangedDelegate OnAlternatePlacementModeChangedDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnModeChangedDelegate OnRepeatPlacementModeChangedDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnModeChangedDelegate OnFlipPlacementModeChangedDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBuildingDelegate OnBuildingRelocateStart;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBuildingDelegate OnBuildingRelocateCancel;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBuildingDelegate OnBuildingRelocateComplete;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBuildingErrorDelegate OnBuildingErrorChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBuildingDelegate OnBuildingVariantChanged;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_IsPlacingBuilding, meta=(AllowPrivateAccess=true))
    bool IsPlacingBuilding;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, Transient, meta=(AllowPrivateAccess=true))
    UActorPoolComponent* SnapPool;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AActor> BaseSnapObject;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_PendingBuilding, meta=(AllowPrivateAccess=true))
    ABuilding* PendingBuilding;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FBuildingGridLocation PendingLocation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FBuildingGridLocation ZoopStartLocation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FBuildingGridLocation ZoopUpdatedLocation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<ABuilding*> ZoopedBuildings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_PendingRelocate, meta=(AllowPrivateAccess=true))
    ABuilding* PendingRelocate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FDataTableRowHandle PendingDataRowHandle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TSubclassOf<ABuilding> BuildingActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TSubclassOf<ABuilding> BuildingActorFlipped;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TSubclassOf<ABuilding> BuildingActorDiagonal;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TSubclassOf<ABuilding> BuildingActorWall;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TSubclassOf<ABuilding> BuildingActorCeiling;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    float PendingRotation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<AActor*> ActiveSnaps;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PlacedBuildingLocationLerpTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PlacedBuildingRotationLerpTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCurveFloat* LerpCurve;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float FreeBuildingPlacementDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float FreeBuildingGroundDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCurveFloat* DistanceScoreCurve;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCurveFloat* PerpendicularDistanceScoreCurve;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCurveFloat* SocketMatchScoreCurve;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCurveFloat* PersistentSnapMatchScoreCurve;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ValidSlotScore;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float BuildingWallMountPlacementDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float BuildingRotateSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 GroundSnapDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 WallMaxTranslateCells;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AActor> RelocateVisuals;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, Transient, meta=(AllowPrivateAccess=true))
    USplineMeshComponent* RelocateVisualsInstance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UVisualEffect* BuildingRelocateSuccessEffect;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USoundCue* BuildingRelocateSuccesAudio;
    
public:
    UBuildingPlacementComponent();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
protected:
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerSetRepeatPlacementMode(bool bRepeatMode);
    
public:
    UFUNCTION(BlueprintCallable, Server, Unreliable, WithValidation)
    void ServerSetPlacementRotation(float InPendingRotation, float InActualWorldRotationRadZ);
    
protected:
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerSetFlipPlacementMode(bool bFlipMode);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerSetAlternatePlacementMode(bool bAlternateMode);
    
public:
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerHandleAcceptPlacement(float InPendingRotation, float InActualWorldRotationRadZ);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerExitBuildingPlacement(bool bSuccess);
    
protected:
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerEnterPlaceBuildingMode(FDataTableRowHandle BuildingData, EBuildingPlacementFlags Flags);
    
    UFUNCTION(BlueprintCallable)
    void OnRep_PendingRelocate();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_PendingBuilding();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_IsPlacingBuilding();
    
private:
    UFUNCTION(BlueprintCallable, NetMulticast, Unreliable)
    void MulticastHandleBuildingPlacementSuccessEffects(FVector Location);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void MulticastClearCustomizationCameraView(ABuilding* Building);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsRelocatingBuilding() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsPlacementModeValid() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetRepeatPlacementMode() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FDataTableRowHandle GetPendingBuildingRowHandle() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetPendingBuildingHasUnlockedVariants() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ABuilding* GetPendingBuilding() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetIsPlacingBuilding() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetFlipPlacementMode() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetCurrentPlacementHasFlipMode() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetCurrentPlacementHasAlternativeMode() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FString GetCurrentPlacementErrorString() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetCurrentPlacementError() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetAlternatePlacementMode() const;
    
    UFUNCTION(BlueprintCallable)
    void ExitPlaceBuildingMode(bool bSuccess);
    
    UFUNCTION(BlueprintCallable)
    void EnterRelocateMode(ABuilding* Target);
    
    UFUNCTION(BlueprintCallable)
    void EnterPlaceBuildingMode(FDataTableRowHandle BuildingData, bool bAutoAddIngredients, bool bDeployable);
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void ClientWarnRelocateCancelled();
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void ClientWarnPlacementCanceledByCombat();
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void ClientEnterRelocateMode(ABuilding* Target);
    
};

