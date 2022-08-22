#include "ItemProcessingDataFunctionLibrary.h"

bool UItemProcessingDataFunctionLibrary::IsStarted(const FItemProcessingData& Data) {
    return false;
}

bool UItemProcessingDataFunctionLibrary::IsProcessingTimeFinished(const FItemProcessingData& Data) {
    return false;
}

float UItemProcessingDataFunctionLibrary::GetTotalProcessingTime(const FItemProcessingData& Data) {
    return 0.0f;
}

float UItemProcessingDataFunctionLibrary::GetRemainingProcessingTime(const FItemProcessingData& Data) {
    return 0.0f;
}

float UItemProcessingDataFunctionLibrary::GetProgress(const FItemProcessingData& Data) {
    return 0.0f;
}

FGameplayTag UItemProcessingDataFunctionLibrary::GetProcessingType(const FItemProcessingData& Data) {
    return FGameplayTag{};
}

EItemProcessingState UItemProcessingDataFunctionLibrary::GetProcessingState(const FItemProcessingData& Data) {
    return EItemProcessingState::Empty;
}

float UItemProcessingDataFunctionLibrary::GetElapsedProcessingTime(const FItemProcessingData& Data) {
    return 0.0f;
}

bool UItemProcessingDataFunctionLibrary::CanProcess(const FItemProcessingData& Data) {
    return false;
}

UItemProcessingDataFunctionLibrary::UItemProcessingDataFunctionLibrary() {
}

