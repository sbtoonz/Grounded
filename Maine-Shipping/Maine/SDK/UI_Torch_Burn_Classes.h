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
	 * WidgetBlueprintGeneratedClass UI_Torch_Burn.UI_Torch_Burn_C
	 * Size -> 0x0028 (FullSize[0x02B8] - InheritedSize[0x0290])
	 */
	class UUI_Torch_Burn_C : public UTorchIndicatorWidget
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0290(0x0008) ZeroConstructor, Transient, DuplicateTransient, UObjectWrapper
		class UImage*                                              Light;                                                   // 0x0298(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UImage*                                              PowerFill;                                               // 0x02A0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UImage*                                              RatioBG;                                                 // 0x02A8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UTextBlock*                                          TorchBurnPercent;                                        // 0x02B0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash

	public:
		struct FLinearColor GetLightIconColor();
		struct FSlateColor Get_OffText_ColorAndOpacity_1();
		ESlateVisibility Get_OnText_Visibility_1();
		struct FSlateColor Get_TorchBurnPercent_ColorAndOpacity_1();
		struct FLinearColor Get_RatioBG_ColorAndOpacity_1();
		struct FSlateColor GetUnlitText();
		ESlateVisibility IsTorchUnlit();
		struct FLinearColor GetFireColor();
		struct FSlateColor GetBasicText();
		struct FLinearColor GetFillColor();
		struct FLinearColor GetBaseColor();
		ESlateVisibility IsTorchLit();
		class FText TorchPercent();
		float GetBurnPercentage();
		void Tick(const struct FGeometry& MyGeometry, float InDeltaTime);
		void OnGlobalColorChange();
		void OnTorchPercentChanged(float TorchPercent);
		void OnItemPowerStateChanged(bool bIsPowerOn);
		void ExecuteUbergraph_UI_Torch_Burn(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
