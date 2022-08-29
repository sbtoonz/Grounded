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
	 * Function UI_BuildingControl.UI_BuildingControl_C.UpdateAllColors
	 */
	struct UUI_BuildingControl_C_UpdateAllColors_Params
	{	};

	/**
	 * Function UI_BuildingControl.UI_BuildingControl_C.Set Action Allowed
	 */
	struct UUI_BuildingControl_C_Set_Action_Allowed_Params
	{
	public:
		bool                                                       bNewEnabled;                                             // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_BuildingControl.UI_BuildingControl_C.GetCancelHoldFillPercent
	 */
	struct UUI_BuildingControl_C_GetCancelHoldFillPercent_Params
	{
	public:
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_BRRW[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function UI_BuildingControl.UI_BuildingControl_C.GetBasicColor
	 */
	struct UUI_BuildingControl_C_GetBasicColor_Params
	{
	public:
		struct FSlateColor                                         ReturnValue;                                             // 0x0000(0x0028)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function UI_BuildingControl.UI_BuildingControl_C.GetSelectedColor
	 */
	struct UUI_BuildingControl_C_GetSelectedColor_Params
	{
	public:
		struct FLinearColor                                        ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_BuildingControl.UI_BuildingControl_C.GetKeyColor
	 */
	struct UUI_BuildingControl_C_GetKeyColor_Params
	{
	public:
		struct FLinearColor                                        ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_BuildingControl.UI_BuildingControl_C.GetIconColor
	 */
	struct UUI_BuildingControl_C_GetIconColor_Params
	{
	public:
		struct FLinearColor                                        ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_BuildingControl.UI_BuildingControl_C.GetKeyTextVisibility
	 */
	struct UUI_BuildingControl_C_GetKeyTextVisibility_Params
	{
	public:
		ESlateVisibility                                           ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_BuildingControl.UI_BuildingControl_C.GetFaceButtonVisibility
	 */
	struct UUI_BuildingControl_C_GetFaceButtonVisibility_Params
	{
	public:
		ESlateVisibility                                           ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_BuildingControl.UI_BuildingControl_C.PreConstruct
	 */
	struct UUI_BuildingControl_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_BuildingControl.UI_BuildingControl_C.OnGlobalColorChange
	 */
	struct UUI_BuildingControl_C_OnGlobalColorChange_Params
	{	};

	/**
	 * Function UI_BuildingControl.UI_BuildingControl_C.ExecuteUbergraph_UI_BuildingControl
	 */
	struct UUI_BuildingControl_C_ExecuteUbergraph_UI_BuildingControl_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
