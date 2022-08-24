#include "InterfaceNarrationLibrary.h"

class UObject;
class UWidget;
class UNarratableUserWidget;

void UInterfaceNarrationLibrary::StopNarrationByPriorityExact(UObject* WorldContextObject, EInterfaceNarrationPriority Priority) {
}

void UInterfaceNarrationLibrary::StopNarration(UObject* WorldContextObject) {
}

void UInterfaceNarrationLibrary::SetNarrationTemporarilyEnabled(UObject* WorldContextObject, bool bTempState) {
}

void UInterfaceNarrationLibrary::NarrateFromWindow(const UWidget* Widget, uint8 Flags) {
}

void UInterfaceNarrationLibrary::NarrateFrom(const UNarratableUserWidget* Widget, uint8 Flags, EInterfaceNarrationPriority Priority) {
}

void UInterfaceNarrationLibrary::NarrateExplicitText(const UWidget* Widget, FText Text, EInterfaceNarrationPriority Priority) {
}

void UInterfaceNarrationLibrary::NarrateExplicitString(const UWidget* Widget, const FString& String, EInterfaceNarrationPriority Priority) {
}

void UInterfaceNarrationLibrary::NarrateExplicitChunks(const UWidget* Widget, const TArray<FNarrationChunk>& Chunks, EInterfaceNarrationPriority Priority) {
}

uint8 UInterfaceNarrationLibrary::MakeNarrationFlags(bool bIgnoreChangeCheck, bool bVerbose) {
    return 0;
}

FNarrationChunk UInterfaceNarrationLibrary::AddNarrationChunkString(TArray<FNarrationChunk>& Chunks, const UWidget* Widget, const FString& String, bool bOnlyIfChanged, bool bVerbose) {
    return FNarrationChunk{};
}

FNarrationChunk UInterfaceNarrationLibrary::AddNarrationChunkLocString(TArray<FNarrationChunk>& Chunks, const UWidget* Widget, FLocString String, bool bOnlyIfChanged, bool bVerbose) {
    return FNarrationChunk{};
}

FNarrationChunk UInterfaceNarrationLibrary::AddNarrationChunk(TArray<FNarrationChunk>& Chunks, const UWidget* Widget, FText Text, bool bOnlyIfChanged, bool bVerbose) {
    return FNarrationChunk{};
}

UInterfaceNarrationLibrary::UInterfaceNarrationLibrary() {
}

