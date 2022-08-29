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
	 * 		Name   -> Function UI_NotificationLog.UI_NotificationLog_C.AddStashNotification
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FDataTableRowHandle                         ItemRowHandle                                              (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	 * 		int32_t                                            Count                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_NotificationLog_C::AddStashNotification(const struct FDataTableRowHandle& ItemRowHandle, int32_t Count)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_NotificationLog.UI_NotificationLog_C.AddStashNotification");
		
		UUI_NotificationLog_C_AddStashNotification_Params params {};
		params.ItemRowHandle = ItemRowHandle;
		params.Count = Count;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_NotificationLog.UI_NotificationLog_C.RemoveTemporaryNotificationReference
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UUI_Notification_C*                          NotificationIn                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UUI_Notification_C*                          Notification                                               (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_NotificationLog_C::RemoveTemporaryNotificationReference(class UUI_Notification_C* NotificationIn, class UUI_Notification_C** Notification)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_NotificationLog.UI_NotificationLog_C.RemoveTemporaryNotificationReference");
		
		UUI_NotificationLog_C_RemoveTemporaryNotificationReference_Params params {};
		params.NotificationIn = NotificationIn;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Notification != nullptr)
			*Notification = params.Notification;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_NotificationLog.UI_NotificationLog_C.AddToggleNotification
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FText                                        Message                                                    (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		struct FColor                                      Color                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UTexture2D*                                  MessageIcon                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_NotificationLog_C::AddToggleNotification(const class FText& Message, const struct FColor& Color, class UTexture2D* MessageIcon)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_NotificationLog.UI_NotificationLog_C.AddToggleNotification");
		
		UUI_NotificationLog_C_AddToggleNotification_Params params {};
		params.Message = Message;
		params.Color = Color;
		params.MessageIcon = MessageIcon;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_NotificationLog.UI_NotificationLog_C.AddGenericNotification
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FText                                        Message                                                    (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		struct FColor                                      Color                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UTexture2D*                                  MessageIcon                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_NotificationLog_C::AddGenericNotification(const class FText& Message, const struct FColor& Color, class UTexture2D* MessageIcon)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_NotificationLog.UI_NotificationLog_C.AddGenericNotification");
		
		UUI_NotificationLog_C_AddGenericNotification_Params params {};
		params.Message = Message;
		params.Color = Color;
		params.MessageIcon = MessageIcon;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_NotificationLog.UI_NotificationLog_C.InsertNotification
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UUI_Notification_C*                          Notification                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_NotificationLog_C::InsertNotification(class UUI_Notification_C* Notification)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_NotificationLog.UI_NotificationLog_C.InsertNotification");
		
		UUI_NotificationLog_C_InsertNotification_Params params {};
		params.Notification = Notification;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_NotificationLog.UI_NotificationLog_C.FindMatchingPickupNotification
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FDataTableRowHandle                         Item                                                       (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	 * 		class UUI_Notification_C*                          Notification                                               (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            NotificationIndex                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_NotificationLog_C::FindMatchingPickupNotification(const struct FDataTableRowHandle& Item, class UUI_Notification_C** Notification, int32_t* NotificationIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_NotificationLog.UI_NotificationLog_C.FindMatchingPickupNotification");
		
		UUI_NotificationLog_C_FindMatchingPickupNotification_Params params {};
		params.Item = Item;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Notification != nullptr)
			*Notification = params.Notification;
		if (NotificationIndex != nullptr)
			*NotificationIndex = params.NotificationIndex;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_NotificationLog.UI_NotificationLog_C.AddPickupNotification
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FDataTableRowHandle                         Item                                                       (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	 * 		int32_t                                            Count                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_NotificationLog_C::AddPickupNotification(const struct FDataTableRowHandle& Item, int32_t Count)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_NotificationLog.UI_NotificationLog_C.AddPickupNotification");
		
		UUI_NotificationLog_C_AddPickupNotification_Params params {};
		params.Item = Item;
		params.Count = Count;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_NotificationLog.UI_NotificationLog_C.RemoveTemporaryNotification
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            Index                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UUI_Notification_C*                          Notification                                               (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_NotificationLog_C::RemoveTemporaryNotification(int32_t Index, class UUI_Notification_C** Notification)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_NotificationLog.UI_NotificationLog_C.RemoveTemporaryNotification");
		
		UUI_NotificationLog_C_RemoveTemporaryNotification_Params params {};
		params.Index = Index;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Notification != nullptr)
			*Notification = params.Notification;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_NotificationLog.UI_NotificationLog_C.CreateNewNotification
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Temp                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class UUI_Notification_C*                          NewNoticiation                                             (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_NotificationLog_C::CreateNewNotification(bool Temp, class UUI_Notification_C** NewNoticiation)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_NotificationLog.UI_NotificationLog_C.CreateNewNotification");
		
		UUI_NotificationLog_C_CreateNewNotification_Params params {};
		params.Temp = Temp;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (NewNoticiation != nullptr)
			*NewNoticiation = params.NewNoticiation;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_NotificationLog.UI_NotificationLog_C.Tick
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	 * 		float                                              InDeltaTime                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_NotificationLog_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_NotificationLog.UI_NotificationLog_C.Tick");
		
		UUI_NotificationLog_C_Tick_Params params {};
		params.MyGeometry = MyGeometry;
		params.InDeltaTime = InDeltaTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_NotificationLog.UI_NotificationLog_C.ExecuteUbergraph_UI_NotificationLog
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_NotificationLog_C::ExecuteUbergraph_UI_NotificationLog(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_NotificationLog.UI_NotificationLog_C.ExecuteUbergraph_UI_NotificationLog");
		
		UUI_NotificationLog_C_ExecuteUbergraph_UI_NotificationLog_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UUI_NotificationLog_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UUI_NotificationLog_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass UI_NotificationLog.UI_NotificationLog_C");
		return ptr;
	}

}


