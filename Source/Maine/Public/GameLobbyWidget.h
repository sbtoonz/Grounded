#pragma once
#include "CoreMinimal.h"
#include "WindowWidget.h"
#include "GameLobbyWidget.generated.h"

UCLASS(Abstract, Blueprintable, EditInlineNew)
class MAINE_API UGameLobbyWidget : public UWindowWidget {
    GENERATED_BODY()
public:
    UGameLobbyWidget();
};

