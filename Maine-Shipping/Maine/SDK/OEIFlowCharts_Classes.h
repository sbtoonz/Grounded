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
	 * Class OEIFlowCharts.Speaker
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class USpeaker : public UInterface
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class OEIFlowCharts.ChatterAsset
	 * Size -> 0x0228 (FullSize[0x0258] - InheritedSize[0x0030])
	 */
	class UChatterAsset : public UDataAsset
	{
	public:
		struct FChatterBundle                                      ChatterBundle;                                           // 0x0030(0x0228) Edit, NativeAccessSpecifierPrivate

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class OEIFlowCharts.ChatterBundleSet
	 * Size -> 0x00F8 (FullSize[0x0128] - InheritedSize[0x0030])
	 */
	class UChatterBundleSet : public UDataAsset
	{
	public:
		int32_t                                                    Hash;                                                    // 0x0030(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_H06U[0x4];                                   // 0x0034(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FChatterBundle>                              ChatterBundles;                                          // 0x0038(0x0010) Edit, ZeroConstructor, NativeAccessSpecifierPrivate
		TArray<struct FChatterEvent>                               ChatterEvents;                                           // 0x0048(0x0010) Edit, ZeroConstructor, NativeAccessSpecifierPrivate
		TArray<struct FCooldownSet>                                CooldownSets;                                            // 0x0058(0x0010) Edit, ZeroConstructor, NativeAccessSpecifierPrivate
		TMap<class FString, struct FChatterVariantSet>             VariantSets;                                             // 0x0068(0x0050) Edit, NativeAccessSpecifierPrivate
		TArray<class FString>                                      VOAssetFolders;                                          // 0x00B8(0x0010) Edit, ZeroConstructor, NativeAccessSpecifierPrivate
		TArray<struct FSoftObjectPath>                             AudioAssets;                                             // 0x00C8(0x0010) Edit, ZeroConstructor, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_6QFL[0x50];                                  // 0x00D8(0x0050) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class OEIFlowCharts.ChatterManager
	 * Size -> 0x18B8 (FullSize[0x18E0] - InheritedSize[0x0028])
	 */
	class UChatterManager : public UObject
	{
	public:
		unsigned char                                              UnknownData_OJEB[0x158];                                 // 0x0028(0x0158) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TMap<class FString, class UChatterBundleSet*>              OverrideBundleSets;                                      // 0x0180(0x0050) Transient, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_PQ0J[0x1710];                                // 0x01D0(0x1710) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class OEIFlowCharts.ConversationAsset
	 * Size -> 0x0310 (FullSize[0x0340] - InheritedSize[0x0030])
	 */
	class UConversationAsset : public UDataAsset
	{
	public:
		struct FConversationBundle                                 ConversationBundle;                                      // 0x0030(0x0310) Edit, NativeAccessSpecifierPrivate

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class OEIFlowCharts.ConversationBundleSet
	 * Size -> 0x00D8 (FullSize[0x0108] - InheritedSize[0x0030])
	 */
	class UConversationBundleSet : public UDataAsset
	{
	public:
		int32_t                                                    Hash;                                                    // 0x0030(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_E6J8[0x4];                                   // 0x0034(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FConversationBundle>                         ConversationBundles;                                     // 0x0038(0x0010) Edit, ZeroConstructor, NativeAccessSpecifierPrivate
		TArray<struct FSpeakerBundle>                              SpeakerBundles;                                          // 0x0048(0x0010) Edit, ZeroConstructor, NativeAccessSpecifierPrivate
		TArray<struct FPlayerVoiceBundle>                          PlayerVoiceBundles;                                      // 0x0058(0x0010) Edit, ZeroConstructor, NativeAccessSpecifierPrivate
		unsigned char                                              PlayerSpeakerIDs[0x50];                                  // 0x0068(0x0050) UNKNOWN PROPERTY: SetProperty
		TMap<struct FGuid, class FString>                          ConversationNameLookup;                                  // 0x00B8(0x0050) Edit, NativeAccessSpecifierPrivate

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class OEIFlowCharts.ConversationConditionals
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UConversationConditionals : public UConditionalLibrary
	{
	public:
		bool IsSpeakerDead(const struct FGuid& Speaker);
		bool IsNodeCurrentCheckpoint(const struct FGuid& ConversationID, int32_t NodeId);
		bool IsInstanceDead(const struct FGuid& Instance);
		bool HasConversationNodeBeenVisited(const struct FGuid& ConversationID, int32_t NodeId);
		static UClass* StaticClass();
	};

	/**
	 * Class OEIFlowCharts.ConversationConditionalsBP
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UConversationConditionalsBP : public UBlueprintFunctionLibrary
	{
	public:
		bool IsSpeakerDead(const struct FGuid& Speaker, EBoolResult* OutResult);
		bool IsNodeCurrentCheckpoint(const struct FGuid& ConversationID, int32_t NodeId, EBoolResult* OutResult);
		bool IsInstanceDead(const struct FGuid& Instance, EBoolResult* OutResult);
		bool HasConversationNodeBeenVisited(const struct FGuid& ConversationID, int32_t NodeId, EBoolResult* OutResult);
		static UClass* StaticClass();
	};

	/**
	 * Class OEIFlowCharts.ConversationManager
	 * Size -> 0x07E8 (FullSize[0x0810] - InheritedSize[0x0028])
	 */
	class UConversationManager : public UObject
	{
	public:
		unsigned char                                              UnknownData_YQ6Q[0x598];                                 // 0x0028(0x0598) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FConversationNavigator>                      ConversationNavigatorPool;                               // 0x05C0(0x0010) ZeroConstructor, Transient, Protected, NativeAccessSpecifierProtected
		TMap<class FString, struct FConversationBundle>            OverrideBundles;                                         // 0x05D0(0x0050) Transient, Protected, NativeAccessSpecifierProtected
		TMap<class FString, struct FSpeakerBundle>                 OverrideSpeakers;                                        // 0x0620(0x0050) Transient, Protected, NativeAccessSpecifierProtected
		struct FConversationNavigator                              PeekNavigator;                                           // 0x0670(0x01A0) Transient, Protected, NativeAccessSpecifierProtected

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class OEIFlowCharts.ConversationScripts
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UConversationScripts : public UScriptLibrary
	{
	public:
		void SetConversationCheckpoint(const struct FGuid& ConversationID, int32_t CheckpointNodeID);
		void MarkConversationNodeAsRead(const struct FGuid& ConversationID, int32_t NodeId);
		void ClearConversationNodeAsRead(const struct FGuid& ConversationID, int32_t NodeId);
		void ClearConversationCheckpoint(const struct FGuid& ConversationID);
		static UClass* StaticClass();
	};

	/**
	 * Class OEIFlowCharts.OEIFlowChartLibrary
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UOEIFlowChartLibrary : public UBlueprintFunctionLibrary
	{
	public:
		struct FSpeakerReference MakeSpeakerReferenceWithAsset(class USpeakerAsset* Asset);
		struct FSpeakerReference MakeSpeakerReference(const struct FGuid& ID);
		struct FQuestReference MakeQuestReference(const struct FGuid& ID);
		struct FConversationReference MakeConversationReferenceWithAsset(class UConversationAsset* Asset);
		struct FConversationReference MakeConversationReference(const struct FGuid& ID);
		struct FChatterEventReference MakeChatterEventReference(const struct FGuid& ID);
		struct FGuid GetSpeakerID(const struct FSpeakerReference& Speaker);
		struct FGuid GetQuestID(const struct FQuestReference& Quest);
		struct FGuid GetConversationID(const struct FConversationReference& Conversation);
		struct FGuid GetChatterEventID(const struct FChatterEventReference& ChatterEvent);
		void ExecuteOnUpdateScript(const struct FConversationReference& Conversation, int32_t NodeId, const struct FGuid& ScriptID);
		static UClass* StaticClass();
	};

	/**
	 * Class OEIFlowCharts.OEIFlowChartsProjectSettings
	 * Size -> 0x0090 (FullSize[0x00C8] - InheritedSize[0x0038])
	 */
	class UOEIFlowChartsProjectSettings : public UDeveloperSettings
	{
	public:
		float                                                      ChatterEventQueueTime;                                   // 0x0038(0x0004) Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      ChatterEventWaitTime;                                    // 0x003C(0x0004) Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    ChatterEventQueueProcessLimit;                           // 0x0040(0x0004) Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      ChatterDebugTextOffset;                                  // 0x0044(0x0004) Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bUseIndividualConversationUAssets;                       // 0x0048(0x0001) Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bUseIndividualChatterUAssets;                            // 0x0049(0x0001) Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_OGWR[0x6];                                   // 0x004A(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		unsigned char                                              ConversationBundleSets[0x10];                            // 0x0050(0x0010) UNKNOWN PROPERTY: ArrayProperty
		unsigned char                                              QuestBundleSets[0x10];                                   // 0x0060(0x0010) UNKNOWN PROPERTY: ArrayProperty
		unsigned char                                              ChatterBundleSets[0x10];                                 // 0x0070(0x0010) UNKNOWN PROPERTY: ArrayProperty
		struct FSoftClassPath                                      ConversationManagerClassName;                            // 0x0080(0x0018) Edit, ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		struct FSoftClassPath                                      QuestManagerClassName;                                   // 0x0098(0x0018) Edit, ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		struct FSoftClassPath                                      ChatterManagerClassName;                                 // 0x00B0(0x0018) Edit, ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPrivate

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class OEIFlowCharts.QuestBundleSet
	 * Size -> 0x0018 (FullSize[0x0048] - InheritedSize[0x0030])
	 */
	class UQuestBundleSet : public UDataAsset
	{
	public:
		int32_t                                                    Hash;                                                    // 0x0030(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_CIVJ[0x4];                                   // 0x0034(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FQuestBundle>                                QuestBundles;                                            // 0x0038(0x0010) Edit, ZeroConstructor, NativeAccessSpecifierPrivate

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class OEIFlowCharts.QuestConditionals
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UQuestConditionals : public UConditionalLibrary
	{
	public:
		bool IsQuestStateVisited(const struct FGuid& QuestID, int32_t NodeId);
		bool IsQuestStateIrrelevant(const struct FGuid& QuestID, int32_t NodeId);
		bool IsQuestStateActive(const struct FGuid& QuestID, int32_t NodeId);
		bool IsQuestStarted(const struct FGuid& QuestID);
		bool IsQuestMentioned(const struct FGuid& QuestID);
		bool IsQuestEventTriggered(const struct FGuid& QuestID, int32_t QuestEventID);
		bool IsQuestEndStateTriggered(const struct FGuid& QuestID, int32_t EndStateID);
		bool IsQuestComplete(const struct FGuid& QuestID);
		bool IsQuestAddendumTriggered(const struct FGuid& QuestID, int32_t AddendumID);
		bool IsQuestActive(const struct FGuid& QuestID);
		bool HasQuestStateFailedOrIsIrrelevant(const struct FGuid& QuestID, int32_t NodeId);
		bool HasQuestStateFailed(const struct FGuid& QuestID, int32_t NodeId);
		bool HasQuestFailed(const struct FGuid& QuestID);
		static UClass* StaticClass();
	};

	/**
	 * Class OEIFlowCharts.QuestManager
	 * Size -> 0x0458 (FullSize[0x0480] - InheritedSize[0x0028])
	 */
	class UQuestManager : public UObject
	{
	public:
		unsigned char                                              UnknownData_FH3Y[0x408];                                 // 0x0028(0x0408) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TMap<class FString, class UQuestBundleSet*>                OverrideBundleSets;                                      // 0x0430(0x0050) Transient, Protected, NativeAccessSpecifierProtected

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class OEIFlowCharts.StartQuestEvent
	 * Size -> 0x0010 (FullSize[0x0038] - InheritedSize[0x0028])
	 */
	class UStartQuestEvent : public UScriptEvent
	{
	public:
		struct FQuestReference                                     Quest;                                                   // 0x0028(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class OEIFlowCharts.TriggerQuestAddendumEvent
	 * Size -> 0x0018 (FullSize[0x0040] - InheritedSize[0x0028])
	 */
	class UTriggerQuestAddendumEvent : public UScriptEvent
	{
	public:
		struct FQuestReference                                     Quest;                                                   // 0x0028(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    AddendumID;                                              // 0x0038(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_K8ZX[0x4];                                   // 0x003C(0x0004) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class OEIFlowCharts.AdvanceQuestEvent
	 * Size -> 0x0010 (FullSize[0x0038] - InheritedSize[0x0028])
	 */
	class UAdvanceQuestEvent : public UScriptEvent
	{
	public:
		struct FQuestReference                                     Quest;                                                   // 0x0028(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class OEIFlowCharts.QuestScripts
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UQuestScripts : public UScriptLibrary
	{
	public:
		void TriggerQuestAddendum(const struct FGuid& QuestID, int32_t AddendumID);
		void StartQuestWithAlternateDescription(const struct FGuid& QuestID, int32_t QuestDescriptionID);
		void StartQuest(const struct FGuid& QuestID);
		void SetQuestAlternateDescription(const struct FGuid& QuestID, int32_t QuestDescriptionID);
		void SetObjectiveAlternateDescription(const struct FGuid& QuestID, int32_t ObjectiveID, int32_t ObjectiveDescriptionID);
		void MentionQuest(const struct FGuid& QuestID);
		void DebugAdvanceQuest(const struct FGuid& QuestID);
		void AdvanceQuest(const struct FGuid& QuestID);
		static UClass* StaticClass();
	};

	/**
	 * Class OEIFlowCharts.SpeakerAsset
	 * Size -> 0x0040 (FullSize[0x0070] - InheritedSize[0x0030])
	 */
	class USpeakerAsset : public UDataAsset
	{
	public:
		class FString                                              Name;                                                    // 0x0030(0x0010) Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		struct FGuid                                               ID;                                                      // 0x0040(0x0010) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		int32_t                                                    Hash;                                                    // 0x0050(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_UL50[0x4];                                   // 0x0054(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UChatterAsset*                                       ChatterAsset;                                            // 0x0058(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		struct FGuid                                               ChatterID;                                               // 0x0060(0x0010) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class OEIFlowCharts.SpeakerInfoComponent
	 * Size -> 0x0030 (FullSize[0x00E0] - InheritedSize[0x00B0])
	 */
	class USpeakerInfoComponent : public UActorComponent
	{
	public:
		struct FSpeakerInfo                                        SpeakerInfo;                                             // 0x00B0(0x0030) Edit, NoDestructor, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class OEIFlowCharts.SpeakerRegistry
	 * Size -> 0x00A0 (FullSize[0x00C8] - InheritedSize[0x0028])
	 */
	class USpeakerRegistry : public UOEIWorldRuntimeSubsystem
	{
	public:
		unsigned char                                              UnknownData_FP5I[0xA0];                                  // 0x0028(0x00A0) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
