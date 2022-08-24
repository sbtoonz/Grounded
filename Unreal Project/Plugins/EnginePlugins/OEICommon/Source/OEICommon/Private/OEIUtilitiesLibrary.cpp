#include "OEIUtilitiesLibrary.h"

class UWorld;
class AActor;

TArray<FString> UOEIUtilitiesLibrary::GetLoadedSubLevels(UWorld* World) {
    return TArray<FString>();
}

void UOEIUtilitiesLibrary::ExecuteConsoleCommand(const FString& Command) {
}

bool UOEIUtilitiesLibrary::DoesMapExist(const FString& MapName) {
    return false;
}

void UOEIUtilitiesLibrary::CameraLookAtActor(const TArray<AActor*>& Actors, FVector& OutCameraPos, FRotator& OutCameraRot) {
}

UOEIUtilitiesLibrary::UOEIUtilitiesLibrary() {
}

