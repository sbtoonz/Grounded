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
	 * Function BP_PondLab_Biodome_Terminal.BP_PondLab_Biodome_Terminal_C.GetInteractionText
	 */
	struct ABP_PondLab_Biodome_Terminal_C_GetInteractionText_Params
	{
	public:
		EInteractionChannel                                        Channel;                                                 // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_RIPN[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class AActor*                                              InstigatedBy;                                            // 0x0008(0x0008)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class FString                                              OutText;                                                 // 0x0010(0x0010)  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_PondLab_Biodome_Terminal.BP_PondLab_Biodome_Terminal_C.IsInteractionEnabled
	 */
	struct ABP_PondLab_Biodome_Terminal_C_IsInteractionEnabled_Params
	{
	public:
		EInteractionChannel                                        Channel;                                                 // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_1AHC[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class AActor*                                              InstigatedBy;                                            // 0x0008(0x0008)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		EInteractionState                                          ReturnValue;                                             // 0x0010(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_PondLab_Biodome_Terminal.BP_PondLab_Biodome_Terminal_C.PartyHasAllPasswordPieces
	 */
	struct ABP_PondLab_Biodome_Terminal_C_PartyHasAllPasswordPieces_Params
	{
	public:
		bool                                                       PartyHasAllPasswordPieces;                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_PondLab_Biodome_Terminal.BP_PondLab_Biodome_Terminal_C.OnOpenStateChanged
	 */
	struct ABP_PondLab_Biodome_Terminal_C_OnOpenStateChanged_Params
	{
	public:
		bool                                                       IsOpen;                                                  // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_PX11[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class AActor*                                              ActorInstigator;                                         // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_PondLab_Biodome_Terminal.BP_PondLab_Biodome_Terminal_C.EnableScreenDraw
	 */
	struct ABP_PondLab_Biodome_Terminal_C_EnableScreenDraw_Params
	{	};

	/**
	 * Function BP_PondLab_Biodome_Terminal.BP_PondLab_Biodome_Terminal_C.DisableScreenDraw
	 */
	struct ABP_PondLab_Biodome_Terminal_C_DisableScreenDraw_Params
	{	};

	/**
	 * Function BP_PondLab_Biodome_Terminal.BP_PondLab_Biodome_Terminal_C.MakeScreenDMI
	 */
	struct ABP_PondLab_Biodome_Terminal_C_MakeScreenDMI_Params
	{	};

	/**
	 * Function BP_PondLab_Biodome_Terminal.BP_PondLab_Biodome_Terminal_C.HideAllScreens
	 */
	struct ABP_PondLab_Biodome_Terminal_C_HideAllScreens_Params
	{	};

	/**
	 * Function BP_PondLab_Biodome_Terminal.BP_PondLab_Biodome_Terminal_C.SetUserWidgetObjectReference
	 */
	struct ABP_PondLab_Biodome_Terminal_C_SetUserWidgetObjectReference_Params
	{	};

	/**
	 * Function BP_PondLab_Biodome_Terminal.BP_PondLab_Biodome_Terminal_C.ShowStart
	 */
	struct ABP_PondLab_Biodome_Terminal_C_ShowStart_Params
	{	};

	/**
	 * Function BP_PondLab_Biodome_Terminal.BP_PondLab_Biodome_Terminal_C.ShowLocked
	 */
	struct ABP_PondLab_Biodome_Terminal_C_ShowLocked_Params
	{	};

	/**
	 * Function BP_PondLab_Biodome_Terminal.BP_PondLab_Biodome_Terminal_C.ShowLockedFlash
	 */
	struct ABP_PondLab_Biodome_Terminal_C_ShowLockedFlash_Params
	{	};

	/**
	 * Function BP_PondLab_Biodome_Terminal.BP_PondLab_Biodome_Terminal_C.ShowUnlocked
	 */
	struct ABP_PondLab_Biodome_Terminal_C_ShowUnlocked_Params
	{	};

	/**
	 * Function BP_PondLab_Biodome_Terminal.BP_PondLab_Biodome_Terminal_C.ReceiveBeginPlay
	 */
	struct ABP_PondLab_Biodome_Terminal_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function BP_PondLab_Biodome_Terminal.BP_PondLab_Biodome_Terminal_C.ShowWaiting
	 */
	struct ABP_PondLab_Biodome_Terminal_C_ShowWaiting_Params
	{	};

	/**
	 * Function BP_PondLab_Biodome_Terminal.BP_PondLab_Biodome_Terminal_C.ReceiveTick
	 */
	struct ABP_PondLab_Biodome_Terminal_C_ReceiveTick_Params
	{
	public:
		float                                                      DeltaSeconds;                                            // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_PondLab_Biodome_Terminal.BP_PondLab_Biodome_Terminal_C.BndEvt__ConditionalToggle_Vis_LoginScreen_K2Node_ComponentBoundEvent_0_OnConditionalStateChanged__DelegateSignature
	 */
	struct ABP_PondLab_Biodome_Terminal_C_BndEvt__ConditionalToggle_Vis_LoginScreen_K2Node_ComponentBoundEvent_0_OnConditionalStateChanged__DelegateSignature_Params
	{
	public:
		bool                                                       bIsActive;                                               // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_PondLab_Biodome_Terminal.BP_PondLab_Biodome_Terminal_C.BndEvt__ConditionalToggle_Vis_UnlockScreen_K2Node_ComponentBoundEvent_1_OnConditionalStateChanged__DelegateSignature
	 */
	struct ABP_PondLab_Biodome_Terminal_C_BndEvt__ConditionalToggle_Vis_UnlockScreen_K2Node_ComponentBoundEvent_1_OnConditionalStateChanged__DelegateSignature_Params
	{
	public:
		bool                                                       bIsActive;                                               // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_PondLab_Biodome_Terminal.BP_PondLab_Biodome_Terminal_C.RedrawScreen
	 */
	struct ABP_PondLab_Biodome_Terminal_C_RedrawScreen_Params
	{	};

	/**
	 * Function BP_PondLab_Biodome_Terminal.BP_PondLab_Biodome_Terminal_C.ExecuteUbergraph_BP_PondLab_Biodome_Terminal
	 */
	struct ABP_PondLab_Biodome_Terminal_C_ExecuteUbergraph_BP_PondLab_Biodome_Terminal_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_PondLab_Biodome_Terminal.BP_PondLab_Biodome_Terminal_C.BiodomeOpen__DelegateSignature
	 */
	struct ABP_PondLab_Biodome_Terminal_C_BiodomeOpen__DelegateSignature_Params
	{	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
