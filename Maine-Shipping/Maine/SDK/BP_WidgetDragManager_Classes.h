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
	 * BlueprintGeneratedClass BP_WidgetDragManager.BP_WidgetDragManager_C
	 * Size -> 0x0021 (FullSize[0x0049] - InheritedSize[0x0028])
	 */
	class UBP_WidgetDragManager_C : public UObject
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0028(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UUI_BaseSlot_C*                                      SourceItemSlot;                                          // 0x0030(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UItem*                                               PreviousFocusedItem;                                     // 0x0038(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UUI_BaseSlot_C*                                      PreviousFocusedSlot;                                     // 0x0040(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       IsDraggingWidget;                                        // 0x0048(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor

	public:
		void Init();
		void IsDragging(bool* IsDragging);
		void OnDragBegin(class UUI_BaseSlot_C* Source);
		void OnDragCancel(class UUI_BaseSlot_C* SlotCanceledFrom, bool ManualCancel);
		void OnDragDrop(class UUI_BaseSlot_C* DestinationItemSlot);
		void HandleItemSlotFocused(class UUI_BaseSlot_C* ItemSlot);
		void HandleItemSlotUnfocused(class UUI_BaseSlot_C* ItemSlot);
		void Initialize(class UWidgetManager* WidgetManager);
		void OnWindowStackChanged();
		void ExecuteUbergraph_BP_WidgetDragManager(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
