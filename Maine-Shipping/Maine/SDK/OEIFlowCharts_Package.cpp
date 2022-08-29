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
	 * 		Name   -> PredefinedFunction USpeaker.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USpeaker::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class OEIFlowCharts.Speaker");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UChatterAsset.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UChatterAsset::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class OEIFlowCharts.ChatterAsset");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UChatterBundleSet.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UChatterBundleSet::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class OEIFlowCharts.ChatterBundleSet");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UChatterManager.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UChatterManager::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class OEIFlowCharts.ChatterManager");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UConversationAsset.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UConversationAsset::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class OEIFlowCharts.ConversationAsset");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UConversationBundleSet.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UConversationBundleSet::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class OEIFlowCharts.ConversationBundleSet");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function OEIFlowCharts.ConversationConditionals.IsSpeakerDead
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGuid                                       Speaker                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UConversationConditionals::IsSpeakerDead(const struct FGuid& Speaker)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OEIFlowCharts.ConversationConditionals.IsSpeakerDead");
		
		UConversationConditionals_IsSpeakerDead_Params params {};
		params.Speaker = Speaker;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function OEIFlowCharts.ConversationConditionals.IsNodeCurrentCheckpoint
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGuid                                       ConversationID                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            NodeId                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UConversationConditionals::IsNodeCurrentCheckpoint(const struct FGuid& ConversationID, int32_t NodeId)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OEIFlowCharts.ConversationConditionals.IsNodeCurrentCheckpoint");
		
		UConversationConditionals_IsNodeCurrentCheckpoint_Params params {};
		params.ConversationID = ConversationID;
		params.NodeId = NodeId;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function OEIFlowCharts.ConversationConditionals.IsInstanceDead
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGuid                                       Instance                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UConversationConditionals::IsInstanceDead(const struct FGuid& Instance)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OEIFlowCharts.ConversationConditionals.IsInstanceDead");
		
		UConversationConditionals_IsInstanceDead_Params params {};
		params.Instance = Instance;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function OEIFlowCharts.ConversationConditionals.HasConversationNodeBeenVisited
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGuid                                       ConversationID                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            NodeId                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UConversationConditionals::HasConversationNodeBeenVisited(const struct FGuid& ConversationID, int32_t NodeId)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OEIFlowCharts.ConversationConditionals.HasConversationNodeBeenVisited");
		
		UConversationConditionals_HasConversationNodeBeenVisited_Params params {};
		params.ConversationID = ConversationID;
		params.NodeId = NodeId;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UConversationConditionals.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UConversationConditionals::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class OEIFlowCharts.ConversationConditionals");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function OEIFlowCharts.ConversationConditionalsBP.IsSpeakerDead
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGuid                                       Speaker                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		EBoolResult                                        OutResult                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UConversationConditionalsBP::IsSpeakerDead(const struct FGuid& Speaker, EBoolResult* OutResult)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OEIFlowCharts.ConversationConditionalsBP.IsSpeakerDead");
		
		UConversationConditionalsBP_IsSpeakerDead_Params params {};
		params.Speaker = Speaker;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutResult != nullptr)
			*OutResult = params.OutResult;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function OEIFlowCharts.ConversationConditionalsBP.IsNodeCurrentCheckpoint
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGuid                                       ConversationID                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            NodeId                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		EBoolResult                                        OutResult                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UConversationConditionalsBP::IsNodeCurrentCheckpoint(const struct FGuid& ConversationID, int32_t NodeId, EBoolResult* OutResult)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OEIFlowCharts.ConversationConditionalsBP.IsNodeCurrentCheckpoint");
		
		UConversationConditionalsBP_IsNodeCurrentCheckpoint_Params params {};
		params.ConversationID = ConversationID;
		params.NodeId = NodeId;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutResult != nullptr)
			*OutResult = params.OutResult;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function OEIFlowCharts.ConversationConditionalsBP.IsInstanceDead
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGuid                                       Instance                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		EBoolResult                                        OutResult                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UConversationConditionalsBP::IsInstanceDead(const struct FGuid& Instance, EBoolResult* OutResult)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OEIFlowCharts.ConversationConditionalsBP.IsInstanceDead");
		
		UConversationConditionalsBP_IsInstanceDead_Params params {};
		params.Instance = Instance;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutResult != nullptr)
			*OutResult = params.OutResult;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function OEIFlowCharts.ConversationConditionalsBP.HasConversationNodeBeenVisited
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGuid                                       ConversationID                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            NodeId                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		EBoolResult                                        OutResult                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UConversationConditionalsBP::HasConversationNodeBeenVisited(const struct FGuid& ConversationID, int32_t NodeId, EBoolResult* OutResult)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OEIFlowCharts.ConversationConditionalsBP.HasConversationNodeBeenVisited");
		
		UConversationConditionalsBP_HasConversationNodeBeenVisited_Params params {};
		params.ConversationID = ConversationID;
		params.NodeId = NodeId;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutResult != nullptr)
			*OutResult = params.OutResult;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UConversationConditionalsBP.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UConversationConditionalsBP::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class OEIFlowCharts.ConversationConditionalsBP");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UConversationManager.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UConversationManager::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class OEIFlowCharts.ConversationManager");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function OEIFlowCharts.ConversationScripts.SetConversationCheckpoint
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGuid                                       ConversationID                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            CheckpointNodeID                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UConversationScripts::SetConversationCheckpoint(const struct FGuid& ConversationID, int32_t CheckpointNodeID)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OEIFlowCharts.ConversationScripts.SetConversationCheckpoint");
		
		UConversationScripts_SetConversationCheckpoint_Params params {};
		params.ConversationID = ConversationID;
		params.CheckpointNodeID = CheckpointNodeID;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function OEIFlowCharts.ConversationScripts.MarkConversationNodeAsRead
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGuid                                       ConversationID                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            NodeId                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UConversationScripts::MarkConversationNodeAsRead(const struct FGuid& ConversationID, int32_t NodeId)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OEIFlowCharts.ConversationScripts.MarkConversationNodeAsRead");
		
		UConversationScripts_MarkConversationNodeAsRead_Params params {};
		params.ConversationID = ConversationID;
		params.NodeId = NodeId;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function OEIFlowCharts.ConversationScripts.ClearConversationNodeAsRead
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGuid                                       ConversationID                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            NodeId                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UConversationScripts::ClearConversationNodeAsRead(const struct FGuid& ConversationID, int32_t NodeId)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OEIFlowCharts.ConversationScripts.ClearConversationNodeAsRead");
		
		UConversationScripts_ClearConversationNodeAsRead_Params params {};
		params.ConversationID = ConversationID;
		params.NodeId = NodeId;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function OEIFlowCharts.ConversationScripts.ClearConversationCheckpoint
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGuid                                       ConversationID                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UConversationScripts::ClearConversationCheckpoint(const struct FGuid& ConversationID)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OEIFlowCharts.ConversationScripts.ClearConversationCheckpoint");
		
		UConversationScripts_ClearConversationCheckpoint_Params params {};
		params.ConversationID = ConversationID;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UConversationScripts.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UConversationScripts::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class OEIFlowCharts.ConversationScripts");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function OEIFlowCharts.OEIFlowChartLibrary.MakeSpeakerReferenceWithAsset
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class USpeakerAsset*                               Asset                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FSpeakerReference UOEIFlowChartLibrary::MakeSpeakerReferenceWithAsset(class USpeakerAsset* Asset)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OEIFlowCharts.OEIFlowChartLibrary.MakeSpeakerReferenceWithAsset");
		
		UOEIFlowChartLibrary_MakeSpeakerReferenceWithAsset_Params params {};
		params.Asset = Asset;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function OEIFlowCharts.OEIFlowChartLibrary.MakeSpeakerReference
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGuid                                       ID                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FSpeakerReference UOEIFlowChartLibrary::MakeSpeakerReference(const struct FGuid& ID)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OEIFlowCharts.OEIFlowChartLibrary.MakeSpeakerReference");
		
		UOEIFlowChartLibrary_MakeSpeakerReference_Params params {};
		params.ID = ID;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function OEIFlowCharts.OEIFlowChartLibrary.MakeQuestReference
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGuid                                       ID                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FQuestReference UOEIFlowChartLibrary::MakeQuestReference(const struct FGuid& ID)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OEIFlowCharts.OEIFlowChartLibrary.MakeQuestReference");
		
		UOEIFlowChartLibrary_MakeQuestReference_Params params {};
		params.ID = ID;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function OEIFlowCharts.OEIFlowChartLibrary.MakeConversationReferenceWithAsset
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UConversationAsset*                          Asset                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FConversationReference UOEIFlowChartLibrary::MakeConversationReferenceWithAsset(class UConversationAsset* Asset)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OEIFlowCharts.OEIFlowChartLibrary.MakeConversationReferenceWithAsset");
		
		UOEIFlowChartLibrary_MakeConversationReferenceWithAsset_Params params {};
		params.Asset = Asset;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function OEIFlowCharts.OEIFlowChartLibrary.MakeConversationReference
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGuid                                       ID                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FConversationReference UOEIFlowChartLibrary::MakeConversationReference(const struct FGuid& ID)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OEIFlowCharts.OEIFlowChartLibrary.MakeConversationReference");
		
		UOEIFlowChartLibrary_MakeConversationReference_Params params {};
		params.ID = ID;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function OEIFlowCharts.OEIFlowChartLibrary.MakeChatterEventReference
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGuid                                       ID                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FChatterEventReference UOEIFlowChartLibrary::MakeChatterEventReference(const struct FGuid& ID)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OEIFlowCharts.OEIFlowChartLibrary.MakeChatterEventReference");
		
		UOEIFlowChartLibrary_MakeChatterEventReference_Params params {};
		params.ID = ID;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function OEIFlowCharts.OEIFlowChartLibrary.GetSpeakerID
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSpeakerReference                           Speaker                                                    (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FGuid UOEIFlowChartLibrary::GetSpeakerID(const struct FSpeakerReference& Speaker)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OEIFlowCharts.OEIFlowChartLibrary.GetSpeakerID");
		
		UOEIFlowChartLibrary_GetSpeakerID_Params params {};
		params.Speaker = Speaker;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function OEIFlowCharts.OEIFlowChartLibrary.GetQuestID
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FQuestReference                             Quest                                                      (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FGuid UOEIFlowChartLibrary::GetQuestID(const struct FQuestReference& Quest)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OEIFlowCharts.OEIFlowChartLibrary.GetQuestID");
		
		UOEIFlowChartLibrary_GetQuestID_Params params {};
		params.Quest = Quest;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function OEIFlowCharts.OEIFlowChartLibrary.GetConversationID
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FConversationReference                      Conversation                                               (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FGuid UOEIFlowChartLibrary::GetConversationID(const struct FConversationReference& Conversation)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OEIFlowCharts.OEIFlowChartLibrary.GetConversationID");
		
		UOEIFlowChartLibrary_GetConversationID_Params params {};
		params.Conversation = Conversation;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function OEIFlowCharts.OEIFlowChartLibrary.GetChatterEventID
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FChatterEventReference                      ChatterEvent                                               (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	struct FGuid UOEIFlowChartLibrary::GetChatterEventID(const struct FChatterEventReference& ChatterEvent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OEIFlowCharts.OEIFlowChartLibrary.GetChatterEventID");
		
		UOEIFlowChartLibrary_GetChatterEventID_Params params {};
		params.ChatterEvent = ChatterEvent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function OEIFlowCharts.OEIFlowChartLibrary.ExecuteOnUpdateScript
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FConversationReference                      Conversation                                               (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            NodeId                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FGuid                                       ScriptID                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UOEIFlowChartLibrary::ExecuteOnUpdateScript(const struct FConversationReference& Conversation, int32_t NodeId, const struct FGuid& ScriptID)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OEIFlowCharts.OEIFlowChartLibrary.ExecuteOnUpdateScript");
		
		UOEIFlowChartLibrary_ExecuteOnUpdateScript_Params params {};
		params.Conversation = Conversation;
		params.NodeId = NodeId;
		params.ScriptID = ScriptID;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UOEIFlowChartLibrary.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UOEIFlowChartLibrary::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class OEIFlowCharts.OEIFlowChartLibrary");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UOEIFlowChartsProjectSettings.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UOEIFlowChartsProjectSettings::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class OEIFlowCharts.OEIFlowChartsProjectSettings");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UQuestBundleSet.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UQuestBundleSet::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class OEIFlowCharts.QuestBundleSet");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function OEIFlowCharts.QuestConditionals.IsQuestStateVisited
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGuid                                       QuestID                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            NodeId                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UQuestConditionals::IsQuestStateVisited(const struct FGuid& QuestID, int32_t NodeId)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OEIFlowCharts.QuestConditionals.IsQuestStateVisited");
		
		UQuestConditionals_IsQuestStateVisited_Params params {};
		params.QuestID = QuestID;
		params.NodeId = NodeId;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function OEIFlowCharts.QuestConditionals.IsQuestStateIrrelevant
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGuid                                       QuestID                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            NodeId                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UQuestConditionals::IsQuestStateIrrelevant(const struct FGuid& QuestID, int32_t NodeId)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OEIFlowCharts.QuestConditionals.IsQuestStateIrrelevant");
		
		UQuestConditionals_IsQuestStateIrrelevant_Params params {};
		params.QuestID = QuestID;
		params.NodeId = NodeId;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function OEIFlowCharts.QuestConditionals.IsQuestStateActive
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGuid                                       QuestID                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            NodeId                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UQuestConditionals::IsQuestStateActive(const struct FGuid& QuestID, int32_t NodeId)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OEIFlowCharts.QuestConditionals.IsQuestStateActive");
		
		UQuestConditionals_IsQuestStateActive_Params params {};
		params.QuestID = QuestID;
		params.NodeId = NodeId;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function OEIFlowCharts.QuestConditionals.IsQuestStarted
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGuid                                       QuestID                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UQuestConditionals::IsQuestStarted(const struct FGuid& QuestID)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OEIFlowCharts.QuestConditionals.IsQuestStarted");
		
		UQuestConditionals_IsQuestStarted_Params params {};
		params.QuestID = QuestID;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function OEIFlowCharts.QuestConditionals.IsQuestMentioned
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGuid                                       QuestID                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UQuestConditionals::IsQuestMentioned(const struct FGuid& QuestID)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OEIFlowCharts.QuestConditionals.IsQuestMentioned");
		
		UQuestConditionals_IsQuestMentioned_Params params {};
		params.QuestID = QuestID;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function OEIFlowCharts.QuestConditionals.IsQuestEventTriggered
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGuid                                       QuestID                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            QuestEventID                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UQuestConditionals::IsQuestEventTriggered(const struct FGuid& QuestID, int32_t QuestEventID)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OEIFlowCharts.QuestConditionals.IsQuestEventTriggered");
		
		UQuestConditionals_IsQuestEventTriggered_Params params {};
		params.QuestID = QuestID;
		params.QuestEventID = QuestEventID;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function OEIFlowCharts.QuestConditionals.IsQuestEndStateTriggered
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGuid                                       QuestID                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            EndStateID                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UQuestConditionals::IsQuestEndStateTriggered(const struct FGuid& QuestID, int32_t EndStateID)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OEIFlowCharts.QuestConditionals.IsQuestEndStateTriggered");
		
		UQuestConditionals_IsQuestEndStateTriggered_Params params {};
		params.QuestID = QuestID;
		params.EndStateID = EndStateID;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function OEIFlowCharts.QuestConditionals.IsQuestComplete
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGuid                                       QuestID                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UQuestConditionals::IsQuestComplete(const struct FGuid& QuestID)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OEIFlowCharts.QuestConditionals.IsQuestComplete");
		
		UQuestConditionals_IsQuestComplete_Params params {};
		params.QuestID = QuestID;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function OEIFlowCharts.QuestConditionals.IsQuestAddendumTriggered
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGuid                                       QuestID                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            AddendumID                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UQuestConditionals::IsQuestAddendumTriggered(const struct FGuid& QuestID, int32_t AddendumID)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OEIFlowCharts.QuestConditionals.IsQuestAddendumTriggered");
		
		UQuestConditionals_IsQuestAddendumTriggered_Params params {};
		params.QuestID = QuestID;
		params.AddendumID = AddendumID;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function OEIFlowCharts.QuestConditionals.IsQuestActive
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGuid                                       QuestID                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UQuestConditionals::IsQuestActive(const struct FGuid& QuestID)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OEIFlowCharts.QuestConditionals.IsQuestActive");
		
		UQuestConditionals_IsQuestActive_Params params {};
		params.QuestID = QuestID;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function OEIFlowCharts.QuestConditionals.HasQuestStateFailedOrIsIrrelevant
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGuid                                       QuestID                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            NodeId                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UQuestConditionals::HasQuestStateFailedOrIsIrrelevant(const struct FGuid& QuestID, int32_t NodeId)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OEIFlowCharts.QuestConditionals.HasQuestStateFailedOrIsIrrelevant");
		
		UQuestConditionals_HasQuestStateFailedOrIsIrrelevant_Params params {};
		params.QuestID = QuestID;
		params.NodeId = NodeId;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function OEIFlowCharts.QuestConditionals.HasQuestStateFailed
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGuid                                       QuestID                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            NodeId                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UQuestConditionals::HasQuestStateFailed(const struct FGuid& QuestID, int32_t NodeId)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OEIFlowCharts.QuestConditionals.HasQuestStateFailed");
		
		UQuestConditionals_HasQuestStateFailed_Params params {};
		params.QuestID = QuestID;
		params.NodeId = NodeId;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function OEIFlowCharts.QuestConditionals.HasQuestFailed
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGuid                                       QuestID                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UQuestConditionals::HasQuestFailed(const struct FGuid& QuestID)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OEIFlowCharts.QuestConditionals.HasQuestFailed");
		
		UQuestConditionals_HasQuestFailed_Params params {};
		params.QuestID = QuestID;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UQuestConditionals.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UQuestConditionals::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class OEIFlowCharts.QuestConditionals");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UQuestManager.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UQuestManager::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class OEIFlowCharts.QuestManager");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UStartQuestEvent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UStartQuestEvent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class OEIFlowCharts.StartQuestEvent");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UTriggerQuestAddendumEvent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UTriggerQuestAddendumEvent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class OEIFlowCharts.TriggerQuestAddendumEvent");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAdvanceQuestEvent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAdvanceQuestEvent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class OEIFlowCharts.AdvanceQuestEvent");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function OEIFlowCharts.QuestScripts.TriggerQuestAddendum
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGuid                                       QuestID                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            AddendumID                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UQuestScripts::TriggerQuestAddendum(const struct FGuid& QuestID, int32_t AddendumID)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OEIFlowCharts.QuestScripts.TriggerQuestAddendum");
		
		UQuestScripts_TriggerQuestAddendum_Params params {};
		params.QuestID = QuestID;
		params.AddendumID = AddendumID;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function OEIFlowCharts.QuestScripts.StartQuestWithAlternateDescription
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGuid                                       QuestID                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            QuestDescriptionID                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UQuestScripts::StartQuestWithAlternateDescription(const struct FGuid& QuestID, int32_t QuestDescriptionID)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OEIFlowCharts.QuestScripts.StartQuestWithAlternateDescription");
		
		UQuestScripts_StartQuestWithAlternateDescription_Params params {};
		params.QuestID = QuestID;
		params.QuestDescriptionID = QuestDescriptionID;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function OEIFlowCharts.QuestScripts.StartQuest
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGuid                                       QuestID                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UQuestScripts::StartQuest(const struct FGuid& QuestID)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OEIFlowCharts.QuestScripts.StartQuest");
		
		UQuestScripts_StartQuest_Params params {};
		params.QuestID = QuestID;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function OEIFlowCharts.QuestScripts.SetQuestAlternateDescription
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGuid                                       QuestID                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            QuestDescriptionID                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UQuestScripts::SetQuestAlternateDescription(const struct FGuid& QuestID, int32_t QuestDescriptionID)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OEIFlowCharts.QuestScripts.SetQuestAlternateDescription");
		
		UQuestScripts_SetQuestAlternateDescription_Params params {};
		params.QuestID = QuestID;
		params.QuestDescriptionID = QuestDescriptionID;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function OEIFlowCharts.QuestScripts.SetObjectiveAlternateDescription
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGuid                                       QuestID                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            ObjectiveID                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            ObjectiveDescriptionID                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UQuestScripts::SetObjectiveAlternateDescription(const struct FGuid& QuestID, int32_t ObjectiveID, int32_t ObjectiveDescriptionID)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OEIFlowCharts.QuestScripts.SetObjectiveAlternateDescription");
		
		UQuestScripts_SetObjectiveAlternateDescription_Params params {};
		params.QuestID = QuestID;
		params.ObjectiveID = ObjectiveID;
		params.ObjectiveDescriptionID = ObjectiveDescriptionID;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function OEIFlowCharts.QuestScripts.MentionQuest
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGuid                                       QuestID                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UQuestScripts::MentionQuest(const struct FGuid& QuestID)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OEIFlowCharts.QuestScripts.MentionQuest");
		
		UQuestScripts_MentionQuest_Params params {};
		params.QuestID = QuestID;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function OEIFlowCharts.QuestScripts.DebugAdvanceQuest
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGuid                                       QuestID                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UQuestScripts::DebugAdvanceQuest(const struct FGuid& QuestID)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OEIFlowCharts.QuestScripts.DebugAdvanceQuest");
		
		UQuestScripts_DebugAdvanceQuest_Params params {};
		params.QuestID = QuestID;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function OEIFlowCharts.QuestScripts.AdvanceQuest
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGuid                                       QuestID                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UQuestScripts::AdvanceQuest(const struct FGuid& QuestID)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OEIFlowCharts.QuestScripts.AdvanceQuest");
		
		UQuestScripts_AdvanceQuest_Params params {};
		params.QuestID = QuestID;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UQuestScripts.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UQuestScripts::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class OEIFlowCharts.QuestScripts");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction USpeakerAsset.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USpeakerAsset::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class OEIFlowCharts.SpeakerAsset");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction USpeakerInfoComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USpeakerInfoComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class OEIFlowCharts.SpeakerInfoComponent");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction USpeakerRegistry.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USpeakerRegistry::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class OEIFlowCharts.SpeakerRegistry");
		return ptr;
	}

}


