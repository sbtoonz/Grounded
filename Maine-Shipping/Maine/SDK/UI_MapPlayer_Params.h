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
	 * Function UI_MapPlayer.UI_MapPlayer_C.SetForPlayer
	 */
	struct UUI_MapPlayer_C_SetForPlayer_Params
	{	};

	/**
	 * Function UI_MapPlayer.UI_MapPlayer_C.GetDescriptionWindowIcon
	 */
	struct UUI_MapPlayer_C_GetDescriptionWindowIcon_Params
	{
	public:
		struct FSlateBrush                                         ReturnValue;                                             // 0x0000(0x0088)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function UI_MapPlayer.UI_MapPlayer_C.GetAttentionColor
	 */
	struct UUI_MapPlayer_C_GetAttentionColor_Params
	{
	public:
		struct FLinearColor                                        ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_MapPlayer.UI_MapPlayer_C.RefreshVisuals
	 */
	struct UUI_MapPlayer_C_RefreshVisuals_Params
	{	};

	/**
	 * Function UI_MapPlayer.UI_MapPlayer_C.OnGlobalColorChange
	 */
	struct UUI_MapPlayer_C_OnGlobalColorChange_Params
	{	};

	/**
	 * Function UI_MapPlayer.UI_MapPlayer_C.SetPlayerRotation
	 */
	struct UUI_MapPlayer_C_SetPlayerRotation_Params
	{
	public:
		float                                                      Angle;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_MapPlayer.UI_MapPlayer_C.ExecuteUbergraph_UI_MapPlayer
	 */
	struct UUI_MapPlayer_C_ExecuteUbergraph_UI_MapPlayer_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
