#pragma once
#include "CoreMinimal.h"
#include "GameUserWidget.h"
#include "HUDWeaponInfoWidget.generated.h"

class UItem;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class MAINE_API UHUDWeaponInfoWidget : public UGameUserWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UItem* MainHandItem;
    
public:
    UHUDWeaponInfoWidget();
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnPowerChanged(float NewRatio);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnMainHandChanged(UItem* ChangedItem);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnItemCountChanged(int32 ItemCount);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnEnhancementLevelChanged(int32 NewEnhancementLevel);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnDurabilityChanged(float NewRatio);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnAmmoTypeChanged(FName ItemName);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnAmmoCountChanged(int32 ItemCount);
    
};

