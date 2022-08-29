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
	 * Function BP_Web_Sac.BP_Web_Sac_C.OnRep_Health
	 */
	struct ABP_Web_Sac_C_OnRep_Health_Params
	{	};

	/**
	 * Function BP_Web_Sac.BP_Web_Sac_C.ReceiveBeginPlay
	 */
	struct ABP_Web_Sac_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function BP_Web_Sac.BP_Web_Sac_C.BndEvt__HealthComponent_K2Node_ComponentBoundEvent_1_DamagedDelegate__DelegateSignature
	 */
	struct ABP_Web_Sac_C_BndEvt__HealthComponent_K2Node_ComponentBoundEvent_1_DamagedDelegate__DelegateSignature_Params
	{
	public:
		float                                                      Damage;                                                  // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_TI1A[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FDamageInfo                                         DamageInfo;                                              // 0x0008(0x0068)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
		class AController*                                         InstigatedBy;                                            // 0x0070(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UBaseLODActor*                                       DamageCauser;                                            // 0x0078(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       IsKillingBlow;                                           // 0x0080(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_Web_Sac.BP_Web_Sac_C.ExecuteUbergraph_BP_Web_Sac
	 */
	struct ABP_Web_Sac_C_ExecuteUbergraph_BP_Web_Sac_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
