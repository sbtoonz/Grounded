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
	 * Function UI_HUD_CommunicationBox.UI_HUD_CommunicationBox_C.GetTextColor
	 */
	struct UUI_HUD_CommunicationBox_C_GetTextColor_Params
	{
	public:
		struct FSlateColor                                         ReturnValue;                                             // 0x0000(0x0028)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function UI_HUD_CommunicationBox.UI_HUD_CommunicationBox_C.GetBGColor
	 */
	struct UUI_HUD_CommunicationBox_C_GetBGColor_Params
	{
	public:
		struct FLinearColor                                        ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_HUD_CommunicationBox.UI_HUD_CommunicationBox_C.OnGlobalColorChange
	 */
	struct UUI_HUD_CommunicationBox_C_OnGlobalColorChange_Params
	{	};

	/**
	 * Function UI_HUD_CommunicationBox.UI_HUD_CommunicationBox_C.ExecuteUbergraph_UI_HUD_CommunicationBox
	 */
	struct UUI_HUD_CommunicationBox_C_ExecuteUbergraph_UI_HUD_CommunicationBox_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
