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
	 * 		Name   -> Function UI_ConnectedStorageInfo.UI_ConnectedStorageInfo_C.Construct
	 * 		Flags  -> ()
	 */
	void UUI_ConnectedStorageInfo_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_ConnectedStorageInfo.UI_ConnectedStorageInfo_C.Construct");
		
		UUI_ConnectedStorageInfo_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_ConnectedStorageInfo.UI_ConnectedStorageInfo_C.OnGlobalColorChange
	 * 		Flags  -> ()
	 */
	void UUI_ConnectedStorageInfo_C::OnGlobalColorChange()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_ConnectedStorageInfo.UI_ConnectedStorageInfo_C.OnGlobalColorChange");
		
		UUI_ConnectedStorageInfo_C_OnGlobalColorChange_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_ConnectedStorageInfo.UI_ConnectedStorageInfo_C.ExecuteUbergraph_UI_ConnectedStorageInfo
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_ConnectedStorageInfo_C::ExecuteUbergraph_UI_ConnectedStorageInfo(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_ConnectedStorageInfo.UI_ConnectedStorageInfo_C.ExecuteUbergraph_UI_ConnectedStorageInfo");
		
		UUI_ConnectedStorageInfo_C_ExecuteUbergraph_UI_ConnectedStorageInfo_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UUI_ConnectedStorageInfo_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UUI_ConnectedStorageInfo_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass UI_ConnectedStorageInfo.UI_ConnectedStorageInfo_C");
		return ptr;
	}

}


