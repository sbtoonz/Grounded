#pragma once
#include "CoreMinimal.h"
#include "GameUserWidget.h"
#include "LatencyWidget.generated.h"

UCLASS(Abstract, Blueprintable, EditInlineNew)
class MAINE_API ULatencyWidget : public UGameUserWidget {
    GENERATED_BODY()
public:
    ULatencyWidget();
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnPingChanged(int32 Ping);
    
};

