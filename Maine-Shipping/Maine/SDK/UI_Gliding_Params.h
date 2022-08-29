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
	 * Function UI_Gliding.UI_Gliding_C.GetWarningImageVisibility
	 */
	struct UUI_Gliding_C_GetWarningImageVisibility_Params
	{
	public:
		ESlateVisibility                                           ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_Gliding.UI_Gliding_C.GetGlideBarPercent
	 */
	struct UUI_Gliding_C_GetGlideBarPercent_Params
	{
	public:
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_4BRT[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function UI_Gliding.UI_Gliding_C.Construct
	 */
	struct UUI_Gliding_C_Construct_Params
	{	};

	/**
	 * Function UI_Gliding.UI_Gliding_C.Tick
	 */
	struct UUI_Gliding_C_Tick_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		float                                                      InDeltaTime;                                             // 0x0038(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_Gliding.UI_Gliding_C.OnGlobalColorChange
	 */
	struct UUI_Gliding_C_OnGlobalColorChange_Params
	{	};

	/**
	 * Function UI_Gliding.UI_Gliding_C.ExecuteUbergraph_UI_Gliding
	 */
	struct UUI_Gliding_C_ExecuteUbergraph_UI_Gliding_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
