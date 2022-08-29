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
	 * WidgetBlueprintGeneratedClass UI_EffectListItem.UI_EffectListItem_C
	 * Size -> 0x0048 (FullSize[0x02C0] - InheritedSize[0x0278])
	 */
	class UUI_EffectListItem_C : public UGameUserWidget
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0278(0x0008) ZeroConstructor, Transient, DuplicateTransient, UObjectWrapper
		class UTextBlock*                                          EffectDuration;                                          // 0x0280(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UImage*                                              EffectIcon;                                              // 0x0288(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UTextBlock*                                          EffectName;                                              // 0x0290(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UStatusEffect*                                       StatusEffect;                                            // 0x0298(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FLocString                                          TimeString;                                              // 0x02A0(0x0010) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash
		struct FLocString                                          DayString;                                               // 0x02B0(0x0010) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash

	public:
		void SetStatusEffectTimeRemaining();
		void GetEffectSecondsLeft(int32_t* Seconds);
		void Tick(const struct FGeometry& MyGeometry, float InDeltaTime);
		void SetStatusEffectData(const struct FStatusEffectData& StatusEffect);
		void OnGlobalColorChange();
		void SetStatusEffectUIData(const struct FStatusEffectData& StatusEffectData);
		void SetStatusEffect(class UStatusEffect* StatusEffect);
		void ExecuteUbergraph_UI_EffectListItem(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
