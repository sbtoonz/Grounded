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
	 * Function BP_BlendTriggerSphere.BP_BlendTriggerSphere_C.CheckCollisionMatch
	 */
	struct ABP_BlendTriggerSphere_C_CheckCollisionMatch_Params
	{
	public:
		class UPrimitiveComponent*                                 OtherComponent;                                          // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       ActorComponentCondition;                                 // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_DY8W[0x7];                                   // 0x0009(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BP_BlendTriggerSphere.BP_BlendTriggerSphere_C.TrackTriggerOverlap
	 */
	struct ABP_BlendTriggerSphere_C_TrackTriggerOverlap_Params
	{
	public:
		int32_t                                                    IncrementValue;                                          // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_BlendTriggerSphere.BP_BlendTriggerSphere_C.UserConstructionScript
	 */
	struct ABP_BlendTriggerSphere_C_UserConstructionScript_Params
	{	};

	/**
	 * Function BP_BlendTriggerSphere.BP_BlendTriggerSphere_C.ReceiveTick
	 */
	struct ABP_BlendTriggerSphere_C_ReceiveTick_Params
	{
	public:
		float                                                      DeltaSeconds;                                            // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_BlendTriggerSphere.BP_BlendTriggerSphere_C.ReceiveBeginPlay
	 */
	struct ABP_BlendTriggerSphere_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function BP_BlendTriggerSphere.BP_BlendTriggerSphere_C.HandleEndOverlapRespawn
	 */
	struct ABP_BlendTriggerSphere_C_HandleEndOverlapRespawn_Params
	{
	public:
		class APlayerController*                                   Controller;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_BlendTriggerSphere.BP_BlendTriggerSphere_C.BndEvt__Sphere_K2Node_ComponentBoundEvent_4_ComponentBeginOverlapSignature__DelegateSignature
	 */
	struct ABP_BlendTriggerSphere_C_BndEvt__Sphere_K2Node_ComponentBoundEvent_4_ComponentBeginOverlapSignature__DelegateSignature_Params
	{
	public:
		class UPrimitiveComponent*                                 OverlappedComponent;                                     // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class AActor*                                              OtherActor;                                              // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UPrimitiveComponent*                                 OtherComp;                                               // 0x0010(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    OtherBodyIndex;                                          // 0x0018(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       bFromSweep;                                              // 0x001C(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_Q8ZR[0x3];                                   // 0x001D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FHitResult                                          SweepResult;                                             // 0x0020(0x008C)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	};

	/**
	 * Function BP_BlendTriggerSphere.BP_BlendTriggerSphere_C.BndEvt__Sphere_K2Node_ComponentBoundEvent_7_ComponentEndOverlapSignature__DelegateSignature
	 */
	struct ABP_BlendTriggerSphere_C_BndEvt__Sphere_K2Node_ComponentBoundEvent_7_ComponentEndOverlapSignature__DelegateSignature_Params
	{
	public:
		class UPrimitiveComponent*                                 OverlappedComponent;                                     // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class AActor*                                              OtherActor;                                              // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UPrimitiveComponent*                                 OtherComp;                                               // 0x0010(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    OtherBodyIndex;                                          // 0x0018(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_BlendTriggerSphere.BP_BlendTriggerSphere_C.ExecuteUbergraph_BP_BlendTriggerSphere
	 */
	struct ABP_BlendTriggerSphere_C_ExecuteUbergraph_BP_BlendTriggerSphere_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_OLQ6[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
