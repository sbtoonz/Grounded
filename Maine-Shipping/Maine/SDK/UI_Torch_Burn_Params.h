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
	 * Function UI_Torch_Burn.UI_Torch_Burn_C.GetLightIconColor
	 */
	struct UUI_Torch_Burn_C_GetLightIconColor_Params
	{
	public:
		struct FLinearColor                                        ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_Torch_Burn.UI_Torch_Burn_C.Get_OffText_ColorAndOpacity_1
	 */
	struct UUI_Torch_Burn_C_Get_OffText_ColorAndOpacity_1_Params
	{
	public:
		struct FSlateColor                                         ReturnValue;                                             // 0x0000(0x0028)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function UI_Torch_Burn.UI_Torch_Burn_C.Get_OnText_Visibility_1
	 */
	struct UUI_Torch_Burn_C_Get_OnText_Visibility_1_Params
	{
	public:
		ESlateVisibility                                           ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_ZTPN[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function UI_Torch_Burn.UI_Torch_Burn_C.Get_TorchBurnPercent_ColorAndOpacity_1
	 */
	struct UUI_Torch_Burn_C_Get_TorchBurnPercent_ColorAndOpacity_1_Params
	{
	public:
		struct FSlateColor                                         ReturnValue;                                             // 0x0000(0x0028)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function UI_Torch_Burn.UI_Torch_Burn_C.Get_RatioBG_ColorAndOpacity_1
	 */
	struct UUI_Torch_Burn_C_Get_RatioBG_ColorAndOpacity_1_Params
	{
	public:
		struct FLinearColor                                        ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_Torch_Burn.UI_Torch_Burn_C.GetUnlitText
	 */
	struct UUI_Torch_Burn_C_GetUnlitText_Params
	{
	public:
		struct FSlateColor                                         ReturnValue;                                             // 0x0000(0x0028)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function UI_Torch_Burn.UI_Torch_Burn_C.IsTorchUnlit
	 */
	struct UUI_Torch_Burn_C_IsTorchUnlit_Params
	{
	public:
		ESlateVisibility                                           ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_7XEN[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function UI_Torch_Burn.UI_Torch_Burn_C.GetFireColor
	 */
	struct UUI_Torch_Burn_C_GetFireColor_Params
	{
	public:
		struct FLinearColor                                        ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_Torch_Burn.UI_Torch_Burn_C.GetBasicText
	 */
	struct UUI_Torch_Burn_C_GetBasicText_Params
	{
	public:
		struct FSlateColor                                         ReturnValue;                                             // 0x0000(0x0028)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function UI_Torch_Burn.UI_Torch_Burn_C.GetFillColor
	 */
	struct UUI_Torch_Burn_C_GetFillColor_Params
	{
	public:
		struct FLinearColor                                        ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_Torch_Burn.UI_Torch_Burn_C.GetBaseColor
	 */
	struct UUI_Torch_Burn_C_GetBaseColor_Params
	{
	public:
		struct FLinearColor                                        ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_Torch_Burn.UI_Torch_Burn_C.IsTorchLit
	 */
	struct UUI_Torch_Burn_C_IsTorchLit_Params
	{
	public:
		ESlateVisibility                                           ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_2OYI[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function UI_Torch_Burn.UI_Torch_Burn_C.TorchPercent
	 */
	struct UUI_Torch_Burn_C_TorchPercent_Params
	{
	public:
		class FText                                                ReturnValue;                                             // 0x0000(0x0018)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function UI_Torch_Burn.UI_Torch_Burn_C.GetBurnPercentage
	 */
	struct UUI_Torch_Burn_C_GetBurnPercentage_Params
	{
	public:
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_04MB[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function UI_Torch_Burn.UI_Torch_Burn_C.Tick
	 */
	struct UUI_Torch_Burn_C_Tick_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		float                                                      InDeltaTime;                                             // 0x0038(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_Torch_Burn.UI_Torch_Burn_C.OnGlobalColorChange
	 */
	struct UUI_Torch_Burn_C_OnGlobalColorChange_Params
	{	};

	/**
	 * Function UI_Torch_Burn.UI_Torch_Burn_C.OnTorchPercentChanged
	 */
	struct UUI_Torch_Burn_C_OnTorchPercentChanged_Params
	{
	public:
		float                                                      TorchPercent;                                            // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_Torch_Burn.UI_Torch_Burn_C.OnItemPowerStateChanged
	 */
	struct UUI_Torch_Burn_C_OnItemPowerStateChanged_Params
	{
	public:
		bool                                                       bIsPowerOn;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_Torch_Burn.UI_Torch_Burn_C.ExecuteUbergraph_UI_Torch_Burn
	 */
	struct UUI_Torch_Burn_C_ExecuteUbergraph_UI_Torch_Burn_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_RUOO[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
