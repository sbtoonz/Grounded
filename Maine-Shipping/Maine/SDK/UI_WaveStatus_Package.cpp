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
	 * 		Name   -> Function UI_WaveStatus.UI_WaveStatus_C.UpdateWaveThreatIcon
	 * 		Flags  -> ()
	 */
	void UUI_WaveStatus_C::UpdateWaveThreatIcon()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_WaveStatus.UI_WaveStatus_C.UpdateWaveThreatIcon");
		
		UUI_WaveStatus_C_UpdateWaveThreatIcon_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_WaveStatus.UI_WaveStatus_C.UpdateStringVisibility
	 * 		Flags  -> ()
	 */
	void UUI_WaveStatus_C::UpdateStringVisibility()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_WaveStatus.UI_WaveStatus_C.UpdateStringVisibility");
		
		UUI_WaveStatus_C_UpdateStringVisibility_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_WaveStatus.UI_WaveStatus_C.UpdateString
	 * 		Flags  -> ()
	 */
	void UUI_WaveStatus_C::UpdateString()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_WaveStatus.UI_WaveStatus_C.UpdateString");
		
		UUI_WaveStatus_C_UpdateString_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_WaveStatus.UI_WaveStatus_C.OnBuildingFragileChanged
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsFragile                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class ABuilding*                                   ABuilding                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_WaveStatus_C::OnBuildingFragileChanged(bool IsFragile, class ABuilding* ABuilding)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_WaveStatus.UI_WaveStatus_C.OnBuildingFragileChanged");
		
		UUI_WaveStatus_C_OnBuildingFragileChanged_Params params {};
		params.IsFragile = IsFragile;
		params.ABuilding = ABuilding;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_WaveStatus.UI_WaveStatus_C.Construct
	 * 		Flags  -> ()
	 */
	void UUI_WaveStatus_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_WaveStatus.UI_WaveStatus_C.Construct");
		
		UUI_WaveStatus_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_WaveStatus.UI_WaveStatus_C.Tick
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	 * 		float                                              InDeltaTime                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_WaveStatus_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_WaveStatus.UI_WaveStatus_C.Tick");
		
		UUI_WaveStatus_C_Tick_Params params {};
		params.MyGeometry = MyGeometry;
		params.InDeltaTime = InDeltaTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_WaveStatus.UI_WaveStatus_C.OnWaveSpawned
	 * 		Flags  -> ()
	 */
	void UUI_WaveStatus_C::OnWaveSpawned()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_WaveStatus.UI_WaveStatus_C.OnWaveSpawned");
		
		UUI_WaveStatus_C_OnWaveSpawned_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_WaveStatus.UI_WaveStatus_C.OnWaveComplete
	 * 		Flags  -> ()
	 */
	void UUI_WaveStatus_C::OnWaveComplete()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_WaveStatus.UI_WaveStatus_C.OnWaveComplete");
		
		UUI_WaveStatus_C_OnWaveComplete_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_WaveStatus.UI_WaveStatus_C.ExecuteUbergraph_UI_WaveStatus
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_WaveStatus_C::ExecuteUbergraph_UI_WaveStatus(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_WaveStatus.UI_WaveStatus_C.ExecuteUbergraph_UI_WaveStatus");
		
		UUI_WaveStatus_C_ExecuteUbergraph_UI_WaveStatus_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UUI_WaveStatus_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UUI_WaveStatus_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass UI_WaveStatus.UI_WaveStatus_C");
		return ptr;
	}

}


