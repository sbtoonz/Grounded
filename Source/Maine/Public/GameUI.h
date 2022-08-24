#pragma once
#include "CoreMinimal.h"
#include "GameFramework/HUD.h"
#include "OnPlayerStateChangeDelegate.h"
#include "OnGlobalColorChangeDelegate.h"
#include "OnShowSubtitlesChangedDelegate.h"
#include "OnLanguageChangedEventDelegate.h"
#include "ChatBoxMessage.h"
#include "GameUI.generated.h"

class ASurvivalPlayerState;
class UTexture2D;
class ASurvivalPlayerCharacter;
class UHUDWidget;

UCLASS(Abstract, Blueprintable, NonTransient)
class MAINE_API AGameUI : public AHUD {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnGlobalColorChange OnGlobalColorChange;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnPlayerStateChange OnPlayerStateGuidChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnShowSubtitlesChanged OnShowSubtitlesChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnLanguageChangedEvent OnLanguageChanged;
    
    AGameUI();
    UFUNCTION(BlueprintCallable)
    void PostPlayerChatMessage(const FString& Message, ASurvivalPlayerState* PlayerState);
    
    UFUNCTION(BlueprintCallable)
    void PostGenericMessage(const FString& Message, UTexture2D* MessageTexture);
    
    UFUNCTION(BlueprintCallable)
    void PostChatMessage(const FChatBoxMessage& Message);
    
    UFUNCTION(BlueprintCallable)
    void OnDayNightChange(bool bIsDayTime);
    
    UFUNCTION(BlueprintCallable)
    void NotifyPossessedPlayerChanged(ASurvivalPlayerCharacter* NewPlayerCharacter);
    
    UFUNCTION(BlueprintCallable)
    void NotifyPlayerStateRegistered(ASurvivalPlayerState* NewPlayerState);
    
    UFUNCTION(BlueprintCallable)
    void NotifyGlobalColorChanged();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetShowSubtitles() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UHUDWidget* GetHUD() const;
    
};

