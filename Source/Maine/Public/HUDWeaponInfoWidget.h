#pragma once
#include "CoreMinimal.h"
#include "GameUserWidget.h"
#include "HUDWeaponInfoWidget.generated.h"

class UItem;

UCLASS(Abstract, EditInlineNew)
class MAINE_API UHUDWeaponInfoWidget : public UGameUserWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, Transient)
    UItem* MainHandItem;
    
public:
    UHUDWeaponInfoWidget();
protected:
    UFUNCTION(BlueprintImplementableEvent)
    void OnPowerChanged(float NewRatio);
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnMainHandChanged(UItem* ChangedItem);
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnItemCountChanged(int32 ItemCount);
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnEnhancementLevelChanged(int32 NewEnhancementLevel);
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnDurabilityChanged(float NewRatio);
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnAmmoTypeChanged(FName ItemName);
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnAmmoCountChanged(int32 ItemCount);
    
};

