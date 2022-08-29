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
	 * 		Name   -> Function UI_UpgradeCollectableFoundNotification.UI_UpgradeCollectableFoundNotification_C.GetScienceColor
	 * 		Flags  -> ()
	 */
	struct FLinearColor UUI_UpgradeCollectableFoundNotification_C::GetScienceColor()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_UpgradeCollectableFoundNotification.UI_UpgradeCollectableFoundNotification_C.GetScienceColor");
		
		UUI_UpgradeCollectableFoundNotification_C_GetScienceColor_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_UpgradeCollectableFoundNotification.UI_UpgradeCollectableFoundNotification_C.BindPlayerEvents
	 * 		Flags  -> ()
	 */
	void UUI_UpgradeCollectableFoundNotification_C::BindPlayerEvents()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_UpgradeCollectableFoundNotification.UI_UpgradeCollectableFoundNotification_C.BindPlayerEvents");
		
		UUI_UpgradeCollectableFoundNotification_C_BindPlayerEvents_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_UpgradeCollectableFoundNotification.UI_UpgradeCollectableFoundNotification_C.Construct
	 * 		Flags  -> ()
	 */
	void UUI_UpgradeCollectableFoundNotification_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_UpgradeCollectableFoundNotification.UI_UpgradeCollectableFoundNotification_C.Construct");
		
		UUI_UpgradeCollectableFoundNotification_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_UpgradeCollectableFoundNotification.UI_UpgradeCollectableFoundNotification_C.OnGlobalColorChange
	 * 		Flags  -> ()
	 */
	void UUI_UpgradeCollectableFoundNotification_C::OnGlobalColorChange()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_UpgradeCollectableFoundNotification.UI_UpgradeCollectableFoundNotification_C.OnGlobalColorChange");
		
		UUI_UpgradeCollectableFoundNotification_C_OnGlobalColorChange_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_UpgradeCollectableFoundNotification.UI_UpgradeCollectableFoundNotification_C.OnCollectableAquired
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsPartyCollectable                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		int32_t                                            Amount                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class ASurvivalPlayerState*                        AquirerPlayerState                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_UpgradeCollectableFoundNotification_C::OnCollectableAquired(bool IsPartyCollectable, int32_t Amount, class ASurvivalPlayerState* AquirerPlayerState)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_UpgradeCollectableFoundNotification.UI_UpgradeCollectableFoundNotification_C.OnCollectableAquired");
		
		UUI_UpgradeCollectableFoundNotification_C_OnCollectableAquired_Params params {};
		params.IsPartyCollectable = IsPartyCollectable;
		params.Amount = Amount;
		params.AquirerPlayerState = AquirerPlayerState;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_UpgradeCollectableFoundNotification.UI_UpgradeCollectableFoundNotification_C.EndAnim
	 * 		Flags  -> ()
	 */
	void UUI_UpgradeCollectableFoundNotification_C::EndAnim()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_UpgradeCollectableFoundNotification.UI_UpgradeCollectableFoundNotification_C.EndAnim");
		
		UUI_UpgradeCollectableFoundNotification_C_EndAnim_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_UpgradeCollectableFoundNotification.UI_UpgradeCollectableFoundNotification_C.ExecuteUbergraph_UI_UpgradeCollectableFoundNotification
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_UpgradeCollectableFoundNotification_C::ExecuteUbergraph_UI_UpgradeCollectableFoundNotification(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_UpgradeCollectableFoundNotification.UI_UpgradeCollectableFoundNotification_C.ExecuteUbergraph_UI_UpgradeCollectableFoundNotification");
		
		UUI_UpgradeCollectableFoundNotification_C_ExecuteUbergraph_UI_UpgradeCollectableFoundNotification_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UUI_UpgradeCollectableFoundNotification_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UUI_UpgradeCollectableFoundNotification_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass UI_UpgradeCollectableFoundNotification.UI_UpgradeCollectableFoundNotification_C");
		return ptr;
	}

}


