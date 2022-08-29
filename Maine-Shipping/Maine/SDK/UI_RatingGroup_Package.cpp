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
	 * 		Name   -> Function UI_RatingGroup.UI_RatingGroup_C.SetLocalizedText
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FLocString                                  Text                                                       (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_RatingGroup_C::SetLocalizedText(const struct FLocString& Text)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_RatingGroup.UI_RatingGroup_C.SetLocalizedText");
		
		UUI_RatingGroup_C_SetLocalizedText_Params params {};
		params.Text = Text;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_RatingGroup.UI_RatingGroup_C.SetPercentage
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              Percentage                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_RatingGroup_C::SetPercentage(float Percentage)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_RatingGroup.UI_RatingGroup_C.SetPercentage");
		
		UUI_RatingGroup_C_SetPercentage_Params params {};
		params.Percentage = Percentage;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_RatingGroup.UI_RatingGroup_C.PreConstruct
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_RatingGroup_C::PreConstruct(bool IsDesignTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_RatingGroup.UI_RatingGroup_C.PreConstruct");
		
		UUI_RatingGroup_C_PreConstruct_Params params {};
		params.IsDesignTime = IsDesignTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_RatingGroup.UI_RatingGroup_C.OnGlobalColorChange
	 * 		Flags  -> ()
	 */
	void UUI_RatingGroup_C::OnGlobalColorChange()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_RatingGroup.UI_RatingGroup_C.OnGlobalColorChange");
		
		UUI_RatingGroup_C_OnGlobalColorChange_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_RatingGroup.UI_RatingGroup_C.ExecuteUbergraph_UI_RatingGroup
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_RatingGroup_C::ExecuteUbergraph_UI_RatingGroup(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_RatingGroup.UI_RatingGroup_C.ExecuteUbergraph_UI_RatingGroup");
		
		UUI_RatingGroup_C_ExecuteUbergraph_UI_RatingGroup_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UUI_RatingGroup_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UUI_RatingGroup_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass UI_RatingGroup.UI_RatingGroup_C");
		return ptr;
	}

}


