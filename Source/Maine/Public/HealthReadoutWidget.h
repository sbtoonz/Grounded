#pragma once
#include "CoreMinimal.h"
#include "GameUserWidget.h"
#include "HealthReadoutWidget.generated.h"

class UHealthComponent;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class MAINE_API UHealthReadoutWidget : public UGameUserWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float LastPlayerHealth;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CurrentDisplayedHealth;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float HealthRatio;
    
public:
    UHealthReadoutWidget();
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void UpdateHealthAnim();
    
    UFUNCTION(BlueprintCallable)
    void CheckHealthChange(UHealthComponent* SourceHealthComponent, float NewHealth, float OldHealth);
    
};

