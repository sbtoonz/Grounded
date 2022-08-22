#pragma once
#include "CoreMinimal.h"
#include "OnDayNightChangedDelegate.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ActorComponent -FallbackName=ActorComponent
#include "PersistentInterface.h"
#include "ETimeOfDay.h"
#include "OnMinuteChangedDelegate.h"
#include "OnHourChangedDelegate.h"
#include "OnDayChangedDelegate.h"
#include "CalendarComponent.generated.h"

UCLASS(BlueprintType, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class MAINE_API UCalendarComponent : public UActorComponent, public IPersistentInterface {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable)
    FOnMinuteChanged OnMinuteChanged;
    
    UPROPERTY(BlueprintAssignable)
    FOnHourChanged OnHourChanged;
    
    UPROPERTY(BlueprintAssignable)
    FOnDayChanged OnDayChanged;
    
    UPROPERTY(BlueprintAssignable)
    FOnDayNightChanged OnDayNightChange;
    
private:
    UPROPERTY(EditDefaultsOnly)
    int32 StartGameDay;
    
    UPROPERTY(EditDefaultsOnly)
    int32 StartGameHour;
    
    UPROPERTY(EditDefaultsOnly)
    int32 StartGameMinute;
    
    UPROPERTY(EditDefaultsOnly)
    int32 SecondsPerMinute;
    
    UPROPERTY(EditDefaultsOnly)
    int32 MinutesPerHour;
    
    UPROPERTY(EditDefaultsOnly)
    int32 HoursPerDay;
    
    UPROPERTY(EditDefaultsOnly)
    int32 DaytimeStartHour;
    
    UPROPERTY(EditDefaultsOnly)
    int32 DaytimeEndHour;
    
    UPROPERTY(Transient, ReplicatedUsing=OnRep_CurrentTime)
    double CurrentTime;
    
    UPROPERTY(EditDefaultsOnly)
    float GameToRealTimeRatio;
    
    UPROPERTY(Replicated, VisibleAnywhere)
    float TimeMultiplier;
    
public:
    UCalendarComponent();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
    UFUNCTION(BlueprintCallable)
    void SetTimeSpeedMultiplier(float Multiplier);
    
private:
    UFUNCTION()
    void OnRep_CurrentTime(double PreviousValue);
    
    UFUNCTION(NetMulticast, Reliable)
    void MulticastSyncTimeOfDay(float TimeToSync);
    
public:
    UFUNCTION(BlueprintPure)
    bool IsTimeOfDay(ETimeOfDay Time) const;
    
    UFUNCTION(BlueprintPure)
    bool IsNightTime() const;
    
    UFUNCTION(BlueprintPure)
    bool IsDayTime() const;
    
    UFUNCTION(BlueprintPure)
    float GetTotalHour(float Day, float DayHour) const;
    
    UFUNCTION(BlueprintPure)
    float GetTotalGameHoursPassed() const;
    
    UFUNCTION(BlueprintPure)
    FString GetTimeString() const;
    
    UFUNCTION(BlueprintPure)
    int32 GetSecondsPerHour() const;
    
    UFUNCTION(BlueprintPure)
    int32 GetSecondsPerDay() const;
    
    UFUNCTION(BlueprintPure)
    float GetNormalizedTime() const;
    
    UFUNCTION(BlueprintPure)
    float GetNextDayHourTotalHour(float DayHour) const;
    
    UFUNCTION(BlueprintPure)
    int32 GetMinutesPerHour() const;
    
    UFUNCTION(BlueprintPure)
    int32 GetMinute() const;
    
    UFUNCTION(BlueprintPure)
    float GetHoursUntilHour(float TargetHour) const;
    
    UFUNCTION(BlueprintPure)
    FString GetHoursString(float Hours) const;
    
    UFUNCTION(BlueprintPure)
    int32 GetHoursPerDay() const;
    
    UFUNCTION(BlueprintPure)
    float GetHourFloat() const;
    
    UFUNCTION(BlueprintPure)
    int32 GetHour() const;
    
    UFUNCTION(BlueprintPure)
    float GetGameToRealTimeRatio() const;
    
    UFUNCTION(BlueprintPure)
    int32 GetDaytimeStart() const;
    
    UFUNCTION(BlueprintPure)
    int32 GetDaytimeEnd() const;
    
    UFUNCTION(BlueprintPure)
    int32 GetDay() const;
    
    UFUNCTION(BlueprintPure)
    float GetCurrentTimeHours() const;
    
    UFUNCTION(BlueprintPure)
    float GetCurrentTime() const;
    
    UFUNCTION(BlueprintPure)
    FString GetClockFormat(float Hours) const;
    
    UFUNCTION(BlueprintCallable)
    void ForceSetTimeOfDay(int32 TargetDay, int32 TargetHour);
    
    UFUNCTION(BlueprintPure)
    FString DeltaHoursToTimestamp(float Hours) const;
    
    
    // Fix for true pure virtual functions not being implemented
};

