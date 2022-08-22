#include "PowerReservoirLibrary.h"

bool UPowerReservoirLibrary::UsesPowerType(const FPowerReservoir& Reservoir, FGameplayTag PowerType) {
    return false;
}

bool UPowerReservoirLibrary::RemoveCharges(FPowerReservoir& Reservoir, float Count) {
    return false;
}

bool UPowerReservoirLibrary::IsValid(const FPowerReservoir& Reservoir) {
    return false;
}

bool UPowerReservoirLibrary::IsFull(const FPowerReservoir& Reservoir) {
    return false;
}

bool UPowerReservoirLibrary::IsEmpty(const FPowerReservoir& Reservoir) {
    return false;
}

float UPowerReservoirLibrary::GetPowerPercentage(const FPowerReservoir& Reservoir) {
    return 0.0f;
}

float UPowerReservoirLibrary::GetEmptySpace(const FPowerReservoir& Reservoir) {
    return 0.0f;
}

FGameplayTag UPowerReservoirLibrary::GetCurrentPowerType(const FPowerReservoir& Reservoir) {
    return FGameplayTag{};
}

float UPowerReservoirLibrary::GetCurrentCharges(const FPowerReservoir& Reservoir) {
    return 0.0f;
}

float UPowerReservoirLibrary::GetCapacity(const FPowerReservoir& Reservoir) {
    return 0.0f;
}

FGameplayTag UPowerReservoirLibrary::GetAllowedPowerType(const FPowerReservoir& Reservoir) {
    return FGameplayTag{};
}

bool UPowerReservoirLibrary::CanAcceptPowerType(const FPowerReservoir& Reservoir, FGameplayTag PowerType) {
    return false;
}

bool UPowerReservoirLibrary::AddCharges(FPowerReservoir& Reservoir, FGameplayTag PowerTag, float Count) {
    return false;
}

UPowerReservoirLibrary::UPowerReservoirLibrary() {
}

