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
	 * WidgetBlueprintGeneratedClass UI_CustomPropertyInput.UI_CustomPropertyInput_C
	 * Size -> 0x0009 (FullSize[0x0311] - InheritedSize[0x0308])
	 */
	class UUI_CustomPropertyInput_C : public UCustomPropertyWidget
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0308(0x0008) ZeroConstructor, Transient, DuplicateTransient, UObjectWrapper
		ECustomPropertyInputType                                   InputType;                                               // 0x0310(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void SetCheckboxStyles();
		void SetSliderStyles(bool IsEnableChangeEvent, bool IsEnabled);
		void SetDropdownStyles();
		void SetInputStyles(ECustomPropertyInputType InputType);
		void OnEnabledChanged(bool Enabled);
		void ExecuteUbergraph_UI_CustomPropertyInput(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
