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
	 * 		Name   -> PredefinedFunction UOnlineBridgeAchievementAdapterForBridge.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UOnlineBridgeAchievementAdapterForBridge::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class OnlineManager.OnlineBridgeAchievementAdapterForBridge");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function OnlineManager.OnlineCheckTimeSyncCallbackProxy.OnlineCheckTimeSync
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UOnlineCheckTimeSyncCallbackProxy* UOnlineCheckTimeSyncCallbackProxy::OnlineCheckTimeSync(class UObject* WorldContextObject)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OnlineManager.OnlineCheckTimeSyncCallbackProxy.OnlineCheckTimeSync");
		
		UOnlineCheckTimeSyncCallbackProxy_OnlineCheckTimeSync_Params params {};
		params.WorldContextObject = WorldContextObject;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> DelegateFunction OnlineManager.OnlineCheckTimeSyncCallbackProxy.OnCompletedDelegate__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              TimeOffsetSec                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              NetworkDelaySec                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UOnlineCheckTimeSyncCallbackProxy::OnCompletedDelegate__DelegateSignature(float TimeOffsetSec, float NetworkDelaySec)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("DelegateFunction OnlineManager.OnlineCheckTimeSyncCallbackProxy.OnCompletedDelegate__DelegateSignature");
		
		UOnlineCheckTimeSyncCallbackProxy_OnCompletedDelegate__DelegateSignature_Params params {};
		params.TimeOffsetSec = TimeOffsetSec;
		params.NetworkDelaySec = NetworkDelaySec;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UOnlineCheckTimeSyncCallbackProxy.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UOnlineCheckTimeSyncCallbackProxy::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class OnlineManager.OnlineCheckTimeSyncCallbackProxy");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function OnlineManager.OnlineConstantCallbackProxy.OnlineSynchronizeConstant
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class APlayerController*                           InPlayerController                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UOnlineConstantCallbackProxy* UOnlineConstantCallbackProxy::OnlineSynchronizeConstant(class UObject* WorldContextObject, class APlayerController* InPlayerController)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OnlineManager.OnlineConstantCallbackProxy.OnlineSynchronizeConstant");
		
		UOnlineConstantCallbackProxy_OnlineSynchronizeConstant_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.InPlayerController = InPlayerController;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function OnlineManager.OnlineConstantCallbackProxy.OnlineConstantGetString
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      ConstantName                                               (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      DefaultValue                                               (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class FString UOnlineConstantCallbackProxy::OnlineConstantGetString(const class FString& ConstantName, const class FString& DefaultValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OnlineManager.OnlineConstantCallbackProxy.OnlineConstantGetString");
		
		UOnlineConstantCallbackProxy_OnlineConstantGetString_Params params {};
		params.ConstantName = ConstantName;
		params.DefaultValue = DefaultValue;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function OnlineManager.OnlineConstantCallbackProxy.OnlineConstantGetInt
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      ConstantName                                               (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            DefaultValue                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	int32_t UOnlineConstantCallbackProxy::OnlineConstantGetInt(const class FString& ConstantName, int32_t DefaultValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OnlineManager.OnlineConstantCallbackProxy.OnlineConstantGetInt");
		
		UOnlineConstantCallbackProxy_OnlineConstantGetInt_Params params {};
		params.ConstantName = ConstantName;
		params.DefaultValue = DefaultValue;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function OnlineManager.OnlineConstantCallbackProxy.OnlineConstantGetFloat
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      ConstantName                                               (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              DefaultValue                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	float UOnlineConstantCallbackProxy::OnlineConstantGetFloat(const class FString& ConstantName, float DefaultValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OnlineManager.OnlineConstantCallbackProxy.OnlineConstantGetFloat");
		
		UOnlineConstantCallbackProxy_OnlineConstantGetFloat_Params params {};
		params.ConstantName = ConstantName;
		params.DefaultValue = DefaultValue;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function OnlineManager.OnlineConstantCallbackProxy.OnlineConstantGetBool
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      ConstantName                                               (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               DefaultValue                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UOnlineConstantCallbackProxy::OnlineConstantGetBool(const class FString& ConstantName, bool DefaultValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OnlineManager.OnlineConstantCallbackProxy.OnlineConstantGetBool");
		
		UOnlineConstantCallbackProxy_OnlineConstantGetBool_Params params {};
		params.ConstantName = ConstantName;
		params.DefaultValue = DefaultValue;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function OnlineManager.OnlineConstantCallbackProxy.OnlineConstantCheckOnlineVersion
	 * 		Flags  -> ()
	 */
	bool UOnlineConstantCallbackProxy::OnlineConstantCheckOnlineVersion()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OnlineManager.OnlineConstantCallbackProxy.OnlineConstantCheckOnlineVersion");
		
		UOnlineConstantCallbackProxy_OnlineConstantCheckOnlineVersion_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UOnlineConstantCallbackProxy.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UOnlineConstantCallbackProxy::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class OnlineManager.OnlineConstantCallbackProxy");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function OnlineManager.OnlineFindFriendSessionsCallbackProxy.OnlineFindFriendSessions
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class APlayerController*                           PlayerController                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            MaxResults                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UOnlineFindFriendSessionsCallbackProxy* UOnlineFindFriendSessionsCallbackProxy::OnlineFindFriendSessions(class UObject* WorldContextObject, class APlayerController* PlayerController, int32_t MaxResults)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OnlineManager.OnlineFindFriendSessionsCallbackProxy.OnlineFindFriendSessions");
		
		UOnlineFindFriendSessionsCallbackProxy_OnlineFindFriendSessions_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.PlayerController = PlayerController;
		params.MaxResults = MaxResults;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UOnlineFindFriendSessionsCallbackProxy.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UOnlineFindFriendSessionsCallbackProxy::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class OnlineManager.OnlineFindFriendSessionsCallbackProxy");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function OnlineManager.OnlineFindSessionsCallbackProxy.OnlineFindSessions
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class APlayerController*                           PlayerController                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            MaxResults                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      SessionTypes                                               (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UOnlineFindSessionsCallbackProxy* UOnlineFindSessionsCallbackProxy::OnlineFindSessions(class UObject* WorldContextObject, class APlayerController* PlayerController, int32_t MaxResults, const class FString& SessionTypes)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OnlineManager.OnlineFindSessionsCallbackProxy.OnlineFindSessions");
		
		UOnlineFindSessionsCallbackProxy_OnlineFindSessions_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.PlayerController = PlayerController;
		params.MaxResults = MaxResults;
		params.SessionTypes = SessionTypes;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UOnlineFindSessionsCallbackProxy.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UOnlineFindSessionsCallbackProxy::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class OnlineManager.OnlineFindSessionsCallbackProxy");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function OnlineManager.OnlineGetFriendListCallbackProxy.OnlineGetFriendPictureURI
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FBlueprintFriendResult                      Result                                                     (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		EBlueprintProfilePictureSize                       PictureSize                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class FString UOnlineGetFriendListCallbackProxy::OnlineGetFriendPictureURI(const struct FBlueprintFriendResult& Result, EBlueprintProfilePictureSize PictureSize)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OnlineManager.OnlineGetFriendListCallbackProxy.OnlineGetFriendPictureURI");
		
		UOnlineGetFriendListCallbackProxy_OnlineGetFriendPictureURI_Params params {};
		params.Result = Result;
		params.PictureSize = PictureSize;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function OnlineManager.OnlineGetFriendListCallbackProxy.OnlineGetFriendList
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class APlayerController*                           PlayerController                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      ListName                                                   (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FName                                        SubsystemName                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UOnlineGetFriendListCallbackProxy* UOnlineGetFriendListCallbackProxy::OnlineGetFriendList(class UObject* WorldContextObject, class APlayerController* PlayerController, const class FString& ListName, const class FName& SubsystemName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OnlineManager.OnlineGetFriendListCallbackProxy.OnlineGetFriendList");
		
		UOnlineGetFriendListCallbackProxy_OnlineGetFriendList_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.PlayerController = PlayerController;
		params.ListName = ListName;
		params.SubsystemName = SubsystemName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function OnlineManager.OnlineGetFriendListCallbackProxy.OnlineGetFriendIsPlayingThisGame
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FBlueprintFriendResult                      Result                                                     (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	bool UOnlineGetFriendListCallbackProxy::OnlineGetFriendIsPlayingThisGame(const struct FBlueprintFriendResult& Result)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OnlineManager.OnlineGetFriendListCallbackProxy.OnlineGetFriendIsPlayingThisGame");
		
		UOnlineGetFriendListCallbackProxy_OnlineGetFriendIsPlayingThisGame_Params params {};
		params.Result = Result;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function OnlineManager.OnlineGetFriendListCallbackProxy.OnlineGetFriendIsPlaying
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FBlueprintFriendResult                      Result                                                     (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	bool UOnlineGetFriendListCallbackProxy::OnlineGetFriendIsPlaying(const struct FBlueprintFriendResult& Result)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OnlineManager.OnlineGetFriendListCallbackProxy.OnlineGetFriendIsPlaying");
		
		UOnlineGetFriendListCallbackProxy_OnlineGetFriendIsPlaying_Params params {};
		params.Result = Result;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function OnlineManager.OnlineGetFriendListCallbackProxy.OnlineGetFriendIsOnline
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FBlueprintFriendResult                      Result                                                     (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	bool UOnlineGetFriendListCallbackProxy::OnlineGetFriendIsOnline(const struct FBlueprintFriendResult& Result)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OnlineManager.OnlineGetFriendListCallbackProxy.OnlineGetFriendIsOnline");
		
		UOnlineGetFriendListCallbackProxy_OnlineGetFriendIsOnline_Params params {};
		params.Result = Result;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function OnlineManager.OnlineGetFriendListCallbackProxy.OnlineGetFriendIsJoinable
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FBlueprintFriendResult                      Result                                                     (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	bool UOnlineGetFriendListCallbackProxy::OnlineGetFriendIsJoinable(const struct FBlueprintFriendResult& Result)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OnlineManager.OnlineGetFriendListCallbackProxy.OnlineGetFriendIsJoinable");
		
		UOnlineGetFriendListCallbackProxy_OnlineGetFriendIsJoinable_Params params {};
		params.Result = Result;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function OnlineManager.OnlineGetFriendListCallbackProxy.OnlineGetFriendInviteState
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FBlueprintFriendResult                      Result                                                     (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	int32_t UOnlineGetFriendListCallbackProxy::OnlineGetFriendInviteState(const struct FBlueprintFriendResult& Result)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OnlineManager.OnlineGetFriendListCallbackProxy.OnlineGetFriendInviteState");
		
		UOnlineGetFriendListCallbackProxy_OnlineGetFriendInviteState_Params params {};
		params.Result = Result;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function OnlineManager.OnlineGetFriendListCallbackProxy.OnlineGetFriendDisplayName
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FBlueprintFriendResult                      Result                                                     (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	class FString UOnlineGetFriendListCallbackProxy::OnlineGetFriendDisplayName(const struct FBlueprintFriendResult& Result)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OnlineManager.OnlineGetFriendListCallbackProxy.OnlineGetFriendDisplayName");
		
		UOnlineGetFriendListCallbackProxy_OnlineGetFriendDisplayName_Params params {};
		params.Result = Result;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UOnlineGetFriendListCallbackProxy.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UOnlineGetFriendListCallbackProxy::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class OnlineManager.OnlineGetFriendListCallbackProxy");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function OnlineManager.OnlineInviteCallbackProxy.OnlineSendInvite
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class APlayerController*                           InPlayerController                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FBlueprintFriendResult                      TargetPlayer                                               (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	class UOnlineInviteCallbackProxy* UOnlineInviteCallbackProxy::OnlineSendInvite(class UObject* WorldContextObject, class APlayerController* InPlayerController, const struct FBlueprintFriendResult& TargetPlayer)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OnlineManager.OnlineInviteCallbackProxy.OnlineSendInvite");
		
		UOnlineInviteCallbackProxy_OnlineSendInvite_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.InPlayerController = InPlayerController;
		params.TargetPlayer = TargetPlayer;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function OnlineManager.OnlineInviteCallbackProxy.OnlineHasInvitationWaitingLogin
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UOnlineInviteCallbackProxy::OnlineHasInvitationWaitingLogin(class UObject* WorldContextObject)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OnlineManager.OnlineInviteCallbackProxy.OnlineHasInvitationWaitingLogin");
		
		UOnlineInviteCallbackProxy_OnlineHasInvitationWaitingLogin_Params params {};
		params.WorldContextObject = WorldContextObject;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UOnlineInviteCallbackProxy.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UOnlineInviteCallbackProxy::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class OnlineManager.OnlineInviteCallbackProxy");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function OnlineManager.OnlineLinkAccountCallbackProxy.OnlineUnlinkAccount
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class APlayerController*                           InPlayerController                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UOnlineLinkAccountCallbackProxy* UOnlineLinkAccountCallbackProxy::OnlineUnlinkAccount(class UObject* WorldContextObject, class APlayerController* InPlayerController)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OnlineManager.OnlineLinkAccountCallbackProxy.OnlineUnlinkAccount");
		
		UOnlineLinkAccountCallbackProxy_OnlineUnlinkAccount_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.InPlayerController = InPlayerController;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function OnlineManager.OnlineLinkAccountCallbackProxy.OnlineLinkAccount
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class APlayerController*                           InPlayerController                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UOnlineLinkAccountCallbackProxy* UOnlineLinkAccountCallbackProxy::OnlineLinkAccount(class UObject* WorldContextObject, class APlayerController* InPlayerController)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OnlineManager.OnlineLinkAccountCallbackProxy.OnlineLinkAccount");
		
		UOnlineLinkAccountCallbackProxy_OnlineLinkAccount_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.InPlayerController = InPlayerController;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function OnlineManager.OnlineLinkAccountCallbackProxy.OnlineIsLinked
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class APlayerController*                           InPlayerController                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UOnlineLinkAccountCallbackProxy::OnlineIsLinked(class APlayerController* InPlayerController)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OnlineManager.OnlineLinkAccountCallbackProxy.OnlineIsLinked");
		
		UOnlineLinkAccountCallbackProxy_OnlineIsLinked_Params params {};
		params.InPlayerController = InPlayerController;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function OnlineManager.OnlineLinkAccountCallbackProxy.OnlineIsAccountLinkingEnabled
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class APlayerController*                           InPlayerController                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UOnlineLinkAccountCallbackProxy::OnlineIsAccountLinkingEnabled(class APlayerController* InPlayerController)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OnlineManager.OnlineLinkAccountCallbackProxy.OnlineIsAccountLinkingEnabled");
		
		UOnlineLinkAccountCallbackProxy_OnlineIsAccountLinkingEnabled_Params params {};
		params.InPlayerController = InPlayerController;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function OnlineManager.OnlineLinkAccountCallbackProxy.OnlineGetLinkedAccountDisplayName
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class APlayerController*                           InPlayerController                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class FString UOnlineLinkAccountCallbackProxy::OnlineGetLinkedAccountDisplayName(class APlayerController* InPlayerController)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OnlineManager.OnlineLinkAccountCallbackProxy.OnlineGetLinkedAccountDisplayName");
		
		UOnlineLinkAccountCallbackProxy_OnlineGetLinkedAccountDisplayName_Params params {};
		params.InPlayerController = InPlayerController;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UOnlineLinkAccountCallbackProxy.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UOnlineLinkAccountCallbackProxy::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class OnlineManager.OnlineLinkAccountCallbackProxy");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function OnlineManager.OnlineLoginCallbackProxy.OnlineLogin
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class APlayerController*                           InPlayerController                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UOnlineLoginCallbackProxy* UOnlineLoginCallbackProxy::OnlineLogin(class UObject* WorldContextObject, class APlayerController* InPlayerController)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OnlineManager.OnlineLoginCallbackProxy.OnlineLogin");
		
		UOnlineLoginCallbackProxy_OnlineLogin_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.InPlayerController = InPlayerController;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function OnlineManager.OnlineLoginCallbackProxy.OnlineIsLoggedIn
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class APlayerController*                           InPlayerController                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UOnlineLoginCallbackProxy::OnlineIsLoggedIn(class APlayerController* InPlayerController)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OnlineManager.OnlineLoginCallbackProxy.OnlineIsLoggedIn");
		
		UOnlineLoginCallbackProxy_OnlineIsLoggedIn_Params params {};
		params.InPlayerController = InPlayerController;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function OnlineManager.OnlineLoginCallbackProxy.OnlineGetDisplayName
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class APlayerController*                           InPlayerController                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FName                                        InSubsystem                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class FString UOnlineLoginCallbackProxy::OnlineGetDisplayName(class APlayerController* InPlayerController, const class FName& InSubsystem)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OnlineManager.OnlineLoginCallbackProxy.OnlineGetDisplayName");
		
		UOnlineLoginCallbackProxy_OnlineGetDisplayName_Params params {};
		params.InPlayerController = InPlayerController;
		params.InSubsystem = InSubsystem;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UOnlineLoginCallbackProxy.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UOnlineLoginCallbackProxy::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class OnlineManager.OnlineLoginCallbackProxy");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function OnlineManager.OnlineLogoutCallbackProxy.OnlineLogout
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class APlayerController*                           InPlayerController                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UOnlineLogoutCallbackProxy* UOnlineLogoutCallbackProxy::OnlineLogout(class UObject* WorldContextObject, class APlayerController* InPlayerController)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OnlineManager.OnlineLogoutCallbackProxy.OnlineLogout");
		
		UOnlineLogoutCallbackProxy_OnlineLogout_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.InPlayerController = InPlayerController;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UOnlineLogoutCallbackProxy.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UOnlineLogoutCallbackProxy::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class OnlineManager.OnlineLogoutCallbackProxy");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UOnlineManager.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UOnlineManager::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class OnlineManager.OnlineManager");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function OnlineManager.OnlinePermissionCallbackProxy.OnlineCheckUserPrivilege
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class APlayerController*                           InPlayerController                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		EOnlineUserPrivilege                               InPrivilegeToCheck                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bSilently                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FName                                        InSubsystemName                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UOnlinePermissionCallbackProxy* UOnlinePermissionCallbackProxy::OnlineCheckUserPrivilege(class UObject* WorldContextObject, class APlayerController* InPlayerController, EOnlineUserPrivilege InPrivilegeToCheck, bool bSilently, const class FName& InSubsystemName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OnlineManager.OnlinePermissionCallbackProxy.OnlineCheckUserPrivilege");
		
		UOnlinePermissionCallbackProxy_OnlineCheckUserPrivilege_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.InPlayerController = InPlayerController;
		params.InPrivilegeToCheck = InPrivilegeToCheck;
		params.bSilently = bSilently;
		params.InSubsystemName = InSubsystemName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UOnlinePermissionCallbackProxy.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UOnlinePermissionCallbackProxy::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class OnlineManager.OnlinePermissionCallbackProxy");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function OnlineManager.OnlinePermissionToTargetCallbackProxy.OnlineCheckUserPermissionToCached
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class APlayerController*                           InPlayerController                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class APlayerState*                                TargetPlayerState                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		EOnlinePermission                                  InPermissionToCheck                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UOnlinePermissionToTargetCallbackProxy::OnlineCheckUserPermissionToCached(class APlayerController* InPlayerController, class APlayerState* TargetPlayerState, EOnlinePermission InPermissionToCheck)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OnlineManager.OnlinePermissionToTargetCallbackProxy.OnlineCheckUserPermissionToCached");
		
		UOnlinePermissionToTargetCallbackProxy_OnlineCheckUserPermissionToCached_Params params {};
		params.InPlayerController = InPlayerController;
		params.TargetPlayerState = TargetPlayerState;
		params.InPermissionToCheck = InPermissionToCheck;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function OnlineManager.OnlinePermissionToTargetCallbackProxy.OnlineCheckUserPermissionTo
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class APlayerController*                           InPlayerController                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class APlayerState*                                InTargetPlayerState                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		EOnlinePermission                                  InPermissionToCheck                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FName                                        InSubsystemName                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UOnlinePermissionToTargetCallbackProxy* UOnlinePermissionToTargetCallbackProxy::OnlineCheckUserPermissionTo(class UObject* WorldContextObject, class APlayerController* InPlayerController, class APlayerState* InTargetPlayerState, EOnlinePermission InPermissionToCheck, const class FName& InSubsystemName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OnlineManager.OnlinePermissionToTargetCallbackProxy.OnlineCheckUserPermissionTo");
		
		UOnlinePermissionToTargetCallbackProxy_OnlineCheckUserPermissionTo_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.InPlayerController = InPlayerController;
		params.InTargetPlayerState = InTargetPlayerState;
		params.InPermissionToCheck = InPermissionToCheck;
		params.InSubsystemName = InSubsystemName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UOnlinePermissionToTargetCallbackProxy.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UOnlinePermissionToTargetCallbackProxy::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class OnlineManager.OnlinePermissionToTargetCallbackProxy");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function OnlineManager.OnlineRefreshFriendListCallbackProxy.OnlineRefreshFriendList
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class APlayerController*                           PlayerController                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      ListName                                                   (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FName                                        SubsystemName                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UOnlineRefreshFriendListCallbackProxy* UOnlineRefreshFriendListCallbackProxy::OnlineRefreshFriendList(class UObject* WorldContextObject, class APlayerController* PlayerController, const class FString& ListName, const class FName& SubsystemName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OnlineManager.OnlineRefreshFriendListCallbackProxy.OnlineRefreshFriendList");
		
		UOnlineRefreshFriendListCallbackProxy_OnlineRefreshFriendList_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.PlayerController = PlayerController;
		params.ListName = ListName;
		params.SubsystemName = SubsystemName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UOnlineRefreshFriendListCallbackProxy.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UOnlineRefreshFriendListCallbackProxy::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class OnlineManager.OnlineRefreshFriendListCallbackProxy");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function OnlineManager.OnlineSteamAccountLinkingCallbackProxy.OnlineSteamAccountLinking
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class APlayerController*                           InPlayerController                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UOnlineSteamAccountLinkingCallbackProxy* UOnlineSteamAccountLinkingCallbackProxy::OnlineSteamAccountLinking(class UObject* WorldContextObject, class APlayerController* InPlayerController)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OnlineManager.OnlineSteamAccountLinkingCallbackProxy.OnlineSteamAccountLinking");
		
		UOnlineSteamAccountLinkingCallbackProxy_OnlineSteamAccountLinking_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.InPlayerController = InPlayerController;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UOnlineSteamAccountLinkingCallbackProxy.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UOnlineSteamAccountLinkingCallbackProxy::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class OnlineManager.OnlineSteamAccountLinkingCallbackProxy");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function OnlineManager.OnlineSendTextChatCallbackProxy.OnlineSetTTSEnable
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class APlayerController*                           InPlayerController                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bEnable                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UOnlineSendTextChatCallbackProxy::OnlineSetTTSEnable(class APlayerController* InPlayerController, bool bEnable)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OnlineManager.OnlineSendTextChatCallbackProxy.OnlineSetTTSEnable");
		
		UOnlineSendTextChatCallbackProxy_OnlineSetTTSEnable_Params params {};
		params.InPlayerController = InPlayerController;
		params.bEnable = bEnable;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function OnlineManager.OnlineSendTextChatCallbackProxy.OnlineSendChatMessage
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class APlayerController*                           PlayerControllerconst                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      InChatMessage                                              (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UOnlineSendTextChatCallbackProxy* UOnlineSendTextChatCallbackProxy::OnlineSendChatMessage(class UObject* WorldContextObject, class APlayerController* PlayerControllerconst, const class FString& InChatMessage)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OnlineManager.OnlineSendTextChatCallbackProxy.OnlineSendChatMessage");
		
		UOnlineSendTextChatCallbackProxy_OnlineSendChatMessage_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.PlayerControllerconst = PlayerControllerconst;
		params.InChatMessage = InChatMessage;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function OnlineManager.OnlineSendTextChatCallbackProxy.OnlineIsTTSEnabled
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class APlayerController*                           InPlayerController                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UOnlineSendTextChatCallbackProxy::OnlineIsTTSEnabled(class APlayerController* InPlayerController)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OnlineManager.OnlineSendTextChatCallbackProxy.OnlineIsTTSEnabled");
		
		UOnlineSendTextChatCallbackProxy_OnlineIsTTSEnabled_Params params {};
		params.InPlayerController = InPlayerController;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UOnlineSendTextChatCallbackProxy.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UOnlineSendTextChatCallbackProxy::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class OnlineManager.OnlineSendTextChatCallbackProxy");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function OnlineManager.OnlineVOIPBluePrintFunctionLibrary.OnlineVoiceSetPlayerVolume
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class APlayerController*                           InPlayerController                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class APlayerState*                                TargetPlayerState                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              InVolume                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UOnlineVOIPBluePrintFunctionLibrary::OnlineVoiceSetPlayerVolume(class APlayerController* InPlayerController, class APlayerState* TargetPlayerState, float InVolume)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OnlineManager.OnlineVOIPBluePrintFunctionLibrary.OnlineVoiceSetPlayerVolume");
		
		UOnlineVOIPBluePrintFunctionLibrary_OnlineVoiceSetPlayerVolume_Params params {};
		params.InPlayerController = InPlayerController;
		params.TargetPlayerState = TargetPlayerState;
		params.InVolume = InVolume;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function OnlineManager.OnlineVOIPBluePrintFunctionLibrary.OnlineVoicePlayerIsMuted
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class APlayerController*                           InPlayerController                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class APlayerState*                                TargetPlayerState                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UOnlineVOIPBluePrintFunctionLibrary::OnlineVoicePlayerIsMuted(class APlayerController* InPlayerController, class APlayerState* TargetPlayerState)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OnlineManager.OnlineVOIPBluePrintFunctionLibrary.OnlineVoicePlayerIsMuted");
		
		UOnlineVOIPBluePrintFunctionLibrary_OnlineVoicePlayerIsMuted_Params params {};
		params.InPlayerController = InPlayerController;
		params.TargetPlayerState = TargetPlayerState;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function OnlineManager.OnlineVOIPBluePrintFunctionLibrary.OnlineVoiceMutePlayer
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class APlayerController*                           InPlayerController                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class APlayerState*                                TargetPlayerState                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bMute                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UOnlineVOIPBluePrintFunctionLibrary::OnlineVoiceMutePlayer(class APlayerController* InPlayerController, class APlayerState* TargetPlayerState, bool bMute)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OnlineManager.OnlineVOIPBluePrintFunctionLibrary.OnlineVoiceMutePlayer");
		
		UOnlineVOIPBluePrintFunctionLibrary_OnlineVoiceMutePlayer_Params params {};
		params.InPlayerController = InPlayerController;
		params.TargetPlayerState = TargetPlayerState;
		params.bMute = bMute;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function OnlineManager.OnlineVOIPBluePrintFunctionLibrary.OnlineVoiceMicIsEnabled
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class APlayerController*                           InPlayerController                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UOnlineVOIPBluePrintFunctionLibrary::OnlineVoiceMicIsEnabled(class APlayerController* InPlayerController)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OnlineManager.OnlineVOIPBluePrintFunctionLibrary.OnlineVoiceMicIsEnabled");
		
		UOnlineVOIPBluePrintFunctionLibrary_OnlineVoiceMicIsEnabled_Params params {};
		params.InPlayerController = InPlayerController;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function OnlineManager.OnlineVOIPBluePrintFunctionLibrary.OnlineVoiceIsPlayerTalking
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class APlayerState*                                TargetPlayerState                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UOnlineVOIPBluePrintFunctionLibrary::OnlineVoiceIsPlayerTalking(class APlayerState* TargetPlayerState)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OnlineManager.OnlineVOIPBluePrintFunctionLibrary.OnlineVoiceIsPlayerTalking");
		
		UOnlineVOIPBluePrintFunctionLibrary_OnlineVoiceIsPlayerTalking_Params params {};
		params.TargetPlayerState = TargetPlayerState;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function OnlineManager.OnlineVOIPBluePrintFunctionLibrary.OnlineVoiceIsPlayerIncomingChannelEnabled
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class APlayerController*                           InPlayerController                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class APlayerState*                                TargetPlayerState                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		EOnlineVoiceIncomingChannel                        IncomingChannel                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UOnlineVOIPBluePrintFunctionLibrary::OnlineVoiceIsPlayerIncomingChannelEnabled(class APlayerController* InPlayerController, class APlayerState* TargetPlayerState, EOnlineVoiceIncomingChannel IncomingChannel)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OnlineManager.OnlineVOIPBluePrintFunctionLibrary.OnlineVoiceIsPlayerIncomingChannelEnabled");
		
		UOnlineVOIPBluePrintFunctionLibrary_OnlineVoiceIsPlayerIncomingChannelEnabled_Params params {};
		params.InPlayerController = InPlayerController;
		params.TargetPlayerState = TargetPlayerState;
		params.IncomingChannel = IncomingChannel;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function OnlineManager.OnlineVOIPBluePrintFunctionLibrary.OnlineVoiceIsLocalPlayerTalking
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class APlayerController*                           InPlayerController                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UOnlineVOIPBluePrintFunctionLibrary::OnlineVoiceIsLocalPlayerTalking(class APlayerController* InPlayerController)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OnlineManager.OnlineVOIPBluePrintFunctionLibrary.OnlineVoiceIsLocalPlayerTalking");
		
		UOnlineVOIPBluePrintFunctionLibrary_OnlineVoiceIsLocalPlayerTalking_Params params {};
		params.InPlayerController = InPlayerController;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function OnlineManager.OnlineVOIPBluePrintFunctionLibrary.OnlineVoiceGetPlayerVolume
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class APlayerController*                           InPlayerController                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class APlayerState*                                TargetPlayerState                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	float UOnlineVOIPBluePrintFunctionLibrary::OnlineVoiceGetPlayerVolume(class APlayerController* InPlayerController, class APlayerState* TargetPlayerState)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OnlineManager.OnlineVOIPBluePrintFunctionLibrary.OnlineVoiceGetPlayerVolume");
		
		UOnlineVOIPBluePrintFunctionLibrary_OnlineVoiceGetPlayerVolume_Params params {};
		params.InPlayerController = InPlayerController;
		params.TargetPlayerState = TargetPlayerState;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function OnlineManager.OnlineVOIPBluePrintFunctionLibrary.OnlineVoiceEnablePlayerIncomingChannel
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class APlayerController*                           InPlayerController                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class APlayerState*                                TargetPlayerState                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		EOnlineVoiceIncomingChannel                        IncomingChannel                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bEnable                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UOnlineVOIPBluePrintFunctionLibrary::OnlineVoiceEnablePlayerIncomingChannel(class APlayerController* InPlayerController, class APlayerState* TargetPlayerState, EOnlineVoiceIncomingChannel IncomingChannel, bool bEnable)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OnlineManager.OnlineVOIPBluePrintFunctionLibrary.OnlineVoiceEnablePlayerIncomingChannel");
		
		UOnlineVOIPBluePrintFunctionLibrary_OnlineVoiceEnablePlayerIncomingChannel_Params params {};
		params.InPlayerController = InPlayerController;
		params.TargetPlayerState = TargetPlayerState;
		params.IncomingChannel = IncomingChannel;
		params.bEnable = bEnable;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function OnlineManager.OnlineVOIPBluePrintFunctionLibrary.OnlineVoiceEnableMic
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class APlayerController*                           InPlayerController                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bEnable                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UOnlineVOIPBluePrintFunctionLibrary::OnlineVoiceEnableMic(class APlayerController* InPlayerController, bool bEnable)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OnlineManager.OnlineVOIPBluePrintFunctionLibrary.OnlineVoiceEnableMic");
		
		UOnlineVOIPBluePrintFunctionLibrary_OnlineVoiceEnableMic_Params params {};
		params.InPlayerController = InPlayerController;
		params.bEnable = bEnable;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UOnlineVOIPBluePrintFunctionLibrary.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UOnlineVOIPBluePrintFunctionLibrary::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class OnlineManager.OnlineVOIPBluePrintFunctionLibrary");
		return ptr;
	}

}


