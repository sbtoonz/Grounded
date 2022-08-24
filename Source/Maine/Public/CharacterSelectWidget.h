#pragma once
#include "CoreMinimal.h"
#include "GameUserWidget.h"
#include "CharacterSelectWidget.generated.h"

UCLASS(Abstract, Blueprintable, EditInlineNew)
class MAINE_API UCharacterSelectWidget : public UGameUserWidget {
    GENERATED_BODY()
public:
    UCharacterSelectWidget();
};

