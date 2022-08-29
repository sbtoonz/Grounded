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
	 * Function OEIFlowCharts.ConversationConditionals.IsSpeakerDead
	 */
	struct UConversationConditionals_IsSpeakerDead_Params
	{
	public:
		struct FGuid                                               Speaker;                                                 // 0x0000(0x0010)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0010(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OEIFlowCharts.ConversationConditionals.IsNodeCurrentCheckpoint
	 */
	struct UConversationConditionals_IsNodeCurrentCheckpoint_Params
	{
	public:
		struct FGuid                                               ConversationID;                                          // 0x0000(0x0010)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    NodeId;                                                  // 0x0010(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0014(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OEIFlowCharts.ConversationConditionals.IsInstanceDead
	 */
	struct UConversationConditionals_IsInstanceDead_Params
	{
	public:
		struct FGuid                                               Instance;                                                // 0x0000(0x0010)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0010(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OEIFlowCharts.ConversationConditionals.HasConversationNodeBeenVisited
	 */
	struct UConversationConditionals_HasConversationNodeBeenVisited_Params
	{
	public:
		struct FGuid                                               ConversationID;                                          // 0x0000(0x0010)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    NodeId;                                                  // 0x0010(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0014(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OEIFlowCharts.ConversationConditionalsBP.IsSpeakerDead
	 */
	struct UConversationConditionalsBP_IsSpeakerDead_Params
	{
	public:
		struct FGuid                                               Speaker;                                                 // 0x0000(0x0010)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		EBoolResult                                                OutResult;                                               // 0x0010(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0011(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OEIFlowCharts.ConversationConditionalsBP.IsNodeCurrentCheckpoint
	 */
	struct UConversationConditionalsBP_IsNodeCurrentCheckpoint_Params
	{
	public:
		struct FGuid                                               ConversationID;                                          // 0x0000(0x0010)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    NodeId;                                                  // 0x0010(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		EBoolResult                                                OutResult;                                               // 0x0014(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0015(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OEIFlowCharts.ConversationConditionalsBP.IsInstanceDead
	 */
	struct UConversationConditionalsBP_IsInstanceDead_Params
	{
	public:
		struct FGuid                                               Instance;                                                // 0x0000(0x0010)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		EBoolResult                                                OutResult;                                               // 0x0010(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0011(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OEIFlowCharts.ConversationConditionalsBP.HasConversationNodeBeenVisited
	 */
	struct UConversationConditionalsBP_HasConversationNodeBeenVisited_Params
	{
	public:
		struct FGuid                                               ConversationID;                                          // 0x0000(0x0010)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    NodeId;                                                  // 0x0010(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		EBoolResult                                                OutResult;                                               // 0x0014(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0015(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OEIFlowCharts.ConversationScripts.SetConversationCheckpoint
	 */
	struct UConversationScripts_SetConversationCheckpoint_Params
	{
	public:
		struct FGuid                                               ConversationID;                                          // 0x0000(0x0010)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    CheckpointNodeID;                                        // 0x0010(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OEIFlowCharts.ConversationScripts.MarkConversationNodeAsRead
	 */
	struct UConversationScripts_MarkConversationNodeAsRead_Params
	{
	public:
		struct FGuid                                               ConversationID;                                          // 0x0000(0x0010)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    NodeId;                                                  // 0x0010(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OEIFlowCharts.ConversationScripts.ClearConversationNodeAsRead
	 */
	struct UConversationScripts_ClearConversationNodeAsRead_Params
	{
	public:
		struct FGuid                                               ConversationID;                                          // 0x0000(0x0010)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    NodeId;                                                  // 0x0010(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OEIFlowCharts.ConversationScripts.ClearConversationCheckpoint
	 */
	struct UConversationScripts_ClearConversationCheckpoint_Params
	{
	public:
		struct FGuid                                               ConversationID;                                          // 0x0000(0x0010)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OEIFlowCharts.OEIFlowChartLibrary.MakeSpeakerReferenceWithAsset
	 */
	struct UOEIFlowChartLibrary_MakeSpeakerReferenceWithAsset_Params
	{
	public:
		class USpeakerAsset*                                       Asset;                                                   // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FSpeakerReference                                   ReturnValue;                                             // 0x0008(0x0018)  (Parm, OutParm, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OEIFlowCharts.OEIFlowChartLibrary.MakeSpeakerReference
	 */
	struct UOEIFlowChartLibrary_MakeSpeakerReference_Params
	{
	public:
		struct FGuid                                               ID;                                                      // 0x0000(0x0010)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FSpeakerReference                                   ReturnValue;                                             // 0x0010(0x0018)  (Parm, OutParm, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OEIFlowCharts.OEIFlowChartLibrary.MakeQuestReference
	 */
	struct UOEIFlowChartLibrary_MakeQuestReference_Params
	{
	public:
		struct FGuid                                               ID;                                                      // 0x0000(0x0010)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FQuestReference                                     ReturnValue;                                             // 0x0010(0x0010)  (Parm, OutParm, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OEIFlowCharts.OEIFlowChartLibrary.MakeConversationReferenceWithAsset
	 */
	struct UOEIFlowChartLibrary_MakeConversationReferenceWithAsset_Params
	{
	public:
		class UConversationAsset*                                  Asset;                                                   // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FConversationReference                              ReturnValue;                                             // 0x0008(0x0018)  (Parm, OutParm, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OEIFlowCharts.OEIFlowChartLibrary.MakeConversationReference
	 */
	struct UOEIFlowChartLibrary_MakeConversationReference_Params
	{
	public:
		struct FGuid                                               ID;                                                      // 0x0000(0x0010)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FConversationReference                              ReturnValue;                                             // 0x0010(0x0018)  (Parm, OutParm, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OEIFlowCharts.OEIFlowChartLibrary.MakeChatterEventReference
	 */
	struct UOEIFlowChartLibrary_MakeChatterEventReference_Params
	{
	public:
		struct FGuid                                               ID;                                                      // 0x0000(0x0010)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FChatterEventReference                              ReturnValue;                                             // 0x0010(0x0010)  (Parm, OutParm, ReturnParm, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OEIFlowCharts.OEIFlowChartLibrary.GetSpeakerID
	 */
	struct UOEIFlowChartLibrary_GetSpeakerID_Params
	{
	public:
		struct FSpeakerReference                                   Speaker;                                                 // 0x0000(0x0018)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FGuid                                               ReturnValue;                                             // 0x0018(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OEIFlowCharts.OEIFlowChartLibrary.GetQuestID
	 */
	struct UOEIFlowChartLibrary_GetQuestID_Params
	{
	public:
		struct FQuestReference                                     Quest;                                                   // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FGuid                                               ReturnValue;                                             // 0x0010(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OEIFlowCharts.OEIFlowChartLibrary.GetConversationID
	 */
	struct UOEIFlowChartLibrary_GetConversationID_Params
	{
	public:
		struct FConversationReference                              Conversation;                                            // 0x0000(0x0018)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FGuid                                               ReturnValue;                                             // 0x0018(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OEIFlowCharts.OEIFlowChartLibrary.GetChatterEventID
	 */
	struct UOEIFlowChartLibrary_GetChatterEventID_Params
	{
	public:
		struct FChatterEventReference                              ChatterEvent;                                            // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
		struct FGuid                                               ReturnValue;                                             // 0x0010(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OEIFlowCharts.OEIFlowChartLibrary.ExecuteOnUpdateScript
	 */
	struct UOEIFlowChartLibrary_ExecuteOnUpdateScript_Params
	{
	public:
		struct FConversationReference                              Conversation;                                            // 0x0000(0x0018)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    NodeId;                                                  // 0x0018(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FGuid                                               ScriptID;                                                // 0x001C(0x0010)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OEIFlowCharts.QuestConditionals.IsQuestStateVisited
	 */
	struct UQuestConditionals_IsQuestStateVisited_Params
	{
	public:
		struct FGuid                                               QuestID;                                                 // 0x0000(0x0010)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    NodeId;                                                  // 0x0010(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0014(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OEIFlowCharts.QuestConditionals.IsQuestStateIrrelevant
	 */
	struct UQuestConditionals_IsQuestStateIrrelevant_Params
	{
	public:
		struct FGuid                                               QuestID;                                                 // 0x0000(0x0010)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    NodeId;                                                  // 0x0010(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0014(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OEIFlowCharts.QuestConditionals.IsQuestStateActive
	 */
	struct UQuestConditionals_IsQuestStateActive_Params
	{
	public:
		struct FGuid                                               QuestID;                                                 // 0x0000(0x0010)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    NodeId;                                                  // 0x0010(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0014(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OEIFlowCharts.QuestConditionals.IsQuestStarted
	 */
	struct UQuestConditionals_IsQuestStarted_Params
	{
	public:
		struct FGuid                                               QuestID;                                                 // 0x0000(0x0010)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0010(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OEIFlowCharts.QuestConditionals.IsQuestMentioned
	 */
	struct UQuestConditionals_IsQuestMentioned_Params
	{
	public:
		struct FGuid                                               QuestID;                                                 // 0x0000(0x0010)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0010(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OEIFlowCharts.QuestConditionals.IsQuestEventTriggered
	 */
	struct UQuestConditionals_IsQuestEventTriggered_Params
	{
	public:
		struct FGuid                                               QuestID;                                                 // 0x0000(0x0010)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    QuestEventID;                                            // 0x0010(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0014(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OEIFlowCharts.QuestConditionals.IsQuestEndStateTriggered
	 */
	struct UQuestConditionals_IsQuestEndStateTriggered_Params
	{
	public:
		struct FGuid                                               QuestID;                                                 // 0x0000(0x0010)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    EndStateID;                                              // 0x0010(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0014(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OEIFlowCharts.QuestConditionals.IsQuestComplete
	 */
	struct UQuestConditionals_IsQuestComplete_Params
	{
	public:
		struct FGuid                                               QuestID;                                                 // 0x0000(0x0010)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0010(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OEIFlowCharts.QuestConditionals.IsQuestAddendumTriggered
	 */
	struct UQuestConditionals_IsQuestAddendumTriggered_Params
	{
	public:
		struct FGuid                                               QuestID;                                                 // 0x0000(0x0010)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    AddendumID;                                              // 0x0010(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0014(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OEIFlowCharts.QuestConditionals.IsQuestActive
	 */
	struct UQuestConditionals_IsQuestActive_Params
	{
	public:
		struct FGuid                                               QuestID;                                                 // 0x0000(0x0010)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0010(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OEIFlowCharts.QuestConditionals.HasQuestStateFailedOrIsIrrelevant
	 */
	struct UQuestConditionals_HasQuestStateFailedOrIsIrrelevant_Params
	{
	public:
		struct FGuid                                               QuestID;                                                 // 0x0000(0x0010)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    NodeId;                                                  // 0x0010(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0014(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OEIFlowCharts.QuestConditionals.HasQuestStateFailed
	 */
	struct UQuestConditionals_HasQuestStateFailed_Params
	{
	public:
		struct FGuid                                               QuestID;                                                 // 0x0000(0x0010)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    NodeId;                                                  // 0x0010(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0014(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OEIFlowCharts.QuestConditionals.HasQuestFailed
	 */
	struct UQuestConditionals_HasQuestFailed_Params
	{
	public:
		struct FGuid                                               QuestID;                                                 // 0x0000(0x0010)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0010(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OEIFlowCharts.QuestScripts.TriggerQuestAddendum
	 */
	struct UQuestScripts_TriggerQuestAddendum_Params
	{
	public:
		struct FGuid                                               QuestID;                                                 // 0x0000(0x0010)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    AddendumID;                                              // 0x0010(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OEIFlowCharts.QuestScripts.StartQuestWithAlternateDescription
	 */
	struct UQuestScripts_StartQuestWithAlternateDescription_Params
	{
	public:
		struct FGuid                                               QuestID;                                                 // 0x0000(0x0010)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    QuestDescriptionID;                                      // 0x0010(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OEIFlowCharts.QuestScripts.StartQuest
	 */
	struct UQuestScripts_StartQuest_Params
	{
	public:
		struct FGuid                                               QuestID;                                                 // 0x0000(0x0010)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OEIFlowCharts.QuestScripts.SetQuestAlternateDescription
	 */
	struct UQuestScripts_SetQuestAlternateDescription_Params
	{
	public:
		struct FGuid                                               QuestID;                                                 // 0x0000(0x0010)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    QuestDescriptionID;                                      // 0x0010(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OEIFlowCharts.QuestScripts.SetObjectiveAlternateDescription
	 */
	struct UQuestScripts_SetObjectiveAlternateDescription_Params
	{
	public:
		struct FGuid                                               QuestID;                                                 // 0x0000(0x0010)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    ObjectiveID;                                             // 0x0010(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    ObjectiveDescriptionID;                                  // 0x0014(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OEIFlowCharts.QuestScripts.MentionQuest
	 */
	struct UQuestScripts_MentionQuest_Params
	{
	public:
		struct FGuid                                               QuestID;                                                 // 0x0000(0x0010)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OEIFlowCharts.QuestScripts.DebugAdvanceQuest
	 */
	struct UQuestScripts_DebugAdvanceQuest_Params
	{
	public:
		struct FGuid                                               QuestID;                                                 // 0x0000(0x0010)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OEIFlowCharts.QuestScripts.AdvanceQuest
	 */
	struct UQuestScripts_AdvanceQuest_Params
	{
	public:
		struct FGuid                                               QuestID;                                                 // 0x0000(0x0010)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
