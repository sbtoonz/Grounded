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
	 * Function ContextMenuEntry_BP.ContextMenuEntry_BP_C.GetToolTip
	 */
	struct UContextMenuEntry_BP_C_GetToolTip_Params
	{
	public:
		class UWidget*                                             ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ContextMenuEntry_BP.ContextMenuEntry_BP_C.GetNarration
	 */
	struct UContextMenuEntry_BP_C_GetNarration_Params
	{
	public:
		TArray<struct FNarrationChunk>                             Chunks;                                                  // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		bool                                                       bVerbose;                                                // 0x0010(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function ContextMenuEntry_BP.ContextMenuEntry_BP_C.UpdateColors
	 */
	struct UContextMenuEntry_BP_C_UpdateColors_Params
	{	};

	/**
	 * Function ContextMenuEntry_BP.ContextMenuEntry_BP_C.NormalButtonUnhover
	 */
	struct UContextMenuEntry_BP_C_NormalButtonUnhover_Params
	{	};

	/**
	 * Function ContextMenuEntry_BP.ContextMenuEntry_BP_C.NormalButtonHover
	 */
	struct UContextMenuEntry_BP_C_NormalButtonHover_Params
	{	};

	/**
	 * Function ContextMenuEntry_BP.ContextMenuEntry_BP_C.PreConstruct
	 */
	struct UContextMenuEntry_BP_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function ContextMenuEntry_BP.ContextMenuEntry_BP_C.Construct
	 */
	struct UContextMenuEntry_BP_C_Construct_Params
	{	};

	/**
	 * Function ContextMenuEntry_BP.ContextMenuEntry_BP_C.Tick
	 */
	struct UContextMenuEntry_BP_C_Tick_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		float                                                      InDeltaTime;                                             // 0x0038(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ContextMenuEntry_BP.ContextMenuEntry_BP_C.SetHovered
	 */
	struct UContextMenuEntry_BP_C_SetHovered_Params
	{
	public:
		bool                                                       Hovered;                                                 // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function ContextMenuEntry_BP.ContextMenuEntry_BP_C.BndEvt__Button_NormalInner_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature
	 */
	struct UContextMenuEntry_BP_C_BndEvt__Button_NormalInner_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature_Params
	{	};

	/**
	 * Function ContextMenuEntry_BP.ContextMenuEntry_BP_C.BndEvt__Button_NormalInner_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature
	 */
	struct UContextMenuEntry_BP_C_BndEvt__Button_NormalInner_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature_Params
	{	};

	/**
	 * Function ContextMenuEntry_BP.ContextMenuEntry_BP_C.OnSetIsValid
	 */
	struct UContextMenuEntry_BP_C_OnSetIsValid_Params
	{
	public:
		bool                                                       bEnabled;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function ContextMenuEntry_BP.ContextMenuEntry_BP_C.OnAddedToFocusPath
	 */
	struct UContextMenuEntry_BP_C_OnAddedToFocusPath_Params
	{
	public:
		struct FFocusEvent                                         InFocusEvent;                                            // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	};

	/**
	 * Function ContextMenuEntry_BP.ContextMenuEntry_BP_C.OnRemovedFromFocusPath
	 */
	struct UContextMenuEntry_BP_C_OnRemovedFromFocusPath_Params
	{
	public:
		struct FFocusEvent                                         InFocusEvent;                                            // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	};

	/**
	 * Function ContextMenuEntry_BP.ContextMenuEntry_BP_C.ExecuteUbergraph_ContextMenuEntry_BP
	 */
	struct UContextMenuEntry_BP_C_ExecuteUbergraph_ContextMenuEntry_BP_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
