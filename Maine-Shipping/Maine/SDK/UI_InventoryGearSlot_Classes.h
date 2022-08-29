#pragma once

/**
 * Name: Maine
 * Version: Shipping
 */

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{
	// --------------------------------------------------
	// # Classes
	// --------------------------------------------------
	/**
	 * WidgetBlueprintGeneratedClass UI_InventoryGearSlot.UI_InventoryGearSlot_C
	 * Size -> 0x0039 (FullSize[0x02B1] - InheritedSize[0x0278])
	 */
	class UUI_InventoryGearSlot_C : public UGameUserWidget
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0278(0x0008) ZeroConstructor, Transient, DuplicateTransient, UObjectWrapper
		class ULocalizedTextBlock*                                 GearName;                                                // 0x0280(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UUI_ItemSlot_C*                                      GearSlot;                                                // 0x0288(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UHorizontalBox*                                      StatusEffectBox;                                         // 0x0290(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UUI_GearEffectWidget_C*                              UI_StatusEffectWidget;                                   // 0x0298(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		struct FLocString                                          NoItemText;                                              // 0x02A0(0x0010) Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash
		EEquipmentSlot                                             GearSlotType;                                            // 0x02B0(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void IsSelected(bool* IsSelected);
		void ShowStatusEffects(class UItem* EquippedItem);
		void InitializeGearSlot(class UEquipmentComponent* OwningComponent, class UItem* EquippedItem);
		void SetGearText(class UItem* EquippedItem);
		void OnGlobalColorChange();
		void PreConstruct(bool IsDesignTime);
		void ExecuteUbergraph_UI_InventoryGearSlot(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
