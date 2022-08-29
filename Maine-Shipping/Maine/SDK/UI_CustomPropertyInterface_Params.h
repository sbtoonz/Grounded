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
	 * Function UI_CustomPropertyInterface.UI_CustomPropertyInterface_C.OnKeyDown
	 */
	struct UUI_CustomPropertyInterface_C_OnKeyDown_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		struct FKeyEvent                                           InKeyEvent;                                              // 0x0038(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm)
		struct FEventReply                                         ReturnValue;                                             // 0x0070(0x00B8)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function UI_CustomPropertyInterface.UI_CustomPropertyInterface_C.BndEvt__UI_CustomPropertyInterface_ExitButton_K2Node_ComponentBoundEvent_0_OnNormalButtonClicked__DelegateSignature
	 */
	struct UUI_CustomPropertyInterface_C_BndEvt__UI_CustomPropertyInterface_ExitButton_K2Node_ComponentBoundEvent_0_OnNormalButtonClicked__DelegateSignature_Params
	{	};

	/**
	 * Function UI_CustomPropertyInterface.UI_CustomPropertyInterface_C.BndEvt__UI_CustomPropertyInterface_RefreshDefaultsButton_K2Node_ComponentBoundEvent_1_OnNormalButtonClicked__DelegateSignature
	 */
	struct UUI_CustomPropertyInterface_C_BndEvt__UI_CustomPropertyInterface_RefreshDefaultsButton_K2Node_ComponentBoundEvent_1_OnNormalButtonClicked__DelegateSignature_Params
	{	};

	/**
	 * Function UI_CustomPropertyInterface.UI_CustomPropertyInterface_C.ExecuteUbergraph_UI_CustomPropertyInterface
	 */
	struct UUI_CustomPropertyInterface_C_ExecuteUbergraph_UI_CustomPropertyInterface_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
