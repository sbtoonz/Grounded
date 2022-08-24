#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "SurveyedResourceChangedDelegateDelegate.h"
#include "PersistentInterface.h"
#include "SurveyRescanDelegateDelegate.h"
#include "Engine/DataTable.h"
#include "UObject/NoExportTypes.h"
#include "ResourceSurveyReplicationData.h"
#include "ResourceSurveyComponent.generated.h"

class UTexture2D;
class UWindowWidget;
class UResourceSurveyOriginComponent;
class UObject;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class MAINE_API UResourceSurveyComponent : public UActorComponent, public IPersistentInterface {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSurveyedResourceChangedDelegate OnSurveyedResourceChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSurveyRescanDelegate OnRescan;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<UWindowWidget> SurveyWindow;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_SurveyedResource, meta=(AllowPrivateAccess=true))
    FDataTableRowHandle SurveyedResource;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float BucketSize;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 BucketColorCap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FColor EmptyBucketColor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UTexture2D* HeatmapTexture;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UTexture2D* RegionsTexture;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float LastScanRealTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    float LastScanWorldHours;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    FString LastScanPlayerName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ScanInterval;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FResourceSurveyReplicationData> ReplicationData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, Transient, ReplicatedUsing=OnRep_ActiveOrigins, meta=(AllowPrivateAccess=true))
    TArray<UResourceSurveyOriginComponent*> ActiveOrigins;
    
public:
    UResourceSurveyComponent();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
    UFUNCTION(BlueprintCallable)
    void UnregisterManualSource(UObject* Source);
    
    UFUNCTION(BlueprintCallable, Exec)
    void ToggleScanEverything();
    
    UFUNCTION(BlueprintCallable, Exec)
    void ShowSurveyingInterface();
    
    UFUNCTION(BlueprintCallable)
    void RegisterManualSource(UObject* Source);
    
private:
    UFUNCTION(BlueprintCallable)
    void OnRep_SurveyedResource();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_ActiveOrigins();
    
    UFUNCTION(NetMulticast, Reliable)
    void MulticastReplicateDataChunk(int32 StartIndex, const TArray<uint8>& Buffer);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void MulticastNotifyEmptyRescan();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FDataTableRowHandle GetSurveyedResource() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UTexture2D* GetSurveyedRegionTexture() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<FDataTableRowHandle> GetSurveyableItems() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetLastScanWorldHours() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FString GetLastScanPlayerName() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UTexture2D* GetHeatmapTexture() const;
    
    UFUNCTION(BlueprintCallable, Exec)
    void ActivateAllSurveyors();
    
    
    // Fix for true pure virtual functions not being implemented
};

