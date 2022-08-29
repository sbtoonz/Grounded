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
	 * WidgetBlueprintGeneratedClass UI_PerkTier.UI_PerkTier_C
	 * Size -> 0x0128 (FullSize[0x03A0] - InheritedSize[0x0278])
	 */
	class UUI_PerkTier_C : public UGameUserWidget
	{
	public:
		class UWidgetAnimation*                                    PipEndAnim;                                              // 0x0278(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash
		class UWidgetAnimation*                                    PipProgressAnim;                                         // 0x0280(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash
		class UImage*                                              PipImage;                                                // 0x0288(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		struct FSlateBrush                                         PipEmpty;                                                // 0x0290(0x0088) Edit, BlueprintVisible, DisableEditOnInstance
		struct FSlateBrush                                         PipFilled;                                               // 0x0318(0x0088) Edit, BlueprintVisible, DisableEditOnInstance

	public:
		void SetFilled(bool Filled);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
