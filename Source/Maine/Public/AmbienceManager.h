#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "OnUpdateZoneAmbienceDelegate.h"
#include "Engine/DataTable.h"
#include "AmbienceManager.generated.h"

class UQuadAudioBedComponent;
class UAmbienceZoneBucket;
class UDataTable;

UCLASS(Blueprintable)
class MAINE_API UAmbienceManager : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnUpdateZoneAmbience OnUpdateZoneAmbienceDelegate;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UQuadAudioBedComponent* QuadAudioBedComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UAmbienceZoneBucket*> ZoneBuckets;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
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
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FDataTableRowHandle GetLocalZoneAudioDataRowHandle() const;
    
protected:
    UFUNCTION(BlueprintCallable)
    void DestroyAllZoneBuckets();
    
    UFUNCTION(BlueprintCallable)
    void CreateNewZoneBuckets(const UDataTable* OneShotDataTable);
    
};

