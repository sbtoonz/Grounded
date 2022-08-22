#include "GameInterfaceNarrationLibrary.h"

class UWidget;

FInputChord UGameInterfaceNarrationLibrary::GetFirstChordHelper(FName ActionName, bool bAxisPositive, bool bUsingGamepad) {
    return FInputChord{};
}

void UGameInterfaceNarrationLibrary::AddDoubleControlChunk(TArray<FNarrationChunk>& Chunks, const UWidget* Widget, FName ActionName1, bool bAxisPositive1, FName ActionName2, bool bAxisPositive2, const FString& ActionDisplayName, bool bOnlyIfChanged, bool bVerbose) {
}

void UGameInterfaceNarrationLibrary::AddControlChunk(TArray<FNarrationChunk>& Chunks, const UWidget* Widget, FName ActionName, bool bAxisPositive, const FString& ActionDisplayName, bool bOnlyIfChanged, bool bVerbose, bool bIsHold) {
}

UGameInterfaceNarrationLibrary::UGameInterfaceNarrationLibrary() {
}

