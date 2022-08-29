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
	 * 		Name   -> Function UI_CompanyIntro.UI_CompanyIntro_C.HandleKeyEventChord
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FInputChord                                 InChord                                                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, HasGetValueTypeHash)
	 */
	bool UUI_CompanyIntro_C::HandleKeyEventChord(const struct FInputChord& InChord)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_CompanyIntro.UI_CompanyIntro_C.HandleKeyEventChord");
		
		UUI_CompanyIntro_C_HandleKeyEventChord_Params params {};
		params.InChord = InChord;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_CompanyIntro.UI_CompanyIntro_C.GetDefaultUserFocus
	 * 		Flags  -> ()
	 */
	class UWidget* UUI_CompanyIntro_C::GetDefaultUserFocus()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_CompanyIntro.UI_CompanyIntro_C.GetDefaultUserFocus");
		
		UUI_CompanyIntro_C_GetDefaultUserFocus_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_CompanyIntro.UI_CompanyIntro_C.Construct
	 * 		Flags  -> ()
	 */
	void UUI_CompanyIntro_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_CompanyIntro.UI_CompanyIntro_C.Construct");
		
		UUI_CompanyIntro_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_CompanyIntro.UI_CompanyIntro_C.OnIntroComplete
	 * 		Flags  -> ()
	 */
	void UUI_CompanyIntro_C::OnIntroComplete()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_CompanyIntro.UI_CompanyIntro_C.OnIntroComplete");
		
		UUI_CompanyIntro_C_OnIntroComplete_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_CompanyIntro.UI_CompanyIntro_C.FadeOut
	 * 		Flags  -> ()
	 */
	void UUI_CompanyIntro_C::FadeOut()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_CompanyIntro.UI_CompanyIntro_C.FadeOut");
		
		UUI_CompanyIntro_C_FadeOut_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_CompanyIntro.UI_CompanyIntro_C.BeginFade
	 * 		Flags  -> ()
	 */
	void UUI_CompanyIntro_C::BeginFade()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_CompanyIntro.UI_CompanyIntro_C.BeginFade");
		
		UUI_CompanyIntro_C_BeginFade_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_CompanyIntro.UI_CompanyIntro_C.ExecuteUbergraph_UI_CompanyIntro
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_CompanyIntro_C::ExecuteUbergraph_UI_CompanyIntro(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_CompanyIntro.UI_CompanyIntro_C.ExecuteUbergraph_UI_CompanyIntro");
		
		UUI_CompanyIntro_C_ExecuteUbergraph_UI_CompanyIntro_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UUI_CompanyIntro_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UUI_CompanyIntro_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass UI_CompanyIntro.UI_CompanyIntro_C");
		return ptr;
	}

}


