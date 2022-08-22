#pragma once
#include "CoreMinimal.h"
#include "GameUserWidget.h"
#include "ArmorEquipmentSlot.h"
#include "HUDArmorWidget.generated.h"

UCLASS(Abstract, EditInlineNew)
class MAINE_API UHUDArmorWidget : public UGameUserWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly)
    FArmorEquipmentSlot HeadSlot;
    
    UPROPERTY(BlueprintReadOnly)
    FArmorEquipmentSlot ChestSlot;
    
    UPROPERTY(BlueprintReadOnly)
    FArmorEquipmentSlot LegSlot;
    
public:
    UHUDArmorWidget();
protected:
    UFUNCTION()
    void OnGameModeChanged();
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnEquipmentChanged(const FArmorEquipmentSlot& EquipmentSlot);
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnDurabilityChanged(const FArmorEquipmentSlot& SlotStruct);
    
};

