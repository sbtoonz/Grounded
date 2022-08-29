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
	 * Function UI_HUDControl.UI_HUDControl_C.SetAction
	 */
	struct UUI_HUDControl_C_SetAction_Params
	{
	public:
		class FName                                                InputName;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       bPositive;                                               // 0x0008(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_HUDControl.UI_HUDControl_C.GetIsCancellingInteract
	 */
	struct UUI_HUDControl_C_GetIsCancellingInteract_Params
	{
	public:
		bool                                                       bResult;                                                 // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_4N7P[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function UI_HUDControl.UI_HUDControl_C.GetIsInteracting
	 */
	struct UUI_HUDControl_C_GetIsInteracting_Params
	{
	public:
		bool                                                       bResult;                                                 // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_N9MU[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function UI_HUDControl.UI_HUDControl_C.GetNarration
	 */
	struct UUI_HUDControl_C_GetNarration_Params
	{
	public:
		TArray<struct FNarrationChunk>                             Chunks;                                                  // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		bool                                                       bVerbose;                                                // 0x0010(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_1H3B[0x7];                                   // 0x0011(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function UI_HUDControl.UI_HUDControl_C.FillEvent
	 */
	struct UUI_HUDControl_C_FillEvent_Params
	{	};

	/**
	 * Function UI_HUDControl.UI_HUDControl_C.UpdateAllColors
	 */
	struct UUI_HUDControl_C_UpdateAllColors_Params
	{	};

	/**
	 * Function UI_HUDControl.UI_HUDControl_C.Set Action Allowed
	 */
	struct UUI_HUDControl_C_Set_Action_Allowed_Params
	{
	public:
		bool                                                       bNewEnabled;                                             // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_HUDControl.UI_HUDControl_C.GetCancelHoldFillPercent
	 */
	struct UUI_HUDControl_C_GetCancelHoldFillPercent_Params
	{
	public:
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_O2BX[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function UI_HUDControl.UI_HUDControl_C.GetBasicColor
	 */
	struct UUI_HUDControl_C_GetBasicColor_Params
	{
	public:
		struct FSlateColor                                         ReturnValue;                                             // 0x0000(0x0028)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function UI_HUDControl.UI_HUDControl_C.GetSelectedColor
	 */
	struct UUI_HUDControl_C_GetSelectedColor_Params
	{
	public:
		struct FLinearColor                                        ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_HUDControl.UI_HUDControl_C.GetKeyColor
	 */
	struct UUI_HUDControl_C_GetKeyColor_Params
	{
	public:
		struct FLinearColor                                        ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_HUDControl.UI_HUDControl_C.GetIconColor
	 */
	struct UUI_HUDControl_C_GetIconColor_Params
	{
	public:
		struct FLinearColor                                        ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_HUDControl.UI_HUDControl_C.GetKeyTextVisibility
	 */
	struct UUI_HUDControl_C_GetKeyTextVisibility_Params
	{
	public:
		ESlateVisibility                                           ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_HUDControl.UI_HUDControl_C.GetFaceButtonVisibility
	 */
	struct UUI_HUDControl_C_GetFaceButtonVisibility_Params
	{
	public:
		ESlateVisibility                                           ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_HUDControl.UI_HUDControl_C.OnGlobalColorChange
	 */
	struct UUI_HUDControl_C_OnGlobalColorChange_Params
	{	};

	/**
	 * Function UI_HUDControl.UI_HUDControl_C.PreConstruct
	 */
	struct UUI_HUDControl_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_HUDControl.UI_HUDControl_C.SetDynamicText
	 */
	struct UUI_HUDControl_C_SetDynamicText_Params
	{
	public:
		class FString                                              inString;                                                // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_HUDControl.UI_HUDControl_C.Tick
	 */
	struct UUI_HUDControl_C_Tick_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		float                                                      InDeltaTime;                                             // 0x0038(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_HUDControl.UI_HUDControl_C.ExecuteUbergraph_UI_HUDControl
	 */
	struct UUI_HUDControl_C_ExecuteUbergraph_UI_HUDControl_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_VIC5[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
