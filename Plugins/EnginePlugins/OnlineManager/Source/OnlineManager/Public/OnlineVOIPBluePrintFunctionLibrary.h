#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "EOnlineVoiceIncomingChannel.h"
#include "OnlineVOIPBluePrintFunctionLibrary.generated.h"

class APlayerController;
class APlayerState;

UCLASS(Blueprintable, MinimalAPI)
class UOnlineVOIPBluePrintFunctionLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UOnlineVOIPBluePrintFunctionLibrary();
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool OnlineVoiceSetPlayerVolume(APlayerController* InPlayerController, APlayerState* TargetPlayerState, float InVolume);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool OnlineVoicePlayerIsMuted(APlayerController* InPlayerController, APlayerState* TargetPlayerState);
    
    UFUNCTION(BlueprintCallable)
    static void OnlineVoiceMutePlayer(APlayerController* InPlayerController, APlayerState* TargetPlayerState, bool bMute);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool OnlineVoiceMicIsEnabled(APlayerController* InPlayerController);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool OnlineVoiceIsPlayerTalking(APlayerState* TargetPlayerState);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool OnlineVoiceIsPlayerIncomingChannelEnabled(APlayerController* InPlayerController, APlayerState* TargetPlayerState, EOnlineVoiceIncomingChannel IncomingChannel);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool OnlineVoiceIsLocalPlayerTalking(APlayerController* InPlayerController);
    
    UFUNCTION(BlueprintCallable)
    static float OnlineVoiceGetPlayerVolume(APlayerController* InPlayerController, APlayerState* TargetPlayerState);
    
    UFUNCTION(BlueprintCallable)
    static void OnlineVoiceEnablePlayerIncomingChannel(APlayerController* InPlayerController, APlayerState* TargetPlayerState, EOnlineVoiceIncomingChannel IncomingChannel, bool bEnable);
    
    UFUNCTION(BlueprintCallable)
    static void OnlineVoiceEnableMic(APlayerController* InPlayerController, bool bEnable);
    
};

