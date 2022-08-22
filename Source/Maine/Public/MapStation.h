#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=DataTableRowHandle -FallbackName=DataTableRowHandle
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Actor -FallbackName=Actor
#include "RenderTargetSubscriber.h"
#include "InteractableInterface.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=OEIText -ObjectName=LocString -FallbackName=LocString
#include "OnMapStationCameraChangedDelegate.h"
#include "MapStation.generated.h"

class UMaterialInterface;
class UManagedRenderTargetObject;
class UMaterialInstanceDynamic;

UCLASS()
class MAINE_API AMapStation : public AActor, public IInteractableInterface, public IRenderTargetSubscriber {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere)
    FLocString DownloadInteractString;
    
    UPROPERTY(EditAnywhere)
    FDataTableRowHandle PuzzlePieceRegion;
    
    UPROPERTY(Replicated)
    bool bEnabled;
    
    UPROPERTY(BlueprintReadOnly)
    int32 CurrentRTIndex;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float RenderTargetCycleTime;
    
    UPROPERTY(Transient)
    float LastRenderTargetChangeTime;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TArray<TSubclassOf<UManagedRenderTargetObject>> RenderTargets;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UMaterialInterface* SecurityCameraMaterial;
    
    UPROPERTY(BlueprintReadOnly)
    UMaterialInstanceDynamic* SecurityCameraMID;
    
    UPROPERTY(BlueprintAssignable)
    FOnMapStationCameraChanged OnMapStationCameraChanged;
    
public:
    AMapStation();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
protected:
    UFUNCTION(BlueprintCallable)
    void SetCameraDrawEnabled(bool bInDrawEnabled);
    
public:
    UFUNCTION(BlueprintImplementableEvent)
    void OnMapDownloaded(AActor* InstigatedBy);
    
    
    // Fix for true pure virtual functions not being implemented
};

