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
	 * 		Name   -> Function animnotify_creature_audio_lp_start.animnotify_creature_audio_lp_start_C.Received_Notify
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class USkeletalMeshComponent*                      MeshComp                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UAnimSequenceBase*                           Animation                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	bool Uanimnotify_creature_audio_lp_start_C::Received_Notify(class USkeletalMeshComponent* MeshComp, class UAnimSequenceBase* Animation)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function animnotify_creature_audio_lp_start.animnotify_creature_audio_lp_start_C.Received_Notify");
		
		Uanimnotify_creature_audio_lp_start_C_Received_Notify_Params params {};
		params.MeshComp = MeshComp;
		params.Animation = Animation;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction Uanimnotify_creature_audio_lp_start_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* Uanimnotify_creature_audio_lp_start_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass animnotify_creature_audio_lp_start.animnotify_creature_audio_lp_start_C");
		return ptr;
	}

}


