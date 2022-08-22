#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "OnUpdateZoneAmbienceDelegate.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=DataTableRowHandle -FallbackName=DataTableRowHandle
#include "AmbienceManager.generated.h"

class UQuadAudioBedComponent;
class UAmbienceZoneBucket;
class UDataTable;

UCLASS(BlueprintType)
class MAINE_API UAmbienceManager : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable)
    FOnUpdateZoneAmbience OnUpdateZoneAmbienceDelegate;
    
protected:
    UPROPERTY(BlueprintReadOnly, Export, VisibleAnywhere)
    UQuadAudioBedComponent* QuadAudioBedComponent;
    
    UPROPERTY(VisibleAnywhere)
    TArray<UAmbienceZoneBucket*> ZoneBuckets;
    
    UPROPERTY(VisibleAnywhere)
    FDataTableRowHandle LocalZoneAudioDataRowHandle;
    
public:
    UAmbienceManager();
protected:
    UFUNCTION(BlueprintCallable)
    void OnUpdateZone(const FDataTableRowHandle PrevZoneDataTableRowHandle, const FDataTableRowHandle NewZoneDataTableRowHandle, bool bIsSubmerged);
    
    UFUNCTION(BlueprintCallable)
    void OnHourChanged(int32 NewHour, int32 NewDay);
    
    UFUNCTION(BlueprintCallable)
    void HandleEnterNewZone(const FDataTableRowHandle ZoneAudioRowHandle);
    
public:
    UFUNCTION(BlueprintPure)
    FDataTableRowHandle GetLocalZoneAudioDataRowHandle() const;
    
protected:
    UFUNCTION(BlueprintCallable)
    void DestroyAllZoneBuckets();
    
    UFUNCTION(BlueprintCallable)
    void CreateNewZoneBuckets(const UDataTable* OneShotDataTable);
    
};

