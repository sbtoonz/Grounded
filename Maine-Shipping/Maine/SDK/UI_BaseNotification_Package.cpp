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
	 * 		Name   -> Function UI_BaseNotification.UI_BaseNotification_C.GetIcon
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     Image                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FSlateBrush                                 IconBrush                                                  (Parm, OutParm)
	 */
	void UUI_BaseNotification_C::GetIcon(class UObject** Image, struct FSlateBrush* IconBrush)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_BaseNotification.UI_BaseNotification_C.GetIcon");
		
		UUI_BaseNotification_C_GetIcon_Params params {};
		
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
	 * 		Name   -> Function UI_BaseNotification.UI_BaseNotification_C.TryPlayOutro
	 * 		Flags  -> ()
	 */
	void UUI_BaseNotification_C::TryPlayOutro()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_BaseNotification.UI_BaseNotification_C.TryPlayOutro");
		
		UUI_BaseNotification_C_TryPlayOutro_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_BaseNotification.UI_BaseNotification_C.IsReadyForOutro
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsReady                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_BaseNotification_C::IsReadyForOutro(bool* IsReady)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_BaseNotification.UI_BaseNotification_C.IsReadyForOutro");
		
		UUI_BaseNotification_C_IsReadyForOutro_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (IsReady != nullptr)
			*IsReady = params.IsReady;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_BaseNotification.UI_BaseNotification_C.GetTitleTextForPlayer
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class APlayerState*                                Player                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FText                                        Title                                                      (Parm, OutParm)
	 */
	void UUI_BaseNotification_C::GetTitleTextForPlayer(class APlayerState* Player, class FText* Title)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_BaseNotification.UI_BaseNotification_C.GetTitleTextForPlayer");
		
		UUI_BaseNotification_C_GetTitleTextForPlayer_Params params {};
		params.Player = Player;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Title != nullptr)
			*Title = params.Title;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_BaseNotification.UI_BaseNotification_C.GetAssociatedItemRow
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FDataTableRowHandle                         RowHandle                                                  (Parm, OutParm, NoDestructor)
	 */
	void UUI_BaseNotification_C::GetAssociatedItemRow(struct FDataTableRowHandle* RowHandle)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_BaseNotification.UI_BaseNotification_C.GetAssociatedItemRow");
		
		UUI_BaseNotification_C_GetAssociatedItemRow_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (RowHandle != nullptr)
			*RowHandle = params.RowHandle;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_BaseNotification.UI_BaseNotification_C.PlayOutro
	 * 		Flags  -> ()
	 */
	void UUI_BaseNotification_C::PlayOutro()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_BaseNotification.UI_BaseNotification_C.PlayOutro");
		
		UUI_BaseNotification_C_PlayOutro_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_BaseNotification.UI_BaseNotification_C.HandleNotificationAnimEnd
	 * 		Flags  -> ()
	 */
	void UUI_BaseNotification_C::HandleNotificationAnimEnd()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_BaseNotification.UI_BaseNotification_C.HandleNotificationAnimEnd");
		
		UUI_BaseNotification_C_HandleNotificationAnimEnd_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_BaseNotification.UI_BaseNotification_C.PlayIntroduction
	 * 		Flags  -> ()
	 */
	void UUI_BaseNotification_C::PlayIntroduction()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_BaseNotification.UI_BaseNotification_C.PlayIntroduction");
		
		UUI_BaseNotification_C_PlayIntroduction_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UUI_BaseNotification_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UUI_BaseNotification_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass UI_BaseNotification.UI_BaseNotification_C");
		return ptr;
	}

}


