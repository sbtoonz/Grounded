#pragma once
#include "CoreMinimal.h"
#include "GameUserWidget.h"
#include "DeathCountdownWidget.generated.h"

UCLASS(Abstract, Blueprintable, EditInlineNew)
class MAINE_API UDeathCountdownWidget : public UGameUserWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float RenarrateInterval;
    
public:
    UDeathCountdownWidget();
protected:
    UFUNCTION(BlueprintCallable)
    void NotifyElementDeactivated();
    
    UFUNCTION(BlueprintCallable)
    void NotifyElementActivated();
    
};

