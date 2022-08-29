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
	 * 		Name   -> Function UI_MapResourceSurveyOverlay.UI_MapResourceSurveyOverlay_C.OnInitialized
	 * 		Flags  -> ()
	 */
	void UUI_MapResourceSurveyOverlay_C::OnInitialized()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_MapResourceSurveyOverlay.UI_MapResourceSurveyOverlay_C.OnInitialized");
		
		UUI_MapResourceSurveyOverlay_C_OnInitialized_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_MapResourceSurveyOverlay.UI_MapResourceSurveyOverlay_C.HandleRescan
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UResourceSurveyComponent*                    Sender                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_MapResourceSurveyOverlay_C::HandleRescan(class UResourceSurveyComponent* Sender)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_MapResourceSurveyOverlay.UI_MapResourceSurveyOverlay_C.HandleRescan");
		
		UUI_MapResourceSurveyOverlay_C_HandleRescan_Params params {};
		params.Sender = Sender;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_MapResourceSurveyOverlay.UI_MapResourceSurveyOverlay_C.Destruct
	 * 		Flags  -> ()
	 */
	void UUI_MapResourceSurveyOverlay_C::Destruct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_MapResourceSurveyOverlay.UI_MapResourceSurveyOverlay_C.Destruct");
		
		UUI_MapResourceSurveyOverlay_C_Destruct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_MapResourceSurveyOverlay.UI_MapResourceSurveyOverlay_C.Tick
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	 * 		float                                              InDeltaTime                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_MapResourceSurveyOverlay_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_MapResourceSurveyOverlay.UI_MapResourceSurveyOverlay_C.Tick");
		
		UUI_MapResourceSurveyOverlay_C_Tick_Params params {};
		params.MyGeometry = MyGeometry;
		params.InDeltaTime = InDeltaTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_MapResourceSurveyOverlay.UI_MapResourceSurveyOverlay_C.ExecuteUbergraph_UI_MapResourceSurveyOverlay
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_MapResourceSurveyOverlay_C::ExecuteUbergraph_UI_MapResourceSurveyOverlay(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_MapResourceSurveyOverlay.UI_MapResourceSurveyOverlay_C.ExecuteUbergraph_UI_MapResourceSurveyOverlay");
		
		UUI_MapResourceSurveyOverlay_C_ExecuteUbergraph_UI_MapResourceSurveyOverlay_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UUI_MapResourceSurveyOverlay_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UUI_MapResourceSurveyOverlay_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass UI_MapResourceSurveyOverlay.UI_MapResourceSurveyOverlay_C");
		return ptr;
	}

}


