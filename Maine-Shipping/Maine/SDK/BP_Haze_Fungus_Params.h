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
	 * Function BP_Haze_Fungus.BP_Haze_Fungus_C.Timeline_0__FinishedFunc
	 */
	struct ABP_Haze_Fungus_C_Timeline_0__FinishedFunc_Params
	{	};

	/**
	 * Function BP_Haze_Fungus.BP_Haze_Fungus_C.Timeline_0__UpdateFunc
	 */
	struct ABP_Haze_Fungus_C_Timeline_0__UpdateFunc_Params
	{	};

	/**
	 * Function BP_Haze_Fungus.BP_Haze_Fungus_C.ReceiveBeginPlay
	 */
	struct ABP_Haze_Fungus_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function BP_Haze_Fungus.BP_Haze_Fungus_C.OnTakeAnyDamage_Event_1
	 */
	struct ABP_Haze_Fungus_C_OnTakeAnyDamage_Event_1_Params
	{
	public:
		class AActor*                                              DamagedActor;                                            // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      Damage;                                                  // 0x0008(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_GBJ3[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UDamageType*                                         DamageType;                                              // 0x0010(0x0008)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class AController*                                         InstigatedBy;                                            // 0x0018(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class AActor*                                              DamageCauser;                                            // 0x0020(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Haze_Fungus.BP_Haze_Fungus_C.Multicast On Dmg Taken
	 */
	struct ABP_Haze_Fungus_C_Multicast_On_Dmg_Taken_Params
	{	};

	/**
	 * Function BP_Haze_Fungus.BP_Haze_Fungus_C.ExecuteUbergraph_BP_Haze_Fungus
	 */
	struct ABP_Haze_Fungus_C_ExecuteUbergraph_BP_Haze_Fungus_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
