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
	 * Function UI_EnemyHealth.UI_EnemyHealth_C.ShouldShowHealthBar
	 */
	struct UUI_EnemyHealth_C_ShouldShowHealthBar_Params
	{
	public:
		class ASurvivalCharacter*                                  SurvivalCharacter;                                       // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       Show;                                                    // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_8WUT[0x7];                                   // 0x0009(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function UI_EnemyHealth.UI_EnemyHealth_C.IsBoss
	 */
	struct UUI_EnemyHealth_C_IsBoss_Params
	{
	public:
		bool                                                       IsBoss;                                                  // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_SEMC[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function UI_EnemyHealth.UI_EnemyHealth_C.ClearPips
	 */
	struct UUI_EnemyHealth_C_ClearPips_Params
	{	};

	/**
	 * Function UI_EnemyHealth.UI_EnemyHealth_C.GetColor
	 */
	struct UUI_EnemyHealth_C_GetColor_Params
	{
	public:
		struct FLinearColor                                        Color;                                                   // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_EnemyHealth.UI_EnemyHealth_C.GetWidth
	 */
	struct UUI_EnemyHealth_C_GetWidth_Params
	{
	public:
		float                                                      Width;                                                   // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_EnemyHealth.UI_EnemyHealth_C.UpdateColor
	 */
	struct UUI_EnemyHealth_C_UpdateColor_Params
	{	};

	/**
	 * Function UI_EnemyHealth.UI_EnemyHealth_C.UpdatePips
	 */
	struct UUI_EnemyHealth_C_UpdatePips_Params
	{	};

	/**
	 * Function UI_EnemyHealth.UI_EnemyHealth_C.UpdateWidth
	 */
	struct UUI_EnemyHealth_C_UpdateWidth_Params
	{	};

	/**
	 * Function UI_EnemyHealth.UI_EnemyHealth_C.HideBar
	 */
	struct UUI_EnemyHealth_C_HideBar_Params
	{	};

	/**
	 * Function UI_EnemyHealth.UI_EnemyHealth_C.ShowBar
	 */
	struct UUI_EnemyHealth_C_ShowBar_Params
	{	};

	/**
	 * Function UI_EnemyHealth.UI_EnemyHealth_C.EvaluateVisibility
	 */
	struct UUI_EnemyHealth_C_EvaluateVisibility_Params
	{	};

	/**
	 * Function UI_EnemyHealth.UI_EnemyHealth_C.GetFillColor
	 */
	struct UUI_EnemyHealth_C_GetFillColor_Params
	{
	public:
		struct FLinearColor                                        ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_EnemyHealth.UI_EnemyHealth_C.Get_Name_ColorAndOpacity_1
	 */
	struct UUI_EnemyHealth_C_Get_Name_ColorAndOpacity_1_Params
	{
	public:
		struct FSlateColor                                         ReturnValue;                                             // 0x0000(0x0028)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function UI_EnemyHealth.UI_EnemyHealth_C.SetCharacter
	 */
	struct UUI_EnemyHealth_C_SetCharacter_Params
	{
	public:
		class ASurvivalCharacter*                                  Character;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       TriggerFadeDelay;                                        // 0x0008(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_EnemyHealth.UI_EnemyHealth_C.OnGlobalColorChange
	 */
	struct UUI_EnemyHealth_C_OnGlobalColorChange_Params
	{	};

	/**
	 * Function UI_EnemyHealth.UI_EnemyHealth_C.SetBuilding
	 */
	struct UUI_EnemyHealth_C_SetBuilding_Params
	{
	public:
		class ABuilding*                                           Building;                                                // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_EnemyHealth.UI_EnemyHealth_C.Tick
	 */
	struct UUI_EnemyHealth_C_Tick_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		float                                                      InDeltaTime;                                             // 0x0038(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_EnemyHealth.UI_EnemyHealth_C.Construct
	 */
	struct UUI_EnemyHealth_C_Construct_Params
	{	};

	/**
	 * Function UI_EnemyHealth.UI_EnemyHealth_C.Reset
	 */
	struct UUI_EnemyHealth_C_Reset_Params
	{	};

	/**
	 * Function UI_EnemyHealth.UI_EnemyHealth_C.RefreshHealthWidthAndPips
	 */
	struct UUI_EnemyHealth_C_RefreshHealthWidthAndPips_Params
	{	};

	/**
	 * Function UI_EnemyHealth.UI_EnemyHealth_C.ExecuteUbergraph_UI_EnemyHealth
	 */
	struct UUI_EnemyHealth_C_ExecuteUbergraph_UI_EnemyHealth_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_0G3S[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
