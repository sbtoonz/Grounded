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
	 * 		Name   -> Function UI_PointOfInterestNotificationFriend.UI_PointOfInterestNotificationFriend_C.SequenceEvent__ENTRYPOINTUI_PointOfInterestNotificationFriend_1
	 * 		Flags  -> ()
	 */
	void UUI_PointOfInterestNotificationFriend_C::SequenceEvent__ENTRYPOINTUI_PointOfInterestNotificationFriend_1()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_PointOfInterestNotificationFriend.UI_PointOfInterestNotificationFriend_C.SequenceEvent__ENTRYPOINTUI_PointOfInterestNotificationFriend_1");
		
		UUI_PointOfInterestNotificationFriend_C_SequenceEvent__ENTRYPOINTUI_PointOfInterestNotificationFriend_1_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_PointOfInterestNotificationFriend.UI_PointOfInterestNotificationFriend_C.GetIcon
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     Image                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FSlateBrush                                 IconBrush                                                  (Parm, OutParm)
	 */
	void UUI_PointOfInterestNotificationFriend_C::GetIcon(class UObject** Image, struct FSlateBrush* IconBrush)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_PointOfInterestNotificationFriend.UI_PointOfInterestNotificationFriend_C.GetIcon");
		
		UUI_PointOfInterestNotificationFriend_C_GetIcon_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Image != nullptr)
			*Image = params.Image;
		if (IconBrush != nullptr)
			*IconBrush = params.IconBrush;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_PointOfInterestNotificationFriend.UI_PointOfInterestNotificationFriend_C.GetItemTextShadowColor
	 * 		Flags  -> ()
	 */
	struct FLinearColor UUI_PointOfInterestNotificationFriend_C::GetItemTextShadowColor()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_PointOfInterestNotificationFriend.UI_PointOfInterestNotificationFriend_C.GetItemTextShadowColor");
		
		UUI_PointOfInterestNotificationFriend_C_GetItemTextShadowColor_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_PointOfInterestNotificationFriend.UI_PointOfInterestNotificationFriend_C.GetNameBGColor
	 * 		Flags  -> ()
	 */
	struct FLinearColor UUI_PointOfInterestNotificationFriend_C::GetNameBGColor()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_PointOfInterestNotificationFriend.UI_PointOfInterestNotificationFriend_C.GetNameBGColor");
		
		UUI_PointOfInterestNotificationFriend_C_GetNameBGColor_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_PointOfInterestNotificationFriend.UI_PointOfInterestNotificationFriend_C.GetAttentionSpinColor
	 * 		Flags  -> ()
	 */
	struct FLinearColor UUI_PointOfInterestNotificationFriend_C::GetAttentionSpinColor()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_PointOfInterestNotificationFriend.UI_PointOfInterestNotificationFriend_C.GetAttentionSpinColor");
		
		UUI_PointOfInterestNotificationFriend_C_GetAttentionSpinColor_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_PointOfInterestNotificationFriend.UI_PointOfInterestNotificationFriend_C.GetTextColor
	 * 		Flags  -> ()
	 */
	struct FSlateColor UUI_PointOfInterestNotificationFriend_C::GetTextColor()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_PointOfInterestNotificationFriend.UI_PointOfInterestNotificationFriend_C.GetTextColor");
		
		UUI_PointOfInterestNotificationFriend_C_GetTextColor_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_PointOfInterestNotificationFriend.UI_PointOfInterestNotificationFriend_C.GetBGColor
	 * 		Flags  -> ()
	 */
	struct FLinearColor UUI_PointOfInterestNotificationFriend_C::GetBGColor()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_PointOfInterestNotificationFriend.UI_PointOfInterestNotificationFriend_C.GetBGColor");
		
		UUI_PointOfInterestNotificationFriend_C_GetBGColor_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_PointOfInterestNotificationFriend.UI_PointOfInterestNotificationFriend_C.SetData
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UPointOfInterestDataAsset*                   PointOfInterest                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class ASurvivalPlayerState*                        SurvivalPlayerState                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_PointOfInterestNotificationFriend_C::SetData(class UPointOfInterestDataAsset* PointOfInterest, class ASurvivalPlayerState* SurvivalPlayerState)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_PointOfInterestNotificationFriend.UI_PointOfInterestNotificationFriend_C.SetData");
		
		UUI_PointOfInterestNotificationFriend_C_SetData_Params params {};
		params.PointOfInterest = PointOfInterest;
		params.SurvivalPlayerState = SurvivalPlayerState;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_PointOfInterestNotificationFriend.UI_PointOfInterestNotificationFriend_C.OnLoaded_01F70C494080528415A5329E1CE9E8B6
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     Loaded                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_PointOfInterestNotificationFriend_C::OnLoaded_01F70C494080528415A5329E1CE9E8B6(class UObject* Loaded)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_PointOfInterestNotificationFriend.UI_PointOfInterestNotificationFriend_C.OnLoaded_01F70C494080528415A5329E1CE9E8B6");
		
		UUI_PointOfInterestNotificationFriend_C_OnLoaded_01F70C494080528415A5329E1CE9E8B6_Params params {};
		params.Loaded = Loaded;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_PointOfInterestNotificationFriend.UI_PointOfInterestNotificationFriend_C.SequenceEvent_1
	 * 		Flags  -> ()
	 */
	void UUI_PointOfInterestNotificationFriend_C::SequenceEvent_1()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_PointOfInterestNotificationFriend.UI_PointOfInterestNotificationFriend_C.SequenceEvent_1");
		
		UUI_PointOfInterestNotificationFriend_C_SequenceEvent_1_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_PointOfInterestNotificationFriend.UI_PointOfInterestNotificationFriend_C.SequenceEvent_2
	 * 		Flags  -> ()
	 */
	void UUI_PointOfInterestNotificationFriend_C::SequenceEvent_2()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_PointOfInterestNotificationFriend.UI_PointOfInterestNotificationFriend_C.SequenceEvent_2");
		
		UUI_PointOfInterestNotificationFriend_C_SequenceEvent_2_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_PointOfInterestNotificationFriend.UI_PointOfInterestNotificationFriend_C.PlayOutro
	 * 		Flags  -> ()
	 */
	void UUI_PointOfInterestNotificationFriend_C::PlayOutro()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_PointOfInterestNotificationFriend.UI_PointOfInterestNotificationFriend_C.PlayOutro");
		
		UUI_PointOfInterestNotificationFriend_C_PlayOutro_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_PointOfInterestNotificationFriend.UI_PointOfInterestNotificationFriend_C.PlayIntroduction
	 * 		Flags  -> ()
	 */
	void UUI_PointOfInterestNotificationFriend_C::PlayIntroduction()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_PointOfInterestNotificationFriend.UI_PointOfInterestNotificationFriend_C.PlayIntroduction");
		
		UUI_PointOfInterestNotificationFriend_C_PlayIntroduction_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_PointOfInterestNotificationFriend.UI_PointOfInterestNotificationFriend_C.OnGlobalColorChange
	 * 		Flags  -> ()
	 */
	void UUI_PointOfInterestNotificationFriend_C::OnGlobalColorChange()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_PointOfInterestNotificationFriend.UI_PointOfInterestNotificationFriend_C.OnGlobalColorChange");
		
		UUI_PointOfInterestNotificationFriend_C_OnGlobalColorChange_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_PointOfInterestNotificationFriend.UI_PointOfInterestNotificationFriend_C.ExecuteUbergraph_UI_PointOfInterestNotificationFriend
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_PointOfInterestNotificationFriend_C::ExecuteUbergraph_UI_PointOfInterestNotificationFriend(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_PointOfInterestNotificationFriend.UI_PointOfInterestNotificationFriend_C.ExecuteUbergraph_UI_PointOfInterestNotificationFriend");
		
		UUI_PointOfInterestNotificationFriend_C_ExecuteUbergraph_UI_PointOfInterestNotificationFriend_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UUI_PointOfInterestNotificationFriend_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UUI_PointOfInterestNotificationFriend_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass UI_PointOfInterestNotificationFriend.UI_PointOfInterestNotificationFriend_C");
		return ptr;
	}

}


