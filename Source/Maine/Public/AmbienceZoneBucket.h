#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "ZoneOneShotEntry.h"
#include "Engine/EngineTypes.h"
#include "AmbienceZoneBucket.generated.h"

UCLASS(Blueprintable)
class MAINE_API UAmbienceZoneBucket : public UObject {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName ZoneOneShotEntryName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FZoneOneShotEntry ZoneOneShotEntry;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTimerHandle CurrentTimerHandle;
    
public:
    UAmbienceZoneBucket();
protected:
    UFUNCTION(BlueprintCallable)
    void TryPlayOSAndStartTimer();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool TryPlayingOneShot(const int32 StartHourOfDay, const int32 EndHourOfDay, const float Probability) const;
    
    UFUNCTION(BlueprintCallable)
    void StartTimer();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsHourWithingRange(const int32 HourToCheck) const;
    
public:
    UFUNCTION(BlueprintCallable)
    void Init(const FName& InZoneOneShotEntryName, const FZoneOneShotEntry& InZoneOneShotEntry);
    
    UFUNCTION(BlueprintCallable)
    void Cleanup();
    
};

