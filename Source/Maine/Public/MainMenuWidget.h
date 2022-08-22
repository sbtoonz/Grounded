#pragma once
#include "CoreMinimal.h"
#include "WindowWidget.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=OEIText -ObjectName=LocString -FallbackName=LocString
#include "EMainMenuStateTransitionType.h"
#include "EMainMenuState.h"
#include "EActiveUserChangeType.h"
#include "MainMenuWidget.generated.h"

class UMainMenuButtonsGroup;
class UTextBlock;

UCLASS(Abstract, EditInlineNew)
class MAINE_API UMainMenuWidget : public UWindowWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, Export)
    UTextBlock* PressAnyKeyText;
    
    UPROPERTY(BlueprintReadOnly, Export)
    UMainMenuButtonsGroup* MainMenuButtons;
    
    UPROPERTY(BlueprintReadOnly, Export)
    UMainMenuButtonsGroup* NewContinueButtonOptions;
    
    UPROPERTY(BlueprintReadOnly, Export)
    UMainMenuButtonsGroup* HostJoinButtonOptions;
    
    UPROPERTY(EditDefaultsOnly)
    FLocString LobbyString;
    
    UPROPERTY(EditDefaultsOnly)
    FLocString LoadString;
    
public:
    UMainMenuWidget();
protected:
    UFUNCTION(BlueprintImplementableEvent)
    void TransitionToMainMenuState(EMainMenuState FromState, EMainMenuState ToState, EMainMenuStateTransitionType TransitionType);
    
    UFUNCTION(BlueprintImplementableEvent)
    void StartNewSinglePlayerGame();
    
    UFUNCTION(BlueprintCallable)
    void SetFocusForCurrentState();
    
    UFUNCTION(BlueprintCallable)
    void PushMainMenuState(EMainMenuState NewState, bool ReplacePriorState);
    
public:
    UFUNCTION(BlueprintCallable)
    void PopToState(EMainMenuState NewState);
    
protected:
    UFUNCTION(BlueprintCallable)
    void PopMainMenuState();
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnSinglePlayerNewGameClicked();
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnSinglePlayerContinueClicked();
    
    UFUNCTION(BlueprintCallable)
    void OnSinglePlayerClicked();
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnMultiplayerNewGameClicked();
    
    UFUNCTION(BlueprintCallable)
    void OnMultiplayerHostClicked();
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnMultiplayerContinueClicked();
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnMultiplayerConnectionError();
    
    UFUNCTION(BlueprintCallable)
    void OnMultiplayerClicked();
    
    UFUNCTION()
    void OnLoadUserGameSettingsComplete();
    
    UFUNCTION(BlueprintCallable)
    void OnButtonExitClicked();
    
    UFUNCTION(BlueprintCallable)
    void OnBackInput();
    
    UFUNCTION()
    void OnActiveUserChanged(EActiveUserChangeType ChangeType);
    
    UFUNCTION(BlueprintCallable)
    void NotifyNewGameClicked();
    
    UFUNCTION(BlueprintCallable)
    void NotifyContinueClicked();
    
    UFUNCTION(BlueprintCallable)
    void HostMultiplayerLobby(bool bPasswordProtected);
    
    UFUNCTION(BlueprintImplementableEvent)
    void HandleShowPressAnyKeyPromptBegin();
    
    UFUNCTION()
    void HandlePlayerInput(int32 UserIndex);
    
    UFUNCTION(BlueprintPure)
    EMainMenuState GetMainMenuState() const;
    
    UFUNCTION(BlueprintCallable)
    void CreateSinglePlayerLobby();
    
};

