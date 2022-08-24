#pragma once
#include "CoreMinimal.h"
#include "GameUserWidget.h"
#include "HUDTurretInfoWidget.generated.h"

class ATurret;
class ATurretPawn;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class MAINE_API UHUDTurretInfoWidget : public UGameUserWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ATurret* CurrentTurret;
    
public:
    UHUDTurretInfoWidget();
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnTurretChanged(ATurret* Turret);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnAmmoCountChanged(int32 ItemCount);
    
    UFUNCTION(BlueprintCallable)
    void NotifyTurretPawnChanged(ATurretPawn* TurretPawn);
    
};

