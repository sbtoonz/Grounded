#pragma once
#include "CoreMinimal.h"
#include "SurvivalGameStateComponent.h"
#include "HUDMarkerArray.h"
#include "OnShowFarHUDMarkersChangedDelegate.h"
#include "OnMarkerAddRemoveDelegate.h"
#include "UObject/NoExportTypes.h"
#include "Engine/DataTable.h"
#include "EHUDMarkerType.h"
#include "HUDMarkerManagerComponent.generated.h"

class UBaseLODActor;
class ASpawnedItem;
class UHUDMarkerData;
class APlayerState;
class APawn;
class AActor;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class MAINE_API UHUDMarkerManagerComponent : public USurvivalGameStateComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<ASpawnedItem*> RegisteredSpawnedItems;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FHUDMarkerArray RegisteredActorMarkerData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FHUDMarkerArray RegisteredLODActorMarkerData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FHUDMarkerArray RegisteredPlayerMarkerData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FHUDMarkerArray RegisteredSpecificLocationMarkerData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FHUDMarkerArray RegisteredItemObjectiveMarkerData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FHUDMarkerArray RegisteredPlayerWaypointMarkerData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<UHUDMarkerData*> ReplicatedMarkerList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxHeightUsedForTopOfObjectiveMesh;
    
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnMarkerAddRemove OnMarkerAdded;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnMarkerAddRemove OnMarkerRemoved;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnMarkerAddRemove OnPlayerMarkerAdded;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnMarkerAddRemove OnPlayerMarkerRemoved;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnMarkerAddRemove OnPlayerWaypointAdded;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnMarkerAddRemove OnPlayerWaypointRemoved;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnShowFarHUDMarkersChanged OnShowFarHUDMarkersChanged;
    
    UHUDMarkerManagerComponent();
    UFUNCTION(BlueprintCallable)
    void ToggleShowFarHUDMarkers();
    
    UFUNCTION(BlueprintCallable)
    void RegisterPlayerWaypointMarker(APlayerState* OwningPlayer, FVector Location, bool ShowDistance, float Lifetime);
    
    UFUNCTION(BlueprintCallable)
    void RegisterPlayer(APawn* Player);
    
    UFUNCTION(BlueprintCallable)
    void RegisterLocationMarker(const FString& MarkerTag, FDataTableRowHandle Quest, FVector Location, EHUDMarkerType MarkerType, bool ShowDistance, float Lifetime);
    
    UFUNCTION(BlueprintCallable)
    void RegisterItemObjectiveMarker(FDataTableRowHandle ItemDataRowHandle, FDataTableRowHandle Quest, bool ShowDistance, float Lifetime);
    
    UFUNCTION(BlueprintCallable)
    void RefreshActor(AActor* Actor);
    
private:
    UFUNCTION(BlueprintCallable)
    void OnPlayerRemoved(APlayerState* PlayerState);
    
public:
    UFUNCTION(BlueprintCallable)
    void K2_RegisterLODActor(UBaseLODActor* Actor, FDataTableRowHandle Quest, FDataTableRowHandle AdditionalData, EHUDMarkerType MarkerType, int32 IconVariant, int32 ColorVariant, bool ShowDistance, float Lifetime);
    
    UFUNCTION(BlueprintCallable)
    void K2_RegisterActor(AActor* Actor, FDataTableRowHandle Quest, FDataTableRowHandle AdditionalData, EHUDMarkerType MarkerType, int32 IconVariant, int32 ColorVariant, bool ShowDistance, float Lifetime);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetShowFarHUDMarkers() const;
    
    UFUNCTION(BlueprintCallable)
    void DeregisterActorMarker(AActor* ActorToDeregister, EHUDMarkerType MarkerType);
    
    UFUNCTION(BlueprintCallable)
    void DeregisterActor(AActor* Actor);
    
    UFUNCTION(BlueprintCallable)
    void AddStartingMarkers();
    
};

