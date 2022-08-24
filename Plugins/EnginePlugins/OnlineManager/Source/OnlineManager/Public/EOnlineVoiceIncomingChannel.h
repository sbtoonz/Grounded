#pragma once
#include "CoreMinimal.h"
#include "EOnlineVoiceIncomingChannel.generated.h"

UENUM()
enum class EOnlineVoiceIncomingChannel : uint8 {
    MicrophoneAudio,
    TextToSpeechAudio,
};

