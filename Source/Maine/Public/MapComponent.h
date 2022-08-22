#pragma once
#include "CoreMinimal.h"
#include "EPuzzlePieceZone.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ActorComponent -FallbackName=ActorComponent
#include "PersistentInterface.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector2D -FallbackName=Vector2D
#include "PuzzlePieceZoneUnlockedDelegateDelegate.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
#include "MapComponentDelegateDelegate.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=DataTableRowHandle -FallbackName=DataTableRowHandle
#include "MapComponent.generated.h"

class ASurvivalPlayerState;

UCLASS(BlueprintType, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class MAINE_API UMapComponent : public UActorComponent, public IPersistentInterface {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable)
    FPuzzlePieceZoneUnlockedDelegate OnUnlockedPuzzlePieceZone;
    
    UPROPERTY(BlueprintAssignable)
    FMapComponentDelegate OnUnlockedMapsChanged;
    
protected:
    UPROPERTY(Transient, ReplicatedUsing=OnRep_UnlockedMaps)
    TArray<EPuzzlePieceZone> UnlockedPuzzlePieceZones;
    
    UPROPERTY(EditDefaultsOnly)
    float WorldMapXMin;
    
    UPROPERTY(EditDefaultsOnly)
    float WorldMapXMax;
    
    UPROPERTY(EditDefaultsOnly)
    float WorldMapYMin;
    
    UPROPERTY(EditDefaultsOnly)
    float WorldMapYMax;
    
public:
    UMapComponent();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
    UFUNCTION(BlueprintCallable)
    void UnlockPuzzlePieceZone(ASurvivalPlayerState* Unlocker, const FDataTableRowHandle& PuzzlePieceRegion);
    
protected:
    UFUNCTION()
    void OnRep_UnlockedMaps();
    
    UFUNCTION(NetMulticast, Reliable)
    void MulticastNotifyPuzzlePieceZoneUnlocked(ASurvivalPlayerState* Unlocker, const FDataTableRowHandle& UnlockedPuzzlePieceZone);
    
public:
    UFUNCTION(BlueprintPure)
    bool IsPuzzlePieceZoneUnlocked(const FDataTableRowHandle& PuzzlePieceRegion) const;
    
    UFUNCTION(BlueprintPure)
    bool HasSeenMapUnlocked(EPuzzlePieceZone MapData) const;
    
    UFUNCTION(BlueprintPure)
    FVector2D GetWorldMapPosition(FVector Location) const;
    
    
    // Fix for true pure virtual functions not being implemented
};

