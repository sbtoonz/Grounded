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
	 * WidgetBlueprintGeneratedClass UI_BuildingRadialHeaderButton.UI_BuildingRadialHeaderButton_C
	 * Size -> 0x03CC (FullSize[0x0688] - InheritedSize[0x02BC])
	 */
	class UUI_BuildingRadialHeaderButton_C : public UUI_RadialHeaderButton_C
	{
	public:
		unsigned char                                              UnknownData_2LTQ[0x4];                                   // 0x02BC(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x02C0(0x0008) ZeroConstructor, Transient, DuplicateTransient, UObjectWrapper
		struct FGameplayTag                                        CurrentCategory;                                         // 0x02C8(0x0008) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash
		struct FSlateBrush                                         NourishmentBrush;                                        // 0x02D0(0x0088) Edit, BlueprintVisible, DisableEditOnInstance
		struct FSlateBrush                                         StructureBrush;                                          // 0x0358(0x0088) Edit, BlueprintVisible, DisableEditOnInstance
		struct FSlateBrush                                         TrapBrush;                                               // 0x03E0(0x0088) Edit, BlueprintVisible, DisableEditOnInstance
		struct FSlateBrush                                         StorageBrush;                                            // 0x0468(0x0088) Edit, BlueprintVisible, DisableEditOnInstance
		struct FSlateBrush                                         DecorationBrush;                                         // 0x04F0(0x0088) Edit, BlueprintVisible, DisableEditOnInstance
		struct FSlateBrush                                         UtilityBrush;                                            // 0x0578(0x0088) Edit, BlueprintVisible, DisableEditOnInstance
		struct FSlateBrush                                         RestingSpotBrush;                                        // 0x0600(0x0088) Edit, BlueprintVisible, DisableEditOnInstance

	public:
		void SetBrushFromCategory(const struct FGameplayTag& CurrentCategory);
		struct FLinearColor GetCategoryColor();
		void SetCategoryBrush(const struct FGameplayTag& Category);
		void ExecuteUbergraph_UI_BuildingRadialHeaderButton(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
