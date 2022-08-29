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
	 * 		Name   -> Function UI_EquipmentAction.UI_EquipmentAction_C.Initialize
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        ActionName                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FLocString                                  LocalizedName                                              (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_EquipmentAction_C::Initialize(const class FName& ActionName, const struct FLocString& LocalizedName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_EquipmentAction.UI_EquipmentAction_C.Initialize");
		
		UUI_EquipmentAction_C_Initialize_Params params {};
		params.ActionName = ActionName;
		params.LocalizedName = LocalizedName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_EquipmentAction.UI_EquipmentAction_C.PreConstruct
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_EquipmentAction_C::PreConstruct(bool IsDesignTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_EquipmentAction.UI_EquipmentAction_C.PreConstruct");
		
		UUI_EquipmentAction_C_PreConstruct_Params params {};
		params.IsDesignTime = IsDesignTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_EquipmentAction.UI_EquipmentAction_C.OnGlobalColorChange
	 * 		Flags  -> ()
	 */
	void UUI_EquipmentAction_C::OnGlobalColorChange()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_EquipmentAction.UI_EquipmentAction_C.OnGlobalColorChange");
		
		UUI_EquipmentAction_C_OnGlobalColorChange_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_EquipmentAction.UI_EquipmentAction_C.ExecuteUbergraph_UI_EquipmentAction
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_EquipmentAction_C::ExecuteUbergraph_UI_EquipmentAction(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_EquipmentAction.UI_EquipmentAction_C.ExecuteUbergraph_UI_EquipmentAction");
		
		UUI_EquipmentAction_C_ExecuteUbergraph_UI_EquipmentAction_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UUI_EquipmentAction_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UUI_EquipmentAction_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass UI_EquipmentAction.UI_EquipmentAction_C");
		return ptr;
	}

}


