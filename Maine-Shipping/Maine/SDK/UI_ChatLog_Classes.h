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
	// # Classes
	// --------------------------------------------------
	/**
	 * WidgetBlueprintGeneratedClass UI_ChatLog.UI_ChatLog_C
	 * Size -> 0x011C (FullSize[0x0394] - InheritedSize[0x0278])
	 */
	class UUI_ChatLog_C : public UChatBoxWidget
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0278(0x0008) ZeroConstructor, Transient, DuplicateTransient, UObjectWrapper
		class UImage*                                              BG;                                                      // 0x0280(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UEditableTextBox*                                    ChatBox;                                                 // 0x0288(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UScrollBox*                                          FullChatScroll;                                          // 0x0290(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UUI_NotificationLog_C*                               TemporaryChatLog;                                        // 0x0298(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UUI_Notification_C*                                  UI_Notification;                                         // 0x02A0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		bool                                                       AlwaysShowFullChatBox;                                   // 0x02A8(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_PVWE[0x3];                                   // 0x02A9(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    MaxMessagesToStore;                                      // 0x02AC(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       ShowBGWhenShowingFullChatBox;                            // 0x02B0(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_93GK[0x7];                                   // 0x02B1(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              MessageToSend;                                           // 0x02B8(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash
		struct FLocString                                          TypeChat;                                                // 0x02C8(0x0010) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash
		TMap<class ASurvivalPlayerState*, bool>                    PlayerStatesAllowedChatWith;                             // 0x02D8(0x0050) Edit, BlueprintVisible, DisableEditOnTemplate, DisableEditOnInstance
		TArray<struct FChatBoxMessage>                             QueuedMessageBuffer;                                     // 0x0328(0x0010) Edit, BlueprintVisible, DisableEditOnInstance
		bool                                                       WaitingOnPermissionCheck;                                // 0x0338(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_PBGO[0x7];                                   // 0x0339(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TMap<class ASurvivalPlayerState*, float>                   PlayerStatesAllowedLastCheckTime;                        // 0x0340(0x0050) Edit, BlueprintVisible, DisableEditOnTemplate, DisableEditOnInstance
		float                                                      CacheTimeout;                                            // 0x0390(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void DequeueChatMessage(bool PostToScreen);
		void CloneChat(class UUI_ChatLog_C* OriginalChat);
		void SetLargeFont();
		void IsChatBoxOpen(bool* IsOpen);
		void CloseChatBox();
		void OpenChatBox();
		void DetermineChatVisibility();
		void HandleChatWindowUnfocused();
		void CreateNewChatMessage(class UUI_Notification_C** NewNotification);
		void AddNewChatMessage(const struct FChatBoxMessage& Message);
		void OnFailure_4ADA32C146882D93FE7C76BC0E48D1D6();
		void OnSuccess_4ADA32C146882D93FE7C76BC0E48D1D6();
		void Construct();
		void BndEvt__ChatBox_K2Node_ComponentBoundEvent_0_OnEditableTextBoxCommittedEvent__DelegateSignature(const class FText& Text, ETextCommit CommitMethod);
		void HandleChatMessageReceived(const struct FChatBoxMessage& Message);
		void ScrollWidgetIntoView(class UWidget* Widget);
		void OnGlobalColorChange();
		void Event_On_Large_Text(bool FontSize);
		void Destruct();
		void ValidateAndPostNextMessage();
		void HandleMessage(bool PostToUI);
		void ManualOnTextCommited(const class FText& Text);
		void ExecuteUbergraph_UI_ChatLog(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
