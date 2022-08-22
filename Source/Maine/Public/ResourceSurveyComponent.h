#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ActorComponent -FallbackName=ActorComponent
#include "PersistentInterface.h"
#include "SurveyedResourceChangedDelegateDelegate.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Color -FallbackName=Color
#include "SurveyRescanDelegateDelegate.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=DataTableRowHandle -FallbackName=DataTableRowHandle
#include "ResourceSurveyReplicationData.h"
#include "ResourceSurveyComponent.generated.h"

class UTexture2D;
class UWindowWidget;
class UResourceSurveyOriginComponent;
class UObject;

UCLASS(BlueprintType, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class MAINE_API UResourceSurveyComponent : public UActorComponent, public IPersistentInterface {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable)
    FSurveyedResourceChangedDelegate OnSurveyedResourceChanged;
    
    UPROPERTY(BlueprintAssignable)
    FSurveyRescanDelegate OnRescan;
    
protected:
    UPROPERTY(EditDefaultsOnly)
    TSoftClassPtr<UWindowWidget> SurveyWindow;
    
    UPROPERTY(Transient, ReplicatedUsing=OnRep_SurveyedResource)
    FDataTableRowHandle SurveyedResource;
    
    UPROPERTY(EditDefaultsOnly)
    float BucketSize;
    
    UPROPERTY(EditDefaultsOnly)
    int32 BucketColorCap;
    
    UPROPERTY(EditDefaultsOnly)
    FColor EmptyBucketColor;
    
    UPROPERTY(Transient)
    UTexture2D* HeatmapTexture;
    
    UPROPERTY(Transient)
    UTexture2D* RegionsTexture;
    
    UPROPERTY(BlueprintReadOnly)
    float LastScanRealTime;
    
    UPROPERTY(Replicated)
    float LastScanWorldHours;
    
    UPROPERTY(Replicated)
    FString LastScanPlayerName;
    
    UPROPERTY(EditDefaultsOnly)
    float ScanInterval;
    
    UPROPERTY(Transient)
    TArray<FResourceSurveyReplicationData> ReplicationData;
    
    UPROPERTY(Export, Transient, ReplicatedUsing=OnRep_ActiveOrigins)
    TArray<UResourceSurveyOriginComponent*> ActiveOrigins;
    
public:
    UResourceSurveyComponent();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
    UFUNCTION(BlueprintCallable)
    void UnregisterManualSource(UObject* Source);
    
    UFUNCTION(Exec)
    void ToggleScanEverything();
    
    UFUNCTION(Exec)
    void ShowSurveyingInterface();
    
    UFUNCTION(BlueprintCallable)
    void RegisterManualSource(UObject* Source);
    
private:
    UFUNCTION()
    void OnRep_SurveyedResource();
    
    UFUNCTION()
    void OnRep_ActiveOrigins();
    
    UFUNCTION(NetMulticast, Reliable)
    void MulticastReplicateDataChunk(int32 StartIndex, const TArray<uint8>& Buffer);
    
    UFUNCTION(NetMulticast, Reliable)
    void MulticastNotifyEmptyRescan();
    
public:
    UFUNCTION(BlueprintPure)
    FDataTableRowHandle GetSurveyedResource() const;
    
    UFUNCTION(BlueprintPure)
    UTexture2D* GetSurveyedRegionTexture() const;
    
    UFUNCTION(BlueprintPure)
    TArray<FDataTableRowHandle> GetSurveyableItems() const;
    
    UFUNCTION(BlueprintPure)
    float GetLastScanWorldHours() const;
    
    UFUNCTION(BlueprintPure)
    FString GetLastScanPlayerName() const;
    
    UFUNCTION(BlueprintPure)
    UTexture2D* GetHeatmapTexture() const;
    
    UFUNCTION(Exec)
    void ActivateAllSurveyors();
    
    
    // Fix for true pure virtual functions not being implemented
};

