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
	// # Structs
	// --------------------------------------------------
	/**
	 * Function UI_KeyItemCollection.UI_KeyItemCollection_C.PopulateItems
	 */
	struct UUI_KeyItemCollection_C_PopulateItems_Params
	{	};

	/**
	 * Function UI_KeyItemCollection.UI_KeyItemCollection_C.Initialize
	 */
	struct UUI_KeyItemCollection_C_Initialize_Params
	{
	public:
		struct FGameplayTag                                        Category;                                                // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
		struct FGameplayTag                                        Subcategory;                                             // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_KeyItemCollection.UI_KeyItemCollection_C.OnItemFocus
	 */
	struct UUI_KeyItemCollection_C_OnItemFocus_Params
	{
	public:
		class UUI_BaseSlot_C*                                      Slot;                                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_KeyItemCollection.UI_KeyItemCollection_C.OnItemDoubleClick
	 */
	struct UUI_KeyItemCollection_C_OnItemDoubleClick_Params
	{
	public:
		class UUI_BaseSlot_C*                                      Slot;                                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_KeyItemCollection.UI_KeyItemCollection_C.OnGlobalColorChange
	 */
	struct UUI_KeyItemCollection_C_OnGlobalColorChange_Params
	{	};

	/**
	 * Function UI_KeyItemCollection.UI_KeyItemCollection_C.ExecuteUbergraph_UI_KeyItemCollection
	 */
	struct UUI_KeyItemCollection_C_ExecuteUbergraph_UI_KeyItemCollection_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_KeyItemCollection.UI_KeyItemCollection_C.OnItemClicked__DelegateSignature
	 */
	struct UUI_KeyItemCollection_C_OnItemClicked__DelegateSignature_Params
	{
	public:
		class UUI_KeyItemCollection_C*                             ItemCollection;                                          // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UUI_BaseSlot_C*                                      ItemSlot;                                                // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_KeyItemCollection.UI_KeyItemCollection_C.OnItemSelected__DelegateSignature
	 */
	struct UUI_KeyItemCollection_C_OnItemSelected__DelegateSignature_Params
	{
	public:
		class UUI_KeyItemCollection_C*                             ItemCollection;                                          // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UUI_BaseSlot_C*                                      ItemSlot;                                                // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
