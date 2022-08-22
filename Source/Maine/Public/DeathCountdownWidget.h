#pragma once
#include "CoreMinimal.h"
#include "GameUserWidget.h"
#include "DeathCountdownWidget.generated.h"

UCLASS(Abstract, EditInlineNew)
class MAINE_API UDeathCountdownWidget : public UGameUserWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditDefaultsOnly)
    float RenarrateInterval;
    
public:
    UDeathCountdownWidget();
protected:
    UFUNCTION(BlueprintCallable)
    void NotifyElementDeactivated();
    
    UFUNCTION(BlueprintCallable)
    void NotifyElementActivated();
    
};

