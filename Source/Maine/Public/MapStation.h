#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "GameFramework/Actor.h"
#include "InteractableInterface.h"
#include "RenderTargetSubscriber.h"
#include "LocString.h"
#include "Engine/DataTable.h"
#include "OnMapStationCameraChangedDelegate.h"
#include "MapStation.generated.h"

class UMaterialInstanceDynamic;
class UMaterialInterface;
class UManagedRenderTargetObject;

UCLASS(Blueprintable)
class MAINE_API AMapStation : public AActor, public IInteractableInterface, public IRenderTargetSubscriber {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLocString DownloadInteractString;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDataTableRowHandle PuzzlePieceRegion;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    bool bEnabled;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 CurrentRTIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float RenderTargetCycleTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float LastRenderTargetChangeTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSubclassOf<UManagedRenderTargetObject>> RenderTargets;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialInterface* SecurityCameraMaterial;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialInstanceDynamic* SecurityCameraMID;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnMapStationCameraChanged OnMapStationCameraChanged;
    
public:
    AMapStation();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
protected:
    UFUNCTION(BlueprintCallable)
    void SetCameraDrawEnabled(bool bInDrawEnabled);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnMapDownloaded(AActor* InstigatedBy);
    
    
    // Fix for true pure virtual functions not being implemented
};

