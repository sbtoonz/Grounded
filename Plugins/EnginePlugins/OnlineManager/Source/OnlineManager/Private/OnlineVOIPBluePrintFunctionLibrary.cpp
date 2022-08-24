#include "OnlineVOIPBluePrintFunctionLibrary.h"

class APlayerController;
class APlayerState;

bool UOnlineVOIPBluePrintFunctionLibrary::OnlineVoiceSetPlayerVolume(APlayerController* InPlayerController, APlayerState* TargetPlayerState, float InVolume) {
    return false;
}

bool UOnlineVOIPBluePrintFunctionLibrary::OnlineVoicePlayerIsMuted(APlayerController* InPlayerController, APlayerState* TargetPlayerState) {
    return false;
}

void UOnlineVOIPBluePrintFunctionLibrary::OnlineVoiceMutePlayer(APlayerController* InPlayerController, APlayerState* TargetPlayerState, bool bMute) {
}

bool UOnlineVOIPBluePrintFunctionLibrary::OnlineVoiceMicIsEnabled(APlayerController* InPlayerController) {
    return false;
}

bool UOnlineVOIPBluePrintFunctionLibrary::OnlineVoiceIsPlayerTalking(APlayerState* TargetPlayerState) {
    return false;
}

bool UOnlineVOIPBluePrintFunctionLibrary::OnlineVoiceIsPlayerIncomingChannelEnabled(APlayerController* InPlayerController, APlayerState* TargetPlayerState, EOnlineVoiceIncomingChannel IncomingChannel) {
    return false;
}

bool UOnlineVOIPBluePrintFunctionLibrary::OnlineVoiceIsLocalPlayerTalking(APlayerController* InPlayerController) {
    return false;
}

float UOnlineVOIPBluePrintFunctionLibrary::OnlineVoiceGetPlayerVolume(APlayerController* InPlayerController, APlayerState* TargetPlayerState) {
    return 0.0f;
}

void UOnlineVOIPBluePrintFunctionLibrary::OnlineVoiceEnablePlayerIncomingChannel(APlayerController* InPlayerController, APlayerState* TargetPlayerState, EOnlineVoiceIncomingChannel IncomingChannel, bool bEnable) {
}

void UOnlineVOIPBluePrintFunctionLibrary::OnlineVoiceEnableMic(APlayerController* InPlayerController, bool bEnable) {
}

UOnlineVOIPBluePrintFunctionLibrary::UOnlineVOIPBluePrintFunctionLibrary() {
}

