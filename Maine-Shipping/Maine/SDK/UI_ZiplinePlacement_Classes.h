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
	 * WidgetBlueprintGeneratedClass UI_ZiplinePlacement.UI_ZiplinePlacement_C
	 * Size -> 0x0038 (FullSize[0x02B0] - InheritedSize[0x0278])
	 */
	class UUI_ZiplinePlacement_C : public UGameUserWidget
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0278(0x0008) ZeroConstructor, Transient, DuplicateTransient, UObjectWrapper
		class UUI_CraftingRequirements_C*                          UI_CraftingRequirements;                                 // 0x0280(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UHorizontalBox*                                      ZipLineHorizontalBox;                                    // 0x0288(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UBorder*                                             ZipLineWarning;                                          // 0x0290(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UGameTextBlock*                                      ZipLineWarnText;                                         // 0x0298(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class AZiplineSelectorPawn*                                SubscribedZiplineSelector;                               // 0x02A0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UZiplineAnchor*                                      SubscribedZiplineAnchor;                                 // 0x02A8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void UpdateErrorString(class AZiplineSelectorPawn* Pawn, class UZiplineAnchor* Anchor);
		void OnGlobalColorChange();
		void Notify_Zipline_Mode_Changed(class AZiplineSelectorPawn* Selector);
		void On_Target_Zipline_Anchor_Changed(class AZiplineSelectorPawn* Sender, class UZiplineAnchor* Target);
		void HandleZiplineAttached(class UZiplineAnchor* Sender, class AZiplineLine* Line);
		void ExecuteUbergraph_UI_ZiplinePlacement(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
