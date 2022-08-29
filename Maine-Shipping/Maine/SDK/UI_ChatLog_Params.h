#pragma once

/**
 * Name: Maine
 * Version: Shipping
 */

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{
	// --------------------------------------------------
	// # Structs
	// --------------------------------------------------
	/**
	 * Function UI_ChatLog.UI_ChatLog_C.DequeueChatMessage
	 */
	struct UUI_ChatLog_C_DequeueChatMessage_Params
	{
	public:
		bool                                                       PostToScreen;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_2Z7J[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function UI_ChatLog.UI_ChatLog_C.CloneChat
	 */
	struct UUI_ChatLog_C_CloneChat_Params
	{
	public:
		class UUI_ChatLog_C*                                       OriginalChat;                                            // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_ChatLog.UI_ChatLog_C.SetLargeFont
	 */
	struct UUI_ChatLog_C_SetLargeFont_Params
	{	};

	/**
	 * Function UI_ChatLog.UI_ChatLog_C.IsChatBoxOpen
	 */
	struct UUI_ChatLog_C_IsChatBoxOpen_Params
	{
	public:
		bool                                                       IsOpen;                                                  // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_ChatLog.UI_ChatLog_C.CloseChatBox
	 */
	struct UUI_ChatLog_C_CloseChatBox_Params
	{	};

	/**
	 * Function UI_ChatLog.UI_ChatLog_C.OpenChatBox
	 */
	struct UUI_ChatLog_C_OpenChatBox_Params
	{	};

	/**
	 * Function UI_ChatLog.UI_ChatLog_C.DetermineChatVisibility
	 */
	struct UUI_ChatLog_C_DetermineChatVisibility_Params
	{	};

	/**
	 * Function UI_ChatLog.UI_ChatLog_C.HandleChatWindowUnfocused
	 */
	struct UUI_ChatLog_C_HandleChatWindowUnfocused_Params
	{	};

	/**
	 * Function UI_ChatLog.UI_ChatLog_C.CreateNewChatMessage
	 */
	struct UUI_ChatLog_C_CreateNewChatMessage_Params
	{
	public:
		class UUI_Notification_C*                                  NewNotification;                                         // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_ChatLog.UI_ChatLog_C.AddNewChatMessage
	 */
	struct UUI_ChatLog_C_AddNewChatMessage_Params
	{
	public:
		struct FChatBoxMessage                                     Message;                                                 // 0x0000(0x0020)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function UI_ChatLog.UI_ChatLog_C.OnFailure_4ADA32C146882D93FE7C76BC0E48D1D6
	 */
	struct UUI_ChatLog_C_OnFailure_4ADA32C146882D93FE7C76BC0E48D1D6_Params
	{	};

	/**
	 * Function UI_ChatLog.UI_ChatLog_C.OnSuccess_4ADA32C146882D93FE7C76BC0E48D1D6
	 */
	struct UUI_ChatLog_C_OnSuccess_4ADA32C146882D93FE7C76BC0E48D1D6_Params
	{	};

	/**
	 * Function UI_ChatLog.UI_ChatLog_C.Construct
	 */
	struct UUI_ChatLog_C_Construct_Params
	{	};

	/**
	 * Function UI_ChatLog.UI_ChatLog_C.BndEvt__ChatBox_K2Node_ComponentBoundEvent_0_OnEditableTextBoxCommittedEvent__DelegateSignature
	 */
	struct UUI_ChatLog_C_BndEvt__ChatBox_K2Node_ComponentBoundEvent_0_OnEditableTextBoxCommittedEvent__DelegateSignature_Params
	{
	public:
		class FText                                                Text;                                                    // 0x0000(0x0018)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		ETextCommit                                                CommitMethod;                                            // 0x0018(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_ChatLog.UI_ChatLog_C.HandleChatMessageReceived
	 */
	struct UUI_ChatLog_C_HandleChatMessageReceived_Params
	{
	public:
		struct FChatBoxMessage                                     Message;                                                 // 0x0000(0x0020)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function UI_ChatLog.UI_ChatLog_C.ScrollWidgetIntoView
	 */
	struct UUI_ChatLog_C_ScrollWidgetIntoView_Params
	{
	public:
		class UWidget*                                             Widget;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_ChatLog.UI_ChatLog_C.OnGlobalColorChange
	 */
	struct UUI_ChatLog_C_OnGlobalColorChange_Params
	{	};

	/**
	 * Function UI_ChatLog.UI_ChatLog_C.Event On Large Text
	 */
	struct UUI_ChatLog_C_Event_On_Large_Text_Params
	{
	public:
		bool                                                       FontSize;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_ChatLog.UI_ChatLog_C.Destruct
	 */
	struct UUI_ChatLog_C_Destruct_Params
	{	};

	/**
	 * Function UI_ChatLog.UI_ChatLog_C.ValidateAndPostNextMessage
	 */
	struct UUI_ChatLog_C_ValidateAndPostNextMessage_Params
	{	};

	/**
	 * Function UI_ChatLog.UI_ChatLog_C.HandleMessage
	 */
	struct UUI_ChatLog_C_HandleMessage_Params
	{
	public:
		bool                                                       PostToUI;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_ChatLog.UI_ChatLog_C.ManualOnTextCommited
	 */
	struct UUI_ChatLog_C_ManualOnTextCommited_Params
	{
	public:
		class FText                                                Text;                                                    // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function UI_ChatLog.UI_ChatLog_C.ExecuteUbergraph_UI_ChatLog
	 */
	struct UUI_ChatLog_C_ExecuteUbergraph_UI_ChatLog_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
