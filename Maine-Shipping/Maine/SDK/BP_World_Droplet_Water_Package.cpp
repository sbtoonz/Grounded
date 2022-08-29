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
	 * 		Name   -> Function BP_World_Droplet_Water.BP_World_Droplet_Water_C.GetInteractionText
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EInteractionChannel                                Channel                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class AActor*                                      InstigatedBy                                               (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FString                                      OutText                                                    (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void ABP_World_Droplet_Water_C::GetInteractionText(EInteractionChannel Channel, class AActor* InstigatedBy, class FString* OutText)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_World_Droplet_Water.BP_World_Droplet_Water_C.GetInteractionText");
		
		ABP_World_Droplet_Water_C_GetInteractionText_Params params {};
		params.Channel = Channel;
		params.InstigatedBy = InstigatedBy;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutText != nullptr)
			*OutText = params.OutText;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_World_Droplet_Water.BP_World_Droplet_Water_C.DoAbsorbActor
	 * 		Flags  -> ()
	 */
	void ABP_World_Droplet_Water_C::DoAbsorbActor()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_World_Droplet_Water.BP_World_Droplet_Water_C.DoAbsorbActor");
		
		ABP_World_Droplet_Water_C_DoAbsorbActor_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_World_Droplet_Water.BP_World_Droplet_Water_C.PlayWobbleContact
	 * 		Flags  -> ()
	 */
	void ABP_World_Droplet_Water_C::PlayWobbleContact()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_World_Droplet_Water.BP_World_Droplet_Water_C.PlayWobbleContact");
		
		ABP_World_Droplet_Water_C_PlayWobbleContact_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_World_Droplet_Water.BP_World_Droplet_Water_C.DoDropletMergeIn
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class ASpawnedItemDroplet*                         Other                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_World_Droplet_Water_C::DoDropletMergeIn(class ASpawnedItemDroplet* Other)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_World_Droplet_Water.BP_World_Droplet_Water_C.DoDropletMergeIn");
		
		ABP_World_Droplet_Water_C_DoDropletMergeIn_Params params {};
		params.Other = Other;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_World_Droplet_Water.BP_World_Droplet_Water_C.Play VFX Contact
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FVector                                     Scale                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FVector                                     Location                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_World_Droplet_Water_C::Play_VFX_Contact(const struct FVector& Scale, const struct FVector& Location)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_World_Droplet_Water.BP_World_Droplet_Water_C.Play VFX Contact");
		
		ABP_World_Droplet_Water_C_Play_VFX_Contact_Params params {};
		params.Scale = Scale;
		params.Location = Location;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_World_Droplet_Water.BP_World_Droplet_Water_C.Play SFX Contact
	 * 		Flags  -> ()
	 */
	void ABP_World_Droplet_Water_C::Play_SFX_Contact()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_World_Droplet_Water.BP_World_Droplet_Water_C.Play SFX Contact");
		
		ABP_World_Droplet_Water_C_Play_SFX_Contact_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_World_Droplet_Water.BP_World_Droplet_Water_C.Get UV Coords
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FVector                                     Object_Position_WS                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FVector                                     UV_Grid                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FVector                                     UV_Segment                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_World_Droplet_Water_C::Get_UV_Coords(const struct FVector& Object_Position_WS, struct FVector* UV_Grid, struct FVector* UV_Segment)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_World_Droplet_Water.BP_World_Droplet_Water_C.Get UV Coords");
		
		ABP_World_Droplet_Water_C_Get_UV_Coords_Params params {};
		params.Object_Position_WS = Object_Position_WS;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (UV_Grid != nullptr)
			*UV_Grid = params.UV_Grid;
		if (UV_Segment != nullptr)
			*UV_Segment = params.UV_Segment;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_World_Droplet_Water.BP_World_Droplet_Water_C.bumpWobble__FinishedFunc
	 * 		Flags  -> ()
	 */
	void ABP_World_Droplet_Water_C::bumpWobble__FinishedFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_World_Droplet_Water.BP_World_Droplet_Water_C.bumpWobble__FinishedFunc");
		
		ABP_World_Droplet_Water_C_bumpWobble__FinishedFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_World_Droplet_Water.BP_World_Droplet_Water_C.bumpWobble__UpdateFunc
	 * 		Flags  -> ()
	 */
	void ABP_World_Droplet_Water_C::bumpWobble__UpdateFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_World_Droplet_Water.BP_World_Droplet_Water_C.bumpWobble__UpdateFunc");
		
		ABP_World_Droplet_Water_C_bumpWobble__UpdateFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_World_Droplet_Water.BP_World_Droplet_Water_C.On Droplet Merge In
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class ASpawnedItemDroplet*                         Other                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_World_Droplet_Water_C::On_Droplet_Merge_In(class ASpawnedItemDroplet* Other)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_World_Droplet_Water.BP_World_Droplet_Water_C.On Droplet Merge In");
		
		ABP_World_Droplet_Water_C_On_Droplet_Merge_In_Params params {};
		params.Other = Other;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_World_Droplet_Water.BP_World_Droplet_Water_C.On Absorb Actor
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AActor*                                      Actor                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_World_Droplet_Water_C::On_Absorb_Actor(class AActor* Actor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_World_Droplet_Water.BP_World_Droplet_Water_C.On Absorb Actor");
		
		ABP_World_Droplet_Water_C_On_Absorb_Actor_Params params {};
		params.Actor = Actor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_World_Droplet_Water.BP_World_Droplet_Water_C.NotifySwapped
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bFromDamage                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_World_Droplet_Water_C::NotifySwapped(bool bFromDamage)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_World_Droplet_Water.BP_World_Droplet_Water_C.NotifySwapped");
		
		ABP_World_Droplet_Water_C_NotifySwapped_Params params {};
		params.bFromDamage = bFromDamage;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_World_Droplet_Water.BP_World_Droplet_Water_C.DrawAtLocation
	 * 		Flags  -> ()
	 */
	void ABP_World_Droplet_Water_C::DrawAtLocation()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_World_Droplet_Water.BP_World_Droplet_Water_C.DrawAtLocation");
		
		ABP_World_Droplet_Water_C_DrawAtLocation_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_World_Droplet_Water.BP_World_Droplet_Water_C.ReceiveBeginPlay
	 * 		Flags  -> ()
	 */
	void ABP_World_Droplet_Water_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_World_Droplet_Water.BP_World_Droplet_Water_C.ReceiveBeginPlay");
		
		ABP_World_Droplet_Water_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_World_Droplet_Water.BP_World_Droplet_Water_C.PlayBumpWobble
	 * 		Flags  -> ()
	 */
	void ABP_World_Droplet_Water_C::PlayBumpWobble()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_World_Droplet_Water.BP_World_Droplet_Water_C.PlayBumpWobble");
		
		ABP_World_Droplet_Water_C_PlayBumpWobble_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_World_Droplet_Water.BP_World_Droplet_Water_C.PlayContactEffects
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FVector                                     Offset                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_World_Droplet_Water_C::PlayContactEffects(const struct FVector& Offset)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_World_Droplet_Water.BP_World_Droplet_Water_C.PlayContactEffects");
		
		ABP_World_Droplet_Water_C_PlayContactEffects_Params params {};
		params.Offset = Offset;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_World_Droplet_Water.BP_World_Droplet_Water_C.ExecuteUbergraph_BP_World_Droplet_Water
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_World_Droplet_Water_C::ExecuteUbergraph_BP_World_Droplet_Water(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_World_Droplet_Water.BP_World_Droplet_Water_C.ExecuteUbergraph_BP_World_Droplet_Water");
		
		ABP_World_Droplet_Water_C_ExecuteUbergraph_BP_World_Droplet_Water_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABP_World_Droplet_Water_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_World_Droplet_Water_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_World_Droplet_Water.BP_World_Droplet_Water_C");
		return ptr;
	}

}


