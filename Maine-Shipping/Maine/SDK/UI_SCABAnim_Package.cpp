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
	 * 		Name   -> Function UI_SCABAnim.UI_SCABAnim_C.SequenceEvent__ENTRYPOINTUI_SCABAnim_4
	 * 		Flags  -> ()
	 */
	void UUI_SCABAnim_C::SequenceEvent__ENTRYPOINTUI_SCABAnim_4()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_SCABAnim.UI_SCABAnim_C.SequenceEvent__ENTRYPOINTUI_SCABAnim_4");
		
		UUI_SCABAnim_C_SequenceEvent__ENTRYPOINTUI_SCABAnim_4_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_SCABAnim.UI_SCABAnim_C.SequenceEvent__ENTRYPOINTUI_SCABAnim_3
	 * 		Flags  -> ()
	 */
	void UUI_SCABAnim_C::SequenceEvent__ENTRYPOINTUI_SCABAnim_3()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_SCABAnim.UI_SCABAnim_C.SequenceEvent__ENTRYPOINTUI_SCABAnim_3");
		
		UUI_SCABAnim_C_SequenceEvent__ENTRYPOINTUI_SCABAnim_3_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_SCABAnim.UI_SCABAnim_C.SequenceEvent__ENTRYPOINTUI_SCABAnim_2
	 * 		Flags  -> ()
	 */
	void UUI_SCABAnim_C::SequenceEvent__ENTRYPOINTUI_SCABAnim_2()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_SCABAnim.UI_SCABAnim_C.SequenceEvent__ENTRYPOINTUI_SCABAnim_2");
		
		UUI_SCABAnim_C_SequenceEvent__ENTRYPOINTUI_SCABAnim_2_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_SCABAnim.UI_SCABAnim_C.SequenceEvent__ENTRYPOINTUI_SCABAnim_1
	 * 		Flags  -> ()
	 */
	void UUI_SCABAnim_C::SequenceEvent__ENTRYPOINTUI_SCABAnim_1()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_SCABAnim.UI_SCABAnim_C.SequenceEvent__ENTRYPOINTUI_SCABAnim_1");
		
		UUI_SCABAnim_C_SequenceEvent__ENTRYPOINTUI_SCABAnim_1_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_SCABAnim.UI_SCABAnim_C.SFX_AnimationCall_01
	 * 		Flags  -> ()
	 */
	void UUI_SCABAnim_C::SFX_AnimationCall_01()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_SCABAnim.UI_SCABAnim_C.SFX_AnimationCall_01");
		
		UUI_SCABAnim_C_SFX_AnimationCall_01_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_SCABAnim.UI_SCABAnim_C.SFX_AnimationCall_02
	 * 		Flags  -> ()
	 */
	void UUI_SCABAnim_C::SFX_AnimationCall_02()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_SCABAnim.UI_SCABAnim_C.SFX_AnimationCall_02");
		
		UUI_SCABAnim_C_SFX_AnimationCall_02_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_SCABAnim.UI_SCABAnim_C.ExecuteUbergraph_UI_SCABAnim
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_SCABAnim_C::ExecuteUbergraph_UI_SCABAnim(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_SCABAnim.UI_SCABAnim_C.ExecuteUbergraph_UI_SCABAnim");
		
		UUI_SCABAnim_C_ExecuteUbergraph_UI_SCABAnim_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UUI_SCABAnim_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UUI_SCABAnim_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass UI_SCABAnim.UI_SCABAnim_C");
		return ptr;
	}

}


