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
	 * Function BP_SurvivalPlayerCharacter.BP_SurvivalPlayerCharacter_C.GetHeadMesh
	 */
	struct ABP_SurvivalPlayerCharacter_C_GetHeadMesh_Params
	{
	public:
		class USkeletalMeshComponent*                              ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_SurvivalPlayerCharacter.BP_SurvivalPlayerCharacter_C.GetInteractHighlightLevel
	 */
	struct ABP_SurvivalPlayerCharacter_C_GetInteractHighlightLevel_Params
	{
	public:
		class AActor*                                              InstigatedBy;                                            // 0x0000(0x0008)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		EInteractHighlightLevel                                    ReturnValue;                                             // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_SurvivalPlayerCharacter.BP_SurvivalPlayerCharacter_C.ReattachCameraOverlapObj
	 */
	struct ABP_SurvivalPlayerCharacter_C_ReattachCameraOverlapObj_Params
	{
	public:
		ECameraDisplayMode                                         DisplayMode;                                             // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_SurvivalPlayerCharacter.BP_SurvivalPlayerCharacter_C.DoesDamageTypeAllowsScreenEffects
	 */
	struct ABP_SurvivalPlayerCharacter_C_DoesDamageTypeAllowsScreenEffects_Params
	{
	public:
		class UClass*                                              DamageTypeClass;                                         // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       AllowsScreenEffects;                                     // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_DAPU[0x7];                                   // 0x0009(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BP_SurvivalPlayerCharacter.BP_SurvivalPlayerCharacter_C.LineTraceByChannelForActor
	 */
	struct ABP_SurvivalPlayerCharacter_C_LineTraceByChannelForActor_Params
	{
	public:
		class AActor*                                              HitActor;                                                // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_SurvivalPlayerCharacter.BP_SurvivalPlayerCharacter_C.LineTraceForActor
	 */
	struct ABP_SurvivalPlayerCharacter_C_LineTraceForActor_Params
	{
	public:
		TArray<EObjectTypeQuery>                                   ObjectTypes;                                             // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		class AActor*                                              HitActor;                                                // 0x0010(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_SurvivalPlayerCharacter.BP_SurvivalPlayerCharacter_C.UserConstructionScript
	 */
	struct ABP_SurvivalPlayerCharacter_C_UserConstructionScript_Params
	{	};

	/**
	 * Function BP_SurvivalPlayerCharacter.BP_SurvivalPlayerCharacter_C.BinoZoom__FinishedFunc
	 */
	struct ABP_SurvivalPlayerCharacter_C_BinoZoom__FinishedFunc_Params
	{	};

	/**
	 * Function BP_SurvivalPlayerCharacter.BP_SurvivalPlayerCharacter_C.BinoZoom__UpdateFunc
	 */
	struct ABP_SurvivalPlayerCharacter_C_BinoZoom__UpdateFunc_Params
	{	};

	/**
	 * Function BP_SurvivalPlayerCharacter.BP_SurvivalPlayerCharacter_C.RespawnCorpseVisuals__FinishedFunc
	 */
	struct ABP_SurvivalPlayerCharacter_C_RespawnCorpseVisuals__FinishedFunc_Params
	{	};

	/**
	 * Function BP_SurvivalPlayerCharacter.BP_SurvivalPlayerCharacter_C.RespawnCorpseVisuals__UpdateFunc
	 */
	struct ABP_SurvivalPlayerCharacter_C_RespawnCorpseVisuals__UpdateFunc_Params
	{	};

	/**
	 * Function BP_SurvivalPlayerCharacter.BP_SurvivalPlayerCharacter_C.FallingVelocity__FinishedFunc
	 */
	struct ABP_SurvivalPlayerCharacter_C_FallingVelocity__FinishedFunc_Params
	{	};

	/**
	 * Function BP_SurvivalPlayerCharacter.BP_SurvivalPlayerCharacter_C.FallingVelocity__UpdateFunc
	 */
	struct ABP_SurvivalPlayerCharacter_C_FallingVelocity__UpdateFunc_Params
	{	};

	/**
	 * Function BP_SurvivalPlayerCharacter.BP_SurvivalPlayerCharacter_C.HeartbeatSFX_Mod__FinishedFunc
	 */
	struct ABP_SurvivalPlayerCharacter_C_HeartbeatSFX_Mod__FinishedFunc_Params
	{	};

	/**
	 * Function BP_SurvivalPlayerCharacter.BP_SurvivalPlayerCharacter_C.HeartbeatSFX_Mod__UpdateFunc
	 */
	struct ABP_SurvivalPlayerCharacter_C_HeartbeatSFX_Mod__UpdateFunc_Params
	{	};

	/**
	 * Function BP_SurvivalPlayerCharacter.BP_SurvivalPlayerCharacter_C.StarvationSFX__FinishedFunc
	 */
	struct ABP_SurvivalPlayerCharacter_C_StarvationSFX__FinishedFunc_Params
	{	};

	/**
	 * Function BP_SurvivalPlayerCharacter.BP_SurvivalPlayerCharacter_C.StarvationSFX__UpdateFunc
	 */
	struct ABP_SurvivalPlayerCharacter_C_StarvationSFX__UpdateFunc_Params
	{	};

	/**
	 * Function BP_SurvivalPlayerCharacter.BP_SurvivalPlayerCharacter_C.InpActEvt_Alt_P_K2Node_InputKeyEvent_26
	 */
	struct ABP_SurvivalPlayerCharacter_C_InpActEvt_Alt_P_K2Node_InputKeyEvent_26_Params
	{
	public:
		struct FKey                                                Key;                                                     // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	};

	/**
	 * Function BP_SurvivalPlayerCharacter.BP_SurvivalPlayerCharacter_C.InpActEvt_Alt_O_K2Node_InputKeyEvent_25
	 */
	struct ABP_SurvivalPlayerCharacter_C_InpActEvt_Alt_O_K2Node_InputKeyEvent_25_Params
	{
	public:
		struct FKey                                                Key;                                                     // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	};

	/**
	 * Function BP_SurvivalPlayerCharacter.BP_SurvivalPlayerCharacter_C.InpActEvt_Alt_T_K2Node_InputKeyEvent_24
	 */
	struct ABP_SurvivalPlayerCharacter_C_InpActEvt_Alt_T_K2Node_InputKeyEvent_24_Params
	{
	public:
		struct FKey                                                Key;                                                     // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	};

	/**
	 * Function BP_SurvivalPlayerCharacter.BP_SurvivalPlayerCharacter_C.InpActEvt_Shift_T_K2Node_InputKeyEvent_23
	 */
	struct ABP_SurvivalPlayerCharacter_C_InpActEvt_Shift_T_K2Node_InputKeyEvent_23_Params
	{
	public:
		struct FKey                                                Key;                                                     // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	};

	/**
	 * Function BP_SurvivalPlayerCharacter.BP_SurvivalPlayerCharacter_C.InpActEvt_Alt_G_K2Node_InputKeyEvent_22
	 */
	struct ABP_SurvivalPlayerCharacter_C_InpActEvt_Alt_G_K2Node_InputKeyEvent_22_Params
	{
	public:
		struct FKey                                                Key;                                                     // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	};

	/**
	 * Function BP_SurvivalPlayerCharacter.BP_SurvivalPlayerCharacter_C.InpActEvt_Alt_Y_K2Node_InputKeyEvent_21
	 */
	struct ABP_SurvivalPlayerCharacter_C_InpActEvt_Alt_Y_K2Node_InputKeyEvent_21_Params
	{
	public:
		struct FKey                                                Key;                                                     // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	};

	/**
	 * Function BP_SurvivalPlayerCharacter.BP_SurvivalPlayerCharacter_C.InpActEvt_K_K2Node_InputKeyEvent_20
	 */
	struct ABP_SurvivalPlayerCharacter_C_InpActEvt_K_K2Node_InputKeyEvent_20_Params
	{
	public:
		struct FKey                                                Key;                                                     // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	};

	/**
	 * Function BP_SurvivalPlayerCharacter.BP_SurvivalPlayerCharacter_C.InpActEvt_Alt_Zero_K2Node_InputKeyEvent_19
	 */
	struct ABP_SurvivalPlayerCharacter_C_InpActEvt_Alt_Zero_K2Node_InputKeyEvent_19_Params
	{
	public:
		struct FKey                                                Key;                                                     // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	};

	/**
	 * Function BP_SurvivalPlayerCharacter.BP_SurvivalPlayerCharacter_C.InpActEvt_ThumbMouseButton_K2Node_InputKeyEvent_18
	 */
	struct ABP_SurvivalPlayerCharacter_C_InpActEvt_ThumbMouseButton_K2Node_InputKeyEvent_18_Params
	{
	public:
		struct FKey                                                Key;                                                     // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	};

	/**
	 * Function BP_SurvivalPlayerCharacter.BP_SurvivalPlayerCharacter_C.InpActEvt_Alt_H_K2Node_InputKeyEvent_17
	 */
	struct ABP_SurvivalPlayerCharacter_C_InpActEvt_Alt_H_K2Node_InputKeyEvent_17_Params
	{
	public:
		struct FKey                                                Key;                                                     // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	};

	/**
	 * Function BP_SurvivalPlayerCharacter.BP_SurvivalPlayerCharacter_C.InpActEvt_Alt_J_K2Node_InputKeyEvent_16
	 */
	struct ABP_SurvivalPlayerCharacter_C_InpActEvt_Alt_J_K2Node_InputKeyEvent_16_Params
	{
	public:
		struct FKey                                                Key;                                                     // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	};

	/**
	 * Function BP_SurvivalPlayerCharacter.BP_SurvivalPlayerCharacter_C.InpActEvt_Alt_B_K2Node_InputKeyEvent_15
	 */
	struct ABP_SurvivalPlayerCharacter_C_InpActEvt_Alt_B_K2Node_InputKeyEvent_15_Params
	{
	public:
		struct FKey                                                Key;                                                     // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	};

	/**
	 * Function BP_SurvivalPlayerCharacter.BP_SurvivalPlayerCharacter_C.InpActEvt_Alt_R_K2Node_InputKeyEvent_14
	 */
	struct ABP_SurvivalPlayerCharacter_C_InpActEvt_Alt_R_K2Node_InputKeyEvent_14_Params
	{
	public:
		struct FKey                                                Key;                                                     // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	};

	/**
	 * Function BP_SurvivalPlayerCharacter.BP_SurvivalPlayerCharacter_C.InpActEvt_Alt_C_K2Node_InputKeyEvent_13
	 */
	struct ABP_SurvivalPlayerCharacter_C_InpActEvt_Alt_C_K2Node_InputKeyEvent_13_Params
	{
	public:
		struct FKey                                                Key;                                                     // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	};

	/**
	 * Function BP_SurvivalPlayerCharacter.BP_SurvivalPlayerCharacter_C.InpActEvt_Alt_K_K2Node_InputKeyEvent_12
	 */
	struct ABP_SurvivalPlayerCharacter_C_InpActEvt_Alt_K_K2Node_InputKeyEvent_12_Params
	{
	public:
		struct FKey                                                Key;                                                     // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	};

	/**
	 * Function BP_SurvivalPlayerCharacter.BP_SurvivalPlayerCharacter_C.InpActEvt_Alt_Z_K2Node_InputKeyEvent_11
	 */
	struct ABP_SurvivalPlayerCharacter_C_InpActEvt_Alt_Z_K2Node_InputKeyEvent_11_Params
	{
	public:
		struct FKey                                                Key;                                                     // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	};

	/**
	 * Function BP_SurvivalPlayerCharacter.BP_SurvivalPlayerCharacter_C.InpActEvt_Attack_K2Node_InputActionEvent_19
	 */
	struct ABP_SurvivalPlayerCharacter_C_InpActEvt_Attack_K2Node_InputActionEvent_19_Params
	{
	public:
		struct FKey                                                Key;                                                     // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	};

	/**
	 * Function BP_SurvivalPlayerCharacter.BP_SurvivalPlayerCharacter_C.InpActEvt_Attack_K2Node_InputActionEvent_18
	 */
	struct ABP_SurvivalPlayerCharacter_C_InpActEvt_Attack_K2Node_InputActionEvent_18_Params
	{
	public:
		struct FKey                                                Key;                                                     // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	};

	/**
	 * Function BP_SurvivalPlayerCharacter.BP_SurvivalPlayerCharacter_C.InpActEvt_X_K2Node_InputKeyEvent_10
	 */
	struct ABP_SurvivalPlayerCharacter_C_InpActEvt_X_K2Node_InputKeyEvent_10_Params
	{
	public:
		struct FKey                                                Key;                                                     // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	};

	/**
	 * Function BP_SurvivalPlayerCharacter.BP_SurvivalPlayerCharacter_C.InpActEvt_LeftMouseButton_K2Node_InputKeyEvent_9
	 */
	struct ABP_SurvivalPlayerCharacter_C_InpActEvt_LeftMouseButton_K2Node_InputKeyEvent_9_Params
	{
	public:
		struct FKey                                                Key;                                                     // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	};

	/**
	 * Function BP_SurvivalPlayerCharacter.BP_SurvivalPlayerCharacter_C.InpActEvt_NumPadZero_K2Node_InputKeyEvent_8
	 */
	struct ABP_SurvivalPlayerCharacter_C_InpActEvt_NumPadZero_K2Node_InputKeyEvent_8_Params
	{
	public:
		struct FKey                                                Key;                                                     // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	};

	/**
	 * Function BP_SurvivalPlayerCharacter.BP_SurvivalPlayerCharacter_C.InpActEvt_Alt_L_K2Node_InputKeyEvent_7
	 */
	struct ABP_SurvivalPlayerCharacter_C_InpActEvt_Alt_L_K2Node_InputKeyEvent_7_Params
	{
	public:
		struct FKey                                                Key;                                                     // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	};

	/**
	 * Function BP_SurvivalPlayerCharacter.BP_SurvivalPlayerCharacter_C.InpActEvt_NumPadFive_K2Node_InputKeyEvent_6
	 */
	struct ABP_SurvivalPlayerCharacter_C_InpActEvt_NumPadFive_K2Node_InputKeyEvent_6_Params
	{
	public:
		struct FKey                                                Key;                                                     // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	};

	/**
	 * Function BP_SurvivalPlayerCharacter.BP_SurvivalPlayerCharacter_C.InpActEvt_Alt_Q_K2Node_InputKeyEvent_5
	 */
	struct ABP_SurvivalPlayerCharacter_C_InpActEvt_Alt_Q_K2Node_InputKeyEvent_5_Params
	{
	public:
		struct FKey                                                Key;                                                     // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	};

	/**
	 * Function BP_SurvivalPlayerCharacter.BP_SurvivalPlayerCharacter_C.InpActEvt_Alt_One_K2Node_InputKeyEvent_4
	 */
	struct ABP_SurvivalPlayerCharacter_C_InpActEvt_Alt_One_K2Node_InputKeyEvent_4_Params
	{
	public:
		struct FKey                                                Key;                                                     // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	};

	/**
	 * Function BP_SurvivalPlayerCharacter.BP_SurvivalPlayerCharacter_C.InpActEvt_Alt_Two_K2Node_InputKeyEvent_3
	 */
	struct ABP_SurvivalPlayerCharacter_C_InpActEvt_Alt_Two_K2Node_InputKeyEvent_3_Params
	{
	public:
		struct FKey                                                Key;                                                     // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	};

	/**
	 * Function BP_SurvivalPlayerCharacter.BP_SurvivalPlayerCharacter_C.InpActEvt_Alt+Shift_L_K2Node_InputKeyEvent_2
	 */
	struct ABP_SurvivalPlayerCharacter_C_InpActEvt_Alt_Shift_L_K2Node_InputKeyEvent_2_Params
	{
	public:
		struct FKey                                                Key;                                                     // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	};

	/**
	 * Function BP_SurvivalPlayerCharacter.BP_SurvivalPlayerCharacter_C.OnLoaded_949C4F344484F3C2272BA28A79E47301
	 */
	struct ABP_SurvivalPlayerCharacter_C_OnLoaded_949C4F344484F3C2272BA28A79E47301_Params
	{
	public:
		class UClass*                                              Loaded;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	};

	/**
	 * Function BP_SurvivalPlayerCharacter.BP_SurvivalPlayerCharacter_C.InpActEvt_Alt_Three_K2Node_InputKeyEvent_1
	 */
	struct ABP_SurvivalPlayerCharacter_C_InpActEvt_Alt_Three_K2Node_InputKeyEvent_1_Params
	{
	public:
		struct FKey                                                Key;                                                     // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	};

	/**
	 * Function BP_SurvivalPlayerCharacter.BP_SurvivalPlayerCharacter_C.InpActEvt_Menu_K2Node_InputActionEvent_17
	 */
	struct ABP_SurvivalPlayerCharacter_C_InpActEvt_Menu_K2Node_InputActionEvent_17_Params
	{
	public:
		struct FKey                                                Key;                                                     // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	};

	/**
	 * Function BP_SurvivalPlayerCharacter.BP_SurvivalPlayerCharacter_C.InpActEvt_SCABFaceToggle_K2Node_InputActionEvent_16
	 */
	struct ABP_SurvivalPlayerCharacter_C_InpActEvt_SCABFaceToggle_K2Node_InputActionEvent_16_Params
	{
	public:
		struct FKey                                                Key;                                                     // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	};

	/**
	 * Function BP_SurvivalPlayerCharacter.BP_SurvivalPlayerCharacter_C.InpActEvt_SCABFaceToggle_K2Node_InputActionEvent_15
	 */
	struct ABP_SurvivalPlayerCharacter_C_InpActEvt_SCABFaceToggle_K2Node_InputActionEvent_15_Params
	{
	public:
		struct FKey                                                Key;                                                     // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	};

	/**
	 * Function BP_SurvivalPlayerCharacter.BP_SurvivalPlayerCharacter_C.InpActEvt_OpenCraftingMenu_K2Node_InputActionEvent_14
	 */
	struct ABP_SurvivalPlayerCharacter_C_InpActEvt_OpenCraftingMenu_K2Node_InputActionEvent_14_Params
	{
	public:
		struct FKey                                                Key;                                                     // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	};

	/**
	 * Function BP_SurvivalPlayerCharacter.BP_SurvivalPlayerCharacter_C.InpActEvt_OpenInventoryMenu_K2Node_InputActionEvent_13
	 */
	struct ABP_SurvivalPlayerCharacter_C_InpActEvt_OpenInventoryMenu_K2Node_InputActionEvent_13_Params
	{
	public:
		struct FKey                                                Key;                                                     // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	};

	/**
	 * Function BP_SurvivalPlayerCharacter.BP_SurvivalPlayerCharacter_C.InpActEvt_OpenInventoryMenu_K2Node_InputActionEvent_12
	 */
	struct ABP_SurvivalPlayerCharacter_C_InpActEvt_OpenInventoryMenu_K2Node_InputActionEvent_12_Params
	{
	public:
		struct FKey                                                Key;                                                     // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	};

	/**
	 * Function BP_SurvivalPlayerCharacter.BP_SurvivalPlayerCharacter_C.InpActEvt_OpenCraftingMenu_K2Node_InputActionEvent_11
	 */
	struct ABP_SurvivalPlayerCharacter_C_InpActEvt_OpenCraftingMenu_K2Node_InputActionEvent_11_Params
	{
	public:
		struct FKey                                                Key;                                                     // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	};

	/**
	 * Function BP_SurvivalPlayerCharacter.BP_SurvivalPlayerCharacter_C.InpActEvt_OpenMapMenu_K2Node_InputActionEvent_10
	 */
	struct ABP_SurvivalPlayerCharacter_C_InpActEvt_OpenMapMenu_K2Node_InputActionEvent_10_Params
	{
	public:
		struct FKey                                                Key;                                                     // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	};

	/**
	 * Function BP_SurvivalPlayerCharacter.BP_SurvivalPlayerCharacter_C.InpActEvt_UIOpenChat_K2Node_InputActionEvent_9
	 */
	struct ABP_SurvivalPlayerCharacter_C_InpActEvt_UIOpenChat_K2Node_InputActionEvent_9_Params
	{
	public:
		struct FKey                                                Key;                                                     // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	};

	/**
	 * Function BP_SurvivalPlayerCharacter.BP_SurvivalPlayerCharacter_C.InpActEvt_HotSlot1_K2Node_InputActionEvent_8
	 */
	struct ABP_SurvivalPlayerCharacter_C_InpActEvt_HotSlot1_K2Node_InputActionEvent_8_Params
	{
	public:
		struct FKey                                                Key;                                                     // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	};

	/**
	 * Function BP_SurvivalPlayerCharacter.BP_SurvivalPlayerCharacter_C.InpActEvt_HotSlot2_K2Node_InputActionEvent_7
	 */
	struct ABP_SurvivalPlayerCharacter_C_InpActEvt_HotSlot2_K2Node_InputActionEvent_7_Params
	{
	public:
		struct FKey                                                Key;                                                     // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	};

	/**
	 * Function BP_SurvivalPlayerCharacter.BP_SurvivalPlayerCharacter_C.InpActEvt_HotSlot3_K2Node_InputActionEvent_6
	 */
	struct ABP_SurvivalPlayerCharacter_C_InpActEvt_HotSlot3_K2Node_InputActionEvent_6_Params
	{
	public:
		struct FKey                                                Key;                                                     // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	};

	/**
	 * Function BP_SurvivalPlayerCharacter.BP_SurvivalPlayerCharacter_C.InpActEvt_HotSlot4_K2Node_InputActionEvent_5
	 */
	struct ABP_SurvivalPlayerCharacter_C_InpActEvt_HotSlot4_K2Node_InputActionEvent_5_Params
	{
	public:
		struct FKey                                                Key;                                                     // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	};

	/**
	 * Function BP_SurvivalPlayerCharacter.BP_SurvivalPlayerCharacter_C.InpActEvt_HotSlot5_K2Node_InputActionEvent_4
	 */
	struct ABP_SurvivalPlayerCharacter_C_InpActEvt_HotSlot5_K2Node_InputActionEvent_4_Params
	{
	public:
		struct FKey                                                Key;                                                     // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	};

	/**
	 * Function BP_SurvivalPlayerCharacter.BP_SurvivalPlayerCharacter_C.InpActEvt_HotSlot6_K2Node_InputActionEvent_3
	 */
	struct ABP_SurvivalPlayerCharacter_C_InpActEvt_HotSlot6_K2Node_InputActionEvent_3_Params
	{
	public:
		struct FKey                                                Key;                                                     // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	};

	/**
	 * Function BP_SurvivalPlayerCharacter.BP_SurvivalPlayerCharacter_C.InpActEvt_HotSlot8_K2Node_InputActionEvent_2
	 */
	struct ABP_SurvivalPlayerCharacter_C_InpActEvt_HotSlot8_K2Node_InputActionEvent_2_Params
	{
	public:
		struct FKey                                                Key;                                                     // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	};

	/**
	 * Function BP_SurvivalPlayerCharacter.BP_SurvivalPlayerCharacter_C.InpActEvt_HotSlot7_K2Node_InputActionEvent_1
	 */
	struct ABP_SurvivalPlayerCharacter_C_InpActEvt_HotSlot7_K2Node_InputActionEvent_1_Params
	{
	public:
		struct FKey                                                Key;                                                     // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	};

	/**
	 * Function BP_SurvivalPlayerCharacter.BP_SurvivalPlayerCharacter_C.PrototypeBeginPlay
	 */
	struct ABP_SurvivalPlayerCharacter_C_PrototypeBeginPlay_Params
	{	};

	/**
	 * Function BP_SurvivalPlayerCharacter.BP_SurvivalPlayerCharacter_C.PrototypeTick
	 */
	struct ABP_SurvivalPlayerCharacter_C_PrototypeTick_Params
	{
	public:
		float                                                      DeltaTime;                                               // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_SurvivalPlayerCharacter.BP_SurvivalPlayerCharacter_C.FireflyLampCheck
	 */
	struct ABP_SurvivalPlayerCharacter_C_FireflyLampCheck_Params
	{	};

	/**
	 * Function BP_SurvivalPlayerCharacter.BP_SurvivalPlayerCharacter_C.ProtoGrappleTick
	 */
	struct ABP_SurvivalPlayerCharacter_C_ProtoGrappleTick_Params
	{	};

	/**
	 * Function BP_SurvivalPlayerCharacter.BP_SurvivalPlayerCharacter_C.ProtoDestroyGrapple
	 */
	struct ABP_SurvivalPlayerCharacter_C_ProtoDestroyGrapple_Params
	{	};

	/**
	 * Function BP_SurvivalPlayerCharacter.BP_SurvivalPlayerCharacter_C.ProtoAttemptGrapple
	 */
	struct ABP_SurvivalPlayerCharacter_C_ProtoAttemptGrapple_Params
	{	};

	/**
	 * Function BP_SurvivalPlayerCharacter.BP_SurvivalPlayerCharacter_C.ProtoGrappleTick_Swing
	 */
	struct ABP_SurvivalPlayerCharacter_C_ProtoGrappleTick_Swing_Params
	{	};

	/**
	 * Function BP_SurvivalPlayerCharacter.BP_SurvivalPlayerCharacter_C.ProtoGrappleTick_Reel
	 */
	struct ABP_SurvivalPlayerCharacter_C_ProtoGrappleTick_Reel_Params
	{	};

	/**
	 * Function BP_SurvivalPlayerCharacter.BP_SurvivalPlayerCharacter_C.ProtoThrownProjectilePathTick
	 */
	struct ABP_SurvivalPlayerCharacter_C_ProtoThrownProjectilePathTick_Params
	{	};

	/**
	 * Function BP_SurvivalPlayerCharacter.BP_SurvivalPlayerCharacter_C.ProtoArrowProjectilePathTick
	 */
	struct ABP_SurvivalPlayerCharacter_C_ProtoArrowProjectilePathTick_Params
	{	};

	/**
	 * Function BP_SurvivalPlayerCharacter.BP_SurvivalPlayerCharacter_C.Rain
	 */
	struct ABP_SurvivalPlayerCharacter_C_Rain_Params
	{
	public:
		float                                                      Time;                                                    // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_SurvivalPlayerCharacter.BP_SurvivalPlayerCharacter_C.BndEvt__HealthComponent_K2Node_ComponentBoundEvent_1_DeathDelegate__DelegateSignature
	 */
	struct ABP_SurvivalPlayerCharacter_C_BndEvt__HealthComponent_K2Node_ComponentBoundEvent_1_DeathDelegate__DelegateSignature_Params
	{
	public:
		struct FDamageInfo                                         DamageInfo;                                              // 0x0000(0x0068)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
	};

	/**
	 * Function BP_SurvivalPlayerCharacter.BP_SurvivalPlayerCharacter_C.BndEvt__HealthComponent_K2Node_ComponentBoundEvent_2_DamagedDelegate__DelegateSignature
	 */
	struct ABP_SurvivalPlayerCharacter_C_BndEvt__HealthComponent_K2Node_ComponentBoundEvent_2_DamagedDelegate__DelegateSignature_Params
	{
	public:
		float                                                      Damage;                                                  // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_X1AY[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FDamageInfo                                         DamageInfo;                                              // 0x0008(0x0068)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
		class AController*                                         InstigatedBy;                                            // 0x0070(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UBaseLODActor*                                       DamageCauser;                                            // 0x0078(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       IsKillingBlow;                                           // 0x0080(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_SurvivalPlayerCharacter.BP_SurvivalPlayerCharacter_C.HandleDeath
	 */
	struct ABP_SurvivalPlayerCharacter_C_HandleDeath_Params
	{	};

	/**
	 * Function BP_SurvivalPlayerCharacter.BP_SurvivalPlayerCharacter_C.ClientHandleDamageEffects
	 */
	struct ABP_SurvivalPlayerCharacter_C_ClientHandleDamageEffects_Params
	{
	public:
		class UClass*                                              DamageType;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FVector                                             Direction;                                               // 0x0008(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_SurvivalPlayerCharacter.BP_SurvivalPlayerCharacter_C.HandleDamageTypeAudio
	 */
	struct ABP_SurvivalPlayerCharacter_C_HandleDamageTypeAudio_Params
	{
	public:
		class UClass*                                              DamageType;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UObject*                                             DamageSource;                                            // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_SurvivalPlayerCharacter.BP_SurvivalPlayerCharacter_C.ClientHandleDeath
	 */
	struct ABP_SurvivalPlayerCharacter_C_ClientHandleDeath_Params
	{	};

	/**
	 * Function BP_SurvivalPlayerCharacter.BP_SurvivalPlayerCharacter_C.HandleIncapacitation
	 */
	struct ABP_SurvivalPlayerCharacter_C_HandleIncapacitation_Params
	{	};

	/**
	 * Function BP_SurvivalPlayerCharacter.BP_SurvivalPlayerCharacter_C.HandleRevive
	 */
	struct ABP_SurvivalPlayerCharacter_C_HandleRevive_Params
	{	};

	/**
	 * Function BP_SurvivalPlayerCharacter.BP_SurvivalPlayerCharacter_C.BndEvt__HealthComponent_K2Node_ComponentBoundEvent_2_OnHealthStateChangedDelegate__DelegateSignature
	 */
	struct ABP_SurvivalPlayerCharacter_C_BndEvt__HealthComponent_K2Node_ComponentBoundEvent_2_OnHealthStateChangedDelegate__DelegateSignature_Params
	{
	public:
		EHealthState                                               NewHealthState;                                          // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_SurvivalPlayerCharacter.BP_SurvivalPlayerCharacter_C.ReceiveBeginPlay
	 */
	struct ABP_SurvivalPlayerCharacter_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function BP_SurvivalPlayerCharacter.BP_SurvivalPlayerCharacter_C.ReceivePossessed
	 */
	struct ABP_SurvivalPlayerCharacter_C_ReceivePossessed_Params
	{
	public:
		class AController*                                         NewController;                                           // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_SurvivalPlayerCharacter.BP_SurvivalPlayerCharacter_C.MulticastOnPossessed
	 */
	struct ABP_SurvivalPlayerCharacter_C_MulticastOnPossessed_Params
	{
	public:
		class AController*                                         Controller;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_SurvivalPlayerCharacter.BP_SurvivalPlayerCharacter_C.ToggleSCAB_Glow
	 */
	struct ABP_SurvivalPlayerCharacter_C_ToggleSCAB_Glow_Params
	{
	public:
		int32_t                                                    NewHour;                                                 // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    NewDay;                                                  // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_SurvivalPlayerCharacter.BP_SurvivalPlayerCharacter_C.RequireSCABItemForSCABHUD
	 */
	struct ABP_SurvivalPlayerCharacter_C_RequireSCABItemForSCABHUD_Params
	{	};

	/**
	 * Function BP_SurvivalPlayerCharacter.BP_SurvivalPlayerCharacter_C.HandleSCABVisibilityOnPlayerStart
	 */
	struct ABP_SurvivalPlayerCharacter_C_HandleSCABVisibilityOnPlayerStart_Params
	{	};

	/**
	 * Function BP_SurvivalPlayerCharacter.BP_SurvivalPlayerCharacter_C.UpdateDOF
	 */
	struct ABP_SurvivalPlayerCharacter_C_UpdateDOF_Params
	{	};

	/**
	 * Function BP_SurvivalPlayerCharacter.BP_SurvivalPlayerCharacter_C.ReceiveTick
	 */
	struct ABP_SurvivalPlayerCharacter_C_ReceiveTick_Params
	{
	public:
		float                                                      DeltaSeconds;                                            // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_SurvivalPlayerCharacter.BP_SurvivalPlayerCharacter_C.PlayDestroyVisuals
	 */
	struct ABP_SurvivalPlayerCharacter_C_PlayDestroyVisuals_Params
	{
	public:
		EDestroyCharacterVariation                                 Variation;                                               // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_SurvivalPlayerCharacter.BP_SurvivalPlayerCharacter_C.BndEvt__EquipmentComponent_K2Node_ComponentBoundEvent_0_OnItemBrokenDelegate__DelegateSignature
	 */
	struct ABP_SurvivalPlayerCharacter_C_BndEvt__EquipmentComponent_K2Node_ComponentBoundEvent_0_OnItemBrokenDelegate__DelegateSignature_Params
	{
	public:
		class ASurvivalCharacter*                                  Owner;                                                   // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UItem*                                               Item;                                                    // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_SurvivalPlayerCharacter.BP_SurvivalPlayerCharacter_C.BndEvt__EquipmentComponent_K2Node_ComponentBoundEvent_1_OnEquipmentChanged__DelegateSignature
	 */
	struct ABP_SurvivalPlayerCharacter_C_BndEvt__EquipmentComponent_K2Node_ComponentBoundEvent_1_OnEquipmentChanged__DelegateSignature_Params
	{	};

	/**
	 * Function BP_SurvivalPlayerCharacter.BP_SurvivalPlayerCharacter_C.ClientOpenMapMenu
	 */
	struct ABP_SurvivalPlayerCharacter_C_ClientOpenMapMenu_Params
	{	};

	/**
	 * Function BP_SurvivalPlayerCharacter.BP_SurvivalPlayerCharacter_C.NotifyOnJumpAnimBegin
	 */
	struct ABP_SurvivalPlayerCharacter_C_NotifyOnJumpAnimBegin_Params
	{	};

	/**
	 * Function BP_SurvivalPlayerCharacter.BP_SurvivalPlayerCharacter_C.NotifyOnLandAnimBegin
	 */
	struct ABP_SurvivalPlayerCharacter_C_NotifyOnLandAnimBegin_Params
	{	};

	/**
	 * Function BP_SurvivalPlayerCharacter.BP_SurvivalPlayerCharacter_C.NotifyOnHitReactAnimBegin
	 */
	struct ABP_SurvivalPlayerCharacter_C_NotifyOnHitReactAnimBegin_Params
	{	};

	/**
	 * Function BP_SurvivalPlayerCharacter.BP_SurvivalPlayerCharacter_C.MovementAudio
	 */
	struct ABP_SurvivalPlayerCharacter_C_MovementAudio_Params
	{
	public:
		float                                                      DeltaSeconds;                                            // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FVector                                             OldLocation;                                             // 0x0004(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FVector                                             OldVelocity;                                             // 0x0010(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_SurvivalPlayerCharacter.BP_SurvivalPlayerCharacter_C.UpdateFOVCameraPlacement
	 */
	struct ABP_SurvivalPlayerCharacter_C_UpdateFOVCameraPlacement_Params
	{
	public:
		float                                                      NewValue;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_SurvivalPlayerCharacter.BP_SurvivalPlayerCharacter_C.OnUIOpenChatPressed
	 */
	struct ABP_SurvivalPlayerCharacter_C_OnUIOpenChatPressed_Params
	{	};

	/**
	 * Function BP_SurvivalPlayerCharacter.BP_SurvivalPlayerCharacter_C.OnLanded
	 */
	struct ABP_SurvivalPlayerCharacter_C_OnLanded_Params
	{
	public:
		struct FHitResult                                          Hit;                                                     // 0x0000(0x008C)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	};

	/**
	 * Function BP_SurvivalPlayerCharacter.BP_SurvivalPlayerCharacter_C.HandleCameraDisplayModeChanged
	 */
	struct ABP_SurvivalPlayerCharacter_C_HandleCameraDisplayModeChanged_Params
	{
	public:
		ECameraDisplayMode                                         DisplayMode;                                             // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_ZU5P[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		float                                                      BlendTime;                                               // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_SurvivalPlayerCharacter.BP_SurvivalPlayerCharacter_C.K2_OnMovementModeChanged
	 */
	struct ABP_SurvivalPlayerCharacter_C_K2_OnMovementModeChanged_Params
	{
	public:
		EMovementMode                                              PrevMovementMode;                                        // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		EMovementMode                                              NewMovementMode;                                         // 0x0001(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              PrevCustomMode;                                          // 0x0002(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              NewCustomMode;                                           // 0x0003(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_SurvivalPlayerCharacter.BP_SurvivalPlayerCharacter_C.BndEvt__CharMovementComponent_K2Node_ComponentBoundEvent_0_UnderwaterChangedDelegate__DelegateSignature
	 */
	struct ABP_SurvivalPlayerCharacter_C_BndEvt__CharMovementComponent_K2Node_ComponentBoundEvent_0_UnderwaterChangedDelegate__DelegateSignature_Params
	{
	public:
		bool                                                       bIsUnderwater;                                           // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_SurvivalPlayerCharacter.BP_SurvivalPlayerCharacter_C.SFXDrown
	 */
	struct ABP_SurvivalPlayerCharacter_C_SFXDrown_Params
	{	};

	/**
	 * Function BP_SurvivalPlayerCharacter.BP_SurvivalPlayerCharacter_C.MulticastPlayCharacterSound
	 */
	struct ABP_SurvivalPlayerCharacter_C_MulticastPlayCharacterSound_Params
	{
	public:
		struct FGameplayTag                                        SoundTag;                                                // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
		bool                                                       bAttached;                                               // 0x0008(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_SurvivalPlayerCharacter.BP_SurvivalPlayerCharacter_C.SFXStarvation
	 */
	struct ABP_SurvivalPlayerCharacter_C_SFXStarvation_Params
	{	};

	/**
	 * Function BP_SurvivalPlayerCharacter.BP_SurvivalPlayerCharacter_C.OnControllerDisconnected
	 */
	struct ABP_SurvivalPlayerCharacter_C_OnControllerDisconnected_Params
	{	};

	/**
	 * Function BP_SurvivalPlayerCharacter.BP_SurvivalPlayerCharacter_C.BndEvt__BP_SurvivalPlayerCharacter_BuildingPlacementComponent_K2Node_ComponentBoundEvent_0_BuildingDelegate__DelegateSignature
	 */
	struct ABP_SurvivalPlayerCharacter_C_BndEvt__BP_SurvivalPlayerCharacter_BuildingPlacementComponent_K2Node_ComponentBoundEvent_0_BuildingDelegate__DelegateSignature_Params
	{
	public:
		class ABuilding*                                           Building;                                                // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_SurvivalPlayerCharacter.BP_SurvivalPlayerCharacter_C.ExecuteUbergraph_BP_SurvivalPlayerCharacter
	 */
	struct ABP_SurvivalPlayerCharacter_C_ExecuteUbergraph_BP_SurvivalPlayerCharacter_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_SurvivalPlayerCharacter.BP_SurvivalPlayerCharacter_C.OnDebugCommandTriggered__DelegateSignature
	 */
	struct ABP_SurvivalPlayerCharacter_C_OnDebugCommandTriggered__DelegateSignature_Params
	{	};

	/**
	 * Function BP_SurvivalPlayerCharacter.BP_SurvivalPlayerCharacter_C.OnItemEquipped__DelegateSignature
	 */
	struct ABP_SurvivalPlayerCharacter_C_OnItemEquipped__DelegateSignature_Params
	{	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
