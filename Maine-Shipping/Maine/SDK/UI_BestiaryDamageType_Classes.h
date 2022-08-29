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
	 * WidgetBlueprintGeneratedClass UI_BestiaryDamageType.UI_BestiaryDamageType_C
	 * Size -> 0x0008 (FullSize[0x0280] - InheritedSize[0x0278])
	 */
	class UUI_BestiaryDamageType_C : public UGameUserWidget
	{
	public:
		class UImage*                                              DamageTypeIcon;                                          // 0x0278(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash

	public:
		void SetIcon(ESurvivalDamageTypeFlags DamageTypeFlag);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
