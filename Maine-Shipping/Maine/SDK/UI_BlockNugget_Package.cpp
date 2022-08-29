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
	 * 		Name   -> Function UI_BlockNugget.UI_BlockNugget_C.GetExplodeColor
	 * 		Flags  -> ()
	 */
	struct FLinearColor UUI_BlockNugget_C::GetExplodeColor()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_BlockNugget.UI_BlockNugget_C.GetExplodeColor");
		
		UUI_BlockNugget_C_GetExplodeColor_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_BlockNugget.UI_BlockNugget_C.GetShieldInnerBColor
	 * 		Flags  -> ()
	 */
	struct FLinearColor UUI_BlockNugget_C::GetShieldInnerBColor()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_BlockNugget.UI_BlockNugget_C.GetShieldInnerBColor");
		
		UUI_BlockNugget_C_GetShieldInnerBColor_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_BlockNugget.UI_BlockNugget_C.GetShieldInnerAColor
	 * 		Flags  -> ()
	 */
	struct FLinearColor UUI_BlockNugget_C::GetShieldInnerAColor()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_BlockNugget.UI_BlockNugget_C.GetShieldInnerAColor");
		
		UUI_BlockNugget_C_GetShieldInnerAColor_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_BlockNugget.UI_BlockNugget_C.GetShieldOuterColor
	 * 		Flags  -> ()
	 */
	struct FLinearColor UUI_BlockNugget_C::GetShieldOuterColor()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_BlockNugget.UI_BlockNugget_C.GetShieldOuterColor");
		
		UUI_BlockNugget_C_GetShieldOuterColor_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_BlockNugget.UI_BlockNugget_C.BlockAnim
	 * 		Flags  -> ()
	 */
	void UUI_BlockNugget_C::BlockAnim()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_BlockNugget.UI_BlockNugget_C.BlockAnim");
		
		UUI_BlockNugget_C_BlockAnim_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_BlockNugget.UI_BlockNugget_C.BlockSoundPlay
	 * 		Flags  -> ()
	 */
	void UUI_BlockNugget_C::BlockSoundPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_BlockNugget.UI_BlockNugget_C.BlockSoundPlay");
		
		UUI_BlockNugget_C_BlockSoundPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_BlockNugget.UI_BlockNugget_C.ExecuteUbergraph_UI_BlockNugget
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_BlockNugget_C::ExecuteUbergraph_UI_BlockNugget(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_BlockNugget.UI_BlockNugget_C.ExecuteUbergraph_UI_BlockNugget");
		
		UUI_BlockNugget_C_ExecuteUbergraph_UI_BlockNugget_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UUI_BlockNugget_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UUI_BlockNugget_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass UI_BlockNugget.UI_BlockNugget_C");
		return ptr;
	}

}


