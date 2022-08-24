#pragma once
#include "CoreMinimal.h"
#include "WindowWidget.h"
#include "CreateLobbyWidget.generated.h"

UCLASS(Abstract, Blueprintable, EditInlineNew)
class MAINE_API UCreateLobbyWidget : public UWindowWidget {
    GENERATED_BODY()
public:
    UCreateLobbyWidget();
};

