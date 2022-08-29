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
	 * WidgetBlueprintGeneratedClass UI_SCABBurgleMessage.UI_SCABBurgleMessage_C
	 * Size -> 0x0008 (FullSize[0x0270] - InheritedSize[0x0268])
	 */
	class UUI_SCABBurgleMessage_C : public UUserWidget
	{
	public:
		class UImage*                                              BurgleTalkAnim;                                          // 0x0268(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash

	public:
		class FText GetDay();
		class FText GetTime();
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
