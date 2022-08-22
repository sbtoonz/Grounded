#pragma once
#include "CoreMinimal.h"
#include "WindowWidget.h"
#include "PlayerListWidget.generated.h"

class APlayerState;
class APlayerController;

UCLASS(Abstract, EditInlineNew)
class MAINE_API UPlayerListWidget : public UWindowWidget {
    GENERATED_BODY()
public:
    UPlayerListWidget();
    UFUNCTION(BlueprintCallable)
    void ViewPlayerProfile(APlayerState* TargetPlayerState);
    
    UFUNCTION(BlueprintCallable)
    void KickPlayer(APlayerController* Controller);
    
};

