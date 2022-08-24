#pragma once
#include "CoreMinimal.h"
#include "ArmorEquipmentSlot.h"
#include "GameUserWidget.h"
#include "HUDArmorWidget.generated.h"

UCLASS(Abstract, Blueprintable, EditInlineNew)
class MAINE_API UHUDArmorWidget : public UGameUserWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FArmorEquipmentSlot HeadSlot;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FArmorEquipmentSlot ChestSlot;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FArmorEquipmentSlot LegSlot;
    
public:
    UHUDArmorWidget();
protected:
    UFUNCTION(BlueprintCallable)
    void OnGameModeChanged();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnEquipmentChanged(const FArmorEquipmentSlot& EquipmentSlot);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnDurabilityChanged(const FArmorEquipmentSlot& SlotStruct);
    
};

