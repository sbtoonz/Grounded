#pragma once
#include "CoreMinimal.h"
#include "GameUserWidget.h"
#include "HUDTurretInfoWidget.generated.h"

class ATurret;
class ATurretPawn;

UCLASS(Abstract, EditInlineNew)
class MAINE_API UHUDTurretInfoWidget : public UGameUserWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite)
    ATurret* CurrentTurret;
    
public:
    UHUDTurretInfoWidget();
protected:
    UFUNCTION(BlueprintImplementableEvent)
    void OnTurretChanged(ATurret* Turret);
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnAmmoCountChanged(int32 ItemCount);
    
    UFUNCTION(BlueprintCallable)
    void NotifyTurretPawnChanged(ATurretPawn* TurretPawn);
    
};

