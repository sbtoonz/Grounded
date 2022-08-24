#include "OEIVoiceOverBPLibrary.h"

class AActor;

bool UOEIVoiceOverBPLibrary::StopVoiceOver(AActor* Actor) {
    return false;
}

bool UOEIVoiceOverBPLibrary::ResumeVoiceOver(AActor* Actor) {
    return false;
}

bool UOEIVoiceOverBPLibrary::PlayVoiceOver(AActor* Actor, const FVoiceOverData& Data, float StartTime, const FVoiceOverPlaybackStartedDynamicDelegate& PlaybackStarted) {
    return false;
}

bool UOEIVoiceOverBPLibrary::PauseVoiceOver(AActor* Actor) {
    return false;
}

UOEIVoiceOverBPLibrary::UOEIVoiceOverBPLibrary() {
}

