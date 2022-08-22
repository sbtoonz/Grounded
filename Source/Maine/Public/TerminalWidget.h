#pragma once
#include "CoreMinimal.h"
#include "GameUserWidget.h"
#include "ETerminalWidgetState.h"
#include "TerminalWidget.generated.h"

class UWidgetAnimation;
class UCanvasPanel;
class ATerminalSwitch;

UCLASS(Abstract, EditInlineNew)
class MAINE_API UTerminalWidget : public UGameUserWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, Export, VisibleAnywhere)
    UCanvasPanel* Waiting;
    
    UPROPERTY(BlueprintReadWrite, Export, VisibleAnywhere)
    UCanvasPanel* Start;
    
    UPROPERTY(BlueprintReadWrite, Export, VisibleAnywhere)
    UCanvasPanel* Locked;
    
    UPROPERTY(BlueprintReadWrite, Export, VisibleAnywhere)
    UCanvasPanel* LockedFlash;
    
    UPROPERTY(BlueprintReadWrite, Export, VisibleAnywhere)
    UCanvasPanel* Unlocked;
    
    UPROPERTY(BlueprintReadWrite, Transient, VisibleAnywhere)
    UWidgetAnimation* LoopingCursor;
    
    UPROPERTY(BlueprintReadWrite, Transient, VisibleAnywhere)
    UWidgetAnimation* LockedFlashAnim;
    
    UPROPERTY(BlueprintReadWrite, Transient, VisibleAnywhere)
    UWidgetAnimation* DoorTextLoopAnim;
    
    UPROPERTY(BlueprintReadWrite, Transient, VisibleAnywhere)
    UWidgetAnimation* StartupUnlockAnim;
    
    UPROPERTY(BlueprintReadWrite, Transient, VisibleAnywhere)
    UWidgetAnimation* LockedAppearAnim;
    
    UPROPERTY(BlueprintReadWrite, Transient, VisibleAnywhere)
    UWidgetAnimation* FinishUnlockAnim;
    
protected:
    UPROPERTY(BlueprintReadOnly, Transient)
    ATerminalSwitch* OwningTerminal;
    
private:
    UPROPERTY(Transient)
    bool InteractionBlocked;
    
    UPROPERTY(Export, Transient)
    UCanvasPanel* CurrentWidget;
    
    UPROPERTY(Transient)
    UWidgetAnimation* CurrentAnimation;
    
    UPROPERTY(Transient)
    ETerminalWidgetState CurrentState;
    
public:
    UTerminalWidget();
    UFUNCTION(BlueprintImplementableEvent)
    void OnStateEntered(ETerminalWidgetState State);
    
    UFUNCTION()
    void OnInteractionBlockingAnimationEnded();
    
private:
    UFUNCTION(BlueprintCallable)
    void ExitCurrentState();
    
public:
    UFUNCTION(BlueprintCallable)
    void EnterState(ETerminalWidgetState State);
    
};

