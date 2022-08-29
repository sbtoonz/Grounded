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
	 * Function UI_HaulingCapacity.UI_HaulingCapacity_C.ClearPips
	 */
	struct UUI_HaulingCapacity_C_ClearPips_Params
	{
	public:
		int32_t                                                    StartIndex;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_HaulingCapacity.UI_HaulingCapacity_C.ActivatePip
	 */
	struct UUI_HaulingCapacity_C_ActivatePip_Params
	{
	public:
		int32_t                                                    Index;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_3KD7[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UHaulingComponent*                                   HaulingComponent;                                        // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UUI_HaulingPip_C*                                    Widget;                                                  // 0x0010(0x0008)  (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_HaulingCapacity.UI_HaulingCapacity_C.GetIconColor
	 */
	struct UUI_HaulingCapacity_C_GetIconColor_Params
	{
	public:
		struct FLinearColor                                        ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_HaulingCapacity.UI_HaulingCapacity_C.PopulatePips
	 */
	struct UUI_HaulingCapacity_C_PopulatePips_Params
	{
	public:
		class UHaulingComponent*                                   HaulingComponent;                                        // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_HaulingCapacity.UI_HaulingCapacity_C.OnGlobalColorChange
	 */
	struct UUI_HaulingCapacity_C_OnGlobalColorChange_Params
	{	};

	/**
	 * Function UI_HaulingCapacity.UI_HaulingCapacity_C.OnPossessedPlayerChange
	 */
	struct UUI_HaulingCapacity_C_OnPossessedPlayerChange_Params
	{
	public:
		class ASurvivalPlayerCharacter*                            NewPlayerCharacter;                                      // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_HaulingCapacity.UI_HaulingCapacity_C.On Hauling Changed
	 */
	struct UUI_HaulingCapacity_C_On_Hauling_Changed_Params
	{
	public:
		class UHaulingComponent*                                   Sender;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_HaulingCapacity.UI_HaulingCapacity_C.Tick
	 */
	struct UUI_HaulingCapacity_C_Tick_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		float                                                      InDeltaTime;                                             // 0x0038(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_HaulingCapacity.UI_HaulingCapacity_C.ExecuteUbergraph_UI_HaulingCapacity
	 */
	struct UUI_HaulingCapacity_C_ExecuteUbergraph_UI_HaulingCapacity_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
