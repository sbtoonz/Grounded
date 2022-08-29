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
	 * WidgetBlueprintGeneratedClass UI_CraftingCategoryListHeader.UI_CraftingCategoryListHeader_C
	 * Size -> 0x0010 (FullSize[0x02B0] - InheritedSize[0x02A0])
	 */
	class UUI_CraftingCategoryListHeader_C : public UUI_ListSubheader_C
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x02A0(0x0008) ZeroConstructor, Transient, DuplicateTransient, UObjectWrapper
		struct FGameplayTag                                        Subcategory;                                             // 0x02A8(0x0008) Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash

	public:
		void Get_Crafting_Loc_String_from_Subcategory(struct FLocString* LocString);
		void Get_Building_Loc_String_from_Subcategory(struct FLocString* String);
		void Initialize(const struct FGameplayTag& Subcategory);
		void ExecuteUbergraph_UI_CraftingCategoryListHeader(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
