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
	 * 		Name   -> Function UI_EnemyHealth.UI_EnemyHealth_C.ShouldShowHealthBar
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class ASurvivalCharacter*                          SurvivalCharacter                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               Show                                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_EnemyHealth_C::ShouldShowHealthBar(class ASurvivalCharacter* SurvivalCharacter, bool* Show)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_EnemyHealth.UI_EnemyHealth_C.ShouldShowHealthBar");
		
		UUI_EnemyHealth_C_ShouldShowHealthBar_Params params {};
		params.SurvivalCharacter = SurvivalCharacter;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Show != nullptr)
			*Show = params.Show;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_EnemyHealth.UI_EnemyHealth_C.IsBoss
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsBoss                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_EnemyHealth_C::IsBoss(bool* IsBoss)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_EnemyHealth.UI_EnemyHealth_C.IsBoss");
		
		UUI_EnemyHealth_C_IsBoss_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (IsBoss != nullptr)
			*IsBoss = params.IsBoss;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_EnemyHealth.UI_EnemyHealth_C.ClearPips
	 * 		Flags  -> ()
	 */
	void UUI_EnemyHealth_C::ClearPips()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_EnemyHealth.UI_EnemyHealth_C.ClearPips");
		
		UUI_EnemyHealth_C_ClearPips_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_EnemyHealth.UI_EnemyHealth_C.GetColor
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FLinearColor                                Color                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_EnemyHealth_C::GetColor(struct FLinearColor* Color)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_EnemyHealth.UI_EnemyHealth_C.GetColor");
		
		UUI_EnemyHealth_C_GetColor_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Color != nullptr)
			*Color = params.Color;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_EnemyHealth.UI_EnemyHealth_C.GetWidth
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              Width                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_EnemyHealth_C::GetWidth(float* Width)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_EnemyHealth.UI_EnemyHealth_C.GetWidth");
		
		UUI_EnemyHealth_C_GetWidth_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Width != nullptr)
			*Width = params.Width;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_EnemyHealth.UI_EnemyHealth_C.UpdateColor
	 * 		Flags  -> ()
	 */
	void UUI_EnemyHealth_C::UpdateColor()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_EnemyHealth.UI_EnemyHealth_C.UpdateColor");
		
		UUI_EnemyHealth_C_UpdateColor_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_EnemyHealth.UI_EnemyHealth_C.UpdatePips
	 * 		Flags  -> ()
	 */
	void UUI_EnemyHealth_C::UpdatePips()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_EnemyHealth.UI_EnemyHealth_C.UpdatePips");
		
		UUI_EnemyHealth_C_UpdatePips_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_EnemyHealth.UI_EnemyHealth_C.UpdateWidth
	 * 		Flags  -> ()
	 */
	void UUI_EnemyHealth_C::UpdateWidth()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_EnemyHealth.UI_EnemyHealth_C.UpdateWidth");
		
		UUI_EnemyHealth_C_UpdateWidth_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_EnemyHealth.UI_EnemyHealth_C.HideBar
	 * 		Flags  -> ()
	 */
	void UUI_EnemyHealth_C::HideBar()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_EnemyHealth.UI_EnemyHealth_C.HideBar");
		
		UUI_EnemyHealth_C_HideBar_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_EnemyHealth.UI_EnemyHealth_C.ShowBar
	 * 		Flags  -> ()
	 */
	void UUI_EnemyHealth_C::ShowBar()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_EnemyHealth.UI_EnemyHealth_C.ShowBar");
		
		UUI_EnemyHealth_C_ShowBar_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_EnemyHealth.UI_EnemyHealth_C.EvaluateVisibility
	 * 		Flags  -> ()
	 */
	void UUI_EnemyHealth_C::EvaluateVisibility()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_EnemyHealth.UI_EnemyHealth_C.EvaluateVisibility");
		
		UUI_EnemyHealth_C_EvaluateVisibility_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_EnemyHealth.UI_EnemyHealth_C.GetFillColor
	 * 		Flags  -> ()
	 */
	struct FLinearColor UUI_EnemyHealth_C::GetFillColor()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_EnemyHealth.UI_EnemyHealth_C.GetFillColor");
		
		UUI_EnemyHealth_C_GetFillColor_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_EnemyHealth.UI_EnemyHealth_C.Get_Name_ColorAndOpacity_1
	 * 		Flags  -> ()
	 */
	struct FSlateColor UUI_EnemyHealth_C::Get_Name_ColorAndOpacity_1()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_EnemyHealth.UI_EnemyHealth_C.Get_Name_ColorAndOpacity_1");
		
		UUI_EnemyHealth_C_Get_Name_ColorAndOpacity_1_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_EnemyHealth.UI_EnemyHealth_C.SetCharacter
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class ASurvivalCharacter*                          Character                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               TriggerFadeDelay                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_EnemyHealth_C::SetCharacter(class ASurvivalCharacter* Character, bool TriggerFadeDelay)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_EnemyHealth.UI_EnemyHealth_C.SetCharacter");
		
		UUI_EnemyHealth_C_SetCharacter_Params params {};
		params.Character = Character;
		params.TriggerFadeDelay = TriggerFadeDelay;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_EnemyHealth.UI_EnemyHealth_C.OnGlobalColorChange
	 * 		Flags  -> ()
	 */
	void UUI_EnemyHealth_C::OnGlobalColorChange()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_EnemyHealth.UI_EnemyHealth_C.OnGlobalColorChange");
		
		UUI_EnemyHealth_C_OnGlobalColorChange_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_EnemyHealth.UI_EnemyHealth_C.SetBuilding
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class ABuilding*                                   Building                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_EnemyHealth_C::SetBuilding(class ABuilding* Building)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_EnemyHealth.UI_EnemyHealth_C.SetBuilding");
		
		UUI_EnemyHealth_C_SetBuilding_Params params {};
		params.Building = Building;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_EnemyHealth.UI_EnemyHealth_C.Tick
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	 * 		float                                              InDeltaTime                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_EnemyHealth_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_EnemyHealth.UI_EnemyHealth_C.Tick");
		
		UUI_EnemyHealth_C_Tick_Params params {};
		params.MyGeometry = MyGeometry;
		params.InDeltaTime = InDeltaTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_EnemyHealth.UI_EnemyHealth_C.Construct
	 * 		Flags  -> ()
	 */
	void UUI_EnemyHealth_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_EnemyHealth.UI_EnemyHealth_C.Construct");
		
		UUI_EnemyHealth_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_EnemyHealth.UI_EnemyHealth_C.Reset
	 * 		Flags  -> ()
	 */
	void UUI_EnemyHealth_C::Reset()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_EnemyHealth.UI_EnemyHealth_C.Reset");
		
		UUI_EnemyHealth_C_Reset_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_EnemyHealth.UI_EnemyHealth_C.RefreshHealthWidthAndPips
	 * 		Flags  -> ()
	 */
	void UUI_EnemyHealth_C::RefreshHealthWidthAndPips()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_EnemyHealth.UI_EnemyHealth_C.RefreshHealthWidthAndPips");
		
		UUI_EnemyHealth_C_RefreshHealthWidthAndPips_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_EnemyHealth.UI_EnemyHealth_C.ExecuteUbergraph_UI_EnemyHealth
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_EnemyHealth_C::ExecuteUbergraph_UI_EnemyHealth(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_EnemyHealth.UI_EnemyHealth_C.ExecuteUbergraph_UI_EnemyHealth");
		
		UUI_EnemyHealth_C_ExecuteUbergraph_UI_EnemyHealth_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UUI_EnemyHealth_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UUI_EnemyHealth_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass UI_EnemyHealth.UI_EnemyHealth_C");
		return ptr;
	}

}


