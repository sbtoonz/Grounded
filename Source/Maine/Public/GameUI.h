#pragma once
#include "CoreMinimal.h"
#include "OnPlayerStateChangeDelegate.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=HUD -FallbackName=HUD
#include "OnGlobalColorChangeDelegate.h"
#include "OnShowSubtitlesChangedDelegate.h"
#include "OnLanguageChangedEventDelegate.h"
#include "ChatBoxMessage.h"
#include "GameUI.generated.h"

class UTexture2D;
class ASurvivalPlayerState;
class ASurvivalPlayerCharacter;
class UHUDWidget;

UCLASS(Abstract, NonTransient)
class MAINE_API AGameUI : public AHUD {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable)
    FOnGlobalColorChange OnGlobalColorChange;
    
    UPROPERTY(BlueprintAssignable)
    FOnPlayerStateChange OnPlayerStateGuidChanged;
    
    UPROPERTY(BlueprintAssignable)
    FOnShowSubtitlesChanged OnShowSubtitlesChanged;
    
    UPROPERTY(BlueprintAssignable)
    FOnLanguageChangedEvent OnLanguageChanged;
    
    AGameUI();
    UFUNCTION(BlueprintCallable)
    void PostPlayerChatMessage(const FString& Message, ASurvivalPlayerState* PlayerState);
    
    UFUNCTION(BlueprintCallable)
    void PostGenericMessage(const FString& Message, UTexture2D* MessageTexture);
    
    UFUNCTION(BlueprintCallable)
    void PostChatMessage(const FChatBoxMessage& Message);
    
    UFUNCTION()
    void OnDayNightChange(bool bIsDayTime);
    
    UFUNCTION(BlueprintCallable)
    void NotifyPossessedPlayerChanged(ASurvivalPlayerCharacter* NewPlayerCharacter);
    
    UFUNCTION(BlueprintCallable)
    void NotifyPlayerStateRegistered(ASurvivalPlayerState* NewPlayerState);
    
    UFUNCTION(BlueprintCallable)
    void NotifyGlobalColorChanged();
    
    UFUNCTION(BlueprintPure)
    bool GetShowSubtitles() const;
    
    UFUNCTION(BlueprintPure)
    UHUDWidget* GetHUD() const;
    
};

