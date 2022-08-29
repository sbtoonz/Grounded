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
	 * Function OnlineManager.OnlineCheckTimeSyncCallbackProxy.OnlineCheckTimeSync
	 */
	struct UOnlineCheckTimeSyncCallbackProxy_OnlineCheckTimeSync_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UOnlineCheckTimeSyncCallbackProxy*                   ReturnValue;                                             // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * DelegateFunction OnlineManager.OnlineCheckTimeSyncCallbackProxy.OnCompletedDelegate__DelegateSignature
	 */
	struct UOnlineCheckTimeSyncCallbackProxy_OnCompletedDelegate__DelegateSignature_Params
	{
	public:
		float                                                      TimeOffsetSec;                                           // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      NetworkDelaySec;                                         // 0x0004(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OnlineManager.OnlineConstantCallbackProxy.OnlineSynchronizeConstant
	 */
	struct UOnlineConstantCallbackProxy_OnlineSynchronizeConstant_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class APlayerController*                                   InPlayerController;                                      // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UOnlineConstantCallbackProxy*                        ReturnValue;                                             // 0x0010(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OnlineManager.OnlineConstantCallbackProxy.OnlineConstantGetString
	 */
	struct UOnlineConstantCallbackProxy_OnlineConstantGetString_Params
	{
	public:
		class FString                                              ConstantName;                                            // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              DefaultValue;                                            // 0x0010(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              ReturnValue;                                             // 0x0020(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OnlineManager.OnlineConstantCallbackProxy.OnlineConstantGetInt
	 */
	struct UOnlineConstantCallbackProxy_OnlineConstantGetInt_Params
	{
	public:
		class FString                                              ConstantName;                                            // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    DefaultValue;                                            // 0x0010(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    ReturnValue;                                             // 0x0014(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OnlineManager.OnlineConstantCallbackProxy.OnlineConstantGetFloat
	 */
	struct UOnlineConstantCallbackProxy_OnlineConstantGetFloat_Params
	{
	public:
		class FString                                              ConstantName;                                            // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      DefaultValue;                                            // 0x0010(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      ReturnValue;                                             // 0x0014(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OnlineManager.OnlineConstantCallbackProxy.OnlineConstantGetBool
	 */
	struct UOnlineConstantCallbackProxy_OnlineConstantGetBool_Params
	{
	public:
		class FString                                              ConstantName;                                            // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       DefaultValue;                                            // 0x0010(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0011(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OnlineManager.OnlineConstantCallbackProxy.OnlineConstantCheckOnlineVersion
	 */
	struct UOnlineConstantCallbackProxy_OnlineConstantCheckOnlineVersion_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OnlineManager.OnlineFindFriendSessionsCallbackProxy.OnlineFindFriendSessions
	 */
	struct UOnlineFindFriendSessionsCallbackProxy_OnlineFindFriendSessions_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class APlayerController*                                   PlayerController;                                        // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    MaxResults;                                              // 0x0010(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_8A8B[0x4];                                   // 0x0014(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UOnlineFindFriendSessionsCallbackProxy*              ReturnValue;                                             // 0x0018(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OnlineManager.OnlineFindSessionsCallbackProxy.OnlineFindSessions
	 */
	struct UOnlineFindSessionsCallbackProxy_OnlineFindSessions_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class APlayerController*                                   PlayerController;                                        // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    MaxResults;                                              // 0x0010(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_54IT[0x4];                                   // 0x0014(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FString                                              SessionTypes;                                            // 0x0018(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UOnlineFindSessionsCallbackProxy*                    ReturnValue;                                             // 0x0028(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OnlineManager.OnlineGetFriendListCallbackProxy.OnlineGetFriendPictureURI
	 */
	struct UOnlineGetFriendListCallbackProxy_OnlineGetFriendPictureURI_Params
	{
	public:
		struct FBlueprintFriendResult                              Result;                                                  // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		EBlueprintProfilePictureSize                               PictureSize;                                             // 0x0010(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_A2BM[0x7];                                   // 0x0011(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FString                                              ReturnValue;                                             // 0x0018(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OnlineManager.OnlineGetFriendListCallbackProxy.OnlineGetFriendList
	 */
	struct UOnlineGetFriendListCallbackProxy_OnlineGetFriendList_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class APlayerController*                                   PlayerController;                                        // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              ListName;                                                // 0x0010(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FName                                                SubsystemName;                                           // 0x0020(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UOnlineGetFriendListCallbackProxy*                   ReturnValue;                                             // 0x0028(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OnlineManager.OnlineGetFriendListCallbackProxy.OnlineGetFriendIsPlayingThisGame
	 */
	struct UOnlineGetFriendListCallbackProxy_OnlineGetFriendIsPlayingThisGame_Params
	{
	public:
		struct FBlueprintFriendResult                              Result;                                                  // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0010(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OnlineManager.OnlineGetFriendListCallbackProxy.OnlineGetFriendIsPlaying
	 */
	struct UOnlineGetFriendListCallbackProxy_OnlineGetFriendIsPlaying_Params
	{
	public:
		struct FBlueprintFriendResult                              Result;                                                  // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0010(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OnlineManager.OnlineGetFriendListCallbackProxy.OnlineGetFriendIsOnline
	 */
	struct UOnlineGetFriendListCallbackProxy_OnlineGetFriendIsOnline_Params
	{
	public:
		struct FBlueprintFriendResult                              Result;                                                  // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0010(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OnlineManager.OnlineGetFriendListCallbackProxy.OnlineGetFriendIsJoinable
	 */
	struct UOnlineGetFriendListCallbackProxy_OnlineGetFriendIsJoinable_Params
	{
	public:
		struct FBlueprintFriendResult                              Result;                                                  // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0010(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OnlineManager.OnlineGetFriendListCallbackProxy.OnlineGetFriendInviteState
	 */
	struct UOnlineGetFriendListCallbackProxy_OnlineGetFriendInviteState_Params
	{
	public:
		struct FBlueprintFriendResult                              Result;                                                  // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		int32_t                                                    ReturnValue;                                             // 0x0010(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OnlineManager.OnlineGetFriendListCallbackProxy.OnlineGetFriendDisplayName
	 */
	struct UOnlineGetFriendListCallbackProxy_OnlineGetFriendDisplayName_Params
	{
	public:
		struct FBlueprintFriendResult                              Result;                                                  // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		class FString                                              ReturnValue;                                             // 0x0010(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OnlineManager.OnlineInviteCallbackProxy.OnlineSendInvite
	 */
	struct UOnlineInviteCallbackProxy_OnlineSendInvite_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class APlayerController*                                   InPlayerController;                                      // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FBlueprintFriendResult                              TargetPlayer;                                            // 0x0010(0x0010)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		class UOnlineInviteCallbackProxy*                          ReturnValue;                                             // 0x0020(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OnlineManager.OnlineInviteCallbackProxy.OnlineHasInvitationWaitingLogin
	 */
	struct UOnlineInviteCallbackProxy_OnlineHasInvitationWaitingLogin_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OnlineManager.OnlineLinkAccountCallbackProxy.OnlineUnlinkAccount
	 */
	struct UOnlineLinkAccountCallbackProxy_OnlineUnlinkAccount_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class APlayerController*                                   InPlayerController;                                      // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UOnlineLinkAccountCallbackProxy*                     ReturnValue;                                             // 0x0010(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OnlineManager.OnlineLinkAccountCallbackProxy.OnlineLinkAccount
	 */
	struct UOnlineLinkAccountCallbackProxy_OnlineLinkAccount_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class APlayerController*                                   InPlayerController;                                      // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UOnlineLinkAccountCallbackProxy*                     ReturnValue;                                             // 0x0010(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OnlineManager.OnlineLinkAccountCallbackProxy.OnlineIsLinked
	 */
	struct UOnlineLinkAccountCallbackProxy_OnlineIsLinked_Params
	{
	public:
		class APlayerController*                                   InPlayerController;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OnlineManager.OnlineLinkAccountCallbackProxy.OnlineIsAccountLinkingEnabled
	 */
	struct UOnlineLinkAccountCallbackProxy_OnlineIsAccountLinkingEnabled_Params
	{
	public:
		class APlayerController*                                   InPlayerController;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OnlineManager.OnlineLinkAccountCallbackProxy.OnlineGetLinkedAccountDisplayName
	 */
	struct UOnlineLinkAccountCallbackProxy_OnlineGetLinkedAccountDisplayName_Params
	{
	public:
		class APlayerController*                                   InPlayerController;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              ReturnValue;                                             // 0x0008(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OnlineManager.OnlineLoginCallbackProxy.OnlineLogin
	 */
	struct UOnlineLoginCallbackProxy_OnlineLogin_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class APlayerController*                                   InPlayerController;                                      // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UOnlineLoginCallbackProxy*                           ReturnValue;                                             // 0x0010(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OnlineManager.OnlineLoginCallbackProxy.OnlineIsLoggedIn
	 */
	struct UOnlineLoginCallbackProxy_OnlineIsLoggedIn_Params
	{
	public:
		class APlayerController*                                   InPlayerController;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OnlineManager.OnlineLoginCallbackProxy.OnlineGetDisplayName
	 */
	struct UOnlineLoginCallbackProxy_OnlineGetDisplayName_Params
	{
	public:
		class APlayerController*                                   InPlayerController;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FName                                                InSubsystem;                                             // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              ReturnValue;                                             // 0x0010(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OnlineManager.OnlineLogoutCallbackProxy.OnlineLogout
	 */
	struct UOnlineLogoutCallbackProxy_OnlineLogout_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class APlayerController*                                   InPlayerController;                                      // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UOnlineLogoutCallbackProxy*                          ReturnValue;                                             // 0x0010(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OnlineManager.OnlinePermissionCallbackProxy.OnlineCheckUserPrivilege
	 */
	struct UOnlinePermissionCallbackProxy_OnlineCheckUserPrivilege_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class APlayerController*                                   InPlayerController;                                      // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		EOnlineUserPrivilege                                       InPrivilegeToCheck;                                      // 0x0010(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bSilently;                                               // 0x0011(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_EFJY[0x2];                                   // 0x0012(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FName                                                InSubsystemName;                                         // 0x0014(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_BEJN[0x4];                                   // 0x001C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UOnlinePermissionCallbackProxy*                      ReturnValue;                                             // 0x0020(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OnlineManager.OnlinePermissionToTargetCallbackProxy.OnlineCheckUserPermissionToCached
	 */
	struct UOnlinePermissionToTargetCallbackProxy_OnlineCheckUserPermissionToCached_Params
	{
	public:
		class APlayerController*                                   InPlayerController;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class APlayerState*                                        TargetPlayerState;                                       // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		EOnlinePermission                                          InPermissionToCheck;                                     // 0x0010(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0011(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OnlineManager.OnlinePermissionToTargetCallbackProxy.OnlineCheckUserPermissionTo
	 */
	struct UOnlinePermissionToTargetCallbackProxy_OnlineCheckUserPermissionTo_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class APlayerController*                                   InPlayerController;                                      // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class APlayerState*                                        InTargetPlayerState;                                     // 0x0010(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		EOnlinePermission                                          InPermissionToCheck;                                     // 0x0018(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_MP24[0x3];                                   // 0x0019(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FName                                                InSubsystemName;                                         // 0x001C(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_UR4W[0x4];                                   // 0x0024(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UOnlinePermissionToTargetCallbackProxy*              ReturnValue;                                             // 0x0028(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OnlineManager.OnlineRefreshFriendListCallbackProxy.OnlineRefreshFriendList
	 */
	struct UOnlineRefreshFriendListCallbackProxy_OnlineRefreshFriendList_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class APlayerController*                                   PlayerController;                                        // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              ListName;                                                // 0x0010(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FName                                                SubsystemName;                                           // 0x0020(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UOnlineRefreshFriendListCallbackProxy*               ReturnValue;                                             // 0x0028(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OnlineManager.OnlineSteamAccountLinkingCallbackProxy.OnlineSteamAccountLinking
	 */
	struct UOnlineSteamAccountLinkingCallbackProxy_OnlineSteamAccountLinking_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class APlayerController*                                   InPlayerController;                                      // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UOnlineSteamAccountLinkingCallbackProxy*             ReturnValue;                                             // 0x0010(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OnlineManager.OnlineSendTextChatCallbackProxy.OnlineSetTTSEnable
	 */
	struct UOnlineSendTextChatCallbackProxy_OnlineSetTTSEnable_Params
	{
	public:
		class APlayerController*                                   InPlayerController;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bEnable;                                                 // 0x0008(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OnlineManager.OnlineSendTextChatCallbackProxy.OnlineSendChatMessage
	 */
	struct UOnlineSendTextChatCallbackProxy_OnlineSendChatMessage_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class APlayerController*                                   PlayerControllerconst;                                   // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              InChatMessage;                                           // 0x0010(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UOnlineSendTextChatCallbackProxy*                    ReturnValue;                                             // 0x0020(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OnlineManager.OnlineSendTextChatCallbackProxy.OnlineIsTTSEnabled
	 */
	struct UOnlineSendTextChatCallbackProxy_OnlineIsTTSEnabled_Params
	{
	public:
		class APlayerController*                                   InPlayerController;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OnlineManager.OnlineVOIPBluePrintFunctionLibrary.OnlineVoiceSetPlayerVolume
	 */
	struct UOnlineVOIPBluePrintFunctionLibrary_OnlineVoiceSetPlayerVolume_Params
	{
	public:
		class APlayerController*                                   InPlayerController;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class APlayerState*                                        TargetPlayerState;                                       // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      InVolume;                                                // 0x0010(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0014(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OnlineManager.OnlineVOIPBluePrintFunctionLibrary.OnlineVoicePlayerIsMuted
	 */
	struct UOnlineVOIPBluePrintFunctionLibrary_OnlineVoicePlayerIsMuted_Params
	{
	public:
		class APlayerController*                                   InPlayerController;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class APlayerState*                                        TargetPlayerState;                                       // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0010(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OnlineManager.OnlineVOIPBluePrintFunctionLibrary.OnlineVoiceMutePlayer
	 */
	struct UOnlineVOIPBluePrintFunctionLibrary_OnlineVoiceMutePlayer_Params
	{
	public:
		class APlayerController*                                   InPlayerController;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class APlayerState*                                        TargetPlayerState;                                       // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bMute;                                                   // 0x0010(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OnlineManager.OnlineVOIPBluePrintFunctionLibrary.OnlineVoiceMicIsEnabled
	 */
	struct UOnlineVOIPBluePrintFunctionLibrary_OnlineVoiceMicIsEnabled_Params
	{
	public:
		class APlayerController*                                   InPlayerController;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OnlineManager.OnlineVOIPBluePrintFunctionLibrary.OnlineVoiceIsPlayerTalking
	 */
	struct UOnlineVOIPBluePrintFunctionLibrary_OnlineVoiceIsPlayerTalking_Params
	{
	public:
		class APlayerState*                                        TargetPlayerState;                                       // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OnlineManager.OnlineVOIPBluePrintFunctionLibrary.OnlineVoiceIsPlayerIncomingChannelEnabled
	 */
	struct UOnlineVOIPBluePrintFunctionLibrary_OnlineVoiceIsPlayerIncomingChannelEnabled_Params
	{
	public:
		class APlayerController*                                   InPlayerController;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class APlayerState*                                        TargetPlayerState;                                       // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		EOnlineVoiceIncomingChannel                                IncomingChannel;                                         // 0x0010(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0011(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OnlineManager.OnlineVOIPBluePrintFunctionLibrary.OnlineVoiceIsLocalPlayerTalking
	 */
	struct UOnlineVOIPBluePrintFunctionLibrary_OnlineVoiceIsLocalPlayerTalking_Params
	{
	public:
		class APlayerController*                                   InPlayerController;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OnlineManager.OnlineVOIPBluePrintFunctionLibrary.OnlineVoiceGetPlayerVolume
	 */
	struct UOnlineVOIPBluePrintFunctionLibrary_OnlineVoiceGetPlayerVolume_Params
	{
	public:
		class APlayerController*                                   InPlayerController;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class APlayerState*                                        TargetPlayerState;                                       // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      ReturnValue;                                             // 0x0010(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OnlineManager.OnlineVOIPBluePrintFunctionLibrary.OnlineVoiceEnablePlayerIncomingChannel
	 */
	struct UOnlineVOIPBluePrintFunctionLibrary_OnlineVoiceEnablePlayerIncomingChannel_Params
	{
	public:
		class APlayerController*                                   InPlayerController;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class APlayerState*                                        TargetPlayerState;                                       // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		EOnlineVoiceIncomingChannel                                IncomingChannel;                                         // 0x0010(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bEnable;                                                 // 0x0011(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OnlineManager.OnlineVOIPBluePrintFunctionLibrary.OnlineVoiceEnableMic
	 */
	struct UOnlineVOIPBluePrintFunctionLibrary_OnlineVoiceEnableMic_Params
	{
	public:
		class APlayerController*                                   InPlayerController;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bEnable;                                                 // 0x0008(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
