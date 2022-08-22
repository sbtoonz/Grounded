#include "GameUserWidget.h"

class ASurvivalPlayerCharacter;
class ASurvivalPlayerController;
class AGameUI;





void UGameUserWidget::NativeOnLanguageChanged() {
}


ASurvivalPlayerCharacter* UGameUserWidget::GetSurvivalPlayerCharacter() const {
    return NULL;
}

ASurvivalPlayerController* UGameUserWidget::GetOwningSurvivalPlayerController() const {
    return NULL;
}

AGameUI* UGameUserWidget::GetGameUI() const {
    return NULL;
}

UGameUserWidget::UGameUserWidget() {
}

