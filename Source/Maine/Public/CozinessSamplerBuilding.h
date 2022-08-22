#pragma once
#include "CoreMinimal.h"
#include "WidgetBuilding.h"
#include "CozinessSamplerBuilding.generated.h"

class UCozinessEvaluatorComponent;

UCLASS(Abstract)
class MAINE_API ACozinessSamplerBuilding : public AWidgetBuilding {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(Export, VisibleAnywhere)
    UCozinessEvaluatorComponent* CozinessEvaluatorComponent;
    
public:
    ACozinessSamplerBuilding();
    UFUNCTION(BlueprintImplementableEvent)
    void K2_HandleCozinessValueChanged(int32 OldValue, int32 NewValue);
    
    UFUNCTION(BlueprintImplementableEvent)
    void K2_HandleCozinessLevelChanged(int32 OldLevel, int32 NewLevel);
    
protected:
    UFUNCTION()
    void HandleCozinessValueChanged(UCozinessEvaluatorComponent* Sender, int32 OldValue);
    
    UFUNCTION()
    void HandleCozinessLevelChanged(UCozinessEvaluatorComponent* Sender, int32 OldLevel);
    
};

