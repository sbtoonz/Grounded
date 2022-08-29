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
	 * 		Name   -> Function UI_ChatLog.UI_ChatLog_C.DequeueChatMessage
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               PostToScreen                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_ChatLog_C::DequeueChatMessage(bool PostToScreen)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_ChatLog.UI_ChatLog_C.DequeueChatMessage");
		
		UUI_ChatLog_C_DequeueChatMessage_Params params {};
		params.PostToScreen = PostToScreen;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_ChatLog.UI_ChatLog_C.CloneChat
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UUI_ChatLog_C*                               OriginalChat                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_ChatLog_C::CloneChat(class UUI_ChatLog_C* OriginalChat)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_ChatLog.UI_ChatLog_C.CloneChat");
		
		UUI_ChatLog_C_CloneChat_Params params {};
		params.OriginalChat = OriginalChat;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_ChatLog.UI_ChatLog_C.SetLargeFont
	 * 		Flags  -> ()
	 */
	void UUI_ChatLog_C::SetLargeFont()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_ChatLog.UI_ChatLog_C.SetLargeFont");
		
		UUI_ChatLog_C_SetLargeFont_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_ChatLog.UI_ChatLog_C.IsChatBoxOpen
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsOpen                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_ChatLog_C::IsChatBoxOpen(bool* IsOpen)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_ChatLog.UI_ChatLog_C.IsChatBoxOpen");
		
		UUI_ChatLog_C_IsChatBoxOpen_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (IsOpen != nullptr)
			*IsOpen = params.IsOpen;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_ChatLog.UI_ChatLog_C.CloseChatBox
	 * 		Flags  -> ()
	 */
	void UUI_ChatLog_C::CloseChatBox()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_ChatLog.UI_ChatLog_C.CloseChatBox");
		
		UUI_ChatLog_C_CloseChatBox_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_ChatLog.UI_ChatLog_C.OpenChatBox
	 * 		Flags  -> ()
	 */
	void UUI_ChatLog_C::OpenChatBox()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_ChatLog.UI_ChatLog_C.OpenChatBox");
		
		UUI_ChatLog_C_OpenChatBox_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_ChatLog.UI_ChatLog_C.DetermineChatVisibility
	 * 		Flags  -> ()
	 */
	void UUI_ChatLog_C::DetermineChatVisibility()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_ChatLog.UI_ChatLog_C.DetermineChatVisibility");
		
		UUI_ChatLog_C_DetermineChatVisibility_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_ChatLog.UI_ChatLog_C.HandleChatWindowUnfocused
	 * 		Flags  -> ()
	 */
	void UUI_ChatLog_C::HandleChatWindowUnfocused()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_ChatLog.UI_ChatLog_C.HandleChatWindowUnfocused");
		
		UUI_ChatLog_C_HandleChatWindowUnfocused_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_ChatLog.UI_ChatLog_C.CreateNewChatMessage
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UUI_Notification_C*                          NewNotification                                            (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_ChatLog_C::CreateNewChatMessage(class UUI_Notification_C** NewNotification)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_ChatLog.UI_ChatLog_C.CreateNewChatMessage");
		
		UUI_ChatLog_C_CreateNewChatMessage_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (NewNotification != nullptr)
			*NewNotification = params.NewNotification;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_ChatLog.UI_ChatLog_C.AddNewChatMessage
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FChatBoxMessage                             Message                                                    (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UUI_ChatLog_C::AddNewChatMessage(const struct FChatBoxMessage& Message)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_ChatLog.UI_ChatLog_C.AddNewChatMessage");
		
		UUI_ChatLog_C_AddNewChatMessage_Params params {};
		params.Message = Message;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_ChatLog.UI_ChatLog_C.OnFailure_4ADA32C146882D93FE7C76BC0E48D1D6
	 * 		Flags  -> ()
	 */
	void UUI_ChatLog_C::OnFailure_4ADA32C146882D93FE7C76BC0E48D1D6()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_ChatLog.UI_ChatLog_C.OnFailure_4ADA32C146882D93FE7C76BC0E48D1D6");
		
		UUI_ChatLog_C_OnFailure_4ADA32C146882D93FE7C76BC0E48D1D6_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_ChatLog.UI_ChatLog_C.OnSuccess_4ADA32C146882D93FE7C76BC0E48D1D6
	 * 		Flags  -> ()
	 */
	void UUI_ChatLog_C::OnSuccess_4ADA32C146882D93FE7C76BC0E48D1D6()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_ChatLog.UI_ChatLog_C.OnSuccess_4ADA32C146882D93FE7C76BC0E48D1D6");
		
		UUI_ChatLog_C_OnSuccess_4ADA32C146882D93FE7C76BC0E48D1D6_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_ChatLog.UI_ChatLog_C.Construct
	 * 		Flags  -> ()
	 */
	void UUI_ChatLog_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_ChatLog.UI_ChatLog_C.Construct");
		
		UUI_ChatLog_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_ChatLog.UI_ChatLog_C.BndEvt__ChatBox_K2Node_ComponentBoundEvent_0_OnEditableTextBoxCommittedEvent__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FText                                        Text                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		ETextCommit                                        CommitMethod                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_ChatLog_C::BndEvt__ChatBox_K2Node_ComponentBoundEvent_0_OnEditableTextBoxCommittedEvent__DelegateSignature(const class FText& Text, ETextCommit CommitMethod)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_ChatLog.UI_ChatLog_C.BndEvt__ChatBox_K2Node_ComponentBoundEvent_0_OnEditableTextBoxCommittedEvent__DelegateSignature");
		
		UUI_ChatLog_C_BndEvt__ChatBox_K2Node_ComponentBoundEvent_0_OnEditableTextBoxCommittedEvent__DelegateSignature_Params params {};
		params.Text = Text;
		params.CommitMethod = CommitMethod;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_ChatLog.UI_ChatLog_C.HandleChatMessageReceived
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FChatBoxMessage                             Message                                                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	void UUI_ChatLog_C::HandleChatMessageReceived(const struct FChatBoxMessage& Message)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_ChatLog.UI_ChatLog_C.HandleChatMessageReceived");
		
		UUI_ChatLog_C_HandleChatMessageReceived_Params params {};
		params.Message = Message;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_ChatLog.UI_ChatLog_C.ScrollWidgetIntoView
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UWidget*                                     Widget                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_ChatLog_C::ScrollWidgetIntoView(class UWidget* Widget)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_ChatLog.UI_ChatLog_C.ScrollWidgetIntoView");
		
		UUI_ChatLog_C_ScrollWidgetIntoView_Params params {};
		params.Widget = Widget;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_ChatLog.UI_ChatLog_C.OnGlobalColorChange
	 * 		Flags  -> ()
	 */
	void UUI_ChatLog_C::OnGlobalColorChange()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_ChatLog.UI_ChatLog_C.OnGlobalColorChange");
		
		UUI_ChatLog_C_OnGlobalColorChange_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_ChatLog.UI_ChatLog_C.Event On Large Text
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               FontSize                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_ChatLog_C::Event_On_Large_Text(bool FontSize)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_ChatLog.UI_ChatLog_C.Event On Large Text");
		
		UUI_ChatLog_C_Event_On_Large_Text_Params params {};
		params.FontSize = FontSize;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_ChatLog.UI_ChatLog_C.Destruct
	 * 		Flags  -> ()
	 */
	void UUI_ChatLog_C::Destruct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_ChatLog.UI_ChatLog_C.Destruct");
		
		UUI_ChatLog_C_Destruct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_ChatLog.UI_ChatLog_C.ValidateAndPostNextMessage
	 * 		Flags  -> ()
	 */
	void UUI_ChatLog_C::ValidateAndPostNextMessage()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_ChatLog.UI_ChatLog_C.ValidateAndPostNextMessage");
		
		UUI_ChatLog_C_ValidateAndPostNextMessage_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_ChatLog.UI_ChatLog_C.HandleMessage
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               PostToUI                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_ChatLog_C::HandleMessage(bool PostToUI)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_ChatLog.UI_ChatLog_C.HandleMessage");
		
		UUI_ChatLog_C_HandleMessage_Params params {};
		params.PostToUI = PostToUI;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_ChatLog.UI_ChatLog_C.ManualOnTextCommited
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FText                                        Text                                                       (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UUI_ChatLog_C::ManualOnTextCommited(const class FText& Text)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_ChatLog.UI_ChatLog_C.ManualOnTextCommited");
		
		UUI_ChatLog_C_ManualOnTextCommited_Params params {};
		params.Text = Text;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_ChatLog.UI_ChatLog_C.ExecuteUbergraph_UI_ChatLog
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_ChatLog_C::ExecuteUbergraph_UI_ChatLog(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_ChatLog.UI_ChatLog_C.ExecuteUbergraph_UI_ChatLog");
		
		UUI_ChatLog_C_ExecuteUbergraph_UI_ChatLog_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UUI_ChatLog_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UUI_ChatLog_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass UI_ChatLog.UI_ChatLog_C");
		return ptr;
	}

}


