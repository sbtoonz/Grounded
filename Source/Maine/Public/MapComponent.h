#pragma once
#include "CoreMinimal.h"
#include "EPuzzlePieceZone.h"
#include "Components/ActorComponent.h"
#include "MapComponentDelegateDelegate.h"
#include "PersistentInterface.h"
#include "PuzzlePieceZoneUnlockedDelegateDelegate.h"
#include "Engine/DataTable.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "MapComponent.generated.h"

class ASurvivalPlayerState;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class MAINE_API UMapComponent : public UActorComponent, public IPersistentInterface {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPuzzlePieceZoneUnlockedDelegate OnUnlockedPuzzlePieceZone;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMapComponentDelegate OnUnlockedMapsChanged;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_UnlockedMaps, meta=(AllowPrivateAccess=true))
    TArray<EPuzzlePieceZone> UnlockedPuzzlePieceZones;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float WorldMapXMin;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float WorldMapXMax;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float WorldMapYMin;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float WorldMapYMax;
    
public:
    UMapComponent();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
    UFUNCTION(BlueprintCallable)
    void UnlockPuzzlePieceZone(ASurvivalPlayerState* Unlocker, const FDataTableRowHandle& PuzzlePieceRegion);
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnRep_UnlockedMaps();
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void MulticastNotifyPuzzlePieceZoneUnlocked(ASurvivalPlayerState* Unlocker, const FDataTableRowHandle& UnlockedPuzzlePieceZone);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsPuzzlePieceZoneUnlocked(const FDataTableRowHandle& PuzzlePieceRegion) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasSeenMapUnlocked(EPuzzlePieceZone MapData) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector2D GetWorldMapPosition(FVector Location) const;
    
    
    // Fix for true pure virtual functions not being implemented
};

