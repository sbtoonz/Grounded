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
	 * WidgetBlueprintGeneratedClass UI_InventoryStatusEffects.UI_InventoryStatusEffects_C
	 * Size -> 0x0030 (FullSize[0x02A8] - InheritedSize[0x0278])
	 */
	class UUI_InventoryStatusEffects_C : public UGameUserWidget
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0278(0x0008) ZeroConstructor, Transient, DuplicateTransient, UObjectWrapper
		class UBorder*                                             HeaderBorder;                                            // 0x0280(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class ULocalizedTextBlock*                                 HeaderText;                                              // 0x0288(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UUI_AppliedStatusEffects_C*                          UI_AppliedStatusEffects;                                 // 0x0290(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		struct FLocString                                          HeaderLocString;                                         // 0x0298(0x0010) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash

	public:
		void GetNarration(TArray<struct FNarrationChunk>* Chunks, bool bVerbose);
		void Construct();
		void OnGlobalColorChange();
		void ExecuteUbergraph_UI_InventoryStatusEffects(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
