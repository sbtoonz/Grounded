#include "OEIPlayUtilsSubsystem.h"

void UOEIPlayUtilsSubsystem::OnWorldBeginPlay() {
}

void UOEIPlayUtilsSubsystem::ExecuteConsoleCommandsFromFile(const FString& Filename) {
}

void UOEIPlayUtilsSubsystem::ExecuteBeginPlayCommands() {
}

void UOEIPlayUtilsSubsystem::DisplayAspectRatio(bool Enable) {
}

UOEIPlayUtilsSubsystem::UOEIPlayUtilsSubsystem() {
    this->BeginPlayCommandsFileName = TEXT("BeginPlayCommands.txt");
}

