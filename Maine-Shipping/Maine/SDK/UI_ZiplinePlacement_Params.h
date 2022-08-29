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
	 * Function UI_ZiplinePlacement.UI_ZiplinePlacement_C.UpdateErrorString
	 */
	struct UUI_ZiplinePlacement_C_UpdateErrorString_Params
	{
	public:
		class AZiplineSelectorPawn*                                Pawn;                                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UZiplineAnchor*                                      Anchor;                                                  // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_ZiplinePlacement.UI_ZiplinePlacement_C.OnGlobalColorChange
	 */
	struct UUI_ZiplinePlacement_C_OnGlobalColorChange_Params
	{	};

	/**
	 * Function UI_ZiplinePlacement.UI_ZiplinePlacement_C.Notify Zipline Mode Changed
	 */
	struct UUI_ZiplinePlacement_C_Notify_Zipline_Mode_Changed_Params
	{
	public:
		class AZiplineSelectorPawn*                                Selector;                                                // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_ZiplinePlacement.UI_ZiplinePlacement_C.On Target Zipline Anchor Changed
	 */
	struct UUI_ZiplinePlacement_C_On_Target_Zipline_Anchor_Changed_Params
	{
	public:
		class AZiplineSelectorPawn*                                Sender;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UZiplineAnchor*                                      Target;                                                  // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_ZiplinePlacement.UI_ZiplinePlacement_C.HandleZiplineAttached
	 */
	struct UUI_ZiplinePlacement_C_HandleZiplineAttached_Params
	{
	public:
		class UZiplineAnchor*                                      Sender;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class AZiplineLine*                                        Line;                                                    // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_ZiplinePlacement.UI_ZiplinePlacement_C.ExecuteUbergraph_UI_ZiplinePlacement
	 */
	struct UUI_ZiplinePlacement_C_ExecuteUbergraph_UI_ZiplinePlacement_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
