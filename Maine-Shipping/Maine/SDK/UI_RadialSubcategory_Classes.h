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
	 * WidgetBlueprintGeneratedClass UI_RadialSubcategory.UI_RadialSubcategory_C
	 * Size -> 0x0020 (FullSize[0x0298] - InheritedSize[0x0278])
	 */
	class UUI_RadialSubcategory_C : public UGameUserWidget
	{
	public:
		class UHorizontalBox*                                      PageBox;                                                 // 0x0278(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UUI_RadialPageDot_C*                                 UI_RadialPageDot;                                        // 0x0280(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		struct FGameplayTag                                        SubcategoryTag;                                          // 0x0288(0x0008) Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash
		int32_t                                                    PageCount;                                               // 0x0290(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    CurrentPage;                                             // 0x0294(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
