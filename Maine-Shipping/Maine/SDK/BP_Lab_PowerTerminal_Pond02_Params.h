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
	 * Function BP_Lab_PowerTerminal_Pond02.BP_Lab_PowerTerminal_Pond02_C.RedrawScreen
	 */
	struct ABP_Lab_PowerTerminal_Pond02_C_RedrawScreen_Params
	{	};

	/**
	 * Function BP_Lab_PowerTerminal_Pond02.BP_Lab_PowerTerminal_Pond02_C.OnOpenStateChanged
	 */
	struct ABP_Lab_PowerTerminal_Pond02_C_OnOpenStateChanged_Params
	{
	public:
		bool                                                       IsOpen;                                                  // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_KKWW[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class AActor*                                              ActorInstigator;                                         // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Lab_PowerTerminal_Pond02.BP_Lab_PowerTerminal_Pond02_C.Reroute Unsuccesful
	 */
	struct ABP_Lab_PowerTerminal_Pond02_C_Reroute_Unsuccesful_Params
	{	};

	/**
	 * Function BP_Lab_PowerTerminal_Pond02.BP_Lab_PowerTerminal_Pond02_C.BndEvt__ConditionalToggle_BreakersReset_K2Node_ComponentBoundEvent_0_OnConditionalStateChanged__DelegateSignature
	 */
	struct ABP_Lab_PowerTerminal_Pond02_C_BndEvt__ConditionalToggle_BreakersReset_K2Node_ComponentBoundEvent_0_OnConditionalStateChanged__DelegateSignature_Params
	{
	public:
		bool                                                       bIsActive;                                               // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_Lab_PowerTerminal_Pond02.BP_Lab_PowerTerminal_Pond02_C.BndEvt__ConditionalToggle_BreakersNeedReset_K2Node_ComponentBoundEvent_1_OnConditionalStateChanged__DelegateSignature
	 */
	struct ABP_Lab_PowerTerminal_Pond02_C_BndEvt__ConditionalToggle_BreakersNeedReset_K2Node_ComponentBoundEvent_1_OnConditionalStateChanged__DelegateSignature_Params
	{
	public:
		bool                                                       bIsActive;                                               // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_Lab_PowerTerminal_Pond02.BP_Lab_PowerTerminal_Pond02_C.BndEvt__ConditionalToggle_HousePower_K2Node_ComponentBoundEvent_2_OnConditionalStateChanged__DelegateSignature
	 */
	struct ABP_Lab_PowerTerminal_Pond02_C_BndEvt__ConditionalToggle_HousePower_K2Node_ComponentBoundEvent_2_OnConditionalStateChanged__DelegateSignature_Params
	{
	public:
		bool                                                       bIsActive;                                               // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_Lab_PowerTerminal_Pond02.BP_Lab_PowerTerminal_Pond02_C.ExecuteUbergraph_BP_Lab_PowerTerminal_Pond02
	 */
	struct ABP_Lab_PowerTerminal_Pond02_C_ExecuteUbergraph_BP_Lab_PowerTerminal_Pond02_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
