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
	 * WidgetBlueprintGeneratedClass UI_GearEffectWidget.UI_GearEffectWidget_C
	 * Size -> 0x0019 (FullSize[0x0291] - InheritedSize[0x0278])
	 */
	class UUI_GearEffectWidget_C : public UGameUserWidget
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0278(0x0008) ZeroConstructor, Transient, DuplicateTransient, UObjectWrapper
		class UImage*                                              StatusEffectIcon;                                        // 0x0280(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UTextBlock*                                          StatusEffectName;                                        // 0x0288(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		bool                                                       ShowStatusEffectText;                                    // 0x0290(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor

	public:
		void SetStatusEffectTypeAndCount(const struct FStatusEffectUIData& Type, int32_t Count);
		void SetShowEffectText(bool Show);
		void OnGlobalColorChange();
		void SetStatusEffectData(const struct FStatusEffectData& StatusEffect);
		void Construct();
		void PreConstruct(bool IsDesignTime);
		void ExecuteUbergraph_UI_GearEffectWidget(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
