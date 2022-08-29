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
	 * Function BP_Lab_Door_A.BP_Lab_Door_A_C.DebugShowControllingSwitch
	 */
	struct ABP_Lab_Door_A_C_DebugShowControllingSwitch_Params
	{	};

	/**
	 * Function BP_Lab_Door_A.BP_Lab_Door_A_C.OnControllingSwitchOpenStateChanged
	 */
	struct ABP_Lab_Door_A_C_OnControllingSwitchOpenStateChanged_Params
	{
	public:
		bool                                                       IsOpen;                                                  // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_062Z[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class AActor*                                              Instigator;                                              // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Lab_Door_A.BP_Lab_Door_A_C.UserConstructionScript
	 */
	struct ABP_Lab_Door_A_C_UserConstructionScript_Params
	{	};

	/**
	 * Function BP_Lab_Door_A.BP_Lab_Door_A_C.Timeline_0__FinishedFunc
	 */
	struct ABP_Lab_Door_A_C_Timeline_0__FinishedFunc_Params
	{	};

	/**
	 * Function BP_Lab_Door_A.BP_Lab_Door_A_C.Timeline_0__UpdateFunc
	 */
	struct ABP_Lab_Door_A_C_Timeline_0__UpdateFunc_Params
	{	};

	/**
	 * Function BP_Lab_Door_A.BP_Lab_Door_A_C.DoorSound__FinishedFunc
	 */
	struct ABP_Lab_Door_A_C_DoorSound__FinishedFunc_Params
	{	};

	/**
	 * Function BP_Lab_Door_A.BP_Lab_Door_A_C.DoorSound__UpdateFunc
	 */
	struct ABP_Lab_Door_A_C_DoorSound__UpdateFunc_Params
	{	};

	/**
	 * Function BP_Lab_Door_A.BP_Lab_Door_A_C.BndEvt__Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature
	 */
	struct ABP_Lab_Door_A_C_BndEvt__Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature_Params
	{
	public:
		class UPrimitiveComponent*                                 OverlappedComponent;                                     // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class AActor*                                              OtherActor;                                              // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UPrimitiveComponent*                                 OtherComp;                                               // 0x0010(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    OtherBodyIndex;                                          // 0x0018(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       bFromSweep;                                              // 0x001C(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_H9BU[0x3];                                   // 0x001D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FHitResult                                          SweepResult;                                             // 0x0020(0x008C)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	};

	/**
	 * Function BP_Lab_Door_A.BP_Lab_Door_A_C.OnOpenDoor
	 */
	struct ABP_Lab_Door_A_C_OnOpenDoor_Params
	{	};

	/**
	 * Function BP_Lab_Door_A.BP_Lab_Door_A_C.OnCloseDoor
	 */
	struct ABP_Lab_Door_A_C_OnCloseDoor_Params
	{	};

	/**
	 * Function BP_Lab_Door_A.BP_Lab_Door_A_C.BndEvt__Box_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature
	 */
	struct ABP_Lab_Door_A_C_BndEvt__Box_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature_Params
	{
	public:
		class UPrimitiveComponent*                                 OverlappedComponent;                                     // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class AActor*                                              OtherActor;                                              // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UPrimitiveComponent*                                 OtherComp;                                               // 0x0010(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    OtherBodyIndex;                                          // 0x0018(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Lab_Door_A.BP_Lab_Door_A_C.SetLocked
	 */
	struct ABP_Lab_Door_A_C_SetLocked_Params
	{
	public:
		bool                                                       Locked;                                                  // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_Lab_Door_A.BP_Lab_Door_A_C.EvaluateDoorState
	 */
	struct ABP_Lab_Door_A_C_EvaluateDoorState_Params
	{	};

	/**
	 * Function BP_Lab_Door_A.BP_Lab_Door_A_C.OnLockStateChanged
	 */
	struct ABP_Lab_Door_A_C_OnLockStateChanged_Params
	{
	public:
		bool                                                       IsLocked;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_Lab_Door_A.BP_Lab_Door_A_C.OnUpdateVisualState
	 */
	struct ABP_Lab_Door_A_C_OnUpdateVisualState_Params
	{
	public:
		bool                                                       IsOpen;                                                  // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_Lab_Door_A.BP_Lab_Door_A_C.ReceiveBeginPlay
	 */
	struct ABP_Lab_Door_A_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function BP_Lab_Door_A.BP_Lab_Door_A_C.UpdateLockIndicatorVisual
	 */
	struct ABP_Lab_Door_A_C_UpdateLockIndicatorVisual_Params
	{	};

	/**
	 * Function BP_Lab_Door_A.BP_Lab_Door_A_C.BndEvt__BP_Lab_Door_A_TerminalSwitchListener_K2Node_ComponentBoundEvent_2_OnTerminalStateChange__DelegateSignature
	 */
	struct ABP_Lab_Door_A_C_BndEvt__BP_Lab_Door_A_TerminalSwitchListener_K2Node_ComponentBoundEvent_2_OnTerminalStateChange__DelegateSignature_Params
	{
	public:
		class ATerminalSwitch*                                     Terminal;                                                // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FTerminalConditional                                ConditionalState;                                        // 0x0008(0x0058)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
	};

	/**
	 * Function BP_Lab_Door_A.BP_Lab_Door_A_C.ExecuteUbergraph_BP_Lab_Door_A
	 */
	struct ABP_Lab_Door_A_C_ExecuteUbergraph_BP_Lab_Door_A_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Lab_Door_A.BP_Lab_Door_A_C.OnDoorClosed_ServerOnly__DelegateSignature
	 */
	struct ABP_Lab_Door_A_C_OnDoorClosed_ServerOnly__DelegateSignature_Params
	{	};

	/**
	 * Function BP_Lab_Door_A.BP_Lab_Door_A_C.OnDoorOpen_ServerOnly__DelegateSignature
	 */
	struct ABP_Lab_Door_A_C_OnDoorOpen_ServerOnly__DelegateSignature_Params
	{	};

	/**
	 * Function BP_Lab_Door_A.BP_Lab_Door_A_C.OnDoorClosed__DelegateSignature
	 */
	struct ABP_Lab_Door_A_C_OnDoorClosed__DelegateSignature_Params
	{	};

	/**
	 * Function BP_Lab_Door_A.BP_Lab_Door_A_C.OnDoorOpen__DelegateSignature
	 */
	struct ABP_Lab_Door_A_C_OnDoorOpen__DelegateSignature_Params
	{	};

	/**
	 * Function BP_Lab_Door_A.BP_Lab_Door_A_C.OnLockedChanged_ServerOnly__DelegateSignature
	 */
	struct ABP_Lab_Door_A_C_OnLockedChanged_ServerOnly__DelegateSignature_Params
	{	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
