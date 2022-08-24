#include "CalendarComponent.h"
#include "Net/UnrealNetwork.h"

void UCalendarComponent::SetTimeSpeedMultiplier(float Multiplier) {
}

void UCalendarComponent::OnRep_CurrentTime(double PreviousValue) {
}

void UCalendarComponent::MulticastSyncTimeOfDay_Implementation(float TimeToSync) {
}

bool UCalendarComponent::IsTimeOfDay(ETimeOfDay Time) const {
    return false;
}

bool UCalendarComponent::IsNightTime() const {
    return false;
}

bool UCalendarComponent::IsDayTime() const {
    return false;
}

float UCalendarComponent::GetTotalHour(float Day, float DayHour) const {
    return 0.0f;
}

float UCalendarComponent::GetTotalGameHoursPassed() const {
    return 0.0f;
}

FString UCalendarComponent::GetTimeString() const {
    return TEXT("");
}

int32 UCalendarComponent::GetSecondsPerHour() const {
    return 0;
}

int32 UCalendarComponent::GetSecondsPerDay() const {
    return 0;
}

float UCalendarComponent::GetNormalizedTime() const {
    return 0.0f;
}

float UCalendarComponent::GetNextDayHourTotalHour(float DayHour) const {
    return 0.0f;
}

int32 UCalendarComponent::GetMinutesPerHour() const {
    return 0;
}

int32 UCalendarComponent::GetMinute() const {
    return 0;
}

float UCalendarComponent::GetHoursUntilHour(float TargetHour) const {
    return 0.0f;
}

FString UCalendarComponent::GetHoursString(float Hours) const {
    return TEXT("");
}

int32 UCalendarComponent::GetHoursPerDay() const {
    return 0;
}

float UCalendarComponent::GetHourFloat() const {
    return 0.0f;
}

int32 UCalendarComponent::GetHour() const {
    return 0;
}

float UCalendarComponent::GetGameToRealTimeRatio() const {
    return 0.0f;
}

int32 UCalendarComponent::GetDaytimeStart() const {
    return 0;
}

int32 UCalendarComponent::GetDaytimeEnd() const {
    return 0;
}

int32 UCalendarComponent::GetDay() const {
    return 0;
}

float UCalendarComponent::GetCurrentTimeHours() const {
    return 0.0f;
}

float UCalendarComponent::GetCurrentTime() const {
    return 0.0f;
}

FString UCalendarComponent::GetClockFormat(float Hours) const {
    return TEXT("");
}

void UCalendarComponent::ForceSetTimeOfDay(int32 TargetDay, int32 TargetHour) {
}

FString UCalendarComponent::DeltaHoursToTimestamp(float Hours) const {
    return TEXT("");
}

void UCalendarComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UCalendarComponent, CurrentTime);
    DOREPLIFETIME(UCalendarComponent, TimeMultiplier);
}

UCalendarComponent::UCalendarComponent() {
    this->StartGameDay = 0;
    this->StartGameHour = 9;
    this->StartGameMinute = 0;
    this->SecondsPerMinute = 60;
    this->MinutesPerHour = 60;
    this->HoursPerDay = 24;
    this->DaytimeStartHour = 6;
    this->DaytimeEndHour = 20;
    this->CurrentTime = 0.00f;
    this->GameToRealTimeRatio = 1.00f;
    this->TimeMultiplier = 1.00f;
}

