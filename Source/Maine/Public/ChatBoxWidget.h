#pragma once
#include "CoreMinimal.h"
#include "GameUserWidget.h"
#include "ChatBoxMessage.h"
#include "ChatBoxWidget.generated.h"

UCLASS(Abstract, Blueprintable, EditInlineNew)
class MAINE_API UChatBoxWidget : public UGameUserWidget {
    GENERATED_BODY()
public:
    UChatBoxWidget();
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void HandleChatMessageReceived(const FChatBoxMessage& Message);
    
};

