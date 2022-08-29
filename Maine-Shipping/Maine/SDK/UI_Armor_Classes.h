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
	 * WidgetBlueprintGeneratedClass UI_Armor.UI_Armor_C
	 * Size -> 0x0040 (FullSize[0x02F0] - InheritedSize[0x02B0])
	 */
	class UUI_Armor_C : public UHUDArmorWidget
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x02B0(0x0008) ZeroConstructor, Transient, DuplicateTransient, UObjectWrapper
		class UWidgetAnimation*                                    OnDamageAnim;                                            // 0x02B8(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash
		class UImage*                                              SlotA;                                                   // 0x02C0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UUI_DurabilityFill_C*                                SlotAFill;                                               // 0x02C8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UImage*                                              SlotB;                                                   // 0x02D0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UUI_DurabilityFill_C*                                SlotBFill;                                               // 0x02D8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UImage*                                              SlotC;                                                   // 0x02E0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UUI_DurabilityFill_C*                                SlotCFill;                                               // 0x02E8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash

	public:
		void ItemHasDurability(class UItem* Item, bool* HasDurability);
		struct FLinearColor GetSlotABGColor();
		void OnGlobalColorChange();
		void OnEquipmentChanged(const struct FArmorEquipmentSlot& EquipmentSlot);
		void OnDurabilityChanged(const struct FArmorEquipmentSlot& SlotStruct);
		void HandleDurabilityChanged(class UUI_DurabilityFill_C* DurabilityWidget, float DurabilityValue);
		void HandleEquipmentChanged(class UUI_DurabilityFill_C* UIDurabilityFill, class UImage* IconImage, const struct FArmorEquipmentSlot& EquipmentSlotStruct);
		void ExecuteUbergraph_UI_Armor(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
