#pragma once
#include "CoreMinimal.h"
#include "WidgetBuilding.h"
#include "CozinessSamplerBuilding.generated.h"

class UCozinessEvaluatorComponent;

UCLASS(Abstract, Blueprintable)
class MAINE_API ACozinessSamplerBuilding : public AWidgetBuilding {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UCozinessEvaluatorComponent* CozinessEvaluatorComponent;
    
public:
    ACozinessSamplerBuilding();
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void K2_HandleCozinessValueChanged(int32 OldValue, int32 NewValue);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void K2_HandleCozinessLevelChanged(int32 OldLevel, int32 NewLevel);
    
protected:
    UFUNCTION(BlueprintCallable)
    void HandleCozinessValueChanged(UCozinessEvaluatorComponent* Sender, int32 OldValue);
    
    UFUNCTION(BlueprintCallable)
    void HandleCozinessLevelChanged(UCozinessEvaluatorComponent* Sender, int32 OldLevel);
    
};

