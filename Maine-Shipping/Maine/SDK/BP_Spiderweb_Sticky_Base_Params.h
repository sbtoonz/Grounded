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
	 * Function BP_Spiderweb_Sticky_Base.BP_Spiderweb_Sticky_Base_C.UpdateNavigationSplines
	 */
	struct ABP_Spiderweb_Sticky_Base_C_UpdateNavigationSplines_Params
	{	};

	/**
	 * Function BP_Spiderweb_Sticky_Base.BP_Spiderweb_Sticky_Base_C.RemoveFromStickyWebArray
	 */
	struct ABP_Spiderweb_Sticky_Base_C_RemoveFromStickyWebArray_Params
	{	};

	/**
	 * Function BP_Spiderweb_Sticky_Base.BP_Spiderweb_Sticky_Base_C.AddToStickyWebArray
	 */
	struct ABP_Spiderweb_Sticky_Base_C_AddToStickyWebArray_Params
	{	};

	/**
	 * Function BP_Spiderweb_Sticky_Base.BP_Spiderweb_Sticky_Base_C.HasBlueprintInstanceData
	 */
	struct ABP_Spiderweb_Sticky_Base_C_HasBlueprintInstanceData_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_Spiderweb_Sticky_Base.BP_Spiderweb_Sticky_Base_C.TransferBlueprintInstanceDataToProxy
	 */
	struct ABP_Spiderweb_Sticky_Base_C_TransferBlueprintInstanceDataToProxy_Params
	{	};

	/**
	 * Function BP_Spiderweb_Sticky_Base.BP_Spiderweb_Sticky_Base_C.UpdateColliderTransforms
	 */
	struct ABP_Spiderweb_Sticky_Base_C_UpdateColliderTransforms_Params
	{	};

	/**
	 * Function BP_Spiderweb_Sticky_Base.BP_Spiderweb_Sticky_Base_C.StopAudio
	 */
	struct ABP_Spiderweb_Sticky_Base_C_StopAudio_Params
	{	};

	/**
	 * Function BP_Spiderweb_Sticky_Base.BP_Spiderweb_Sticky_Base_C.StartAudio
	 */
	struct ABP_Spiderweb_Sticky_Base_C_StartAudio_Params
	{	};

	/**
	 * Function BP_Spiderweb_Sticky_Base.BP_Spiderweb_Sticky_Base_C.OnRep_FinalAttachmentPoints
	 */
	struct ABP_Spiderweb_Sticky_Base_C_OnRep_FinalAttachmentPoints_Params
	{	};

	/**
	 * Function BP_Spiderweb_Sticky_Base.BP_Spiderweb_Sticky_Base_C.Get Average Position
	 */
	struct ABP_Spiderweb_Sticky_Base_C_Get_Average_Position_Params
	{
	public:
		TArray<struct FVector>                                     Array;                                                   // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		struct FVector                                             Average_Position;                                        // 0x0010(0x000C)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Spiderweb_Sticky_Base.BP_Spiderweb_Sticky_Base_C.AddWobble
	 */
	struct ABP_Spiderweb_Sticky_Base_C_AddWobble_Params
	{
	public:
		struct FTransform                                          InTransform;                                             // 0x0000(0x0030)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor)
		struct FVector                                             Offset_Location;                                         // 0x0030(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_AD0H[0x4];                                   // 0x003C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FTransform                                          ReturnValue;                                             // 0x0040(0x0030)  (Parm, OutParm, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_Spiderweb_Sticky_Base.BP_Spiderweb_Sticky_Base_C.GetAttachmentPoints
	 */
	struct ABP_Spiderweb_Sticky_Base_C_GetAttachmentPoints_Params
	{
	public:
		struct FTransform                                          SpawnPoint;                                              // 0x0000(0x0030)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		TArray<struct FVector>                                     HitLocations;                                            // 0x0030(0x0010)  (Parm, OutParm)
		bool                                                       Success;                                                 // 0x0040(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_Spiderweb_Sticky_Base.BP_Spiderweb_Sticky_Base_C.UserConstructionScript
	 */
	struct ABP_Spiderweb_Sticky_Base_C_UserConstructionScript_Params
	{	};

	/**
	 * Function BP_Spiderweb_Sticky_Base.BP_Spiderweb_Sticky_Base_C.TL_DissolveWeb__FinishedFunc
	 */
	struct ABP_Spiderweb_Sticky_Base_C_TL_DissolveWeb__FinishedFunc_Params
	{	};

	/**
	 * Function BP_Spiderweb_Sticky_Base.BP_Spiderweb_Sticky_Base_C.TL_DissolveWeb__UpdateFunc
	 */
	struct ABP_Spiderweb_Sticky_Base_C_TL_DissolveWeb__UpdateFunc_Params
	{	};

	/**
	 * Function BP_Spiderweb_Sticky_Base.BP_Spiderweb_Sticky_Base_C.Timeline_0_0__FinishedFunc
	 */
	struct ABP_Spiderweb_Sticky_Base_C_Timeline_0_0__FinishedFunc_Params
	{	};

	/**
	 * Function BP_Spiderweb_Sticky_Base.BP_Spiderweb_Sticky_Base_C.Timeline_0_0__UpdateFunc
	 */
	struct ABP_Spiderweb_Sticky_Base_C_Timeline_0_0__UpdateFunc_Params
	{	};

	/**
	 * Function BP_Spiderweb_Sticky_Base.BP_Spiderweb_Sticky_Base_C.Timeline_1__FinishedFunc
	 */
	struct ABP_Spiderweb_Sticky_Base_C_Timeline_1__FinishedFunc_Params
	{	};

	/**
	 * Function BP_Spiderweb_Sticky_Base.BP_Spiderweb_Sticky_Base_C.Timeline_1__UpdateFunc
	 */
	struct ABP_Spiderweb_Sticky_Base_C_Timeline_1__UpdateFunc_Params
	{	};

	/**
	 * Function BP_Spiderweb_Sticky_Base.BP_Spiderweb_Sticky_Base_C.InpActEvt_Pause_K2Node_InputActionEvent_1
	 */
	struct ABP_Spiderweb_Sticky_Base_C_InpActEvt_Pause_K2Node_InputActionEvent_1_Params
	{
	public:
		struct FKey                                                Key;                                                     // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Spiderweb_Sticky_Base.BP_Spiderweb_Sticky_Base_C.ReceiveBeginPlay
	 */
	struct ABP_Spiderweb_Sticky_Base_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function BP_Spiderweb_Sticky_Base.BP_Spiderweb_Sticky_Base_C.ReceiveTick
	 */
	struct ABP_Spiderweb_Sticky_Base_C_ReceiveTick_Params
	{
	public:
		float                                                      DeltaSeconds;                                            // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Spiderweb_Sticky_Base.BP_Spiderweb_Sticky_Base_C.SetRandomPose
	 */
	struct ABP_Spiderweb_Sticky_Base_C_SetRandomPose_Params
	{	};

	/**
	 * Function BP_Spiderweb_Sticky_Base.BP_Spiderweb_Sticky_Base_C.BreakConstraint
	 */
	struct ABP_Spiderweb_Sticky_Base_C_BreakConstraint_Params
	{	};

	/**
	 * Function BP_Spiderweb_Sticky_Base.BP_Spiderweb_Sticky_Base_C.ToggleWebPostProcess
	 */
	struct ABP_Spiderweb_Sticky_Base_C_ToggleWebPostProcess_Params
	{
	public:
		bool                                                       isAttached;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_10TA[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class ASurvivalPlayerCharacter*                            overlappedPlayer;                                        // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Spiderweb_Sticky_Base.BP_Spiderweb_Sticky_Base_C.StretchWebPostProcess
	 */
	struct ABP_Spiderweb_Sticky_Base_C_StretchWebPostProcess_Params
	{
	public:
		struct FVector                                             PlayerToWebVector;                                       // 0x0000(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Spiderweb_Sticky_Base.BP_Spiderweb_Sticky_Base_C.OnDestroyed_Event_1
	 */
	struct ABP_Spiderweb_Sticky_Base_C_OnDestroyed_Event_1_Params
	{
	public:
		class AActor*                                              DestroyedActor;                                          // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Spiderweb_Sticky_Base.BP_Spiderweb_Sticky_Base_C.Set Saved Pose
	 */
	struct ABP_Spiderweb_Sticky_Base_C_Set_Saved_Pose_Params
	{	};

	/**
	 * Function BP_Spiderweb_Sticky_Base.BP_Spiderweb_Sticky_Base_C.Manual Placement Mode
	 */
	struct ABP_Spiderweb_Sticky_Base_C_Manual_Placement_Mode_Params
	{	};

	/**
	 * Function BP_Spiderweb_Sticky_Base.BP_Spiderweb_Sticky_Base_C.Random Placement Mode
	 */
	struct ABP_Spiderweb_Sticky_Base_C_Random_Placement_Mode_Params
	{	};

	/**
	 * Function BP_Spiderweb_Sticky_Base.BP_Spiderweb_Sticky_Base_C.Set Animation BP
	 */
	struct ABP_Spiderweb_Sticky_Base_C_Set_Animation_BP_Params
	{	};

	/**
	 * Function BP_Spiderweb_Sticky_Base.BP_Spiderweb_Sticky_Base_C.Update Corner Attachments
	 */
	struct ABP_Spiderweb_Sticky_Base_C_Update_Corner_Attachments_Params
	{	};

	/**
	 * Function BP_Spiderweb_Sticky_Base.BP_Spiderweb_Sticky_Base_C.BndEvt__HealthComponent_K2Node_ComponentBoundEvent_0_OnHandleEffectsEvent__DelegateSignature
	 */
	struct ABP_Spiderweb_Sticky_Base_C_BndEvt__HealthComponent_K2Node_ComponentBoundEvent_0_OnHandleEffectsEvent__DelegateSignature_Params
	{
	public:
		struct FVector                                             HitLocation;                                             // 0x0000(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Spiderweb_Sticky_Base.BP_Spiderweb_Sticky_Base_C.Handle Death
	 */
	struct ABP_Spiderweb_Sticky_Base_C_Handle_Death_Params
	{
	public:
		struct FDamageInfo                                         DamageInfo;                                              // 0x0000(0x0068)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	};

	/**
	 * Function BP_Spiderweb_Sticky_Base.BP_Spiderweb_Sticky_Base_C.ReceiveAnyDamage
	 */
	struct ABP_Spiderweb_Sticky_Base_C_ReceiveAnyDamage_Params
	{
	public:
		float                                                      Damage;                                                  // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_PDR8[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UDamageType*                                         DamageType;                                              // 0x0008(0x0008)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class AController*                                         InstigatedBy;                                            // 0x0010(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class AActor*                                              DamageCauser;                                            // 0x0018(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Spiderweb_Sticky_Base.BP_Spiderweb_Sticky_Base_C.BndEvt__Collision_JNT_1_K2Node_ComponentBoundEvent_2_ComponentBeginOverlapSignature__DelegateSignature
	 */
	struct ABP_Spiderweb_Sticky_Base_C_BndEvt__Collision_JNT_1_K2Node_ComponentBoundEvent_2_ComponentBeginOverlapSignature__DelegateSignature_Params
	{
	public:
		class UPrimitiveComponent*                                 OverlappedComponent;                                     // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class AActor*                                              OtherActor;                                              // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UPrimitiveComponent*                                 OtherComp;                                               // 0x0010(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    OtherBodyIndex;                                          // 0x0018(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       bFromSweep;                                              // 0x001C(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_7VNO[0x3];                                   // 0x001D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FHitResult                                          SweepResult;                                             // 0x0020(0x008C)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	};

	/**
	 * Function BP_Spiderweb_Sticky_Base.BP_Spiderweb_Sticky_Base_C.BndEvt__Collision_JNT_2_K2Node_ComponentBoundEvent_3_ComponentBeginOverlapSignature__DelegateSignature
	 */
	struct ABP_Spiderweb_Sticky_Base_C_BndEvt__Collision_JNT_2_K2Node_ComponentBoundEvent_3_ComponentBeginOverlapSignature__DelegateSignature_Params
	{
	public:
		class UPrimitiveComponent*                                 OverlappedComponent;                                     // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class AActor*                                              OtherActor;                                              // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UPrimitiveComponent*                                 OtherComp;                                               // 0x0010(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    OtherBodyIndex;                                          // 0x0018(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       bFromSweep;                                              // 0x001C(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_8ZPP[0x3];                                   // 0x001D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FHitResult                                          SweepResult;                                             // 0x0020(0x008C)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	};

	/**
	 * Function BP_Spiderweb_Sticky_Base.BP_Spiderweb_Sticky_Base_C.BndEvt__Collision_JNT_3_K2Node_ComponentBoundEvent_4_ComponentBeginOverlapSignature__DelegateSignature
	 */
	struct ABP_Spiderweb_Sticky_Base_C_BndEvt__Collision_JNT_3_K2Node_ComponentBoundEvent_4_ComponentBeginOverlapSignature__DelegateSignature_Params
	{
	public:
		class UPrimitiveComponent*                                 OverlappedComponent;                                     // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class AActor*                                              OtherActor;                                              // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UPrimitiveComponent*                                 OtherComp;                                               // 0x0010(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    OtherBodyIndex;                                          // 0x0018(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       bFromSweep;                                              // 0x001C(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_PNCH[0x3];                                   // 0x001D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FHitResult                                          SweepResult;                                             // 0x0020(0x008C)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	};

	/**
	 * Function BP_Spiderweb_Sticky_Base.BP_Spiderweb_Sticky_Base_C.RestoreBlueprintInstanceDataToFullActor
	 */
	struct ABP_Spiderweb_Sticky_Base_C_RestoreBlueprintInstanceDataToFullActor_Params
	{	};

	/**
	 * Function BP_Spiderweb_Sticky_Base.BP_Spiderweb_Sticky_Base_C.Update Saved Attachment Positions
	 */
	struct ABP_Spiderweb_Sticky_Base_C_Update_Saved_Attachment_Positions_Params
	{	};

	/**
	 * Function BP_Spiderweb_Sticky_Base.BP_Spiderweb_Sticky_Base_C.Validate Attachment Points
	 */
	struct ABP_Spiderweb_Sticky_Base_C_Validate_Attachment_Points_Params
	{	};

	/**
	 * Function BP_Spiderweb_Sticky_Base.BP_Spiderweb_Sticky_Base_C.Cleanup
	 */
	struct ABP_Spiderweb_Sticky_Base_C_Cleanup_Params
	{	};

	/**
	 * Function BP_Spiderweb_Sticky_Base.BP_Spiderweb_Sticky_Base_C.Restore Spline Points
	 */
	struct ABP_Spiderweb_Sticky_Base_C_Restore_Spline_Points_Params
	{	};

	/**
	 * Function BP_Spiderweb_Sticky_Base.BP_Spiderweb_Sticky_Base_C.Project Sleep Splines Down
	 */
	struct ABP_Spiderweb_Sticky_Base_C_Project_Sleep_Splines_Down_Params
	{	};

	/**
	 * Function BP_Spiderweb_Sticky_Base.BP_Spiderweb_Sticky_Base_C.ExecuteUbergraph_BP_Spiderweb_Sticky_Base
	 */
	struct ABP_Spiderweb_Sticky_Base_C_ExecuteUbergraph_BP_Spiderweb_Sticky_Base_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
