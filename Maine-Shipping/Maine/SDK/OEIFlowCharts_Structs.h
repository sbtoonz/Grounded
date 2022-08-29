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
	// # Enums
	// --------------------------------------------------
	/**
	 * Enum OEIFlowCharts.EFlowChartPlayerType
	 */
	enum class EFlowChartPlayerType : uint8_t
	{
		Conversation = 0,
		Quest        = 1,
		Chatter      = 2,
		MAX          = 3
	};

	/**
	 * Enum OEIFlowCharts.EGruntGroup
	 */
	enum class EGruntGroup : uint8_t
	{
		None     = 0,
		Attack   = 1,
		Death    = 2,
		HitReact = 3,
		Movement = 4,
		MAX      = 5
	};

	/**
	 * Enum OEIFlowCharts.EChatterQueuedAction
	 */
	enum class EChatterQueuedAction : uint8_t
	{
		Queue   = 0,
		Discard = 1,
		MAX     = 2
	};

	/**
	 * Enum OEIFlowCharts.EChatterInterruptionLevel
	 */
	enum class EChatterInterruptionLevel : uint8_t
	{
		All       = 0,
		EventType = 1,
		Set       = 2,
		Character = 3,
		MAX       = 4
	};

	/**
	 * Enum OEIFlowCharts.EChatterInterruptionType
	 */
	enum class EChatterInterruptionType : uint8_t
	{
		Interrupt          = 0,
		PlaySimultaneously = 1,
		MAX                = 2
	};

	/**
	 * Enum OEIFlowCharts.ECompletionStatus
	 */
	enum class ECompletionStatus : uint8_t
	{
		Invalid    = 0,
		NotStarted = 1,
		InProgress = 2,
		Completed  = 3,
		Failed     = 4,
		MAX        = 5
	};

	/**
	 * Enum OEIFlowCharts.EKillTargetType
	 */
	enum class EKillTargetType : uint8_t
	{
		Speaker  = 0,
		Instance = 1,
		MAX      = 2
	};

	/**
	 * Enum OEIFlowCharts.EQuestResult
	 */
	enum class EQuestResult : uint8_t
	{
		Success = 0,
		Failed  = 1,
		MAX     = 2
	};

	/**
	 * Enum OEIFlowCharts.EQuestState
	 */
	enum class EQuestState : uint8_t
	{
		Invalid    = 0,
		InProgress = 1,
		Succeeded  = 2,
		Failed     = 3,
		Mentioned  = 4,
		MAX        = 5
	};

	/**
	 * Enum OEIFlowCharts.EQuestType
	 */
	enum class EQuestType : uint8_t
	{
		MajorStoryQuest = 0,
		MajorSideQuest  = 1,
		Task            = 2,
		MinorStoryQuest = 3,
		MinorSideQuest  = 4,
		MajorFaction    = 5,
		MinorFaction    = 6,
		Companion       = 7,
		Count           = 8,
		MAX             = 9
	};

	/**
	 * Enum OEIFlowCharts.EQuestEventType
	 */
	enum class EQuestEventType : uint8_t
	{
		Talk           = 0,
		Kill           = 1,
		Location       = 2,
		AcquireItem    = 3,
		Interact       = 4,
		GlobalVariable = 5,
		Inspect        = 6,
		MAX            = 7
	};

	/**
	 * Enum OEIFlowCharts.EObjectiveUpdateDisplayType
	 */
	enum class EObjectiveUpdateDisplayType : uint8_t
	{
		None     = 0,
		Progress = 1,
		MAX      = 2
	};

	/**
	 * Enum OEIFlowCharts.EQuestionNodeDisplayType
	 */
	enum class EQuestionNodeDisplayType : uint8_t
	{
		ShowOnce   = 0,
		ShowAlways = 1,
		ShowNever  = 2,
		MAX        = 3
	};

	/**
	 * Enum OEIFlowCharts.EFlowChartNodeType
	 */
	enum class EFlowChartNodeType : uint8_t
	{
		Talk                           = 0,
		PlayerResponse                 = 1,
		Script                         = 2,
		Cinematic                      = 3,
		TriggerConversation            = 4,
		Resume                         = 5,
		CheckpointBranch               = 6,
		Chatter                        = 7,
		Bank                           = 8,
		Quest                          = 9,
		Objective                      = 10,
		EndState                       = 11,
		GlobalQuest                    = 12,
		BranchComplete                 = 13,
		QuestBranch                    = 14,
		ChatterEvent                   = 15,
		ChatterBranch                  = 16,
		SoundEffect                    = 17,
		TalkObjective                  = 18,
		GlobalVariableObjective        = 19,
		KillObjective                  = 20,
		AcquireItemObjective           = 21,
		BranchCompleteObjective        = 22,
		ResultSuccess                  = 23,
		ResultSuccessGlobalVariable    = 24,
		ResultFailedGlobalVariable     = 25,
		ResultFailedObjectiveBank      = 26,
		ResultFailedAcquireItem        = 27,
		ResultFailedKill               = 28,
		ResultFailedFactionChange      = 29,
		ResultFailedBranch             = 30,
		ObjectiveBank                  = 31,
		GlobalQuestEvent               = 32,
		GlobalQuestEventGlobalVariable = 33,
		GlobalQuestEventKill           = 34,
		GlobalQuestEventFactionChange  = 35,
		MAX                            = 36
	};

	/**
	 * Enum OEIFlowCharts.ENodeDisplayType
	 */
	enum class ENodeDisplayType : uint8_t
	{
		Hidden       = 0,
		Conversation = 1,
		Bark         = 2,
		Overlay      = 3,
		MAX          = 4
	};

	/**
	 * Enum OEIFlowCharts.ENodePlayType
	 */
	enum class ENodePlayType : uint8_t
	{
		Normal      = 0,
		Random      = 1,
		CycleLoop   = 2,
		CycleStop   = 3,
		CycleRandom = 4,
		MAX         = 5
	};

	/**
	 * Enum OEIFlowCharts.EConversationType
	 */
	enum class EConversationType : uint8_t
	{
		Conversation = 0,
		Chatter      = 1,
		Count        = 2,
		Invalid      = 3,
		MAX          = 4
	};

	/**
	 * Enum OEIFlowCharts.EBankNodePlayType
	 */
	enum class EBankNodePlayType : uint8_t
	{
		PlayFirst      = 0,
		PlayAll        = 1,
		PlayRandom     = 2,
		CycleRandom    = 3,
		VoicedResponse = 4,
		ObjectiveBank  = 5,
		MAX            = 6
	};

	/**
	 * Enum OEIFlowCharts.EPersistenceType
	 */
	enum class EPersistenceType : uint8_t
	{
		None                = 0,
		OnceEver            = 1,
		OncePerConversation = 2,
		MarkAsRead          = 3,
		MAX                 = 4
	};

	// --------------------------------------------------
	// # Structs
	// --------------------------------------------------
	/**
	 * ScriptStruct OEIFlowCharts.FlowChartNode
	 * Size -> 0x00C0
	 */
	struct FFlowChartNode
	{
	public:
		unsigned char                                              UnknownData_OU1K[0x8];                                   // 0x0000(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    NodeId;                                                  // 0x0008(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		int32_t                                                    ContainerNodeID;                                         // 0x000C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		EFlowChartNodeType                                         NodeType;                                                // 0x0010(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_N2OJ[0x7];                                   // 0x0011(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<int32_t>                                            LinkIndices;                                             // 0x0018(0x0010) Edit, ZeroConstructor, Protected, NativeAccessSpecifierProtected
		int32_t                                                    ConditionalIndex;                                        // 0x0028(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_JUML[0x4];                                   // 0x002C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FScriptCall>                                 OnEnterScripts;                                          // 0x0030(0x0010) Edit, ZeroConstructor, Protected, NativeAccessSpecifierProtected
		TArray<struct FScriptCall>                                 OnExitScripts;                                           // 0x0040(0x0010) Edit, ZeroConstructor, Protected, NativeAccessSpecifierProtected
		TArray<struct FTimelineScriptCall>                         OnUpdateScripts;                                         // 0x0050(0x0010) Edit, ZeroConstructor, Protected, NativeAccessSpecifierProtected
		TMap<class FName, class FString>                           ExtendedProperties;                                      // 0x0060(0x0050) Edit, Protected, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_Q1EZ[0x10];                                  // 0x00B0(0x0010) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct OEIFlowCharts.BankNode
	 * Size -> 0x0018 (FullSize[0x00D8] - InheritedSize[0x00C0])
	 */
	struct FBankNode : public FFlowChartNode
	{
	public:
		EBankNodePlayType                                          PlayType;                                                // 0x00C0(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		EPersistenceType                                           Persistence;                                             // 0x00C1(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_XMK9[0x6];                                   // 0x00C2(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<int32_t>                                            ChildNodeIDs;                                            // 0x00C8(0x0010) Edit, ZeroConstructor, NativeAccessSpecifierPrivate
	};

	/**
	 * ScriptStruct OEIFlowCharts.FlowChartBundle
	 * Size -> 0x0118
	 */
	struct FFlowChartBundle
	{
	public:
		unsigned char                                              UnknownData_HS9V[0x8];                                   // 0x0000(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              Name;                                                    // 0x0008(0x0010) Edit, ZeroConstructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		struct FGuid                                               ID;                                                      // 0x0018(0x0010) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class FName                                                StringTableName;                                         // 0x0028(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		TMap<class FName, class FString>                           ExtendedProperties;                                      // 0x0030(0x0050) Edit, Protected, NativeAccessSpecifierProtected
		TArray<struct FConditional>                                Conditionals;                                            // 0x0080(0x0010) Edit, ZeroConstructor, Protected, NativeAccessSpecifierProtected
		TArray<struct FBankNode>                                   BankNodes;                                               // 0x0090(0x0010) Edit, ZeroConstructor, Protected, NativeAccessSpecifierProtected
		TArray<class UObject*>                                     ReferencedItems;                                         // 0x00A0(0x0010) Edit, ZeroConstructor, EditConst, Protected, NativeAccessSpecifierProtected
		int32_t                                                    Hash;                                                    // 0x00B0(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_7W1R[0x64];                                  // 0x00B4(0x0064) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct OEIFlowCharts.FlowChartLink
	 * Size -> 0x0018
	 */
	struct FFlowChartLink
	{
	public:
		unsigned char                                              UnknownData_J5RN[0x8];                                   // 0x0000(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    FromNodeID;                                              // 0x0008(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		int32_t                                                    ToNodeID;                                                // 0x000C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		int32_t                                                    ConditionalIndex;                                        // 0x0010(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_TWK7[0x4];                                   // 0x0014(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct OEIFlowCharts.ChatterLink
	 * Size -> 0x0008 (FullSize[0x0020] - InheritedSize[0x0018])
	 */
	struct FChatterLink : public FFlowChartLink
	{
	public:
		int32_t                                                    RandomWeight;                                            // 0x0018(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_UTA5[0x4];                                   // 0x001C(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct OEIFlowCharts.DialogueNode
	 * Size -> 0x0010 (FullSize[0x00D0] - InheritedSize[0x00C0])
	 */
	struct FDialogueNode : public FFlowChartNode
	{
	public:
		bool                                                       bNotSkippable;                                           // 0x00C0(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       bIsQuestionNode;                                         // 0x00C1(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       bHideSpeaker;                                            // 0x00C2(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		ENodePlayType                                              PlayType;                                                // 0x00C3(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		EPersistenceType                                           Persistence;                                             // 0x00C4(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_3DS3[0x3];                                   // 0x00C5(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    NoPlayRandomWeight;                                      // 0x00C8(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		ENodeDisplayType                                           DisplayType;                                             // 0x00CC(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_M9MI[0x3];                                   // 0x00CD(0x0003) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct OEIFlowCharts.ChatterEventNode
	 * Size -> 0x0010 (FullSize[0x00E0] - InheritedSize[0x00D0])
	 */
	struct FChatterEventNode : public FDialogueNode
	{
	public:
		struct FGuid                                               EventId;                                                 // 0x00D0(0x0010) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
	};

	/**
	 * ScriptStruct OEIFlowCharts.ChatterNode
	 * Size -> 0x0038 (FullSize[0x0108] - InheritedSize[0x00D0])
	 */
	struct FChatterNode : public FDialogueNode
	{
	public:
		int32_t                                                    Param1;                                                  // 0x00D0(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		int32_t                                                    Param2;                                                  // 0x00D4(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		int32_t                                                    Param3;                                                  // 0x00D8(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		int32_t                                                    Param4;                                                  // 0x00DC(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class FName                                                AudioEventType;                                          // 0x00E0(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		TArray<struct FSoftObjectPath>                             AudioAssetPaths;                                         // 0x00E8(0x0010) Edit, ZeroConstructor, NativeAccessSpecifierPrivate
		TArray<struct FSoftObjectPath>                             AnimationAssetPaths;                                     // 0x00F8(0x0010) Edit, ZeroConstructor, NativeAccessSpecifierPrivate
	};

	/**
	 * ScriptStruct OEIFlowCharts.SoundEffectNode
	 * Size -> 0x0018 (FullSize[0x00E8] - InheritedSize[0x00D0])
	 */
	struct FSoundEffectNode : public FDialogueNode
	{
	public:
		class FString                                              AudioEvent;                                              // 0x00D0(0x0010) Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		float                                                      FadeOutDuration;                                         // 0x00E0(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_2S87[0x4];                                   // 0x00E4(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct OEIFlowCharts.ScriptNode
	 * Size -> 0x0008 (FullSize[0x00D8] - InheritedSize[0x00D0])
	 */
	struct FScriptNode : public FDialogueNode
	{
	public:
		bool                                                       bRequiresValidChildNode;                                 // 0x00D0(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_4XB6[0x7];                                   // 0x00D1(0x0007) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct OEIFlowCharts.TalkNode
	 * Size -> 0x0080 (FullSize[0x0150] - InheritedSize[0x00D0])
	 */
	struct FTalkNode : public FDialogueNode
	{
	public:
		struct FGuid                                               SpeakerID;                                               // 0x00D0(0x0010) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		struct FGuid                                               ListenerID;                                              // 0x00E0(0x0010) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class FString                                              EmotionType;                                             // 0x00F0(0x0010) Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		float                                                      EmotionStrength;                                         // 0x0100(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		float                                                      EmotionDelay;                                            // 0x0104(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class FString                                              ExternalVO;                                              // 0x0108(0x0010) Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class FName                                                AudioEventType;                                          // 0x0118(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		bool                                                       bHasGenericSpeaker;                                      // 0x0120(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		bool                                                       bHasVO;                                                  // 0x0121(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		bool                                                       bPersistEmotion;                                         // 0x0122(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		bool                                                       bIsCheckpoint;                                           // 0x0123(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		int32_t                                                    CheckpointBranchID;                                      // 0x0124(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		bool                                                       bMergeSequenceWithNextNode;                              // 0x0128(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_55XU[0x7];                                   // 0x0129(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FSoftObjectPath                                     SequencePath;                                            // 0x0130(0x0018) Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		int32_t                                                    TimelineHash;                                            // 0x0148(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_MDIM[0x4];                                   // 0x014C(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct OEIFlowCharts.ChatterBundle
	 * Size -> 0x0110 (FullSize[0x0228] - InheritedSize[0x0118])
	 */
	struct FChatterBundle : public FFlowChartBundle
	{
	public:
		TMap<int32_t, class FString>                               AudioLookup;                                             // 0x0118(0x0050) Edit, NativeAccessSpecifierPrivate
		TArray<class FName>                                        StringTableFilenames;                                    // 0x0168(0x0010) Edit, ZeroConstructor, NativeAccessSpecifierPrivate
		TArray<struct FChatterLink>                                ChatterLinks;                                            // 0x0178(0x0010) Edit, ZeroConstructor, NativeAccessSpecifierPrivate
		TArray<struct FChatterEventNode>                           ChatterEventNodes;                                       // 0x0188(0x0010) Edit, ZeroConstructor, NativeAccessSpecifierPrivate
		TArray<struct FChatterNode>                                ChatterNodes;                                            // 0x0198(0x0010) Edit, ZeroConstructor, NativeAccessSpecifierPrivate
		TArray<struct FSoundEffectNode>                            SoundEffectNodes;                                        // 0x01A8(0x0010) Edit, ZeroConstructor, NativeAccessSpecifierPrivate
		TArray<struct FScriptNode>                                 ScriptNodes;                                             // 0x01B8(0x0010) Edit, ZeroConstructor, NativeAccessSpecifierPrivate
		TArray<struct FTalkNode>                                   TalkNodes;                                               // 0x01C8(0x0010) Edit, ZeroConstructor, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_0TDL[0x50];                                  // 0x01D8(0x0050) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct OEIFlowCharts.ChatterEvent
	 * Size -> 0x0030
	 */
	struct FChatterEvent
	{
	public:
		struct FGuid                                               ID;                                                      // 0x0000(0x0010) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class FString                                              Name;                                                    // 0x0010(0x0010) Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		float                                                      Cooldown;                                                // 0x0020(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		EChatterInterruptionType                                   OnInterrupt;                                             // 0x0024(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		EChatterInterruptionLevel                                  InterruptionLevel;                                       // 0x0025(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		EChatterQueuedAction                                       OnQueued;                                                // 0x0026(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_1K9I[0x1];                                   // 0x0027(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      MaxWaitTime;                                             // 0x0028(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		EGruntGroup                                                GruntGroup;                                              // 0x002C(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_H9GN[0x3];                                   // 0x002D(0x0003) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct OEIFlowCharts.CooldownEvent
	 * Size -> 0x0020
	 */
	struct FCooldownEvent
	{
	public:
		struct FGuid                                               ChatterEventID;                                          // 0x0000(0x0010) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		float                                                      Cooldown;                                                // 0x0010(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		int32_t                                                    Priority;                                                // 0x0014(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		int32_t                                                    MaxSimultaneousVO;                                       // 0x0018(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		bool                                                       bPlayIfOffScreen;                                        // 0x001C(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_XDEG[0x3];                                   // 0x001D(0x0003) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct OEIFlowCharts.CooldownSet
	 * Size -> 0x0088
	 */
	struct FCooldownSet
	{
	public:
		struct FGuid                                               ID;                                                      // 0x0000(0x0010) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class FString                                              Name;                                                    // 0x0010(0x0010) Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		int32_t                                                    MaxSimultaneousVOInSet;                                  // 0x0020(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_3ZP5[0x4];                                   // 0x0024(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FCooldownEvent>                              CooldownEvents;                                          // 0x0028(0x0010) Edit, ZeroConstructor, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_A2CL[0x50];                                  // 0x0038(0x0050) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct OEIFlowCharts.ChatterVariantSet
	 * Size -> 0x0060
	 */
	struct FChatterVariantSet
	{
	public:
		class FString                                              LanguageCode;                                            // 0x0000(0x0010) Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		TMap<class FString, struct FIDSet>                         Variants;                                                // 0x0010(0x0050) Edit, NativeAccessSpecifierPrivate
	};

	/**
	 * ScriptStruct OEIFlowCharts.DialogueLink
	 * Size -> 0x0008 (FullSize[0x0020] - InheritedSize[0x0018])
	 */
	struct FDialogueLink : public FFlowChartLink
	{
	public:
		int32_t                                                    RandomWeight;                                            // 0x0018(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		bool                                                       bPlayQuestionNodeVO;                                     // 0x001C(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		EQuestionNodeDisplayType                                   QuestionNodeTextDisplay;                                 // 0x001D(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_ZTPS[0x2];                                   // 0x001E(0x0002) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct OEIFlowCharts.PlayerResponseNode
	 * Size -> 0x0000 (FullSize[0x00D0] - InheritedSize[0x00D0])
	 */
	struct FPlayerResponseNode : public FDialogueNode
	{	};

	/**
	 * ScriptStruct OEIFlowCharts.CinematicNode
	 * Size -> 0x0018 (FullSize[0x00E8] - InheritedSize[0x00D0])
	 */
	struct FCinematicNode : public FDialogueNode
	{
	public:
		struct FSoftObjectPath                                     SequencePath;                                            // 0x00D0(0x0018) Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
	};

	/**
	 * ScriptStruct OEIFlowCharts.ConversationReference
	 * Size -> 0x0018
	 */
	struct FConversationReference
	{
	public:
		struct FGuid                                               ID;                                                      // 0x0000(0x0010) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UConversationAsset*                                  ConversationAsset;                                       // 0x0010(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
	};

	/**
	 * ScriptStruct OEIFlowCharts.TriggerConversationNode
	 * Size -> 0x0020 (FullSize[0x00F0] - InheritedSize[0x00D0])
	 */
	struct FTriggerConversationNode : public FDialogueNode
	{
	public:
		struct FConversationReference                              Conversation;                                            // 0x00D0(0x0018) Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		int32_t                                                    StartNodeID;                                             // 0x00E8(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_O3BA[0x4];                                   // 0x00EC(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct OEIFlowCharts.ResumeNode
	 * Size -> 0x0000 (FullSize[0x00C0] - InheritedSize[0x00C0])
	 */
	struct FResumeNode : public FFlowChartNode
	{	};

	/**
	 * ScriptStruct OEIFlowCharts.CheckpointBranchNode
	 * Size -> 0x0000 (FullSize[0x00D8] - InheritedSize[0x00D8])
	 */
	struct FCheckpointBranchNode : public FScriptNode
	{	};

	/**
	 * ScriptStruct OEIFlowCharts.ConversationBundle
	 * Size -> 0x01F8 (FullSize[0x0310] - InheritedSize[0x0118])
	 */
	struct FConversationBundle : public FFlowChartBundle
	{
	public:
		EConversationType                                          ConversationType;                                        // 0x0118(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_X89L[0x7];                                   // 0x0119(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FSoftObjectPath                                     CinematicStageAsset;                                     // 0x0120(0x0018) Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		struct FGuid                                               CinematicStageInstance;                                  // 0x0138(0x0010) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		bool                                                       bHasCheckpoints;                                         // 0x0148(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_6SQN[0x3];                                   // 0x0149(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    ResumeNodeID;                                            // 0x014C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              SpeakerIDs[0x50];                                        // 0x0150(0x0050) UNKNOWN PROPERTY: SetProperty
		unsigned char                                              RequiredSpeakerIDs[0x50];                                // 0x01A0(0x0050) UNKNOWN PROPERTY: SetProperty
		TArray<struct FDialogueLink>                               DialogueLinks;                                           // 0x01F0(0x0010) Edit, ZeroConstructor, NativeAccessSpecifierPrivate
		TArray<struct FTalkNode>                                   TalkNodes;                                               // 0x0200(0x0010) Edit, ZeroConstructor, NativeAccessSpecifierPrivate
		TArray<struct FPlayerResponseNode>                         PlayerResponseNodes;                                     // 0x0210(0x0010) Edit, ZeroConstructor, NativeAccessSpecifierPrivate
		TArray<struct FScriptNode>                                 ScriptNodes;                                             // 0x0220(0x0010) Edit, ZeroConstructor, NativeAccessSpecifierPrivate
		TArray<struct FCinematicNode>                              CinematicNodes;                                          // 0x0230(0x0010) Edit, ZeroConstructor, NativeAccessSpecifierPrivate
		TArray<struct FTriggerConversationNode>                    TriggerConversationNodes;                                // 0x0240(0x0010) Edit, ZeroConstructor, NativeAccessSpecifierPrivate
		TArray<struct FResumeNode>                                 ResumeNodes;                                             // 0x0250(0x0010) Edit, ZeroConstructor, NativeAccessSpecifierPrivate
		TArray<struct FCheckpointBranchNode>                       CheckpointBranchNodes;                                   // 0x0260(0x0010) Edit, ZeroConstructor, NativeAccessSpecifierPrivate
		TMap<struct FGuid, struct FGuidSet>                        GenericVoicePrintLookup;                                 // 0x0270(0x0050) Edit, NativeAccessSpecifierPrivate
		unsigned char                                              GenericSpeakerIDs[0x50];                                 // 0x02C0(0x0050) UNKNOWN PROPERTY: SetProperty
	};

	/**
	 * ScriptStruct OEIFlowCharts.SpeakerBundle
	 * Size -> 0x0068
	 */
	struct FSpeakerBundle
	{
	public:
		struct FGuid                                               ID;                                                      // 0x0000(0x0010) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class FString                                              ObjectName;                                              // 0x0010(0x0010) Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		struct FLocString                                          DisplayName;                                             // 0x0020(0x0010) Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		EOEIGender                                                 Gender;                                                  // 0x0030(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		bool                                                       bIsUniqueNPC;                                            // 0x0031(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_ECRG[0x6];                                   // 0x0032(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              VOPrefix;                                                // 0x0038(0x0010) Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		struct FGuid                                               VoicePrintID;                                            // 0x0048(0x0010) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		struct FGuid                                               ChatterFileID;                                           // 0x0058(0x0010) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
	};

	/**
	 * ScriptStruct OEIFlowCharts.PlayerVoiceBundle
	 * Size -> 0x0030
	 */
	struct FPlayerVoiceBundle
	{
	public:
		struct FGuid                                               ID;                                                      // 0x0000(0x0010) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class FString                                              VOPrefix;                                                // 0x0010(0x0010) Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		struct FLocString                                          DisplayName;                                             // 0x0020(0x0010) Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
	};

	/**
	 * ScriptStruct OEIFlowCharts.FlowChartNavigator
	 * Size -> 0x0048
	 */
	struct FFlowChartNavigator
	{
	public:
		unsigned char                                              UnknownData_1IJ9[0x48];                                  // 0x0000(0x0048) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct OEIFlowCharts.ConversationNavigator
	 * Size -> 0x0158 (FullSize[0x01A0] - InheritedSize[0x0048])
	 */
	struct FConversationNavigator : public FFlowChartNavigator
	{
	public:
		class UConversationAsset*                                  ConversationAsset;                                       // 0x0048(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_72SK[0x150];                                 // 0x0050(0x0150) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct OEIFlowCharts.QuestLink
	 * Size -> 0x0000 (FullSize[0x0018] - InheritedSize[0x0018])
	 */
	struct FQuestLink : public FFlowChartLink
	{	};

	/**
	 * ScriptStruct OEIFlowCharts.ObjectiveBankNode
	 * Size -> 0x0008 (FullSize[0x00E0] - InheritedSize[0x00D8])
	 */
	struct FObjectiveBankNode : public FBankNode
	{
	public:
		bool                                                       bAllObjectivesMustSucceed;                               // 0x00D8(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_U587[0x3];                                   // 0x00D9(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    TotalObjectivesNeededToSucceed;                          // 0x00DC(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
	};

	/**
	 * ScriptStruct OEIFlowCharts.QuestEventNode
	 * Size -> 0x0000 (FullSize[0x00C0] - InheritedSize[0x00C0])
	 */
	struct FQuestEventNode : public FFlowChartNode
	{	};

	/**
	 * ScriptStruct OEIFlowCharts.ObjectiveWaypoint
	 * Size -> 0x0028
	 */
	struct FObjectiveWaypoint
	{
	public:
		unsigned char                                              UnknownData_5YWI[0x8];                                   // 0x0000(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FGuid                                               GameObjectID;                                            // 0x0008(0x0010) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		int32_t                                                    DisplayOverrideID;                                       // 0x0018(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		bool                                                       bOverridesPreviousWaypoint;                              // 0x001C(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_EPVL[0x3];                                   // 0x001D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    ConditionalIndex;                                        // 0x0020(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_FT5N[0x4];                                   // 0x0024(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct OEIFlowCharts.ObjectiveNode
	 * Size -> 0x0040 (FullSize[0x0100] - InheritedSize[0x00C0])
	 */
	struct FObjectiveNode : public FQuestEventNode
	{
	public:
		TArray<int32_t>                                            AddendumIDs;                                             // 0x00C0(0x0010) Edit, ZeroConstructor, NativeAccessSpecifierPrivate
		TArray<int32_t>                                            AlternateDescriptionIDs;                                 // 0x00D0(0x0010) Edit, ZeroConstructor, NativeAccessSpecifierPrivate
		TArray<struct FObjectiveWaypoint>                          Waypoints;                                               // 0x00E0(0x0010) Edit, ZeroConstructor, NativeAccessSpecifierPrivate
		int32_t                                                    ExperienceWeight;                                        // 0x00F0(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		EObjectiveUpdateDisplayType                                DisplayType;                                             // 0x00F4(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_1Y14[0x3];                                   // 0x00F5(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    SortGroup;                                               // 0x00F8(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_JU1I[0x4];                                   // 0x00FC(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct OEIFlowCharts.TalkObjectiveNode
	 * Size -> 0x0040 (FullSize[0x0140] - InheritedSize[0x0100])
	 */
	struct FTalkObjectiveNode : public FObjectiveNode
	{
	public:
		struct FGuid                                               ConversationID;                                          // 0x0100(0x0010) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		int32_t                                                    ConversationNodeID;                                      // 0x0110(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		struct FGlobalVariableConditional                          ChildFailedConditional;                                  // 0x0114(0x002C) Edit, NoDestructor, NativeAccessSpecifierPrivate
	};

	/**
	 * ScriptStruct OEIFlowCharts.GlobalVariableObjectiveNode
	 * Size -> 0x0058 (FullSize[0x0158] - InheritedSize[0x0100])
	 */
	struct FGlobalVariableObjectiveNode : public FObjectiveNode
	{
	public:
		struct FGlobalVariableConditional                          Conditional;                                             // 0x0100(0x002C) Edit, NoDestructor, NativeAccessSpecifierPrivate
		struct FGlobalVariableConditional                          ChildFailedConditional;                                  // 0x012C(0x002C) Edit, NoDestructor, NativeAccessSpecifierPrivate
	};

	/**
	 * ScriptStruct OEIFlowCharts.KillObjectiveNode
	 * Size -> 0x0040 (FullSize[0x0140] - InheritedSize[0x0100])
	 */
	struct FKillObjectiveNode : public FObjectiveNode
	{
	public:
		struct FGuid                                               TargetId;                                                // 0x0100(0x0010) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		EKillTargetType                                            TargetType;                                              // 0x0110(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_XD0Y[0x3];                                   // 0x0111(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FGlobalVariableConditional                          ChildFailedConditional;                                  // 0x0114(0x002C) Edit, NoDestructor, NativeAccessSpecifierPrivate
	};

	/**
	 * ScriptStruct OEIFlowCharts.AcquireItemObjectiveNode
	 * Size -> 0x0040 (FullSize[0x0140] - InheritedSize[0x0100])
	 */
	struct FAcquireItemObjectiveNode : public FObjectiveNode
	{
	public:
		class FString                                              ItemName;                                                // 0x0100(0x0010) Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		int32_t                                                    Count;                                                   // 0x0110(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		struct FGlobalVariableConditional                          ChildFailedConditional;                                  // 0x0114(0x002C) Edit, NoDestructor, NativeAccessSpecifierPrivate
	};

	/**
	 * ScriptStruct OEIFlowCharts.BranchCompleteObjectiveNode
	 * Size -> 0x0008 (FullSize[0x0108] - InheritedSize[0x0100])
	 */
	struct FBranchCompleteObjectiveNode : public FObjectiveNode
	{
	public:
		int32_t                                                    QuestBranchNodeID;                                       // 0x0100(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_1U02[0x4];                                   // 0x0104(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct OEIFlowCharts.BranchCompleteNode
	 * Size -> 0x0008 (FullSize[0x00C8] - InheritedSize[0x00C0])
	 */
	struct FBranchCompleteNode : public FFlowChartNode
	{
	public:
		bool                                                       bFailsObjective;                                         // 0x00C0(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_4LWA[0x3];                                   // 0x00C1(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    BranchRootNodeID;                                        // 0x00C4(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
	};

	/**
	 * ScriptStruct OEIFlowCharts.QuestBranchNode
	 * Size -> 0x0000 (FullSize[0x00C0] - InheritedSize[0x00C0])
	 */
	struct FQuestBranchNode : public FFlowChartNode
	{	};

	/**
	 * ScriptStruct OEIFlowCharts.EndStateNode
	 * Size -> 0x0008 (FullSize[0x00C8] - InheritedSize[0x00C0])
	 */
	struct FEndStateNode : public FFlowChartNode
	{
	public:
		bool                                                       bWillFailQuest;                                          // 0x00C0(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_U4S2[0x3];                                   // 0x00C1(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    EndStateID;                                              // 0x00C4(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
	};

	/**
	 * ScriptStruct OEIFlowCharts.GlobalQuestEventNode
	 * Size -> 0x0000 (FullSize[0x00C0] - InheritedSize[0x00C0])
	 */
	struct FGlobalQuestEventNode : public FQuestEventNode
	{	};

	/**
	 * ScriptStruct OEIFlowCharts.GlobalQuestEventGlobalVariableNode
	 * Size -> 0x0030 (FullSize[0x00F0] - InheritedSize[0x00C0])
	 */
	struct FGlobalQuestEventGlobalVariableNode : public FGlobalQuestEventNode
	{
	public:
		struct FGlobalVariableConditional                          Conditional;                                             // 0x00C0(0x002C) Edit, NoDestructor, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_GQHA[0x4];                                   // 0x00EC(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct OEIFlowCharts.GlobalQuestEventKillNode
	 * Size -> 0x0018 (FullSize[0x00D8] - InheritedSize[0x00C0])
	 */
	struct FGlobalQuestEventKillNode : public FGlobalQuestEventNode
	{
	public:
		struct FGuid                                               TargetId;                                                // 0x00C0(0x0010) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		EKillTargetType                                            TargetType;                                              // 0x00D0(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_BSHP[0x7];                                   // 0x00D1(0x0007) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct OEIFlowCharts.GlobalQuestEventFactionChangeNode
	 * Size -> 0x0018 (FullSize[0x00D8] - InheritedSize[0x00C0])
	 */
	struct FGlobalQuestEventFactionChangeNode : public FGlobalQuestEventNode
	{
	public:
		class FString                                              FactionClass;                                            // 0x00C0(0x0010) Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		int32_t                                                    Relationship;                                            // 0x00D0(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_G8MW[0x4];                                   // 0x00D4(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct OEIFlowCharts.ResultNode
	 * Size -> 0x0008 (FullSize[0x00C8] - InheritedSize[0x00C0])
	 */
	struct FResultNode : public FQuestEventNode
	{
	public:
		int32_t                                                    SourceNodeID;                                            // 0x00C0(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_OVMP[0x4];                                   // 0x00C4(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct OEIFlowCharts.ResultSuccessNode
	 * Size -> 0x0000 (FullSize[0x00C8] - InheritedSize[0x00C8])
	 */
	struct FResultSuccessNode : public FResultNode
	{	};

	/**
	 * ScriptStruct OEIFlowCharts.ResultSuccessGlobalVariableNode
	 * Size -> 0x0030 (FullSize[0x00F8] - InheritedSize[0x00C8])
	 */
	struct FResultSuccessGlobalVariableNode : public FResultSuccessNode
	{
	public:
		struct FGlobalVariableConditional                          Conditional;                                             // 0x00C8(0x002C) Edit, NoDestructor, Protected, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_0I0D[0x4];                                   // 0x00F4(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct OEIFlowCharts.ResultFailedNode
	 * Size -> 0x0008 (FullSize[0x00D0] - InheritedSize[0x00C8])
	 */
	struct FResultFailedNode : public FResultNode
	{
	public:
		bool                                                       bIsIrrelevant;                                           // 0x00C8(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_TRPJ[0x7];                                   // 0x00C9(0x0007) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct OEIFlowCharts.ResultFailedGlobalVariableNode
	 * Size -> 0x0030 (FullSize[0x0100] - InheritedSize[0x00D0])
	 */
	struct FResultFailedGlobalVariableNode : public FResultFailedNode
	{
	public:
		struct FGlobalVariableConditional                          Conditional;                                             // 0x00D0(0x002C) Edit, NoDestructor, Protected, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_SE4W[0x4];                                   // 0x00FC(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct OEIFlowCharts.ResultFailedAcquireItemNode
	 * Size -> 0x0018 (FullSize[0x00E8] - InheritedSize[0x00D0])
	 */
	struct FResultFailedAcquireItemNode : public FResultFailedNode
	{
	public:
		class FString                                              ItemName;                                                // 0x00D0(0x0010) Edit, ZeroConstructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		int32_t                                                    Count;                                                   // 0x00E0(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_CQL6[0x4];                                   // 0x00E4(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct OEIFlowCharts.ResultFailedKillNode
	 * Size -> 0x0018 (FullSize[0x00E8] - InheritedSize[0x00D0])
	 */
	struct FResultFailedKillNode : public FResultFailedNode
	{
	public:
		struct FGuid                                               TargetId;                                                // 0x00D0(0x0010) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		EKillTargetType                                            TargetType;                                              // 0x00E0(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_60AW[0x7];                                   // 0x00E1(0x0007) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct OEIFlowCharts.ResultFailedFactionChangeNode
	 * Size -> 0x0018 (FullSize[0x00E8] - InheritedSize[0x00D0])
	 */
	struct FResultFailedFactionChangeNode : public FResultFailedNode
	{
	public:
		class FString                                              FactionClass;                                            // 0x00D0(0x0010) Edit, ZeroConstructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		int32_t                                                    Relationship;                                            // 0x00E0(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_8SC9[0x4];                                   // 0x00E4(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct OEIFlowCharts.ResultFailedObjectiveBankNode
	 * Size -> 0x0000 (FullSize[0x00D0] - InheritedSize[0x00D0])
	 */
	struct FResultFailedObjectiveBankNode : public FResultFailedNode
	{	};

	/**
	 * ScriptStruct OEIFlowCharts.ResultFailedBranchNode
	 * Size -> 0x0008 (FullSize[0x00D8] - InheritedSize[0x00D0])
	 */
	struct FResultFailedBranchNode : public FResultFailedNode
	{
	public:
		int32_t                                                    BranchNodeID;                                            // 0x00D0(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_9SWT[0x4];                                   // 0x00D4(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct OEIFlowCharts.QuestEndState
	 * Size -> 0x0010
	 */
	struct FQuestEndState
	{
	public:
		unsigned char                                              UnknownData_HLJ5[0x8];                                   // 0x0000(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    ID;                                                      // 0x0008(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_4M79[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct OEIFlowCharts.QuestNode
	 * Size -> 0x0028 (FullSize[0x00E8] - InheritedSize[0x00C0])
	 */
	struct FQuestNode : public FFlowChartNode
	{
	public:
		TArray<struct FQuestEndState>                              EndStates;                                               // 0x00C0(0x0010) Edit, ZeroConstructor, Protected, NativeAccessSpecifierProtected
		TArray<int32_t>                                            AlternateDescriptionIDs;                                 // 0x00D0(0x0010) Edit, ZeroConstructor, Protected, NativeAccessSpecifierProtected
		int32_t                                                    ExperienceReward;                                        // 0x00E0(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_90VC[0x4];                                   // 0x00E4(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct OEIFlowCharts.GlobalQuestNode
	 * Size -> 0x0000 (FullSize[0x00C0] - InheritedSize[0x00C0])
	 */
	struct FGlobalQuestNode : public FFlowChartNode
	{	};

	/**
	 * ScriptStruct OEIFlowCharts.QuestBundle
	 * Size -> 0x0320 (FullSize[0x0438] - InheritedSize[0x0118])
	 */
	struct FQuestBundle : public FFlowChartBundle
	{
	public:
		EQuestType                                                 QuestType;                                               // 0x0118(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_BJC6[0x7];                                   // 0x0119(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FQuestLink>                                  QuestLinks;                                              // 0x0120(0x0010) Edit, ZeroConstructor, NativeAccessSpecifierPrivate
		TArray<struct FObjectiveBankNode>                          ObjectiveBankNodes;                                      // 0x0130(0x0010) Edit, ZeroConstructor, NativeAccessSpecifierPrivate
		TArray<struct FTalkObjectiveNode>                          TalkObjectiveNodes;                                      // 0x0140(0x0010) Edit, ZeroConstructor, NativeAccessSpecifierPrivate
		TArray<struct FGlobalVariableObjectiveNode>                GlobalVariableObjectiveNodes;                            // 0x0150(0x0010) Edit, ZeroConstructor, NativeAccessSpecifierPrivate
		TArray<struct FKillObjectiveNode>                          KillObjectiveNodes;                                      // 0x0160(0x0010) Edit, ZeroConstructor, NativeAccessSpecifierPrivate
		TArray<struct FAcquireItemObjectiveNode>                   AcquireItemObjectiveNodes;                               // 0x0170(0x0010) Edit, ZeroConstructor, NativeAccessSpecifierPrivate
		TArray<struct FBranchCompleteObjectiveNode>                BranchCompleteObjectiveNodes;                            // 0x0180(0x0010) Edit, ZeroConstructor, NativeAccessSpecifierPrivate
		TArray<struct FBranchCompleteNode>                         BranchCompleteNodes;                                     // 0x0190(0x0010) Edit, ZeroConstructor, NativeAccessSpecifierPrivate
		TArray<struct FQuestBranchNode>                            QuestBranchNodes;                                        // 0x01A0(0x0010) Edit, ZeroConstructor, NativeAccessSpecifierPrivate
		TArray<struct FEndStateNode>                               EndStateNodes;                                           // 0x01B0(0x0010) Edit, ZeroConstructor, NativeAccessSpecifierPrivate
		TArray<struct FScriptNode>                                 ScriptNodes;                                             // 0x01C0(0x0010) Edit, ZeroConstructor, NativeAccessSpecifierPrivate
		TArray<struct FGlobalQuestEventGlobalVariableNode>         GlobalQuestEventGlobalVariableNodes;                     // 0x01D0(0x0010) Edit, ZeroConstructor, NativeAccessSpecifierPrivate
		TArray<struct FGlobalQuestEventKillNode>                   GlobalQuestEventKillNodes;                               // 0x01E0(0x0010) Edit, ZeroConstructor, NativeAccessSpecifierPrivate
		TArray<struct FGlobalQuestEventFactionChangeNode>          GlobalQuestEventFactionChangeNodes;                      // 0x01F0(0x0010) Edit, ZeroConstructor, NativeAccessSpecifierPrivate
		TArray<struct FResultSuccessNode>                          ResultSuccessNodes;                                      // 0x0200(0x0010) Edit, ZeroConstructor, NativeAccessSpecifierPrivate
		TArray<struct FResultSuccessGlobalVariableNode>            ResultSuccessGlobalVariableNodes;                        // 0x0210(0x0010) Edit, ZeroConstructor, NativeAccessSpecifierPrivate
		TArray<struct FResultFailedGlobalVariableNode>             ResultFailedGlobalVariableNodes;                         // 0x0220(0x0010) Edit, ZeroConstructor, NativeAccessSpecifierPrivate
		TArray<struct FResultFailedAcquireItemNode>                ResultFailedAcquireItemNodes;                            // 0x0230(0x0010) Edit, ZeroConstructor, NativeAccessSpecifierPrivate
		TArray<struct FResultFailedKillNode>                       ResultFailedKillNodes;                                   // 0x0240(0x0010) Edit, ZeroConstructor, NativeAccessSpecifierPrivate
		TArray<struct FResultFailedFactionChangeNode>              ResultFailedFactionChangeNodes;                          // 0x0250(0x0010) Edit, ZeroConstructor, NativeAccessSpecifierPrivate
		TArray<struct FResultFailedObjectiveBankNode>              ResultFailedObjectiveBankNodes;                          // 0x0260(0x0010) Edit, ZeroConstructor, NativeAccessSpecifierPrivate
		TArray<struct FResultFailedBranchNode>                     ResultFailedBranchNodes;                                 // 0x0270(0x0010) Edit, ZeroConstructor, NativeAccessSpecifierPrivate
		struct FQuestNode                                          QuestNode;                                               // 0x0280(0x00E8) Edit, NativeAccessSpecifierPrivate
		struct FGlobalQuestNode                                    GlobalQuestNode;                                         // 0x0368(0x00C0) Edit, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_FFAW[0x10];                                  // 0x0428(0x0010) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct OEIFlowCharts.QuestReference
	 * Size -> 0x0010
	 */
	struct FQuestReference
	{
	public:
		struct FGuid                                               ID;                                                      // 0x0000(0x0010) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
	};

	/**
	 * ScriptStruct OEIFlowCharts.SpeakerReference
	 * Size -> 0x0018
	 */
	struct FSpeakerReference
	{
	public:
		struct FGuid                                               ID;                                                      // 0x0000(0x0010) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class USpeakerAsset*                                       SpeakerAsset;                                            // 0x0010(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
	};

	/**
	 * ScriptStruct OEIFlowCharts.SpeakerInfo
	 * Size -> 0x0030
	 */
	struct FSpeakerInfo
	{
	public:
		struct FSpeakerReference                                   Speaker;                                                 // 0x0000(0x0018) Edit, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		struct FConversationReference                              Conversation;                                            // 0x0018(0x0018) Edit, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
	};

	/**
	 * ScriptStruct OEIFlowCharts.ChatterBranchNode
	 * Size -> 0x0020 (FullSize[0x00F8] - InheritedSize[0x00D8])
	 */
	struct FChatterBranchNode : public FScriptNode
	{
	public:
		struct FGuid                                               ParentID;                                                // 0x00D8(0x0010) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		struct FGuid                                               EventId;                                                 // 0x00E8(0x0010) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
	};

	/**
	 * ScriptStruct OEIFlowCharts.ChatterEventReference
	 * Size -> 0x0010
	 */
	struct FChatterEventReference
	{
	public:
		struct FGuid                                               ID;                                                      // 0x0000(0x0010) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
	};

	/**
	 * ScriptStruct OEIFlowCharts.ChatterNavigator
	 * Size -> 0x00B8 (FullSize[0x0100] - InheritedSize[0x0048])
	 */
	struct FChatterNavigator : public FFlowChartNavigator
	{
	public:
		class UChatterAsset*                                       ChatterAsset;                                            // 0x0048(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_A01T[0xB0];                                  // 0x0050(0x00B0) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct OEIFlowCharts.ChatterReference
	 * Size -> 0x0018
	 */
	struct FChatterReference
	{
	public:
		struct FGuid                                               ID;                                                      // 0x0000(0x0010) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UChatterAsset*                                       ChatterAsset;                                            // 0x0010(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
	};

	/**
	 * ScriptStruct OEIFlowCharts.ConversationNavigatorState
	 * Size -> 0x00B8
	 */
	struct FConversationNavigatorState
	{
	public:
		struct FGuid                                               NavigatorID;                                             // 0x0000(0x0010) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_KNHH[0x8];                                   // 0x0010(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FConversationReference                              Conversation;                                            // 0x0018(0x0018) NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    CurrentNodeID;                                           // 0x0030(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_A08P[0x1C];                                  // 0x0034(0x001C) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class APawn*                                               PlayerPawn;                                              // 0x0050(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class APlayerState*                                        PlayerState;                                             // 0x0058(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TMap<struct FGuid, TWeakObjectPtr<class AActor>>           SpeakerAssignments;                                      // 0x0060(0x0050) UObjectWrapper, NativeAccessSpecifierPublic
		bool                                                       bCanContinue;                                            // 0x00B0(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bAllowContinue;                                          // 0x00B1(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_O99L[0x6];                                   // 0x00B2(0x0006) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct OEIFlowCharts.QuestEvent
	 * Size -> 0x0010
	 */
	struct FQuestEvent
	{
	public:
		unsigned char                                              UnknownData_MSQN[0x8];                                   // 0x0000(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    EventId;                                                 // 0x0008(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_K0FK[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (PADDING)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
