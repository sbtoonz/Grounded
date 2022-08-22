#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "ZoneOneShotEntry.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=TimerHandle -FallbackName=TimerHandle
#include "AmbienceZoneBucket.generated.h"

UCLASS(BlueprintType)
class MAINE_API UAmbienceZoneBucket : public UObject {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(VisibleAnywhere)
    FName ZoneOneShotEntryName;
    
    UPROPERTY(VisibleAnywhere)
    FZoneOneShotEntry ZoneOneShotEntry;
    
    UPROPERTY(VisibleAnywhere)
    FTimerHandle CurrentTimerHandle;
    
public:
    UAmbienceZoneBucket();
protected:
    UFUNCTION(BlueprintCallable)
    void TryPlayOSAndStartTimer();
    
    UFUNCTION(BlueprintPure)
    bool TryPlayingOneShot(const int32 StartHourOfDay, const int32 EndHourOfDay, const float Probability) const;
    
    UFUNCTION(BlueprintCallable)
    void StartTimer();
    
    UFUNCTION(BlueprintPure)
    bool IsHourWithingRange(const int32 HourToCheck) const;
    
public:
    UFUNCTION(BlueprintCallable)
    void Init(const FName& InZoneOneShotEntryName, const FZoneOneShotEntry& InZoneOneShotEntry);
    
    UFUNCTION(BlueprintCallable)
    void Cleanup();
    
};

