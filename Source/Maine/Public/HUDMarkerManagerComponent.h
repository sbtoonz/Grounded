#pragma once
#include "CoreMinimal.h"
#include "HUDMarkerArray.h"
#include "OnShowFarHUDMarkersChangedDelegate.h"
#include "SurvivalGameStateComponent.h"
#include "OnMarkerAddRemoveDelegate.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=DataTableRowHandle -FallbackName=DataTableRowHandle
#include "EHUDMarkerType.h"
#include "HUDMarkerManagerComponent.generated.h"

class ASpawnedItem;
class UHUDMarkerData;
class APlayerState;
class APawn;
class AActor;
class UBaseLODActor;

UCLASS(BlueprintType, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class MAINE_API UHUDMarkerManagerComponent : public USurvivalGameStateComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(Transient)
    TArray<ASpawnedItem*> RegisteredSpawnedItems;
    
    UPROPERTY(Transient)
    FHUDMarkerArray RegisteredActorMarkerData;
    
    UPROPERTY(Transient)
    FHUDMarkerArray RegisteredLODActorMarkerData;
    
    UPROPERTY(Transient)
    FHUDMarkerArray RegisteredPlayerMarkerData;
    
    UPROPERTY(Transient)
    FHUDMarkerArray RegisteredSpecificLocationMarkerData;
    
    UPROPERTY(Transient)
    FHUDMarkerArray RegisteredItemObjectiveMarkerData;
    
    UPROPERTY(Transient)
    FHUDMarkerArray RegisteredPlayerWaypointMarkerData;
    
    UPROPERTY(Transient)
    TArray<UHUDMarkerData*> ReplicatedMarkerList;
    
    UPROPERTY(EditAnywhere)
    float MaxHeightUsedForTopOfObjectiveMesh;
    
public:
    UPROPERTY(BlueprintAssignable)
    FOnMarkerAddRemove OnMarkerAdded;
    
    UPROPERTY(BlueprintAssignable)
    FOnMarkerAddRemove OnMarkerRemoved;
    
    UPROPERTY(BlueprintAssignable)
    FOnMarkerAddRemove OnPlayerMarkerAdded;
    
    UPROPERTY(BlueprintAssignable)
    FOnMarkerAddRemove OnPlayerMarkerRemoved;
    
    UPROPERTY(BlueprintAssignable)
    FOnMarkerAddRemove OnPlayerWaypointAdded;
    
    UPROPERTY(BlueprintAssignable)
    FOnMarkerAddRemove OnPlayerWaypointRemoved;
    
    UPROPERTY(BlueprintAssignable)
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
    UFUNCTION()
    void OnPlayerRemoved(APlayerState* PlayerState);
    
public:
    UFUNCTION(BlueprintCallable)
    void K2_RegisterLODActor(UBaseLODActor* Actor, FDataTableRowHandle Quest, FDataTableRowHandle AdditionalData, EHUDMarkerType MarkerType, int32 IconVariant, int32 ColorVariant, bool ShowDistance, float Lifetime);
    
    UFUNCTION(BlueprintCallable)
    void K2_RegisterActor(AActor* Actor, FDataTableRowHandle Quest, FDataTableRowHandle AdditionalData, EHUDMarkerType MarkerType, int32 IconVariant, int32 ColorVariant, bool ShowDistance, float Lifetime);
    
    UFUNCTION(BlueprintPure)
    bool GetShowFarHUDMarkers() const;
    
    UFUNCTION(BlueprintCallable)
    void DeregisterActorMarker(AActor* ActorToDeregister, EHUDMarkerType MarkerType);
    
    UFUNCTION(BlueprintCallable)
    void DeregisterActor(AActor* Actor);
    
    UFUNCTION(BlueprintCallable)
    void AddStartingMarkers();
    
};

