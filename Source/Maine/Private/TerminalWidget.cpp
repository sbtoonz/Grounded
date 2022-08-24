#include "TerminalWidget.h"


void UTerminalWidget::OnInteractionBlockingAnimationEnded() {
}

void UTerminalWidget::ExitCurrentState() {
}

void UTerminalWidget::EnterState(ETerminalWidgetState State) {
}

UTerminalWidget::UTerminalWidget() {
    this->Waiting = NULL;
    this->Start = NULL;
    this->Locked = NULL;
    this->LockedFlash = NULL;
    this->Unlocked = NULL;
    this->LoopingCursor = NULL;
    this->LockedFlashAnim = NULL;
    this->DoorTextLoopAnim = NULL;
    this->StartupUnlockAnim = NULL;
    this->LockedAppearAnim = NULL;
    this->FinishUnlockAnim = NULL;
    this->OwningTerminal = NULL;
    this->InteractionBlocked = false;
    this->CurrentWidget = NULL;
    this->CurrentAnimation = NULL;
    this->CurrentState = ETerminalWidgetState::None;
}

