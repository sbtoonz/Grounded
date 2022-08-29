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
	 * 		Name   -> Function UI_UpgradeCollectibleCount.UI_UpgradeCollectibleCount_C.Construct
	 * 		Flags  -> ()
	 */
	void UUI_UpgradeCollectibleCount_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_UpgradeCollectibleCount.UI_UpgradeCollectibleCount_C.Construct");
		
		UUI_UpgradeCollectibleCount_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_UpgradeCollectibleCount.UI_UpgradeCollectibleCount_C.OnGlobalColorChange
	 * 		Flags  -> ()
	 */
	void UUI_UpgradeCollectibleCount_C::OnGlobalColorChange()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_UpgradeCollectibleCount.UI_UpgradeCollectibleCount_C.OnGlobalColorChange");
		
		UUI_UpgradeCollectibleCount_C_OnGlobalColorChange_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_UpgradeCollectibleCount.UI_UpgradeCollectibleCount_C.ExecuteUbergraph_UI_UpgradeCollectibleCount
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_UpgradeCollectibleCount_C::ExecuteUbergraph_UI_UpgradeCollectibleCount(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_UpgradeCollectibleCount.UI_UpgradeCollectibleCount_C.ExecuteUbergraph_UI_UpgradeCollectibleCount");
		
		UUI_UpgradeCollectibleCount_C_ExecuteUbergraph_UI_UpgradeCollectibleCount_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UUI_UpgradeCollectibleCount_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UUI_UpgradeCollectibleCount_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass UI_UpgradeCollectibleCount.UI_UpgradeCollectibleCount_C");
		return ptr;
	}

}


