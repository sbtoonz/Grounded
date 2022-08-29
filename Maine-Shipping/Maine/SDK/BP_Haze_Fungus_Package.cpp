/**
 * Name: Maine
 * Version: Shipping
 */

#include "pch.h"

namespace CG
{
	// --------------------------------------------------
	// # Structs Functions
	// --------------------------------------------------
	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Haze_Fungus.BP_Haze_Fungus_C.Timeline_0__FinishedFunc
	 * 		Flags  -> ()
	 */
	void ABP_Haze_Fungus_C::Timeline_0__FinishedFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Haze_Fungus.BP_Haze_Fungus_C.Timeline_0__FinishedFunc");
		
		ABP_Haze_Fungus_C_Timeline_0__FinishedFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Haze_Fungus.BP_Haze_Fungus_C.Timeline_0__UpdateFunc
	 * 		Flags  -> ()
	 */
	void ABP_Haze_Fungus_C::Timeline_0__UpdateFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Haze_Fungus.BP_Haze_Fungus_C.Timeline_0__UpdateFunc");
		
		ABP_Haze_Fungus_C_Timeline_0__UpdateFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Haze_Fungus.BP_Haze_Fungus_C.ReceiveBeginPlay
	 * 		Flags  -> ()
	 */
	void ABP_Haze_Fungus_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Haze_Fungus.BP_Haze_Fungus_C.ReceiveBeginPlay");
		
		ABP_Haze_Fungus_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Haze_Fungus.BP_Haze_Fungus_C.OnTakeAnyDamage_Event_1
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AActor*                                      DamagedActor                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              Damage                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UDamageType*                                 DamageType                                                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class AController*                                 InstigatedBy                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class AActor*                                      DamageCauser                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_Haze_Fungus_C::OnTakeAnyDamage_Event_1(class AActor* DamagedActor, float Damage, class UDamageType* DamageType, class AController* InstigatedBy, class AActor* DamageCauser)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Haze_Fungus.BP_Haze_Fungus_C.OnTakeAnyDamage_Event_1");
		
		ABP_Haze_Fungus_C_OnTakeAnyDamage_Event_1_Params params {};
		params.DamagedActor = DamagedActor;
		params.Damage = Damage;
		params.DamageType = DamageType;
		params.InstigatedBy = InstigatedBy;
		params.DamageCauser = DamageCauser;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Haze_Fungus.BP_Haze_Fungus_C.Multicast On Dmg Taken
	 * 		Flags  -> ()
	 */
	void ABP_Haze_Fungus_C::Multicast_On_Dmg_Taken()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Haze_Fungus.BP_Haze_Fungus_C.Multicast On Dmg Taken");
		
		ABP_Haze_Fungus_C_Multicast_On_Dmg_Taken_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Haze_Fungus.BP_Haze_Fungus_C.ExecuteUbergraph_BP_Haze_Fungus
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_Haze_Fungus_C::ExecuteUbergraph_BP_Haze_Fungus(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Haze_Fungus.BP_Haze_Fungus_C.ExecuteUbergraph_BP_Haze_Fungus");
		
		ABP_Haze_Fungus_C_ExecuteUbergraph_BP_Haze_Fungus_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABP_Haze_Fungus_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_Haze_Fungus_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_Haze_Fungus.BP_Haze_Fungus_C");
		return ptr;
	}

}


