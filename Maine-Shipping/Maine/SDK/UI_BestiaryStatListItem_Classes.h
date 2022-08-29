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
	 * WidgetBlueprintGeneratedClass UI_BestiaryStatListItem.UI_BestiaryStatListItem_C
	 * Size -> 0x0008 (FullSize[0x0270] - InheritedSize[0x0268])
	 */
	class UUI_BestiaryStatListItem_C : public UUserWidget
	{
	public:
		class UTextBlock*                                          StatText;                                                // 0x0268(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash

	public:
		void SetStat(class UPlayerStatConfig* StatConfig);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
