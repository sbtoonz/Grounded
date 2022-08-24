#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "OnHourChangedDelegate.h"
#include "PersistentInterface.h"
#include "OnMinuteChangedDelegate.h"
#include "OnDayChangedDelegate.h"
#include "OnDayNightChangedDelegate.h"
#include "ETimeOfDay.h"
#include "CalendarComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class MAINE_API UCalendarComponent : public UActorComponent, public IPersistentInterface {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnMinuteChanged OnMinuteChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnHourChanged OnHourChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnDayChanged OnDayChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnDayNightChanged OnDayNightChange;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 StartGameDay;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 StartGameHour;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 StartGameMinute;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 SecondsPerMinute;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MinutesPerHour;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 HoursPerDay;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 DaytimeStartHour;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 DaytimeEndHour;
    
    UPROPERTY(EditAnywhere, Transient, ReplicatedUsing=OnRep_CurrentTime)
    double CurrentTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float GameToRealTimeRatio;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    float TimeMultiplier;
    
public:
    UCalendarComponent();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
    UFUNCTION(BlueprintCallable)
    void SetTimeSpeedMultiplier(float Multiplier);
    
private:
    UFUNCTION()
    void OnRep_CurrentTime(double PreviousValue);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void MulticastSyncTimeOfDay(float TimeToSync);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsTimeOfDay(ETimeOfDay Time) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsNightTime() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsDayTime() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetTotalHour(float Day, float DayHour) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetTotalGameHoursPassed() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FString GetTimeString() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetSecondsPerHour() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetSecondsPerDay() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetNormalizedTime() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetNextDayHourTotalHour(float DayHour) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetMinutesPerHour() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetMinute() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetHoursUntilHour(float TargetHour) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FString GetHoursString(float Hours) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetHoursPerDay() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetHourFloat() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetHour() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetGameToRealTimeRatio() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetDaytimeStart() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetDaytimeEnd() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetDay() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetCurrentTimeHours() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetCurrentTime() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FString GetClockFormat(float Hours) const;
    
    UFUNCTION(BlueprintCallable)
    void ForceSetTimeOfDay(int32 TargetDay, int32 TargetHour);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FString DeltaHoursToTimestamp(float Hours) const;
    
    
    // Fix for true pure virtual functions not being implemented
};

