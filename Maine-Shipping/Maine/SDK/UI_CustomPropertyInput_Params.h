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
	// # Structs
	// --------------------------------------------------
	/**
	 * Function UI_CustomPropertyInput.UI_CustomPropertyInput_C.SetCheckboxStyles
	 */
	struct UUI_CustomPropertyInput_C_SetCheckboxStyles_Params
	{	};

	/**
	 * Function UI_CustomPropertyInput.UI_CustomPropertyInput_C.SetSliderStyles
	 */
	struct UUI_CustomPropertyInput_C_SetSliderStyles_Params
	{
	public:
		bool                                                       IsEnableChangeEvent;                                     // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       IsEnabled;                                               // 0x0001(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_3Q24[0x2];                                   // 0x0002(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function UI_CustomPropertyInput.UI_CustomPropertyInput_C.SetDropdownStyles
	 */
	struct UUI_CustomPropertyInput_C_SetDropdownStyles_Params
	{	};

	/**
	 * Function UI_CustomPropertyInput.UI_CustomPropertyInput_C.SetInputStyles
	 */
	struct UUI_CustomPropertyInput_C_SetInputStyles_Params
	{
	public:
		ECustomPropertyInputType                                   InputType;                                               // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_CustomPropertyInput.UI_CustomPropertyInput_C.OnEnabledChanged
	 */
	struct UUI_CustomPropertyInput_C_OnEnabledChanged_Params
	{
	public:
		bool                                                       Enabled;                                                 // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_CustomPropertyInput.UI_CustomPropertyInput_C.ExecuteUbergraph_UI_CustomPropertyInput
	 */
	struct UUI_CustomPropertyInput_C_ExecuteUbergraph_UI_CustomPropertyInput_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
