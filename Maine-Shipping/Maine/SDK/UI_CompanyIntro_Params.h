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
	 * Function UI_CompanyIntro.UI_CompanyIntro_C.HandleKeyEventChord
	 */
	struct UUI_CompanyIntro_C_HandleKeyEventChord_Params
	{
	public:
		struct FInputChord                                         InChord;                                                 // 0x0000(0x0020)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, HasGetValueTypeHash)
		bool                                                       ReturnValue;                                             // 0x0020(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_CompanyIntro.UI_CompanyIntro_C.GetDefaultUserFocus
	 */
	struct UUI_CompanyIntro_C_GetDefaultUserFocus_Params
	{
	public:
		class UWidget*                                             ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_CompanyIntro.UI_CompanyIntro_C.Construct
	 */
	struct UUI_CompanyIntro_C_Construct_Params
	{	};

	/**
	 * Function UI_CompanyIntro.UI_CompanyIntro_C.OnIntroComplete
	 */
	struct UUI_CompanyIntro_C_OnIntroComplete_Params
	{	};

	/**
	 * Function UI_CompanyIntro.UI_CompanyIntro_C.FadeOut
	 */
	struct UUI_CompanyIntro_C_FadeOut_Params
	{	};

	/**
	 * Function UI_CompanyIntro.UI_CompanyIntro_C.BeginFade
	 */
	struct UUI_CompanyIntro_C_BeginFade_Params
	{	};

	/**
	 * Function UI_CompanyIntro.UI_CompanyIntro_C.ExecuteUbergraph_UI_CompanyIntro
	 */
	struct UUI_CompanyIntro_C_ExecuteUbergraph_UI_CompanyIntro_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
