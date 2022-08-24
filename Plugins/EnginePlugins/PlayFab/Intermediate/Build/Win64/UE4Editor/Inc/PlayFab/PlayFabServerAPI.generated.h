// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FPlayFabError;
class UObject;
struct FServerModifyCharacterVirtualCurrencyResult;
struct FServerEmptyResponse;
struct FServerEmptyResult;
struct FServerAddPlayerTagResult;
struct FServerAddSharedGroupMembersResult;
struct FServerModifyUserVirtualCurrencyResult;
struct FServerAuthenticateSessionTicketResult;
struct FServerAwardSteamAchievementResult;
struct FServerBanUsersResult;
struct FServerConsumeItemResult;
struct FServerCreateSharedGroupResult;
struct FServerDeleteCharacterFromUserResult;
struct FServerDeletePlayerResult;
struct FServerDeletePushNotificationTemplateResult;
struct FServerDeregisterGameResponse;
struct FServerEvaluateRandomResultTableResult;
struct FServerExecuteCloudScriptResult;
struct FServerGetAllSegmentsResult;
struct FServerListUsersCharactersResult;
struct FServerGetCatalogItemsResult;
struct FServerGetCharacterDataResult;
struct FServerGetCharacterInventoryResult;
struct FServerGetCharacterLeaderboardResult;
struct FServerGetCharacterStatisticsResult;
struct FServerGetContentDownloadUrlResult;
struct FServerGetLeaderboardResult;
struct FServerGetFriendsListResult;
struct FServerGetLeaderboardAroundCharacterResult;
struct FServerGetLeaderboardAroundUserResult;
struct FServerGetLeaderboardForUsersCharactersResult;
struct FServerGetPlayerCombinedInfoResult;
struct FServerGetPlayerProfileResult;
struct FServerGetPlayerSegmentsResult;
struct FServerGetPlayersInSegmentResult;
struct FServerGetPlayerStatisticsResult;
struct FServerGetPlayerStatisticVersionsResult;
struct FServerGetPlayerTagsResult;
struct FServerGetPlayFabIDsFromFacebookIDsResult;
struct FServerGetPlayFabIDsFromFacebookInstantGamesIdsResult;
struct FServerGetPlayFabIDsFromGenericIDsResult;
struct FServerGetPlayFabIDsFromNintendoSwitchDeviceIdsResult;
struct FServerGetPlayFabIDsFromPSNAccountIDsResult;
struct FServerGetPlayFabIDsFromSteamIDsResult;
struct FServerGetPlayFabIDsFromXboxLiveIDsResult;
struct FServerGetPublisherDataResult;
struct FServerGetRandomResultTablesResult;
struct FServerGetServerCustomIDsFromPlayFabIDsResult;
struct FServerGetSharedGroupDataResult;
struct FServerGetStoreItemsResult;
struct FServerGetTimeResult;
struct FServerGetTitleDataResult;
struct FServerGetTitleNewsResult;
struct FServerGetUserAccountInfoResult;
struct FServerGetUserBansResult;
struct FServerGetUserDataResult;
struct FServerGetUserInventoryResult;
struct FServerGrantCharacterToUserResult;
struct FServerGrantItemsToCharacterResult;
struct FServerGrantItemsToUserResult;
struct FServerGrantItemsToUsersResult;
struct FServerLinkPSNAccountResult;
struct FServerLinkServerCustomIdResult;
struct FServerLinkXboxAccountResult;
struct FServerServerLoginResult;
struct FServerModifyItemUsesResult;
struct FServerMoveItemToCharacterFromCharacterResult;
struct FServerMoveItemToCharacterFromUserResult;
struct FServerMoveItemToUserFromCharacterResult;
struct FServerNotifyMatchmakerPlayerLeftResult;
struct FServerRedeemCouponResult;
struct FServerRedeemMatchmakerTicketResult;
struct FServerRefreshGameServerInstanceHeartbeatResult;
struct FServerRegisterGameResponse;
struct FServerRemovePlayerTagResult;
struct FServerRemoveSharedGroupMembersResult;
struct FServerReportPlayerServerResult;
struct FServerRevokeAllBansForUserResult;
struct FServerRevokeBansResult;
struct FServerRevokeInventoryResult;
struct FServerRevokeInventoryItemsResult;
struct FServerSavePushNotificationTemplateResult;
struct FServerSendCustomAccountRecoveryEmailResult;
struct FServerSendEmailFromTemplateResult;
struct FServerSendPushNotificationResult;
struct FServerSetGameServerInstanceDataResult;
struct FServerSetGameServerInstanceStateResult;
struct FServerSetGameServerInstanceTagsResult;
struct FServerSetPlayerSecretResult;
struct FServerSetPublisherDataResult;
struct FServerSetTitleDataResult;
struct FServerUnlinkPSNAccountResult;
struct FServerUnlinkServerCustomIdResult;
struct FServerUnlinkXboxAccountResult;
struct FServerUnlockContainerItemResult;
struct FServerUpdateBansResult;
struct FServerUpdateCharacterDataResult;
struct FServerUpdateCharacterStatisticsResult;
struct FServerUpdatePlayerStatisticsResult;
struct FServerUpdateSharedGroupDataResult;
struct FServerUpdateUserDataResult;
struct FServerWriteEventResponse;
struct FServerAddCharacterVirtualCurrencyRequest;
class UPlayFabServerAPI;
struct FServerAddFriendRequest;
struct FServerAddGenericIDRequest;
struct FServerAddPlayerTagRequest;
struct FServerAddSharedGroupMembersRequest;
struct FServerAddUserVirtualCurrencyRequest;
struct FServerAuthenticateSessionTicketRequest;
struct FServerAwardSteamAchievementRequest;
struct FServerBanUsersRequest;
struct FServerConsumeItemRequest;
struct FServerCreateSharedGroupRequest;
struct FServerDeleteCharacterFromUserRequest;
struct FServerDeletePlayerRequest;
struct FServerDeletePushNotificationTemplateRequest;
struct FServerDeleteSharedGroupRequest;
struct FServerDeregisterGameRequest;
struct FServerEvaluateRandomResultTableRequest;
struct FServerExecuteCloudScriptServerRequest;
struct FServerGetAllSegmentsRequest;
struct FServerListUsersCharactersRequest;
struct FServerGetCatalogItemsRequest;
struct FServerGetCharacterDataRequest;
struct FServerGetCharacterInventoryRequest;
struct FServerGetCharacterLeaderboardRequest;
struct FServerGetCharacterStatisticsRequest;
struct FServerGetContentDownloadUrlRequest;
struct FServerGetFriendLeaderboardRequest;
struct FServerGetFriendsListRequest;
struct FServerGetLeaderboardRequest;
struct FServerGetLeaderboardAroundCharacterRequest;
struct FServerGetLeaderboardAroundUserRequest;
struct FServerGetLeaderboardForUsersCharactersRequest;
struct FServerGetPlayerCombinedInfoRequest;
struct FServerGetPlayerProfileRequest;
struct FServerGetPlayersSegmentsRequest;
struct FServerGetPlayersInSegmentRequest;
struct FServerGetPlayerStatisticsRequest;
struct FServerGetPlayerStatisticVersionsRequest;
struct FServerGetPlayerTagsRequest;
struct FServerGetPlayFabIDsFromFacebookIDsRequest;
struct FServerGetPlayFabIDsFromFacebookInstantGamesIdsRequest;
struct FServerGetPlayFabIDsFromGenericIDsRequest;
struct FServerGetPlayFabIDsFromNintendoSwitchDeviceIdsRequest;
struct FServerGetPlayFabIDsFromPSNAccountIDsRequest;
struct FServerGetPlayFabIDsFromSteamIDsRequest;
struct FServerGetPlayFabIDsFromXboxLiveIDsRequest;
struct FServerGetPublisherDataRequest;
struct FServerGetRandomResultTablesRequest;
struct FServerGetServerCustomIDsFromPlayFabIDsRequest;
struct FServerGetSharedGroupDataRequest;
struct FServerGetStoreItemsServerRequest;
struct FServerGetTimeRequest;
struct FServerGetTitleDataRequest;
struct FServerGetTitleNewsRequest;
struct FServerGetUserAccountInfoRequest;
struct FServerGetUserBansRequest;
struct FServerGetUserDataRequest;
struct FServerGetUserInventoryRequest;
struct FServerGrantCharacterToUserRequest;
struct FServerGrantItemsToCharacterRequest;
struct FServerGrantItemsToUserRequest;
struct FServerGrantItemsToUsersRequest;
struct FPlayFabBaseModel;
struct FServerLinkPSNAccountRequest;
struct FServerLinkServerCustomIdRequest;
struct FServerLinkXboxAccountRequest;
struct FServerLoginWithServerCustomIdRequest;
struct FServerLoginWithXboxRequest;
struct FServerLoginWithXboxIdRequest;
struct FServerModifyItemUsesRequest;
struct FServerMoveItemToCharacterFromCharacterRequest;
struct FServerMoveItemToCharacterFromUserRequest;
struct FServerMoveItemToUserFromCharacterRequest;
struct FServerNotifyMatchmakerPlayerLeftRequest;
struct FServerRedeemCouponRequest;
struct FServerRedeemMatchmakerTicketRequest;
struct FServerRefreshGameServerInstanceHeartbeatRequest;
struct FServerRegisterGameRequest;
struct FServerRemoveFriendRequest;
struct FServerRemoveGenericIDRequest;
struct FServerRemovePlayerTagRequest;
struct FServerRemoveSharedGroupMembersRequest;
struct FServerReportPlayerServerRequest;
struct FServerRevokeAllBansForUserRequest;
struct FServerRevokeBansRequest;
struct FServerRevokeInventoryItemRequest;
struct FServerRevokeInventoryItemsRequest;
struct FServerSavePushNotificationTemplateRequest;
struct FServerSendCustomAccountRecoveryEmailRequest;
struct FServerSendEmailFromTemplateRequest;
struct FServerSendPushNotificationRequest;
struct FServerSendPushNotificationFromTemplateRequest;
struct FServerSetFriendTagsRequest;
struct FServerSetGameServerInstanceDataRequest;
struct FServerSetGameServerInstanceStateRequest;
struct FServerSetGameServerInstanceTagsRequest;
struct FServerSetPlayerSecretRequest;
struct FServerSetPublisherDataRequest;
struct FServerSetTitleDataRequest;
struct FServerSubtractCharacterVirtualCurrencyRequest;
struct FServerSubtractUserVirtualCurrencyRequest;
struct FServerUnlinkPSNAccountRequest;
struct FServerUnlinkServerCustomIdRequest;
struct FServerUnlinkXboxAccountRequest;
struct FServerUnlockContainerInstanceRequest;
struct FServerUnlockContainerItemRequest;
struct FServerUpdateAvatarUrlRequest;
struct FServerUpdateBansRequest;
struct FServerUpdateCharacterDataRequest;
struct FServerUpdateCharacterStatisticsRequest;
struct FServerUpdatePlayerStatisticsRequest;
struct FServerUpdateSharedGroupDataRequest;
struct FServerUpdateUserDataRequest;
struct FServerUpdateUserInternalDataRequest;
struct FServerUpdateUserInventoryItemDataRequest;
struct FServerWriteServerCharacterEventRequest;
struct FServerWriteServerPlayerEventRequest;
struct FServerWriteTitleEventRequest;
#ifdef PLAYFAB_PlayFabServerAPI_generated_h
#error "PlayFabServerAPI.generated.h already included, missing '#pragma once' in PlayFabServerAPI.h"
#endif
#define PLAYFAB_PlayFabServerAPI_generated_h

#define Test_Plugins_EnginePlugins_PlayFab_Source_PlayFab_Public_PlayFabServerAPI_h_368_DELEGATE \
struct PlayFabServerAPI_eventDelegateOnFailurePlayFabError_Parms \
{ \
	FPlayFabError Error; \
	UObject* customData; \
}; \
static inline void FDelegateOnFailurePlayFabError_DelegateWrapper(const FScriptDelegate& DelegateOnFailurePlayFabError, FPlayFabError Error, UObject* customData) \
{ \
	PlayFabServerAPI_eventDelegateOnFailurePlayFabError_Parms Parms; \
	Parms.Error=Error; \
	Parms.customData=customData; \
	DelegateOnFailurePlayFabError.ProcessDelegate<UObject>(&Parms); \
}


#define Test_Plugins_EnginePlugins_PlayFab_Source_PlayFab_Public_PlayFabServerAPI_h_367_DELEGATE \
struct PlayFabServerAPI_eventDelegateOnSuccessAddCharacterVirtualCurrency_Parms \
{ \
	FServerModifyCharacterVirtualCurrencyResult Result; \
	UObject* customData; \
}; \
static inline void FDelegateOnSuccessAddCharacterVirtualCurrency_DelegateWrapper(const FScriptDelegate& DelegateOnSuccessAddCharacterVirtualCurrency, FServerModifyCharacterVirtualCurrencyResult Result, UObject* customData) \
{ \
	PlayFabServerAPI_eventDelegateOnSuccessAddCharacterVirtualCurrency_Parms Parms; \
	Parms.Result=Result; \
	Parms.customData=customData; \
	DelegateOnSuccessAddCharacterVirtualCurrency.ProcessDelegate<UObject>(&Parms); \
}


#define Test_Plugins_EnginePlugins_PlayFab_Source_PlayFab_Public_PlayFabServerAPI_h_366_DELEGATE \
struct PlayFabServerAPI_eventDelegateOnSuccessAddFriend_Parms \
{ \
	FServerEmptyResponse Result; \
	UObject* customData; \
}; \
static inline void FDelegateOnSuccessAddFriend_DelegateWrapper(const FScriptDelegate& DelegateOnSuccessAddFriend, FServerEmptyResponse Result, UObject* customData) \
{ \
	PlayFabServerAPI_eventDelegateOnSuccessAddFriend_Parms Parms; \
	Parms.Result=Result; \
	Parms.customData=customData; \
	DelegateOnSuccessAddFriend.ProcessDelegate<UObject>(&Parms); \
}


#define Test_Plugins_EnginePlugins_PlayFab_Source_PlayFab_Public_PlayFabServerAPI_h_365_DELEGATE \
struct PlayFabServerAPI_eventDelegateOnSuccessAddGenericID_Parms \
{ \
	FServerEmptyResult Result; \
	UObject* customData; \
}; \
static inline void FDelegateOnSuccessAddGenericID_DelegateWrapper(const FScriptDelegate& DelegateOnSuccessAddGenericID, FServerEmptyResult Result, UObject* customData) \
{ \
	PlayFabServerAPI_eventDelegateOnSuccessAddGenericID_Parms Parms; \
	Parms.Result=Result; \
	Parms.customData=customData; \
	DelegateOnSuccessAddGenericID.ProcessDelegate<UObject>(&Parms); \
}


#define Test_Plugins_EnginePlugins_PlayFab_Source_PlayFab_Public_PlayFabServerAPI_h_364_DELEGATE \
struct PlayFabServerAPI_eventDelegateOnSuccessAddPlayerTag_Parms \
{ \
	FServerAddPlayerTagResult Result; \
	UObject* customData; \
}; \
static inline void FDelegateOnSuccessAddPlayerTag_DelegateWrapper(const FScriptDelegate& DelegateOnSuccessAddPlayerTag, FServerAddPlayerTagResult Result, UObject* customData) \
{ \
	PlayFabServerAPI_eventDelegateOnSuccessAddPlayerTag_Parms Parms; \
	Parms.Result=Result; \
	Parms.customData=customData; \
	DelegateOnSuccessAddPlayerTag.ProcessDelegate<UObject>(&Parms); \
}


#define Test_Plugins_EnginePlugins_PlayFab_Source_PlayFab_Public_PlayFabServerAPI_h_363_DELEGATE \
struct PlayFabServerAPI_eventDelegateOnSuccessAddSharedGroupMembers_Parms \
{ \
	FServerAddSharedGroupMembersResult Result; \
	UObject* customData; \
}; \
static inline void FDelegateOnSuccessAddSharedGroupMembers_DelegateWrapper(const FScriptDelegate& DelegateOnSuccessAddSharedGroupMembers, FServerAddSharedGroupMembersResult Result, UObject* customData) \
{ \
	PlayFabServerAPI_eventDelegateOnSuccessAddSharedGroupMembers_Parms Parms; \
	Parms.Result=Result; \
	Parms.customData=customData; \
	DelegateOnSuccessAddSharedGroupMembers.ProcessDelegate<UObject>(&Parms); \
}


#define Test_Plugins_EnginePlugins_PlayFab_Source_PlayFab_Public_PlayFabServerAPI_h_362_DELEGATE \
struct PlayFabServerAPI_eventDelegateOnSuccessAddUserVirtualCurrency_Parms \
{ \
	FServerModifyUserVirtualCurrencyResult Result; \
	UObject* customData; \
}; \
static inline void FDelegateOnSuccessAddUserVirtualCurrency_DelegateWrapper(const FScriptDelegate& DelegateOnSuccessAddUserVirtualCurrency, FServerModifyUserVirtualCurrencyResult Result, UObject* customData) \
{ \
	PlayFabServerAPI_eventDelegateOnSuccessAddUserVirtualCurrency_Parms Parms; \
	Parms.Result=Result; \
	Parms.customData=customData; \
	DelegateOnSuccessAddUserVirtualCurrency.ProcessDelegate<UObject>(&Parms); \
}


#define Test_Plugins_EnginePlugins_PlayFab_Source_PlayFab_Public_PlayFabServerAPI_h_361_DELEGATE \
struct PlayFabServerAPI_eventDelegateOnSuccessAuthenticateSessionTicket_Parms \
{ \
	FServerAuthenticateSessionTicketResult Result; \
	UObject* customData; \
}; \
static inline void FDelegateOnSuccessAuthenticateSessionTicket_DelegateWrapper(const FScriptDelegate& DelegateOnSuccessAuthenticateSessionTicket, FServerAuthenticateSessionTicketResult Result, UObject* customData) \
{ \
	PlayFabServerAPI_eventDelegateOnSuccessAuthenticateSessionTicket_Parms Parms; \
	Parms.Result=Result; \
	Parms.customData=customData; \
	DelegateOnSuccessAuthenticateSessionTicket.ProcessDelegate<UObject>(&Parms); \
}


#define Test_Plugins_EnginePlugins_PlayFab_Source_PlayFab_Public_PlayFabServerAPI_h_360_DELEGATE \
struct PlayFabServerAPI_eventDelegateOnSuccessAwardSteamAchievement_Parms \
{ \
	FServerAwardSteamAchievementResult Result; \
	UObject* customData; \
}; \
static inline void FDelegateOnSuccessAwardSteamAchievement_DelegateWrapper(const FScriptDelegate& DelegateOnSuccessAwardSteamAchievement, FServerAwardSteamAchievementResult Result, UObject* customData) \
{ \
	PlayFabServerAPI_eventDelegateOnSuccessAwardSteamAchievement_Parms Parms; \
	Parms.Result=Result; \
	Parms.customData=customData; \
	DelegateOnSuccessAwardSteamAchievement.ProcessDelegate<UObject>(&Parms); \
}


#define Test_Plugins_EnginePlugins_PlayFab_Source_PlayFab_Public_PlayFabServerAPI_h_359_DELEGATE \
struct PlayFabServerAPI_eventDelegateOnSuccessBanUsers_Parms \
{ \
	FServerBanUsersResult Result; \
	UObject* customData; \
}; \
static inline void FDelegateOnSuccessBanUsers_DelegateWrapper(const FScriptDelegate& DelegateOnSuccessBanUsers, FServerBanUsersResult Result, UObject* customData) \
{ \
	PlayFabServerAPI_eventDelegateOnSuccessBanUsers_Parms Parms; \
	Parms.Result=Result; \
	Parms.customData=customData; \
	DelegateOnSuccessBanUsers.ProcessDelegate<UObject>(&Parms); \
}


#define Test_Plugins_EnginePlugins_PlayFab_Source_PlayFab_Public_PlayFabServerAPI_h_358_DELEGATE \
struct PlayFabServerAPI_eventDelegateOnSuccessConsumeItem_Parms \
{ \
	FServerConsumeItemResult Result; \
	UObject* customData; \
}; \
static inline void FDelegateOnSuccessConsumeItem_DelegateWrapper(const FScriptDelegate& DelegateOnSuccessConsumeItem, FServerConsumeItemResult Result, UObject* customData) \
{ \
	PlayFabServerAPI_eventDelegateOnSuccessConsumeItem_Parms Parms; \
	Parms.Result=Result; \
	Parms.customData=customData; \
	DelegateOnSuccessConsumeItem.ProcessDelegate<UObject>(&Parms); \
}


#define Test_Plugins_EnginePlugins_PlayFab_Source_PlayFab_Public_PlayFabServerAPI_h_357_DELEGATE \
struct PlayFabServerAPI_eventDelegateOnSuccessCreateSharedGroup_Parms \
{ \
	FServerCreateSharedGroupResult Result; \
	UObject* customData; \
}; \
static inline void FDelegateOnSuccessCreateSharedGroup_DelegateWrapper(const FScriptDelegate& DelegateOnSuccessCreateSharedGroup, FServerCreateSharedGroupResult Result, UObject* customData) \
{ \
	PlayFabServerAPI_eventDelegateOnSuccessCreateSharedGroup_Parms Parms; \
	Parms.Result=Result; \
	Parms.customData=customData; \
	DelegateOnSuccessCreateSharedGroup.ProcessDelegate<UObject>(&Parms); \
}


#define Test_Plugins_EnginePlugins_PlayFab_Source_PlayFab_Public_PlayFabServerAPI_h_356_DELEGATE \
struct PlayFabServerAPI_eventDelegateOnSuccessDeleteCharacterFromUser_Parms \
{ \
	FServerDeleteCharacterFromUserResult Result; \
	UObject* customData; \
}; \
static inline void FDelegateOnSuccessDeleteCharacterFromUser_DelegateWrapper(const FScriptDelegate& DelegateOnSuccessDeleteCharacterFromUser, FServerDeleteCharacterFromUserResult Result, UObject* customData) \
{ \
	PlayFabServerAPI_eventDelegateOnSuccessDeleteCharacterFromUser_Parms Parms; \
	Parms.Result=Result; \
	Parms.customData=customData; \
	DelegateOnSuccessDeleteCharacterFromUser.ProcessDelegate<UObject>(&Parms); \
}


#define Test_Plugins_EnginePlugins_PlayFab_Source_PlayFab_Public_PlayFabServerAPI_h_355_DELEGATE \
struct PlayFabServerAPI_eventDelegateOnSuccessDeletePlayer_Parms \
{ \
	FServerDeletePlayerResult Result; \
	UObject* customData; \
}; \
static inline void FDelegateOnSuccessDeletePlayer_DelegateWrapper(const FScriptDelegate& DelegateOnSuccessDeletePlayer, FServerDeletePlayerResult Result, UObject* customData) \
{ \
	PlayFabServerAPI_eventDelegateOnSuccessDeletePlayer_Parms Parms; \
	Parms.Result=Result; \
	Parms.customData=customData; \
	DelegateOnSuccessDeletePlayer.ProcessDelegate<UObject>(&Parms); \
}


#define Test_Plugins_EnginePlugins_PlayFab_Source_PlayFab_Public_PlayFabServerAPI_h_354_DELEGATE \
struct PlayFabServerAPI_eventDelegateOnSuccessDeletePushNotificationTemplate_Parms \
{ \
	FServerDeletePushNotificationTemplateResult Result; \
	UObject* customData; \
}; \
static inline void FDelegateOnSuccessDeletePushNotificationTemplate_DelegateWrapper(const FScriptDelegate& DelegateOnSuccessDeletePushNotificationTemplate, FServerDeletePushNotificationTemplateResult Result, UObject* customData) \
{ \
	PlayFabServerAPI_eventDelegateOnSuccessDeletePushNotificationTemplate_Parms Parms; \
	Parms.Result=Result; \
	Parms.customData=customData; \
	DelegateOnSuccessDeletePushNotificationTemplate.ProcessDelegate<UObject>(&Parms); \
}


#define Test_Plugins_EnginePlugins_PlayFab_Source_PlayFab_Public_PlayFabServerAPI_h_353_DELEGATE \
struct PlayFabServerAPI_eventDelegateOnSuccessDeleteSharedGroup_Parms \
{ \
	FServerEmptyResponse Result; \
	UObject* customData; \
}; \
static inline void FDelegateOnSuccessDeleteSharedGroup_DelegateWrapper(const FScriptDelegate& DelegateOnSuccessDeleteSharedGroup, FServerEmptyResponse Result, UObject* customData) \
{ \
	PlayFabServerAPI_eventDelegateOnSuccessDeleteSharedGroup_Parms Parms; \
	Parms.Result=Result; \
	Parms.customData=customData; \
	DelegateOnSuccessDeleteSharedGroup.ProcessDelegate<UObject>(&Parms); \
}


#define Test_Plugins_EnginePlugins_PlayFab_Source_PlayFab_Public_PlayFabServerAPI_h_352_DELEGATE \
struct PlayFabServerAPI_eventDelegateOnSuccessDeregisterGame_Parms \
{ \
	FServerDeregisterGameResponse Result; \
	UObject* customData; \
}; \
static inline void FDelegateOnSuccessDeregisterGame_DelegateWrapper(const FScriptDelegate& DelegateOnSuccessDeregisterGame, FServerDeregisterGameResponse Result, UObject* customData) \
{ \
	PlayFabServerAPI_eventDelegateOnSuccessDeregisterGame_Parms Parms; \
	Parms.Result=Result; \
	Parms.customData=customData; \
	DelegateOnSuccessDeregisterGame.ProcessDelegate<UObject>(&Parms); \
}


#define Test_Plugins_EnginePlugins_PlayFab_Source_PlayFab_Public_PlayFabServerAPI_h_351_DELEGATE \
struct PlayFabServerAPI_eventDelegateOnSuccessEvaluateRandomResultTable_Parms \
{ \
	FServerEvaluateRandomResultTableResult Result; \
	UObject* customData; \
}; \
static inline void FDelegateOnSuccessEvaluateRandomResultTable_DelegateWrapper(const FScriptDelegate& DelegateOnSuccessEvaluateRandomResultTable, FServerEvaluateRandomResultTableResult Result, UObject* customData) \
{ \
	PlayFabServerAPI_eventDelegateOnSuccessEvaluateRandomResultTable_Parms Parms; \
	Parms.Result=Result; \
	Parms.customData=customData; \
	DelegateOnSuccessEvaluateRandomResultTable.ProcessDelegate<UObject>(&Parms); \
}


#define Test_Plugins_EnginePlugins_PlayFab_Source_PlayFab_Public_PlayFabServerAPI_h_350_DELEGATE \
struct PlayFabServerAPI_eventDelegateOnSuccessExecuteCloudScript_Parms \
{ \
	FServerExecuteCloudScriptResult Result; \
	UObject* customData; \
}; \
static inline void FDelegateOnSuccessExecuteCloudScript_DelegateWrapper(const FScriptDelegate& DelegateOnSuccessExecuteCloudScript, FServerExecuteCloudScriptResult Result, UObject* customData) \
{ \
	PlayFabServerAPI_eventDelegateOnSuccessExecuteCloudScript_Parms Parms; \
	Parms.Result=Result; \
	Parms.customData=customData; \
	DelegateOnSuccessExecuteCloudScript.ProcessDelegate<UObject>(&Parms); \
}


#define Test_Plugins_EnginePlugins_PlayFab_Source_PlayFab_Public_PlayFabServerAPI_h_349_DELEGATE \
struct PlayFabServerAPI_eventDelegateOnSuccessGetAllSegments_Parms \
{ \
	FServerGetAllSegmentsResult Result; \
	UObject* customData; \
}; \
static inline void FDelegateOnSuccessGetAllSegments_DelegateWrapper(const FScriptDelegate& DelegateOnSuccessGetAllSegments, FServerGetAllSegmentsResult Result, UObject* customData) \
{ \
	PlayFabServerAPI_eventDelegateOnSuccessGetAllSegments_Parms Parms; \
	Parms.Result=Result; \
	Parms.customData=customData; \
	DelegateOnSuccessGetAllSegments.ProcessDelegate<UObject>(&Parms); \
}


#define Test_Plugins_EnginePlugins_PlayFab_Source_PlayFab_Public_PlayFabServerAPI_h_348_DELEGATE \
struct PlayFabServerAPI_eventDelegateOnSuccessGetAllUsersCharacters_Parms \
{ \
	FServerListUsersCharactersResult Result; \
	UObject* customData; \
}; \
static inline void FDelegateOnSuccessGetAllUsersCharacters_DelegateWrapper(const FScriptDelegate& DelegateOnSuccessGetAllUsersCharacters, FServerListUsersCharactersResult Result, UObject* customData) \
{ \
	PlayFabServerAPI_eventDelegateOnSuccessGetAllUsersCharacters_Parms Parms; \
	Parms.Result=Result; \
	Parms.customData=customData; \
	DelegateOnSuccessGetAllUsersCharacters.ProcessDelegate<UObject>(&Parms); \
}


#define Test_Plugins_EnginePlugins_PlayFab_Source_PlayFab_Public_PlayFabServerAPI_h_347_DELEGATE \
struct PlayFabServerAPI_eventDelegateOnSuccessGetCatalogItems_Parms \
{ \
	FServerGetCatalogItemsResult Result; \
	UObject* customData; \
}; \
static inline void FDelegateOnSuccessGetCatalogItems_DelegateWrapper(const FScriptDelegate& DelegateOnSuccessGetCatalogItems, FServerGetCatalogItemsResult Result, UObject* customData) \
{ \
	PlayFabServerAPI_eventDelegateOnSuccessGetCatalogItems_Parms Parms; \
	Parms.Result=Result; \
	Parms.customData=customData; \
	DelegateOnSuccessGetCatalogItems.ProcessDelegate<UObject>(&Parms); \
}


#define Test_Plugins_EnginePlugins_PlayFab_Source_PlayFab_Public_PlayFabServerAPI_h_346_DELEGATE \
struct PlayFabServerAPI_eventDelegateOnSuccessGetCharacterData_Parms \
{ \
	FServerGetCharacterDataResult Result; \
	UObject* customData; \
}; \
static inline void FDelegateOnSuccessGetCharacterData_DelegateWrapper(const FScriptDelegate& DelegateOnSuccessGetCharacterData, FServerGetCharacterDataResult Result, UObject* customData) \
{ \
	PlayFabServerAPI_eventDelegateOnSuccessGetCharacterData_Parms Parms; \
	Parms.Result=Result; \
	Parms.customData=customData; \
	DelegateOnSuccessGetCharacterData.ProcessDelegate<UObject>(&Parms); \
}


#define Test_Plugins_EnginePlugins_PlayFab_Source_PlayFab_Public_PlayFabServerAPI_h_345_DELEGATE \
struct PlayFabServerAPI_eventDelegateOnSuccessGetCharacterInternalData_Parms \
{ \
	FServerGetCharacterDataResult Result; \
	UObject* customData; \
}; \
static inline void FDelegateOnSuccessGetCharacterInternalData_DelegateWrapper(const FScriptDelegate& DelegateOnSuccessGetCharacterInternalData, FServerGetCharacterDataResult Result, UObject* customData) \
{ \
	PlayFabServerAPI_eventDelegateOnSuccessGetCharacterInternalData_Parms Parms; \
	Parms.Result=Result; \
	Parms.customData=customData; \
	DelegateOnSuccessGetCharacterInternalData.ProcessDelegate<UObject>(&Parms); \
}


#define Test_Plugins_EnginePlugins_PlayFab_Source_PlayFab_Public_PlayFabServerAPI_h_344_DELEGATE \
struct PlayFabServerAPI_eventDelegateOnSuccessGetCharacterInventory_Parms \
{ \
	FServerGetCharacterInventoryResult Result; \
	UObject* customData; \
}; \
static inline void FDelegateOnSuccessGetCharacterInventory_DelegateWrapper(const FScriptDelegate& DelegateOnSuccessGetCharacterInventory, FServerGetCharacterInventoryResult Result, UObject* customData) \
{ \
	PlayFabServerAPI_eventDelegateOnSuccessGetCharacterInventory_Parms Parms; \
	Parms.Result=Result; \
	Parms.customData=customData; \
	DelegateOnSuccessGetCharacterInventory.ProcessDelegate<UObject>(&Parms); \
}


#define Test_Plugins_EnginePlugins_PlayFab_Source_PlayFab_Public_PlayFabServerAPI_h_343_DELEGATE \
struct PlayFabServerAPI_eventDelegateOnSuccessGetCharacterLeaderboard_Parms \
{ \
	FServerGetCharacterLeaderboardResult Result; \
	UObject* customData; \
}; \
static inline void FDelegateOnSuccessGetCharacterLeaderboard_DelegateWrapper(const FScriptDelegate& DelegateOnSuccessGetCharacterLeaderboard, FServerGetCharacterLeaderboardResult Result, UObject* customData) \
{ \
	PlayFabServerAPI_eventDelegateOnSuccessGetCharacterLeaderboard_Parms Parms; \
	Parms.Result=Result; \
	Parms.customData=customData; \
	DelegateOnSuccessGetCharacterLeaderboard.ProcessDelegate<UObject>(&Parms); \
}


#define Test_Plugins_EnginePlugins_PlayFab_Source_PlayFab_Public_PlayFabServerAPI_h_342_DELEGATE \
struct PlayFabServerAPI_eventDelegateOnSuccessGetCharacterReadOnlyData_Parms \
{ \
	FServerGetCharacterDataResult Result; \
	UObject* customData; \
}; \
static inline void FDelegateOnSuccessGetCharacterReadOnlyData_DelegateWrapper(const FScriptDelegate& DelegateOnSuccessGetCharacterReadOnlyData, FServerGetCharacterDataResult Result, UObject* customData) \
{ \
	PlayFabServerAPI_eventDelegateOnSuccessGetCharacterReadOnlyData_Parms Parms; \
	Parms.Result=Result; \
	Parms.customData=customData; \
	DelegateOnSuccessGetCharacterReadOnlyData.ProcessDelegate<UObject>(&Parms); \
}


#define Test_Plugins_EnginePlugins_PlayFab_Source_PlayFab_Public_PlayFabServerAPI_h_341_DELEGATE \
struct PlayFabServerAPI_eventDelegateOnSuccessGetCharacterStatistics_Parms \
{ \
	FServerGetCharacterStatisticsResult Result; \
	UObject* customData; \
}; \
static inline void FDelegateOnSuccessGetCharacterStatistics_DelegateWrapper(const FScriptDelegate& DelegateOnSuccessGetCharacterStatistics, FServerGetCharacterStatisticsResult Result, UObject* customData) \
{ \
	PlayFabServerAPI_eventDelegateOnSuccessGetCharacterStatistics_Parms Parms; \
	Parms.Result=Result; \
	Parms.customData=customData; \
	DelegateOnSuccessGetCharacterStatistics.ProcessDelegate<UObject>(&Parms); \
}


#define Test_Plugins_EnginePlugins_PlayFab_Source_PlayFab_Public_PlayFabServerAPI_h_340_DELEGATE \
struct PlayFabServerAPI_eventDelegateOnSuccessGetContentDownloadUrl_Parms \
{ \
	FServerGetContentDownloadUrlResult Result; \
	UObject* customData; \
}; \
static inline void FDelegateOnSuccessGetContentDownloadUrl_DelegateWrapper(const FScriptDelegate& DelegateOnSuccessGetContentDownloadUrl, FServerGetContentDownloadUrlResult Result, UObject* customData) \
{ \
	PlayFabServerAPI_eventDelegateOnSuccessGetContentDownloadUrl_Parms Parms; \
	Parms.Result=Result; \
	Parms.customData=customData; \
	DelegateOnSuccessGetContentDownloadUrl.ProcessDelegate<UObject>(&Parms); \
}


#define Test_Plugins_EnginePlugins_PlayFab_Source_PlayFab_Public_PlayFabServerAPI_h_339_DELEGATE \
struct PlayFabServerAPI_eventDelegateOnSuccessGetFriendLeaderboard_Parms \
{ \
	FServerGetLeaderboardResult Result; \
	UObject* customData; \
}; \
static inline void FDelegateOnSuccessGetFriendLeaderboard_DelegateWrapper(const FScriptDelegate& DelegateOnSuccessGetFriendLeaderboard, FServerGetLeaderboardResult Result, UObject* customData) \
{ \
	PlayFabServerAPI_eventDelegateOnSuccessGetFriendLeaderboard_Parms Parms; \
	Parms.Result=Result; \
	Parms.customData=customData; \
	DelegateOnSuccessGetFriendLeaderboard.ProcessDelegate<UObject>(&Parms); \
}


#define Test_Plugins_EnginePlugins_PlayFab_Source_PlayFab_Public_PlayFabServerAPI_h_338_DELEGATE \
struct PlayFabServerAPI_eventDelegateOnSuccessGetFriendsList_Parms \
{ \
	FServerGetFriendsListResult Result; \
	UObject* customData; \
}; \
static inline void FDelegateOnSuccessGetFriendsList_DelegateWrapper(const FScriptDelegate& DelegateOnSuccessGetFriendsList, FServerGetFriendsListResult Result, UObject* customData) \
{ \
	PlayFabServerAPI_eventDelegateOnSuccessGetFriendsList_Parms Parms; \
	Parms.Result=Result; \
	Parms.customData=customData; \
	DelegateOnSuccessGetFriendsList.ProcessDelegate<UObject>(&Parms); \
}


#define Test_Plugins_EnginePlugins_PlayFab_Source_PlayFab_Public_PlayFabServerAPI_h_337_DELEGATE \
struct PlayFabServerAPI_eventDelegateOnSuccessGetLeaderboard_Parms \
{ \
	FServerGetLeaderboardResult Result; \
	UObject* customData; \
}; \
static inline void FDelegateOnSuccessGetLeaderboard_DelegateWrapper(const FScriptDelegate& DelegateOnSuccessGetLeaderboard, FServerGetLeaderboardResult Result, UObject* customData) \
{ \
	PlayFabServerAPI_eventDelegateOnSuccessGetLeaderboard_Parms Parms; \
	Parms.Result=Result; \
	Parms.customData=customData; \
	DelegateOnSuccessGetLeaderboard.ProcessDelegate<UObject>(&Parms); \
}


#define Test_Plugins_EnginePlugins_PlayFab_Source_PlayFab_Public_PlayFabServerAPI_h_336_DELEGATE \
struct PlayFabServerAPI_eventDelegateOnSuccessGetLeaderboardAroundCharacter_Parms \
{ \
	FServerGetLeaderboardAroundCharacterResult Result; \
	UObject* customData; \
}; \
static inline void FDelegateOnSuccessGetLeaderboardAroundCharacter_DelegateWrapper(const FScriptDelegate& DelegateOnSuccessGetLeaderboardAroundCharacter, FServerGetLeaderboardAroundCharacterResult Result, UObject* customData) \
{ \
	PlayFabServerAPI_eventDelegateOnSuccessGetLeaderboardAroundCharacter_Parms Parms; \
	Parms.Result=Result; \
	Parms.customData=customData; \
	DelegateOnSuccessGetLeaderboardAroundCharacter.ProcessDelegate<UObject>(&Parms); \
}


#define Test_Plugins_EnginePlugins_PlayFab_Source_PlayFab_Public_PlayFabServerAPI_h_335_DELEGATE \
struct PlayFabServerAPI_eventDelegateOnSuccessGetLeaderboardAroundUser_Parms \
{ \
	FServerGetLeaderboardAroundUserResult Result; \
	UObject* customData; \
}; \
static inline void FDelegateOnSuccessGetLeaderboardAroundUser_DelegateWrapper(const FScriptDelegate& DelegateOnSuccessGetLeaderboardAroundUser, FServerGetLeaderboardAroundUserResult Result, UObject* customData) \
{ \
	PlayFabServerAPI_eventDelegateOnSuccessGetLeaderboardAroundUser_Parms Parms; \
	Parms.Result=Result; \
	Parms.customData=customData; \
	DelegateOnSuccessGetLeaderboardAroundUser.ProcessDelegate<UObject>(&Parms); \
}


#define Test_Plugins_EnginePlugins_PlayFab_Source_PlayFab_Public_PlayFabServerAPI_h_334_DELEGATE \
struct PlayFabServerAPI_eventDelegateOnSuccessGetLeaderboardForUserCharacters_Parms \
{ \
	FServerGetLeaderboardForUsersCharactersResult Result; \
	UObject* customData; \
}; \
static inline void FDelegateOnSuccessGetLeaderboardForUserCharacters_DelegateWrapper(const FScriptDelegate& DelegateOnSuccessGetLeaderboardForUserCharacters, FServerGetLeaderboardForUsersCharactersResult Result, UObject* customData) \
{ \
	PlayFabServerAPI_eventDelegateOnSuccessGetLeaderboardForUserCharacters_Parms Parms; \
	Parms.Result=Result; \
	Parms.customData=customData; \
	DelegateOnSuccessGetLeaderboardForUserCharacters.ProcessDelegate<UObject>(&Parms); \
}


#define Test_Plugins_EnginePlugins_PlayFab_Source_PlayFab_Public_PlayFabServerAPI_h_333_DELEGATE \
struct PlayFabServerAPI_eventDelegateOnSuccessGetPlayerCombinedInfo_Parms \
{ \
	FServerGetPlayerCombinedInfoResult Result; \
	UObject* customData; \
}; \
static inline void FDelegateOnSuccessGetPlayerCombinedInfo_DelegateWrapper(const FScriptDelegate& DelegateOnSuccessGetPlayerCombinedInfo, FServerGetPlayerCombinedInfoResult Result, UObject* customData) \
{ \
	PlayFabServerAPI_eventDelegateOnSuccessGetPlayerCombinedInfo_Parms Parms; \
	Parms.Result=Result; \
	Parms.customData=customData; \
	DelegateOnSuccessGetPlayerCombinedInfo.ProcessDelegate<UObject>(&Parms); \
}


#define Test_Plugins_EnginePlugins_PlayFab_Source_PlayFab_Public_PlayFabServerAPI_h_332_DELEGATE \
struct PlayFabServerAPI_eventDelegateOnSuccessGetPlayerProfile_Parms \
{ \
	FServerGetPlayerProfileResult Result; \
	UObject* customData; \
}; \
static inline void FDelegateOnSuccessGetPlayerProfile_DelegateWrapper(const FScriptDelegate& DelegateOnSuccessGetPlayerProfile, FServerGetPlayerProfileResult Result, UObject* customData) \
{ \
	PlayFabServerAPI_eventDelegateOnSuccessGetPlayerProfile_Parms Parms; \
	Parms.Result=Result; \
	Parms.customData=customData; \
	DelegateOnSuccessGetPlayerProfile.ProcessDelegate<UObject>(&Parms); \
}


#define Test_Plugins_EnginePlugins_PlayFab_Source_PlayFab_Public_PlayFabServerAPI_h_331_DELEGATE \
struct PlayFabServerAPI_eventDelegateOnSuccessGetPlayerSegments_Parms \
{ \
	FServerGetPlayerSegmentsResult Result; \
	UObject* customData; \
}; \
static inline void FDelegateOnSuccessGetPlayerSegments_DelegateWrapper(const FScriptDelegate& DelegateOnSuccessGetPlayerSegments, FServerGetPlayerSegmentsResult Result, UObject* customData) \
{ \
	PlayFabServerAPI_eventDelegateOnSuccessGetPlayerSegments_Parms Parms; \
	Parms.Result=Result; \
	Parms.customData=customData; \
	DelegateOnSuccessGetPlayerSegments.ProcessDelegate<UObject>(&Parms); \
}


#define Test_Plugins_EnginePlugins_PlayFab_Source_PlayFab_Public_PlayFabServerAPI_h_330_DELEGATE \
struct PlayFabServerAPI_eventDelegateOnSuccessGetPlayersInSegment_Parms \
{ \
	FServerGetPlayersInSegmentResult Result; \
	UObject* customData; \
}; \
static inline void FDelegateOnSuccessGetPlayersInSegment_DelegateWrapper(const FScriptDelegate& DelegateOnSuccessGetPlayersInSegment, FServerGetPlayersInSegmentResult Result, UObject* customData) \
{ \
	PlayFabServerAPI_eventDelegateOnSuccessGetPlayersInSegment_Parms Parms; \
	Parms.Result=Result; \
	Parms.customData=customData; \
	DelegateOnSuccessGetPlayersInSegment.ProcessDelegate<UObject>(&Parms); \
}


#define Test_Plugins_EnginePlugins_PlayFab_Source_PlayFab_Public_PlayFabServerAPI_h_329_DELEGATE \
struct PlayFabServerAPI_eventDelegateOnSuccessGetPlayerStatistics_Parms \
{ \
	FServerGetPlayerStatisticsResult Result; \
	UObject* customData; \
}; \
static inline void FDelegateOnSuccessGetPlayerStatistics_DelegateWrapper(const FScriptDelegate& DelegateOnSuccessGetPlayerStatistics, FServerGetPlayerStatisticsResult Result, UObject* customData) \
{ \
	PlayFabServerAPI_eventDelegateOnSuccessGetPlayerStatistics_Parms Parms; \
	Parms.Result=Result; \
	Parms.customData=customData; \
	DelegateOnSuccessGetPlayerStatistics.ProcessDelegate<UObject>(&Parms); \
}


#define Test_Plugins_EnginePlugins_PlayFab_Source_PlayFab_Public_PlayFabServerAPI_h_328_DELEGATE \
struct PlayFabServerAPI_eventDelegateOnSuccessGetPlayerStatisticVersions_Parms \
{ \
	FServerGetPlayerStatisticVersionsResult Result; \
	UObject* customData; \
}; \
static inline void FDelegateOnSuccessGetPlayerStatisticVersions_DelegateWrapper(const FScriptDelegate& DelegateOnSuccessGetPlayerStatisticVersions, FServerGetPlayerStatisticVersionsResult Result, UObject* customData) \
{ \
	PlayFabServerAPI_eventDelegateOnSuccessGetPlayerStatisticVersions_Parms Parms; \
	Parms.Result=Result; \
	Parms.customData=customData; \
	DelegateOnSuccessGetPlayerStatisticVersions.ProcessDelegate<UObject>(&Parms); \
}


#define Test_Plugins_EnginePlugins_PlayFab_Source_PlayFab_Public_PlayFabServerAPI_h_327_DELEGATE \
struct PlayFabServerAPI_eventDelegateOnSuccessGetPlayerTags_Parms \
{ \
	FServerGetPlayerTagsResult Result; \
	UObject* customData; \
}; \
static inline void FDelegateOnSuccessGetPlayerTags_DelegateWrapper(const FScriptDelegate& DelegateOnSuccessGetPlayerTags, FServerGetPlayerTagsResult Result, UObject* customData) \
{ \
	PlayFabServerAPI_eventDelegateOnSuccessGetPlayerTags_Parms Parms; \
	Parms.Result=Result; \
	Parms.customData=customData; \
	DelegateOnSuccessGetPlayerTags.ProcessDelegate<UObject>(&Parms); \
}


#define Test_Plugins_EnginePlugins_PlayFab_Source_PlayFab_Public_PlayFabServerAPI_h_326_DELEGATE \
struct PlayFabServerAPI_eventDelegateOnSuccessGetPlayFabIDsFromFacebookIDs_Parms \
{ \
	FServerGetPlayFabIDsFromFacebookIDsResult Result; \
	UObject* customData; \
}; \
static inline void FDelegateOnSuccessGetPlayFabIDsFromFacebookIDs_DelegateWrapper(const FScriptDelegate& DelegateOnSuccessGetPlayFabIDsFromFacebookIDs, FServerGetPlayFabIDsFromFacebookIDsResult Result, UObject* customData) \
{ \
	PlayFabServerAPI_eventDelegateOnSuccessGetPlayFabIDsFromFacebookIDs_Parms Parms; \
	Parms.Result=Result; \
	Parms.customData=customData; \
	DelegateOnSuccessGetPlayFabIDsFromFacebookIDs.ProcessDelegate<UObject>(&Parms); \
}


#define Test_Plugins_EnginePlugins_PlayFab_Source_PlayFab_Public_PlayFabServerAPI_h_325_DELEGATE \
struct PlayFabServerAPI_eventDelegateOnSuccessGetPlayFabIDsFromFacebookInstantGamesIds_Parms \
{ \
	FServerGetPlayFabIDsFromFacebookInstantGamesIdsResult Result; \
	UObject* customData; \
}; \
static inline void FDelegateOnSuccessGetPlayFabIDsFromFacebookInstantGamesIds_DelegateWrapper(const FScriptDelegate& DelegateOnSuccessGetPlayFabIDsFromFacebookInstantGamesIds, FServerGetPlayFabIDsFromFacebookInstantGamesIdsResult Result, UObject* customData) \
{ \
	PlayFabServerAPI_eventDelegateOnSuccessGetPlayFabIDsFromFacebookInstantGamesIds_Parms Parms; \
	Parms.Result=Result; \
	Parms.customData=customData; \
	DelegateOnSuccessGetPlayFabIDsFromFacebookInstantGamesIds.ProcessDelegate<UObject>(&Parms); \
}


#define Test_Plugins_EnginePlugins_PlayFab_Source_PlayFab_Public_PlayFabServerAPI_h_324_DELEGATE \
struct PlayFabServerAPI_eventDelegateOnSuccessGetPlayFabIDsFromGenericIDs_Parms \
{ \
	FServerGetPlayFabIDsFromGenericIDsResult Result; \
	UObject* customData; \
}; \
static inline void FDelegateOnSuccessGetPlayFabIDsFromGenericIDs_DelegateWrapper(const FScriptDelegate& DelegateOnSuccessGetPlayFabIDsFromGenericIDs, FServerGetPlayFabIDsFromGenericIDsResult Result, UObject* customData) \
{ \
	PlayFabServerAPI_eventDelegateOnSuccessGetPlayFabIDsFromGenericIDs_Parms Parms; \
	Parms.Result=Result; \
	Parms.customData=customData; \
	DelegateOnSuccessGetPlayFabIDsFromGenericIDs.ProcessDelegate<UObject>(&Parms); \
}


#define Test_Plugins_EnginePlugins_PlayFab_Source_PlayFab_Public_PlayFabServerAPI_h_323_DELEGATE \
struct PlayFabServerAPI_eventDelegateOnSuccessGetPlayFabIDsFromNintendoSwitchDeviceIds_Parms \
{ \
	FServerGetPlayFabIDsFromNintendoSwitchDeviceIdsResult Result; \
	UObject* customData; \
}; \
static inline void FDelegateOnSuccessGetPlayFabIDsFromNintendoSwitchDeviceIds_DelegateWrapper(const FScriptDelegate& DelegateOnSuccessGetPlayFabIDsFromNintendoSwitchDeviceIds, FServerGetPlayFabIDsFromNintendoSwitchDeviceIdsResult Result, UObject* customData) \
{ \
	PlayFabServerAPI_eventDelegateOnSuccessGetPlayFabIDsFromNintendoSwitchDeviceIds_Parms Parms; \
	Parms.Result=Result; \
	Parms.customData=customData; \
	DelegateOnSuccessGetPlayFabIDsFromNintendoSwitchDeviceIds.ProcessDelegate<UObject>(&Parms); \
}


#define Test_Plugins_EnginePlugins_PlayFab_Source_PlayFab_Public_PlayFabServerAPI_h_322_DELEGATE \
struct PlayFabServerAPI_eventDelegateOnSuccessGetPlayFabIDsFromPSNAccountIDs_Parms \
{ \
	FServerGetPlayFabIDsFromPSNAccountIDsResult Result; \
	UObject* customData; \
}; \
static inline void FDelegateOnSuccessGetPlayFabIDsFromPSNAccountIDs_DelegateWrapper(const FScriptDelegate& DelegateOnSuccessGetPlayFabIDsFromPSNAccountIDs, FServerGetPlayFabIDsFromPSNAccountIDsResult Result, UObject* customData) \
{ \
	PlayFabServerAPI_eventDelegateOnSuccessGetPlayFabIDsFromPSNAccountIDs_Parms Parms; \
	Parms.Result=Result; \
	Parms.customData=customData; \
	DelegateOnSuccessGetPlayFabIDsFromPSNAccountIDs.ProcessDelegate<UObject>(&Parms); \
}


#define Test_Plugins_EnginePlugins_PlayFab_Source_PlayFab_Public_PlayFabServerAPI_h_321_DELEGATE \
struct PlayFabServerAPI_eventDelegateOnSuccessGetPlayFabIDsFromSteamIDs_Parms \
{ \
	FServerGetPlayFabIDsFromSteamIDsResult Result; \
	UObject* customData; \
}; \
static inline void FDelegateOnSuccessGetPlayFabIDsFromSteamIDs_DelegateWrapper(const FScriptDelegate& DelegateOnSuccessGetPlayFabIDsFromSteamIDs, FServerGetPlayFabIDsFromSteamIDsResult Result, UObject* customData) \
{ \
	PlayFabServerAPI_eventDelegateOnSuccessGetPlayFabIDsFromSteamIDs_Parms Parms; \
	Parms.Result=Result; \
	Parms.customData=customData; \
	DelegateOnSuccessGetPlayFabIDsFromSteamIDs.ProcessDelegate<UObject>(&Parms); \
}


#define Test_Plugins_EnginePlugins_PlayFab_Source_PlayFab_Public_PlayFabServerAPI_h_320_DELEGATE \
struct PlayFabServerAPI_eventDelegateOnSuccessGetPlayFabIDsFromXboxLiveIDs_Parms \
{ \
	FServerGetPlayFabIDsFromXboxLiveIDsResult Result; \
	UObject* customData; \
}; \
static inline void FDelegateOnSuccessGetPlayFabIDsFromXboxLiveIDs_DelegateWrapper(const FScriptDelegate& DelegateOnSuccessGetPlayFabIDsFromXboxLiveIDs, FServerGetPlayFabIDsFromXboxLiveIDsResult Result, UObject* customData) \
{ \
	PlayFabServerAPI_eventDelegateOnSuccessGetPlayFabIDsFromXboxLiveIDs_Parms Parms; \
	Parms.Result=Result; \
	Parms.customData=customData; \
	DelegateOnSuccessGetPlayFabIDsFromXboxLiveIDs.ProcessDelegate<UObject>(&Parms); \
}


#define Test_Plugins_EnginePlugins_PlayFab_Source_PlayFab_Public_PlayFabServerAPI_h_319_DELEGATE \
struct PlayFabServerAPI_eventDelegateOnSuccessGetPublisherData_Parms \
{ \
	FServerGetPublisherDataResult Result; \
	UObject* customData; \
}; \
static inline void FDelegateOnSuccessGetPublisherData_DelegateWrapper(const FScriptDelegate& DelegateOnSuccessGetPublisherData, FServerGetPublisherDataResult Result, UObject* customData) \
{ \
	PlayFabServerAPI_eventDelegateOnSuccessGetPublisherData_Parms Parms; \
	Parms.Result=Result; \
	Parms.customData=customData; \
	DelegateOnSuccessGetPublisherData.ProcessDelegate<UObject>(&Parms); \
}


#define Test_Plugins_EnginePlugins_PlayFab_Source_PlayFab_Public_PlayFabServerAPI_h_318_DELEGATE \
struct PlayFabServerAPI_eventDelegateOnSuccessGetRandomResultTables_Parms \
{ \
	FServerGetRandomResultTablesResult Result; \
	UObject* customData; \
}; \
static inline void FDelegateOnSuccessGetRandomResultTables_DelegateWrapper(const FScriptDelegate& DelegateOnSuccessGetRandomResultTables, FServerGetRandomResultTablesResult Result, UObject* customData) \
{ \
	PlayFabServerAPI_eventDelegateOnSuccessGetRandomResultTables_Parms Parms; \
	Parms.Result=Result; \
	Parms.customData=customData; \
	DelegateOnSuccessGetRandomResultTables.ProcessDelegate<UObject>(&Parms); \
}


#define Test_Plugins_EnginePlugins_PlayFab_Source_PlayFab_Public_PlayFabServerAPI_h_317_DELEGATE \
struct PlayFabServerAPI_eventDelegateOnSuccessGetServerCustomIDsFromPlayFabIDs_Parms \
{ \
	FServerGetServerCustomIDsFromPlayFabIDsResult Result; \
	UObject* customData; \
}; \
static inline void FDelegateOnSuccessGetServerCustomIDsFromPlayFabIDs_DelegateWrapper(const FScriptDelegate& DelegateOnSuccessGetServerCustomIDsFromPlayFabIDs, FServerGetServerCustomIDsFromPlayFabIDsResult Result, UObject* customData) \
{ \
	PlayFabServerAPI_eventDelegateOnSuccessGetServerCustomIDsFromPlayFabIDs_Parms Parms; \
	Parms.Result=Result; \
	Parms.customData=customData; \
	DelegateOnSuccessGetServerCustomIDsFromPlayFabIDs.ProcessDelegate<UObject>(&Parms); \
}


#define Test_Plugins_EnginePlugins_PlayFab_Source_PlayFab_Public_PlayFabServerAPI_h_316_DELEGATE \
struct PlayFabServerAPI_eventDelegateOnSuccessGetSharedGroupData_Parms \
{ \
	FServerGetSharedGroupDataResult Result; \
	UObject* customData; \
}; \
static inline void FDelegateOnSuccessGetSharedGroupData_DelegateWrapper(const FScriptDelegate& DelegateOnSuccessGetSharedGroupData, FServerGetSharedGroupDataResult Result, UObject* customData) \
{ \
	PlayFabServerAPI_eventDelegateOnSuccessGetSharedGroupData_Parms Parms; \
	Parms.Result=Result; \
	Parms.customData=customData; \
	DelegateOnSuccessGetSharedGroupData.ProcessDelegate<UObject>(&Parms); \
}


#define Test_Plugins_EnginePlugins_PlayFab_Source_PlayFab_Public_PlayFabServerAPI_h_315_DELEGATE \
struct PlayFabServerAPI_eventDelegateOnSuccessGetStoreItems_Parms \
{ \
	FServerGetStoreItemsResult Result; \
	UObject* customData; \
}; \
static inline void FDelegateOnSuccessGetStoreItems_DelegateWrapper(const FScriptDelegate& DelegateOnSuccessGetStoreItems, FServerGetStoreItemsResult Result, UObject* customData) \
{ \
	PlayFabServerAPI_eventDelegateOnSuccessGetStoreItems_Parms Parms; \
	Parms.Result=Result; \
	Parms.customData=customData; \
	DelegateOnSuccessGetStoreItems.ProcessDelegate<UObject>(&Parms); \
}


#define Test_Plugins_EnginePlugins_PlayFab_Source_PlayFab_Public_PlayFabServerAPI_h_314_DELEGATE \
struct PlayFabServerAPI_eventDelegateOnSuccessGetTime_Parms \
{ \
	FServerGetTimeResult Result; \
	UObject* customData; \
}; \
static inline void FDelegateOnSuccessGetTime_DelegateWrapper(const FScriptDelegate& DelegateOnSuccessGetTime, FServerGetTimeResult Result, UObject* customData) \
{ \
	PlayFabServerAPI_eventDelegateOnSuccessGetTime_Parms Parms; \
	Parms.Result=Result; \
	Parms.customData=customData; \
	DelegateOnSuccessGetTime.ProcessDelegate<UObject>(&Parms); \
}


#define Test_Plugins_EnginePlugins_PlayFab_Source_PlayFab_Public_PlayFabServerAPI_h_313_DELEGATE \
struct PlayFabServerAPI_eventDelegateOnSuccessGetTitleData_Parms \
{ \
	FServerGetTitleDataResult Result; \
	UObject* customData; \
}; \
static inline void FDelegateOnSuccessGetTitleData_DelegateWrapper(const FScriptDelegate& DelegateOnSuccessGetTitleData, FServerGetTitleDataResult Result, UObject* customData) \
{ \
	PlayFabServerAPI_eventDelegateOnSuccessGetTitleData_Parms Parms; \
	Parms.Result=Result; \
	Parms.customData=customData; \
	DelegateOnSuccessGetTitleData.ProcessDelegate<UObject>(&Parms); \
}


#define Test_Plugins_EnginePlugins_PlayFab_Source_PlayFab_Public_PlayFabServerAPI_h_312_DELEGATE \
struct PlayFabServerAPI_eventDelegateOnSuccessGetTitleInternalData_Parms \
{ \
	FServerGetTitleDataResult Result; \
	UObject* customData; \
}; \
static inline void FDelegateOnSuccessGetTitleInternalData_DelegateWrapper(const FScriptDelegate& DelegateOnSuccessGetTitleInternalData, FServerGetTitleDataResult Result, UObject* customData) \
{ \
	PlayFabServerAPI_eventDelegateOnSuccessGetTitleInternalData_Parms Parms; \
	Parms.Result=Result; \
	Parms.customData=customData; \
	DelegateOnSuccessGetTitleInternalData.ProcessDelegate<UObject>(&Parms); \
}


#define Test_Plugins_EnginePlugins_PlayFab_Source_PlayFab_Public_PlayFabServerAPI_h_311_DELEGATE \
struct PlayFabServerAPI_eventDelegateOnSuccessGetTitleNews_Parms \
{ \
	FServerGetTitleNewsResult Result; \
	UObject* customData; \
}; \
static inline void FDelegateOnSuccessGetTitleNews_DelegateWrapper(const FScriptDelegate& DelegateOnSuccessGetTitleNews, FServerGetTitleNewsResult Result, UObject* customData) \
{ \
	PlayFabServerAPI_eventDelegateOnSuccessGetTitleNews_Parms Parms; \
	Parms.Result=Result; \
	Parms.customData=customData; \
	DelegateOnSuccessGetTitleNews.ProcessDelegate<UObject>(&Parms); \
}


#define Test_Plugins_EnginePlugins_PlayFab_Source_PlayFab_Public_PlayFabServerAPI_h_310_DELEGATE \
struct PlayFabServerAPI_eventDelegateOnSuccessGetUserAccountInfo_Parms \
{ \
	FServerGetUserAccountInfoResult Result; \
	UObject* customData; \
}; \
static inline void FDelegateOnSuccessGetUserAccountInfo_DelegateWrapper(const FScriptDelegate& DelegateOnSuccessGetUserAccountInfo, FServerGetUserAccountInfoResult Result, UObject* customData) \
{ \
	PlayFabServerAPI_eventDelegateOnSuccessGetUserAccountInfo_Parms Parms; \
	Parms.Result=Result; \
	Parms.customData=customData; \
	DelegateOnSuccessGetUserAccountInfo.ProcessDelegate<UObject>(&Parms); \
}


#define Test_Plugins_EnginePlugins_PlayFab_Source_PlayFab_Public_PlayFabServerAPI_h_309_DELEGATE \
struct PlayFabServerAPI_eventDelegateOnSuccessGetUserBans_Parms \
{ \
	FServerGetUserBansResult Result; \
	UObject* customData; \
}; \
static inline void FDelegateOnSuccessGetUserBans_DelegateWrapper(const FScriptDelegate& DelegateOnSuccessGetUserBans, FServerGetUserBansResult Result, UObject* customData) \
{ \
	PlayFabServerAPI_eventDelegateOnSuccessGetUserBans_Parms Parms; \
	Parms.Result=Result; \
	Parms.customData=customData; \
	DelegateOnSuccessGetUserBans.ProcessDelegate<UObject>(&Parms); \
}


#define Test_Plugins_EnginePlugins_PlayFab_Source_PlayFab_Public_PlayFabServerAPI_h_308_DELEGATE \
struct PlayFabServerAPI_eventDelegateOnSuccessGetUserData_Parms \
{ \
	FServerGetUserDataResult Result; \
	UObject* customData; \
}; \
static inline void FDelegateOnSuccessGetUserData_DelegateWrapper(const FScriptDelegate& DelegateOnSuccessGetUserData, FServerGetUserDataResult Result, UObject* customData) \
{ \
	PlayFabServerAPI_eventDelegateOnSuccessGetUserData_Parms Parms; \
	Parms.Result=Result; \
	Parms.customData=customData; \
	DelegateOnSuccessGetUserData.ProcessDelegate<UObject>(&Parms); \
}


#define Test_Plugins_EnginePlugins_PlayFab_Source_PlayFab_Public_PlayFabServerAPI_h_307_DELEGATE \
struct PlayFabServerAPI_eventDelegateOnSuccessGetUserInternalData_Parms \
{ \
	FServerGetUserDataResult Result; \
	UObject* customData; \
}; \
static inline void FDelegateOnSuccessGetUserInternalData_DelegateWrapper(const FScriptDelegate& DelegateOnSuccessGetUserInternalData, FServerGetUserDataResult Result, UObject* customData) \
{ \
	PlayFabServerAPI_eventDelegateOnSuccessGetUserInternalData_Parms Parms; \
	Parms.Result=Result; \
	Parms.customData=customData; \
	DelegateOnSuccessGetUserInternalData.ProcessDelegate<UObject>(&Parms); \
}


#define Test_Plugins_EnginePlugins_PlayFab_Source_PlayFab_Public_PlayFabServerAPI_h_306_DELEGATE \
struct PlayFabServerAPI_eventDelegateOnSuccessGetUserInventory_Parms \
{ \
	FServerGetUserInventoryResult Result; \
	UObject* customData; \
}; \
static inline void FDelegateOnSuccessGetUserInventory_DelegateWrapper(const FScriptDelegate& DelegateOnSuccessGetUserInventory, FServerGetUserInventoryResult Result, UObject* customData) \
{ \
	PlayFabServerAPI_eventDelegateOnSuccessGetUserInventory_Parms Parms; \
	Parms.Result=Result; \
	Parms.customData=customData; \
	DelegateOnSuccessGetUserInventory.ProcessDelegate<UObject>(&Parms); \
}


#define Test_Plugins_EnginePlugins_PlayFab_Source_PlayFab_Public_PlayFabServerAPI_h_305_DELEGATE \
struct PlayFabServerAPI_eventDelegateOnSuccessGetUserPublisherData_Parms \
{ \
	FServerGetUserDataResult Result; \
	UObject* customData; \
}; \
static inline void FDelegateOnSuccessGetUserPublisherData_DelegateWrapper(const FScriptDelegate& DelegateOnSuccessGetUserPublisherData, FServerGetUserDataResult Result, UObject* customData) \
{ \
	PlayFabServerAPI_eventDelegateOnSuccessGetUserPublisherData_Parms Parms; \
	Parms.Result=Result; \
	Parms.customData=customData; \
	DelegateOnSuccessGetUserPublisherData.ProcessDelegate<UObject>(&Parms); \
}


#define Test_Plugins_EnginePlugins_PlayFab_Source_PlayFab_Public_PlayFabServerAPI_h_304_DELEGATE \
struct PlayFabServerAPI_eventDelegateOnSuccessGetUserPublisherInternalData_Parms \
{ \
	FServerGetUserDataResult Result; \
	UObject* customData; \
}; \
static inline void FDelegateOnSuccessGetUserPublisherInternalData_DelegateWrapper(const FScriptDelegate& DelegateOnSuccessGetUserPublisherInternalData, FServerGetUserDataResult Result, UObject* customData) \
{ \
	PlayFabServerAPI_eventDelegateOnSuccessGetUserPublisherInternalData_Parms Parms; \
	Parms.Result=Result; \
	Parms.customData=customData; \
	DelegateOnSuccessGetUserPublisherInternalData.ProcessDelegate<UObject>(&Parms); \
}


#define Test_Plugins_EnginePlugins_PlayFab_Source_PlayFab_Public_PlayFabServerAPI_h_303_DELEGATE \
struct PlayFabServerAPI_eventDelegateOnSuccessGetUserPublisherReadOnlyData_Parms \
{ \
	FServerGetUserDataResult Result; \
	UObject* customData; \
}; \
static inline void FDelegateOnSuccessGetUserPublisherReadOnlyData_DelegateWrapper(const FScriptDelegate& DelegateOnSuccessGetUserPublisherReadOnlyData, FServerGetUserDataResult Result, UObject* customData) \
{ \
	PlayFabServerAPI_eventDelegateOnSuccessGetUserPublisherReadOnlyData_Parms Parms; \
	Parms.Result=Result; \
	Parms.customData=customData; \
	DelegateOnSuccessGetUserPublisherReadOnlyData.ProcessDelegate<UObject>(&Parms); \
}


#define Test_Plugins_EnginePlugins_PlayFab_Source_PlayFab_Public_PlayFabServerAPI_h_302_DELEGATE \
struct PlayFabServerAPI_eventDelegateOnSuccessGetUserReadOnlyData_Parms \
{ \
	FServerGetUserDataResult Result; \
	UObject* customData; \
}; \
static inline void FDelegateOnSuccessGetUserReadOnlyData_DelegateWrapper(const FScriptDelegate& DelegateOnSuccessGetUserReadOnlyData, FServerGetUserDataResult Result, UObject* customData) \
{ \
	PlayFabServerAPI_eventDelegateOnSuccessGetUserReadOnlyData_Parms Parms; \
	Parms.Result=Result; \
	Parms.customData=customData; \
	DelegateOnSuccessGetUserReadOnlyData.ProcessDelegate<UObject>(&Parms); \
}


#define Test_Plugins_EnginePlugins_PlayFab_Source_PlayFab_Public_PlayFabServerAPI_h_301_DELEGATE \
struct PlayFabServerAPI_eventDelegateOnSuccessGrantCharacterToUser_Parms \
{ \
	FServerGrantCharacterToUserResult Result; \
	UObject* customData; \
}; \
static inline void FDelegateOnSuccessGrantCharacterToUser_DelegateWrapper(const FScriptDelegate& DelegateOnSuccessGrantCharacterToUser, FServerGrantCharacterToUserResult Result, UObject* customData) \
{ \
	PlayFabServerAPI_eventDelegateOnSuccessGrantCharacterToUser_Parms Parms; \
	Parms.Result=Result; \
	Parms.customData=customData; \
	DelegateOnSuccessGrantCharacterToUser.ProcessDelegate<UObject>(&Parms); \
}


#define Test_Plugins_EnginePlugins_PlayFab_Source_PlayFab_Public_PlayFabServerAPI_h_300_DELEGATE \
struct PlayFabServerAPI_eventDelegateOnSuccessGrantItemsToCharacter_Parms \
{ \
	FServerGrantItemsToCharacterResult Result; \
	UObject* customData; \
}; \
static inline void FDelegateOnSuccessGrantItemsToCharacter_DelegateWrapper(const FScriptDelegate& DelegateOnSuccessGrantItemsToCharacter, FServerGrantItemsToCharacterResult Result, UObject* customData) \
{ \
	PlayFabServerAPI_eventDelegateOnSuccessGrantItemsToCharacter_Parms Parms; \
	Parms.Result=Result; \
	Parms.customData=customData; \
	DelegateOnSuccessGrantItemsToCharacter.ProcessDelegate<UObject>(&Parms); \
}


#define Test_Plugins_EnginePlugins_PlayFab_Source_PlayFab_Public_PlayFabServerAPI_h_299_DELEGATE \
struct PlayFabServerAPI_eventDelegateOnSuccessGrantItemsToUser_Parms \
{ \
	FServerGrantItemsToUserResult Result; \
	UObject* customData; \
}; \
static inline void FDelegateOnSuccessGrantItemsToUser_DelegateWrapper(const FScriptDelegate& DelegateOnSuccessGrantItemsToUser, FServerGrantItemsToUserResult Result, UObject* customData) \
{ \
	PlayFabServerAPI_eventDelegateOnSuccessGrantItemsToUser_Parms Parms; \
	Parms.Result=Result; \
	Parms.customData=customData; \
	DelegateOnSuccessGrantItemsToUser.ProcessDelegate<UObject>(&Parms); \
}


#define Test_Plugins_EnginePlugins_PlayFab_Source_PlayFab_Public_PlayFabServerAPI_h_298_DELEGATE \
struct PlayFabServerAPI_eventDelegateOnSuccessGrantItemsToUsers_Parms \
{ \
	FServerGrantItemsToUsersResult Result; \
	UObject* customData; \
}; \
static inline void FDelegateOnSuccessGrantItemsToUsers_DelegateWrapper(const FScriptDelegate& DelegateOnSuccessGrantItemsToUsers, FServerGrantItemsToUsersResult Result, UObject* customData) \
{ \
	PlayFabServerAPI_eventDelegateOnSuccessGrantItemsToUsers_Parms Parms; \
	Parms.Result=Result; \
	Parms.customData=customData; \
	DelegateOnSuccessGrantItemsToUsers.ProcessDelegate<UObject>(&Parms); \
}


#define Test_Plugins_EnginePlugins_PlayFab_Source_PlayFab_Public_PlayFabServerAPI_h_297_DELEGATE \
struct PlayFabServerAPI_eventDelegateOnSuccessLinkPSNAccount_Parms \
{ \
	FServerLinkPSNAccountResult Result; \
	UObject* customData; \
}; \
static inline void FDelegateOnSuccessLinkPSNAccount_DelegateWrapper(const FScriptDelegate& DelegateOnSuccessLinkPSNAccount, FServerLinkPSNAccountResult Result, UObject* customData) \
{ \
	PlayFabServerAPI_eventDelegateOnSuccessLinkPSNAccount_Parms Parms; \
	Parms.Result=Result; \
	Parms.customData=customData; \
	DelegateOnSuccessLinkPSNAccount.ProcessDelegate<UObject>(&Parms); \
}


#define Test_Plugins_EnginePlugins_PlayFab_Source_PlayFab_Public_PlayFabServerAPI_h_296_DELEGATE \
struct PlayFabServerAPI_eventDelegateOnSuccessLinkServerCustomId_Parms \
{ \
	FServerLinkServerCustomIdResult Result; \
	UObject* customData; \
}; \
static inline void FDelegateOnSuccessLinkServerCustomId_DelegateWrapper(const FScriptDelegate& DelegateOnSuccessLinkServerCustomId, FServerLinkServerCustomIdResult Result, UObject* customData) \
{ \
	PlayFabServerAPI_eventDelegateOnSuccessLinkServerCustomId_Parms Parms; \
	Parms.Result=Result; \
	Parms.customData=customData; \
	DelegateOnSuccessLinkServerCustomId.ProcessDelegate<UObject>(&Parms); \
}


#define Test_Plugins_EnginePlugins_PlayFab_Source_PlayFab_Public_PlayFabServerAPI_h_295_DELEGATE \
struct PlayFabServerAPI_eventDelegateOnSuccessLinkXboxAccount_Parms \
{ \
	FServerLinkXboxAccountResult Result; \
	UObject* customData; \
}; \
static inline void FDelegateOnSuccessLinkXboxAccount_DelegateWrapper(const FScriptDelegate& DelegateOnSuccessLinkXboxAccount, FServerLinkXboxAccountResult Result, UObject* customData) \
{ \
	PlayFabServerAPI_eventDelegateOnSuccessLinkXboxAccount_Parms Parms; \
	Parms.Result=Result; \
	Parms.customData=customData; \
	DelegateOnSuccessLinkXboxAccount.ProcessDelegate<UObject>(&Parms); \
}


#define Test_Plugins_EnginePlugins_PlayFab_Source_PlayFab_Public_PlayFabServerAPI_h_294_DELEGATE \
struct PlayFabServerAPI_eventDelegateOnSuccessLoginWithServerCustomId_Parms \
{ \
	FServerServerLoginResult Result; \
	UObject* customData; \
}; \
static inline void FDelegateOnSuccessLoginWithServerCustomId_DelegateWrapper(const FScriptDelegate& DelegateOnSuccessLoginWithServerCustomId, FServerServerLoginResult Result, UObject* customData) \
{ \
	PlayFabServerAPI_eventDelegateOnSuccessLoginWithServerCustomId_Parms Parms; \
	Parms.Result=Result; \
	Parms.customData=customData; \
	DelegateOnSuccessLoginWithServerCustomId.ProcessDelegate<UObject>(&Parms); \
}


#define Test_Plugins_EnginePlugins_PlayFab_Source_PlayFab_Public_PlayFabServerAPI_h_293_DELEGATE \
struct PlayFabServerAPI_eventDelegateOnSuccessLoginWithXbox_Parms \
{ \
	FServerServerLoginResult Result; \
	UObject* customData; \
}; \
static inline void FDelegateOnSuccessLoginWithXbox_DelegateWrapper(const FScriptDelegate& DelegateOnSuccessLoginWithXbox, FServerServerLoginResult Result, UObject* customData) \
{ \
	PlayFabServerAPI_eventDelegateOnSuccessLoginWithXbox_Parms Parms; \
	Parms.Result=Result; \
	Parms.customData=customData; \
	DelegateOnSuccessLoginWithXbox.ProcessDelegate<UObject>(&Parms); \
}


#define Test_Plugins_EnginePlugins_PlayFab_Source_PlayFab_Public_PlayFabServerAPI_h_292_DELEGATE \
struct PlayFabServerAPI_eventDelegateOnSuccessLoginWithXboxId_Parms \
{ \
	FServerServerLoginResult Result; \
	UObject* customData; \
}; \
static inline void FDelegateOnSuccessLoginWithXboxId_DelegateWrapper(const FScriptDelegate& DelegateOnSuccessLoginWithXboxId, FServerServerLoginResult Result, UObject* customData) \
{ \
	PlayFabServerAPI_eventDelegateOnSuccessLoginWithXboxId_Parms Parms; \
	Parms.Result=Result; \
	Parms.customData=customData; \
	DelegateOnSuccessLoginWithXboxId.ProcessDelegate<UObject>(&Parms); \
}


#define Test_Plugins_EnginePlugins_PlayFab_Source_PlayFab_Public_PlayFabServerAPI_h_291_DELEGATE \
struct PlayFabServerAPI_eventDelegateOnSuccessModifyItemUses_Parms \
{ \
	FServerModifyItemUsesResult Result; \
	UObject* customData; \
}; \
static inline void FDelegateOnSuccessModifyItemUses_DelegateWrapper(const FScriptDelegate& DelegateOnSuccessModifyItemUses, FServerModifyItemUsesResult Result, UObject* customData) \
{ \
	PlayFabServerAPI_eventDelegateOnSuccessModifyItemUses_Parms Parms; \
	Parms.Result=Result; \
	Parms.customData=customData; \
	DelegateOnSuccessModifyItemUses.ProcessDelegate<UObject>(&Parms); \
}


#define Test_Plugins_EnginePlugins_PlayFab_Source_PlayFab_Public_PlayFabServerAPI_h_290_DELEGATE \
struct PlayFabServerAPI_eventDelegateOnSuccessMoveItemToCharacterFromCharacter_Parms \
{ \
	FServerMoveItemToCharacterFromCharacterResult Result; \
	UObject* customData; \
}; \
static inline void FDelegateOnSuccessMoveItemToCharacterFromCharacter_DelegateWrapper(const FScriptDelegate& DelegateOnSuccessMoveItemToCharacterFromCharacter, FServerMoveItemToCharacterFromCharacterResult Result, UObject* customData) \
{ \
	PlayFabServerAPI_eventDelegateOnSuccessMoveItemToCharacterFromCharacter_Parms Parms; \
	Parms.Result=Result; \
	Parms.customData=customData; \
	DelegateOnSuccessMoveItemToCharacterFromCharacter.ProcessDelegate<UObject>(&Parms); \
}


#define Test_Plugins_EnginePlugins_PlayFab_Source_PlayFab_Public_PlayFabServerAPI_h_289_DELEGATE \
struct PlayFabServerAPI_eventDelegateOnSuccessMoveItemToCharacterFromUser_Parms \
{ \
	FServerMoveItemToCharacterFromUserResult Result; \
	UObject* customData; \
}; \
static inline void FDelegateOnSuccessMoveItemToCharacterFromUser_DelegateWrapper(const FScriptDelegate& DelegateOnSuccessMoveItemToCharacterFromUser, FServerMoveItemToCharacterFromUserResult Result, UObject* customData) \
{ \
	PlayFabServerAPI_eventDelegateOnSuccessMoveItemToCharacterFromUser_Parms Parms; \
	Parms.Result=Result; \
	Parms.customData=customData; \
	DelegateOnSuccessMoveItemToCharacterFromUser.ProcessDelegate<UObject>(&Parms); \
}


#define Test_Plugins_EnginePlugins_PlayFab_Source_PlayFab_Public_PlayFabServerAPI_h_288_DELEGATE \
struct PlayFabServerAPI_eventDelegateOnSuccessMoveItemToUserFromCharacter_Parms \
{ \
	FServerMoveItemToUserFromCharacterResult Result; \
	UObject* customData; \
}; \
static inline void FDelegateOnSuccessMoveItemToUserFromCharacter_DelegateWrapper(const FScriptDelegate& DelegateOnSuccessMoveItemToUserFromCharacter, FServerMoveItemToUserFromCharacterResult Result, UObject* customData) \
{ \
	PlayFabServerAPI_eventDelegateOnSuccessMoveItemToUserFromCharacter_Parms Parms; \
	Parms.Result=Result; \
	Parms.customData=customData; \
	DelegateOnSuccessMoveItemToUserFromCharacter.ProcessDelegate<UObject>(&Parms); \
}


#define Test_Plugins_EnginePlugins_PlayFab_Source_PlayFab_Public_PlayFabServerAPI_h_287_DELEGATE \
struct PlayFabServerAPI_eventDelegateOnSuccessNotifyMatchmakerPlayerLeft_Parms \
{ \
	FServerNotifyMatchmakerPlayerLeftResult Result; \
	UObject* customData; \
}; \
static inline void FDelegateOnSuccessNotifyMatchmakerPlayerLeft_DelegateWrapper(const FScriptDelegate& DelegateOnSuccessNotifyMatchmakerPlayerLeft, FServerNotifyMatchmakerPlayerLeftResult Result, UObject* customData) \
{ \
	PlayFabServerAPI_eventDelegateOnSuccessNotifyMatchmakerPlayerLeft_Parms Parms; \
	Parms.Result=Result; \
	Parms.customData=customData; \
	DelegateOnSuccessNotifyMatchmakerPlayerLeft.ProcessDelegate<UObject>(&Parms); \
}


#define Test_Plugins_EnginePlugins_PlayFab_Source_PlayFab_Public_PlayFabServerAPI_h_286_DELEGATE \
struct PlayFabServerAPI_eventDelegateOnSuccessRedeemCoupon_Parms \
{ \
	FServerRedeemCouponResult Result; \
	UObject* customData; \
}; \
static inline void FDelegateOnSuccessRedeemCoupon_DelegateWrapper(const FScriptDelegate& DelegateOnSuccessRedeemCoupon, FServerRedeemCouponResult Result, UObject* customData) \
{ \
	PlayFabServerAPI_eventDelegateOnSuccessRedeemCoupon_Parms Parms; \
	Parms.Result=Result; \
	Parms.customData=customData; \
	DelegateOnSuccessRedeemCoupon.ProcessDelegate<UObject>(&Parms); \
}


#define Test_Plugins_EnginePlugins_PlayFab_Source_PlayFab_Public_PlayFabServerAPI_h_285_DELEGATE \
struct PlayFabServerAPI_eventDelegateOnSuccessRedeemMatchmakerTicket_Parms \
{ \
	FServerRedeemMatchmakerTicketResult Result; \
	UObject* customData; \
}; \
static inline void FDelegateOnSuccessRedeemMatchmakerTicket_DelegateWrapper(const FScriptDelegate& DelegateOnSuccessRedeemMatchmakerTicket, FServerRedeemMatchmakerTicketResult Result, UObject* customData) \
{ \
	PlayFabServerAPI_eventDelegateOnSuccessRedeemMatchmakerTicket_Parms Parms; \
	Parms.Result=Result; \
	Parms.customData=customData; \
	DelegateOnSuccessRedeemMatchmakerTicket.ProcessDelegate<UObject>(&Parms); \
}


#define Test_Plugins_EnginePlugins_PlayFab_Source_PlayFab_Public_PlayFabServerAPI_h_284_DELEGATE \
struct PlayFabServerAPI_eventDelegateOnSuccessRefreshGameServerInstanceHeartbeat_Parms \
{ \
	FServerRefreshGameServerInstanceHeartbeatResult Result; \
	UObject* customData; \
}; \
static inline void FDelegateOnSuccessRefreshGameServerInstanceHeartbeat_DelegateWrapper(const FScriptDelegate& DelegateOnSuccessRefreshGameServerInstanceHeartbeat, FServerRefreshGameServerInstanceHeartbeatResult Result, UObject* customData) \
{ \
	PlayFabServerAPI_eventDelegateOnSuccessRefreshGameServerInstanceHeartbeat_Parms Parms; \
	Parms.Result=Result; \
	Parms.customData=customData; \
	DelegateOnSuccessRefreshGameServerInstanceHeartbeat.ProcessDelegate<UObject>(&Parms); \
}


#define Test_Plugins_EnginePlugins_PlayFab_Source_PlayFab_Public_PlayFabServerAPI_h_283_DELEGATE \
struct PlayFabServerAPI_eventDelegateOnSuccessRegisterGame_Parms \
{ \
	FServerRegisterGameResponse Result; \
	UObject* customData; \
}; \
static inline void FDelegateOnSuccessRegisterGame_DelegateWrapper(const FScriptDelegate& DelegateOnSuccessRegisterGame, FServerRegisterGameResponse Result, UObject* customData) \
{ \
	PlayFabServerAPI_eventDelegateOnSuccessRegisterGame_Parms Parms; \
	Parms.Result=Result; \
	Parms.customData=customData; \
	DelegateOnSuccessRegisterGame.ProcessDelegate<UObject>(&Parms); \
}


#define Test_Plugins_EnginePlugins_PlayFab_Source_PlayFab_Public_PlayFabServerAPI_h_282_DELEGATE \
struct PlayFabServerAPI_eventDelegateOnSuccessRemoveFriend_Parms \
{ \
	FServerEmptyResponse Result; \
	UObject* customData; \
}; \
static inline void FDelegateOnSuccessRemoveFriend_DelegateWrapper(const FScriptDelegate& DelegateOnSuccessRemoveFriend, FServerEmptyResponse Result, UObject* customData) \
{ \
	PlayFabServerAPI_eventDelegateOnSuccessRemoveFriend_Parms Parms; \
	Parms.Result=Result; \
	Parms.customData=customData; \
	DelegateOnSuccessRemoveFriend.ProcessDelegate<UObject>(&Parms); \
}


#define Test_Plugins_EnginePlugins_PlayFab_Source_PlayFab_Public_PlayFabServerAPI_h_281_DELEGATE \
struct PlayFabServerAPI_eventDelegateOnSuccessRemoveGenericID_Parms \
{ \
	FServerEmptyResult Result; \
	UObject* customData; \
}; \
static inline void FDelegateOnSuccessRemoveGenericID_DelegateWrapper(const FScriptDelegate& DelegateOnSuccessRemoveGenericID, FServerEmptyResult Result, UObject* customData) \
{ \
	PlayFabServerAPI_eventDelegateOnSuccessRemoveGenericID_Parms Parms; \
	Parms.Result=Result; \
	Parms.customData=customData; \
	DelegateOnSuccessRemoveGenericID.ProcessDelegate<UObject>(&Parms); \
}


#define Test_Plugins_EnginePlugins_PlayFab_Source_PlayFab_Public_PlayFabServerAPI_h_280_DELEGATE \
struct PlayFabServerAPI_eventDelegateOnSuccessRemovePlayerTag_Parms \
{ \
	FServerRemovePlayerTagResult Result; \
	UObject* customData; \
}; \
static inline void FDelegateOnSuccessRemovePlayerTag_DelegateWrapper(const FScriptDelegate& DelegateOnSuccessRemovePlayerTag, FServerRemovePlayerTagResult Result, UObject* customData) \
{ \
	PlayFabServerAPI_eventDelegateOnSuccessRemovePlayerTag_Parms Parms; \
	Parms.Result=Result; \
	Parms.customData=customData; \
	DelegateOnSuccessRemovePlayerTag.ProcessDelegate<UObject>(&Parms); \
}


#define Test_Plugins_EnginePlugins_PlayFab_Source_PlayFab_Public_PlayFabServerAPI_h_279_DELEGATE \
struct PlayFabServerAPI_eventDelegateOnSuccessRemoveSharedGroupMembers_Parms \
{ \
	FServerRemoveSharedGroupMembersResult Result; \
	UObject* customData; \
}; \
static inline void FDelegateOnSuccessRemoveSharedGroupMembers_DelegateWrapper(const FScriptDelegate& DelegateOnSuccessRemoveSharedGroupMembers, FServerRemoveSharedGroupMembersResult Result, UObject* customData) \
{ \
	PlayFabServerAPI_eventDelegateOnSuccessRemoveSharedGroupMembers_Parms Parms; \
	Parms.Result=Result; \
	Parms.customData=customData; \
	DelegateOnSuccessRemoveSharedGroupMembers.ProcessDelegate<UObject>(&Parms); \
}


#define Test_Plugins_EnginePlugins_PlayFab_Source_PlayFab_Public_PlayFabServerAPI_h_278_DELEGATE \
struct PlayFabServerAPI_eventDelegateOnSuccessReportPlayer_Parms \
{ \
	FServerReportPlayerServerResult Result; \
	UObject* customData; \
}; \
static inline void FDelegateOnSuccessReportPlayer_DelegateWrapper(const FScriptDelegate& DelegateOnSuccessReportPlayer, FServerReportPlayerServerResult Result, UObject* customData) \
{ \
	PlayFabServerAPI_eventDelegateOnSuccessReportPlayer_Parms Parms; \
	Parms.Result=Result; \
	Parms.customData=customData; \
	DelegateOnSuccessReportPlayer.ProcessDelegate<UObject>(&Parms); \
}


#define Test_Plugins_EnginePlugins_PlayFab_Source_PlayFab_Public_PlayFabServerAPI_h_277_DELEGATE \
struct PlayFabServerAPI_eventDelegateOnSuccessRevokeAllBansForUser_Parms \
{ \
	FServerRevokeAllBansForUserResult Result; \
	UObject* customData; \
}; \
static inline void FDelegateOnSuccessRevokeAllBansForUser_DelegateWrapper(const FScriptDelegate& DelegateOnSuccessRevokeAllBansForUser, FServerRevokeAllBansForUserResult Result, UObject* customData) \
{ \
	PlayFabServerAPI_eventDelegateOnSuccessRevokeAllBansForUser_Parms Parms; \
	Parms.Result=Result; \
	Parms.customData=customData; \
	DelegateOnSuccessRevokeAllBansForUser.ProcessDelegate<UObject>(&Parms); \
}


#define Test_Plugins_EnginePlugins_PlayFab_Source_PlayFab_Public_PlayFabServerAPI_h_276_DELEGATE \
struct PlayFabServerAPI_eventDelegateOnSuccessRevokeBans_Parms \
{ \
	FServerRevokeBansResult Result; \
	UObject* customData; \
}; \
static inline void FDelegateOnSuccessRevokeBans_DelegateWrapper(const FScriptDelegate& DelegateOnSuccessRevokeBans, FServerRevokeBansResult Result, UObject* customData) \
{ \
	PlayFabServerAPI_eventDelegateOnSuccessRevokeBans_Parms Parms; \
	Parms.Result=Result; \
	Parms.customData=customData; \
	DelegateOnSuccessRevokeBans.ProcessDelegate<UObject>(&Parms); \
}


#define Test_Plugins_EnginePlugins_PlayFab_Source_PlayFab_Public_PlayFabServerAPI_h_275_DELEGATE \
struct PlayFabServerAPI_eventDelegateOnSuccessRevokeInventoryItem_Parms \
{ \
	FServerRevokeInventoryResult Result; \
	UObject* customData; \
}; \
static inline void FDelegateOnSuccessRevokeInventoryItem_DelegateWrapper(const FScriptDelegate& DelegateOnSuccessRevokeInventoryItem, FServerRevokeInventoryResult Result, UObject* customData) \
{ \
	PlayFabServerAPI_eventDelegateOnSuccessRevokeInventoryItem_Parms Parms; \
	Parms.Result=Result; \
	Parms.customData=customData; \
	DelegateOnSuccessRevokeInventoryItem.ProcessDelegate<UObject>(&Parms); \
}


#define Test_Plugins_EnginePlugins_PlayFab_Source_PlayFab_Public_PlayFabServerAPI_h_274_DELEGATE \
struct PlayFabServerAPI_eventDelegateOnSuccessRevokeInventoryItems_Parms \
{ \
	FServerRevokeInventoryItemsResult Result; \
	UObject* customData; \
}; \
static inline void FDelegateOnSuccessRevokeInventoryItems_DelegateWrapper(const FScriptDelegate& DelegateOnSuccessRevokeInventoryItems, FServerRevokeInventoryItemsResult Result, UObject* customData) \
{ \
	PlayFabServerAPI_eventDelegateOnSuccessRevokeInventoryItems_Parms Parms; \
	Parms.Result=Result; \
	Parms.customData=customData; \
	DelegateOnSuccessRevokeInventoryItems.ProcessDelegate<UObject>(&Parms); \
}


#define Test_Plugins_EnginePlugins_PlayFab_Source_PlayFab_Public_PlayFabServerAPI_h_273_DELEGATE \
struct PlayFabServerAPI_eventDelegateOnSuccessSavePushNotificationTemplate_Parms \
{ \
	FServerSavePushNotificationTemplateResult Result; \
	UObject* customData; \
}; \
static inline void FDelegateOnSuccessSavePushNotificationTemplate_DelegateWrapper(const FScriptDelegate& DelegateOnSuccessSavePushNotificationTemplate, FServerSavePushNotificationTemplateResult Result, UObject* customData) \
{ \
	PlayFabServerAPI_eventDelegateOnSuccessSavePushNotificationTemplate_Parms Parms; \
	Parms.Result=Result; \
	Parms.customData=customData; \
	DelegateOnSuccessSavePushNotificationTemplate.ProcessDelegate<UObject>(&Parms); \
}


#define Test_Plugins_EnginePlugins_PlayFab_Source_PlayFab_Public_PlayFabServerAPI_h_272_DELEGATE \
struct PlayFabServerAPI_eventDelegateOnSuccessSendCustomAccountRecoveryEmail_Parms \
{ \
	FServerSendCustomAccountRecoveryEmailResult Result; \
	UObject* customData; \
}; \
static inline void FDelegateOnSuccessSendCustomAccountRecoveryEmail_DelegateWrapper(const FScriptDelegate& DelegateOnSuccessSendCustomAccountRecoveryEmail, FServerSendCustomAccountRecoveryEmailResult Result, UObject* customData) \
{ \
	PlayFabServerAPI_eventDelegateOnSuccessSendCustomAccountRecoveryEmail_Parms Parms; \
	Parms.Result=Result; \
	Parms.customData=customData; \
	DelegateOnSuccessSendCustomAccountRecoveryEmail.ProcessDelegate<UObject>(&Parms); \
}


#define Test_Plugins_EnginePlugins_PlayFab_Source_PlayFab_Public_PlayFabServerAPI_h_271_DELEGATE \
struct PlayFabServerAPI_eventDelegateOnSuccessSendEmailFromTemplate_Parms \
{ \
	FServerSendEmailFromTemplateResult Result; \
	UObject* customData; \
}; \
static inline void FDelegateOnSuccessSendEmailFromTemplate_DelegateWrapper(const FScriptDelegate& DelegateOnSuccessSendEmailFromTemplate, FServerSendEmailFromTemplateResult Result, UObject* customData) \
{ \
	PlayFabServerAPI_eventDelegateOnSuccessSendEmailFromTemplate_Parms Parms; \
	Parms.Result=Result; \
	Parms.customData=customData; \
	DelegateOnSuccessSendEmailFromTemplate.ProcessDelegate<UObject>(&Parms); \
}


#define Test_Plugins_EnginePlugins_PlayFab_Source_PlayFab_Public_PlayFabServerAPI_h_270_DELEGATE \
struct PlayFabServerAPI_eventDelegateOnSuccessSendPushNotification_Parms \
{ \
	FServerSendPushNotificationResult Result; \
	UObject* customData; \
}; \
static inline void FDelegateOnSuccessSendPushNotification_DelegateWrapper(const FScriptDelegate& DelegateOnSuccessSendPushNotification, FServerSendPushNotificationResult Result, UObject* customData) \
{ \
	PlayFabServerAPI_eventDelegateOnSuccessSendPushNotification_Parms Parms; \
	Parms.Result=Result; \
	Parms.customData=customData; \
	DelegateOnSuccessSendPushNotification.ProcessDelegate<UObject>(&Parms); \
}


#define Test_Plugins_EnginePlugins_PlayFab_Source_PlayFab_Public_PlayFabServerAPI_h_269_DELEGATE \
struct PlayFabServerAPI_eventDelegateOnSuccessSendPushNotificationFromTemplate_Parms \
{ \
	FServerSendPushNotificationResult Result; \
	UObject* customData; \
}; \
static inline void FDelegateOnSuccessSendPushNotificationFromTemplate_DelegateWrapper(const FScriptDelegate& DelegateOnSuccessSendPushNotificationFromTemplate, FServerSendPushNotificationResult Result, UObject* customData) \
{ \
	PlayFabServerAPI_eventDelegateOnSuccessSendPushNotificationFromTemplate_Parms Parms; \
	Parms.Result=Result; \
	Parms.customData=customData; \
	DelegateOnSuccessSendPushNotificationFromTemplate.ProcessDelegate<UObject>(&Parms); \
}


#define Test_Plugins_EnginePlugins_PlayFab_Source_PlayFab_Public_PlayFabServerAPI_h_268_DELEGATE \
struct PlayFabServerAPI_eventDelegateOnSuccessSetFriendTags_Parms \
{ \
	FServerEmptyResponse Result; \
	UObject* customData; \
}; \
static inline void FDelegateOnSuccessSetFriendTags_DelegateWrapper(const FScriptDelegate& DelegateOnSuccessSetFriendTags, FServerEmptyResponse Result, UObject* customData) \
{ \
	PlayFabServerAPI_eventDelegateOnSuccessSetFriendTags_Parms Parms; \
	Parms.Result=Result; \
	Parms.customData=customData; \
	DelegateOnSuccessSetFriendTags.ProcessDelegate<UObject>(&Parms); \
}


#define Test_Plugins_EnginePlugins_PlayFab_Source_PlayFab_Public_PlayFabServerAPI_h_267_DELEGATE \
struct PlayFabServerAPI_eventDelegateOnSuccessSetGameServerInstanceData_Parms \
{ \
	FServerSetGameServerInstanceDataResult Result; \
	UObject* customData; \
}; \
static inline void FDelegateOnSuccessSetGameServerInstanceData_DelegateWrapper(const FScriptDelegate& DelegateOnSuccessSetGameServerInstanceData, FServerSetGameServerInstanceDataResult Result, UObject* customData) \
{ \
	PlayFabServerAPI_eventDelegateOnSuccessSetGameServerInstanceData_Parms Parms; \
	Parms.Result=Result; \
	Parms.customData=customData; \
	DelegateOnSuccessSetGameServerInstanceData.ProcessDelegate<UObject>(&Parms); \
}


#define Test_Plugins_EnginePlugins_PlayFab_Source_PlayFab_Public_PlayFabServerAPI_h_266_DELEGATE \
struct PlayFabServerAPI_eventDelegateOnSuccessSetGameServerInstanceState_Parms \
{ \
	FServerSetGameServerInstanceStateResult Result; \
	UObject* customData; \
}; \
static inline void FDelegateOnSuccessSetGameServerInstanceState_DelegateWrapper(const FScriptDelegate& DelegateOnSuccessSetGameServerInstanceState, FServerSetGameServerInstanceStateResult Result, UObject* customData) \
{ \
	PlayFabServerAPI_eventDelegateOnSuccessSetGameServerInstanceState_Parms Parms; \
	Parms.Result=Result; \
	Parms.customData=customData; \
	DelegateOnSuccessSetGameServerInstanceState.ProcessDelegate<UObject>(&Parms); \
}


#define Test_Plugins_EnginePlugins_PlayFab_Source_PlayFab_Public_PlayFabServerAPI_h_265_DELEGATE \
struct PlayFabServerAPI_eventDelegateOnSuccessSetGameServerInstanceTags_Parms \
{ \
	FServerSetGameServerInstanceTagsResult Result; \
	UObject* customData; \
}; \
static inline void FDelegateOnSuccessSetGameServerInstanceTags_DelegateWrapper(const FScriptDelegate& DelegateOnSuccessSetGameServerInstanceTags, FServerSetGameServerInstanceTagsResult Result, UObject* customData) \
{ \
	PlayFabServerAPI_eventDelegateOnSuccessSetGameServerInstanceTags_Parms Parms; \
	Parms.Result=Result; \
	Parms.customData=customData; \
	DelegateOnSuccessSetGameServerInstanceTags.ProcessDelegate<UObject>(&Parms); \
}


#define Test_Plugins_EnginePlugins_PlayFab_Source_PlayFab_Public_PlayFabServerAPI_h_264_DELEGATE \
struct PlayFabServerAPI_eventDelegateOnSuccessSetPlayerSecret_Parms \
{ \
	FServerSetPlayerSecretResult Result; \
	UObject* customData; \
}; \
static inline void FDelegateOnSuccessSetPlayerSecret_DelegateWrapper(const FScriptDelegate& DelegateOnSuccessSetPlayerSecret, FServerSetPlayerSecretResult Result, UObject* customData) \
{ \
	PlayFabServerAPI_eventDelegateOnSuccessSetPlayerSecret_Parms Parms; \
	Parms.Result=Result; \
	Parms.customData=customData; \
	DelegateOnSuccessSetPlayerSecret.ProcessDelegate<UObject>(&Parms); \
}


#define Test_Plugins_EnginePlugins_PlayFab_Source_PlayFab_Public_PlayFabServerAPI_h_263_DELEGATE \
struct PlayFabServerAPI_eventDelegateOnSuccessSetPublisherData_Parms \
{ \
	FServerSetPublisherDataResult Result; \
	UObject* customData; \
}; \
static inline void FDelegateOnSuccessSetPublisherData_DelegateWrapper(const FScriptDelegate& DelegateOnSuccessSetPublisherData, FServerSetPublisherDataResult Result, UObject* customData) \
{ \
	PlayFabServerAPI_eventDelegateOnSuccessSetPublisherData_Parms Parms; \
	Parms.Result=Result; \
	Parms.customData=customData; \
	DelegateOnSuccessSetPublisherData.ProcessDelegate<UObject>(&Parms); \
}


#define Test_Plugins_EnginePlugins_PlayFab_Source_PlayFab_Public_PlayFabServerAPI_h_262_DELEGATE \
struct PlayFabServerAPI_eventDelegateOnSuccessSetTitleData_Parms \
{ \
	FServerSetTitleDataResult Result; \
	UObject* customData; \
}; \
static inline void FDelegateOnSuccessSetTitleData_DelegateWrapper(const FScriptDelegate& DelegateOnSuccessSetTitleData, FServerSetTitleDataResult Result, UObject* customData) \
{ \
	PlayFabServerAPI_eventDelegateOnSuccessSetTitleData_Parms Parms; \
	Parms.Result=Result; \
	Parms.customData=customData; \
	DelegateOnSuccessSetTitleData.ProcessDelegate<UObject>(&Parms); \
}


#define Test_Plugins_EnginePlugins_PlayFab_Source_PlayFab_Public_PlayFabServerAPI_h_261_DELEGATE \
struct PlayFabServerAPI_eventDelegateOnSuccessSetTitleInternalData_Parms \
{ \
	FServerSetTitleDataResult Result; \
	UObject* customData; \
}; \
static inline void FDelegateOnSuccessSetTitleInternalData_DelegateWrapper(const FScriptDelegate& DelegateOnSuccessSetTitleInternalData, FServerSetTitleDataResult Result, UObject* customData) \
{ \
	PlayFabServerAPI_eventDelegateOnSuccessSetTitleInternalData_Parms Parms; \
	Parms.Result=Result; \
	Parms.customData=customData; \
	DelegateOnSuccessSetTitleInternalData.ProcessDelegate<UObject>(&Parms); \
}


#define Test_Plugins_EnginePlugins_PlayFab_Source_PlayFab_Public_PlayFabServerAPI_h_260_DELEGATE \
struct PlayFabServerAPI_eventDelegateOnSuccessSubtractCharacterVirtualCurrency_Parms \
{ \
	FServerModifyCharacterVirtualCurrencyResult Result; \
	UObject* customData; \
}; \
static inline void FDelegateOnSuccessSubtractCharacterVirtualCurrency_DelegateWrapper(const FScriptDelegate& DelegateOnSuccessSubtractCharacterVirtualCurrency, FServerModifyCharacterVirtualCurrencyResult Result, UObject* customData) \
{ \
	PlayFabServerAPI_eventDelegateOnSuccessSubtractCharacterVirtualCurrency_Parms Parms; \
	Parms.Result=Result; \
	Parms.customData=customData; \
	DelegateOnSuccessSubtractCharacterVirtualCurrency.ProcessDelegate<UObject>(&Parms); \
}


#define Test_Plugins_EnginePlugins_PlayFab_Source_PlayFab_Public_PlayFabServerAPI_h_259_DELEGATE \
struct PlayFabServerAPI_eventDelegateOnSuccessSubtractUserVirtualCurrency_Parms \
{ \
	FServerModifyUserVirtualCurrencyResult Result; \
	UObject* customData; \
}; \
static inline void FDelegateOnSuccessSubtractUserVirtualCurrency_DelegateWrapper(const FScriptDelegate& DelegateOnSuccessSubtractUserVirtualCurrency, FServerModifyUserVirtualCurrencyResult Result, UObject* customData) \
{ \
	PlayFabServerAPI_eventDelegateOnSuccessSubtractUserVirtualCurrency_Parms Parms; \
	Parms.Result=Result; \
	Parms.customData=customData; \
	DelegateOnSuccessSubtractUserVirtualCurrency.ProcessDelegate<UObject>(&Parms); \
}


#define Test_Plugins_EnginePlugins_PlayFab_Source_PlayFab_Public_PlayFabServerAPI_h_258_DELEGATE \
struct PlayFabServerAPI_eventDelegateOnSuccessUnlinkPSNAccount_Parms \
{ \
	FServerUnlinkPSNAccountResult Result; \
	UObject* customData; \
}; \
static inline void FDelegateOnSuccessUnlinkPSNAccount_DelegateWrapper(const FScriptDelegate& DelegateOnSuccessUnlinkPSNAccount, FServerUnlinkPSNAccountResult Result, UObject* customData) \
{ \
	PlayFabServerAPI_eventDelegateOnSuccessUnlinkPSNAccount_Parms Parms; \
	Parms.Result=Result; \
	Parms.customData=customData; \
	DelegateOnSuccessUnlinkPSNAccount.ProcessDelegate<UObject>(&Parms); \
}


#define Test_Plugins_EnginePlugins_PlayFab_Source_PlayFab_Public_PlayFabServerAPI_h_257_DELEGATE \
struct PlayFabServerAPI_eventDelegateOnSuccessUnlinkServerCustomId_Parms \
{ \
	FServerUnlinkServerCustomIdResult Result; \
	UObject* customData; \
}; \
static inline void FDelegateOnSuccessUnlinkServerCustomId_DelegateWrapper(const FScriptDelegate& DelegateOnSuccessUnlinkServerCustomId, FServerUnlinkServerCustomIdResult Result, UObject* customData) \
{ \
	PlayFabServerAPI_eventDelegateOnSuccessUnlinkServerCustomId_Parms Parms; \
	Parms.Result=Result; \
	Parms.customData=customData; \
	DelegateOnSuccessUnlinkServerCustomId.ProcessDelegate<UObject>(&Parms); \
}


#define Test_Plugins_EnginePlugins_PlayFab_Source_PlayFab_Public_PlayFabServerAPI_h_256_DELEGATE \
struct PlayFabServerAPI_eventDelegateOnSuccessUnlinkXboxAccount_Parms \
{ \
	FServerUnlinkXboxAccountResult Result; \
	UObject* customData; \
}; \
static inline void FDelegateOnSuccessUnlinkXboxAccount_DelegateWrapper(const FScriptDelegate& DelegateOnSuccessUnlinkXboxAccount, FServerUnlinkXboxAccountResult Result, UObject* customData) \
{ \
	PlayFabServerAPI_eventDelegateOnSuccessUnlinkXboxAccount_Parms Parms; \
	Parms.Result=Result; \
	Parms.customData=customData; \
	DelegateOnSuccessUnlinkXboxAccount.ProcessDelegate<UObject>(&Parms); \
}


#define Test_Plugins_EnginePlugins_PlayFab_Source_PlayFab_Public_PlayFabServerAPI_h_255_DELEGATE \
struct PlayFabServerAPI_eventDelegateOnSuccessUnlockContainerInstance_Parms \
{ \
	FServerUnlockContainerItemResult Result; \
	UObject* customData; \
}; \
static inline void FDelegateOnSuccessUnlockContainerInstance_DelegateWrapper(const FScriptDelegate& DelegateOnSuccessUnlockContainerInstance, FServerUnlockContainerItemResult Result, UObject* customData) \
{ \
	PlayFabServerAPI_eventDelegateOnSuccessUnlockContainerInstance_Parms Parms; \
	Parms.Result=Result; \
	Parms.customData=customData; \
	DelegateOnSuccessUnlockContainerInstance.ProcessDelegate<UObject>(&Parms); \
}


#define Test_Plugins_EnginePlugins_PlayFab_Source_PlayFab_Public_PlayFabServerAPI_h_254_DELEGATE \
struct PlayFabServerAPI_eventDelegateOnSuccessUnlockContainerItem_Parms \
{ \
	FServerUnlockContainerItemResult Result; \
	UObject* customData; \
}; \
static inline void FDelegateOnSuccessUnlockContainerItem_DelegateWrapper(const FScriptDelegate& DelegateOnSuccessUnlockContainerItem, FServerUnlockContainerItemResult Result, UObject* customData) \
{ \
	PlayFabServerAPI_eventDelegateOnSuccessUnlockContainerItem_Parms Parms; \
	Parms.Result=Result; \
	Parms.customData=customData; \
	DelegateOnSuccessUnlockContainerItem.ProcessDelegate<UObject>(&Parms); \
}


#define Test_Plugins_EnginePlugins_PlayFab_Source_PlayFab_Public_PlayFabServerAPI_h_253_DELEGATE \
struct PlayFabServerAPI_eventDelegateOnSuccessUpdateAvatarUrl_Parms \
{ \
	FServerEmptyResponse Result; \
	UObject* customData; \
}; \
static inline void FDelegateOnSuccessUpdateAvatarUrl_DelegateWrapper(const FScriptDelegate& DelegateOnSuccessUpdateAvatarUrl, FServerEmptyResponse Result, UObject* customData) \
{ \
	PlayFabServerAPI_eventDelegateOnSuccessUpdateAvatarUrl_Parms Parms; \
	Parms.Result=Result; \
	Parms.customData=customData; \
	DelegateOnSuccessUpdateAvatarUrl.ProcessDelegate<UObject>(&Parms); \
}


#define Test_Plugins_EnginePlugins_PlayFab_Source_PlayFab_Public_PlayFabServerAPI_h_252_DELEGATE \
struct PlayFabServerAPI_eventDelegateOnSuccessUpdateBans_Parms \
{ \
	FServerUpdateBansResult Result; \
	UObject* customData; \
}; \
static inline void FDelegateOnSuccessUpdateBans_DelegateWrapper(const FScriptDelegate& DelegateOnSuccessUpdateBans, FServerUpdateBansResult Result, UObject* customData) \
{ \
	PlayFabServerAPI_eventDelegateOnSuccessUpdateBans_Parms Parms; \
	Parms.Result=Result; \
	Parms.customData=customData; \
	DelegateOnSuccessUpdateBans.ProcessDelegate<UObject>(&Parms); \
}


#define Test_Plugins_EnginePlugins_PlayFab_Source_PlayFab_Public_PlayFabServerAPI_h_251_DELEGATE \
struct PlayFabServerAPI_eventDelegateOnSuccessUpdateCharacterData_Parms \
{ \
	FServerUpdateCharacterDataResult Result; \
	UObject* customData; \
}; \
static inline void FDelegateOnSuccessUpdateCharacterData_DelegateWrapper(const FScriptDelegate& DelegateOnSuccessUpdateCharacterData, FServerUpdateCharacterDataResult Result, UObject* customData) \
{ \
	PlayFabServerAPI_eventDelegateOnSuccessUpdateCharacterData_Parms Parms; \
	Parms.Result=Result; \
	Parms.customData=customData; \
	DelegateOnSuccessUpdateCharacterData.ProcessDelegate<UObject>(&Parms); \
}


#define Test_Plugins_EnginePlugins_PlayFab_Source_PlayFab_Public_PlayFabServerAPI_h_250_DELEGATE \
struct PlayFabServerAPI_eventDelegateOnSuccessUpdateCharacterInternalData_Parms \
{ \
	FServerUpdateCharacterDataResult Result; \
	UObject* customData; \
}; \
static inline void FDelegateOnSuccessUpdateCharacterInternalData_DelegateWrapper(const FScriptDelegate& DelegateOnSuccessUpdateCharacterInternalData, FServerUpdateCharacterDataResult Result, UObject* customData) \
{ \
	PlayFabServerAPI_eventDelegateOnSuccessUpdateCharacterInternalData_Parms Parms; \
	Parms.Result=Result; \
	Parms.customData=customData; \
	DelegateOnSuccessUpdateCharacterInternalData.ProcessDelegate<UObject>(&Parms); \
}


#define Test_Plugins_EnginePlugins_PlayFab_Source_PlayFab_Public_PlayFabServerAPI_h_249_DELEGATE \
struct PlayFabServerAPI_eventDelegateOnSuccessUpdateCharacterReadOnlyData_Parms \
{ \
	FServerUpdateCharacterDataResult Result; \
	UObject* customData; \
}; \
static inline void FDelegateOnSuccessUpdateCharacterReadOnlyData_DelegateWrapper(const FScriptDelegate& DelegateOnSuccessUpdateCharacterReadOnlyData, FServerUpdateCharacterDataResult Result, UObject* customData) \
{ \
	PlayFabServerAPI_eventDelegateOnSuccessUpdateCharacterReadOnlyData_Parms Parms; \
	Parms.Result=Result; \
	Parms.customData=customData; \
	DelegateOnSuccessUpdateCharacterReadOnlyData.ProcessDelegate<UObject>(&Parms); \
}


#define Test_Plugins_EnginePlugins_PlayFab_Source_PlayFab_Public_PlayFabServerAPI_h_248_DELEGATE \
struct PlayFabServerAPI_eventDelegateOnSuccessUpdateCharacterStatistics_Parms \
{ \
	FServerUpdateCharacterStatisticsResult Result; \
	UObject* customData; \
}; \
static inline void FDelegateOnSuccessUpdateCharacterStatistics_DelegateWrapper(const FScriptDelegate& DelegateOnSuccessUpdateCharacterStatistics, FServerUpdateCharacterStatisticsResult Result, UObject* customData) \
{ \
	PlayFabServerAPI_eventDelegateOnSuccessUpdateCharacterStatistics_Parms Parms; \
	Parms.Result=Result; \
	Parms.customData=customData; \
	DelegateOnSuccessUpdateCharacterStatistics.ProcessDelegate<UObject>(&Parms); \
}


#define Test_Plugins_EnginePlugins_PlayFab_Source_PlayFab_Public_PlayFabServerAPI_h_247_DELEGATE \
struct PlayFabServerAPI_eventDelegateOnSuccessUpdatePlayerStatistics_Parms \
{ \
	FServerUpdatePlayerStatisticsResult Result; \
	UObject* customData; \
}; \
static inline void FDelegateOnSuccessUpdatePlayerStatistics_DelegateWrapper(const FScriptDelegate& DelegateOnSuccessUpdatePlayerStatistics, FServerUpdatePlayerStatisticsResult Result, UObject* customData) \
{ \
	PlayFabServerAPI_eventDelegateOnSuccessUpdatePlayerStatistics_Parms Parms; \
	Parms.Result=Result; \
	Parms.customData=customData; \
	DelegateOnSuccessUpdatePlayerStatistics.ProcessDelegate<UObject>(&Parms); \
}


#define Test_Plugins_EnginePlugins_PlayFab_Source_PlayFab_Public_PlayFabServerAPI_h_246_DELEGATE \
struct PlayFabServerAPI_eventDelegateOnSuccessUpdateSharedGroupData_Parms \
{ \
	FServerUpdateSharedGroupDataResult Result; \
	UObject* customData; \
}; \
static inline void FDelegateOnSuccessUpdateSharedGroupData_DelegateWrapper(const FScriptDelegate& DelegateOnSuccessUpdateSharedGroupData, FServerUpdateSharedGroupDataResult Result, UObject* customData) \
{ \
	PlayFabServerAPI_eventDelegateOnSuccessUpdateSharedGroupData_Parms Parms; \
	Parms.Result=Result; \
	Parms.customData=customData; \
	DelegateOnSuccessUpdateSharedGroupData.ProcessDelegate<UObject>(&Parms); \
}


#define Test_Plugins_EnginePlugins_PlayFab_Source_PlayFab_Public_PlayFabServerAPI_h_245_DELEGATE \
struct PlayFabServerAPI_eventDelegateOnSuccessUpdateUserData_Parms \
{ \
	FServerUpdateUserDataResult Result; \
	UObject* customData; \
}; \
static inline void FDelegateOnSuccessUpdateUserData_DelegateWrapper(const FScriptDelegate& DelegateOnSuccessUpdateUserData, FServerUpdateUserDataResult Result, UObject* customData) \
{ \
	PlayFabServerAPI_eventDelegateOnSuccessUpdateUserData_Parms Parms; \
	Parms.Result=Result; \
	Parms.customData=customData; \
	DelegateOnSuccessUpdateUserData.ProcessDelegate<UObject>(&Parms); \
}


#define Test_Plugins_EnginePlugins_PlayFab_Source_PlayFab_Public_PlayFabServerAPI_h_244_DELEGATE \
struct PlayFabServerAPI_eventDelegateOnSuccessUpdateUserInternalData_Parms \
{ \
	FServerUpdateUserDataResult Result; \
	UObject* customData; \
}; \
static inline void FDelegateOnSuccessUpdateUserInternalData_DelegateWrapper(const FScriptDelegate& DelegateOnSuccessUpdateUserInternalData, FServerUpdateUserDataResult Result, UObject* customData) \
{ \
	PlayFabServerAPI_eventDelegateOnSuccessUpdateUserInternalData_Parms Parms; \
	Parms.Result=Result; \
	Parms.customData=customData; \
	DelegateOnSuccessUpdateUserInternalData.ProcessDelegate<UObject>(&Parms); \
}


#define Test_Plugins_EnginePlugins_PlayFab_Source_PlayFab_Public_PlayFabServerAPI_h_243_DELEGATE \
struct PlayFabServerAPI_eventDelegateOnSuccessUpdateUserInventoryItemCustomData_Parms \
{ \
	FServerEmptyResponse Result; \
	UObject* customData; \
}; \
static inline void FDelegateOnSuccessUpdateUserInventoryItemCustomData_DelegateWrapper(const FScriptDelegate& DelegateOnSuccessUpdateUserInventoryItemCustomData, FServerEmptyResponse Result, UObject* customData) \
{ \
	PlayFabServerAPI_eventDelegateOnSuccessUpdateUserInventoryItemCustomData_Parms Parms; \
	Parms.Result=Result; \
	Parms.customData=customData; \
	DelegateOnSuccessUpdateUserInventoryItemCustomData.ProcessDelegate<UObject>(&Parms); \
}


#define Test_Plugins_EnginePlugins_PlayFab_Source_PlayFab_Public_PlayFabServerAPI_h_242_DELEGATE \
struct PlayFabServerAPI_eventDelegateOnSuccessUpdateUserPublisherData_Parms \
{ \
	FServerUpdateUserDataResult Result; \
	UObject* customData; \
}; \
static inline void FDelegateOnSuccessUpdateUserPublisherData_DelegateWrapper(const FScriptDelegate& DelegateOnSuccessUpdateUserPublisherData, FServerUpdateUserDataResult Result, UObject* customData) \
{ \
	PlayFabServerAPI_eventDelegateOnSuccessUpdateUserPublisherData_Parms Parms; \
	Parms.Result=Result; \
	Parms.customData=customData; \
	DelegateOnSuccessUpdateUserPublisherData.ProcessDelegate<UObject>(&Parms); \
}


#define Test_Plugins_EnginePlugins_PlayFab_Source_PlayFab_Public_PlayFabServerAPI_h_241_DELEGATE \
struct PlayFabServerAPI_eventDelegateOnSuccessUpdateUserPublisherInternalData_Parms \
{ \
	FServerUpdateUserDataResult Result; \
	UObject* customData; \
}; \
static inline void FDelegateOnSuccessUpdateUserPublisherInternalData_DelegateWrapper(const FScriptDelegate& DelegateOnSuccessUpdateUserPublisherInternalData, FServerUpdateUserDataResult Result, UObject* customData) \
{ \
	PlayFabServerAPI_eventDelegateOnSuccessUpdateUserPublisherInternalData_Parms Parms; \
	Parms.Result=Result; \
	Parms.customData=customData; \
	DelegateOnSuccessUpdateUserPublisherInternalData.ProcessDelegate<UObject>(&Parms); \
}


#define Test_Plugins_EnginePlugins_PlayFab_Source_PlayFab_Public_PlayFabServerAPI_h_240_DELEGATE \
struct PlayFabServerAPI_eventDelegateOnSuccessUpdateUserPublisherReadOnlyData_Parms \
{ \
	FServerUpdateUserDataResult Result; \
	UObject* customData; \
}; \
static inline void FDelegateOnSuccessUpdateUserPublisherReadOnlyData_DelegateWrapper(const FScriptDelegate& DelegateOnSuccessUpdateUserPublisherReadOnlyData, FServerUpdateUserDataResult Result, UObject* customData) \
{ \
	PlayFabServerAPI_eventDelegateOnSuccessUpdateUserPublisherReadOnlyData_Parms Parms; \
	Parms.Result=Result; \
	Parms.customData=customData; \
	DelegateOnSuccessUpdateUserPublisherReadOnlyData.ProcessDelegate<UObject>(&Parms); \
}


#define Test_Plugins_EnginePlugins_PlayFab_Source_PlayFab_Public_PlayFabServerAPI_h_239_DELEGATE \
struct PlayFabServerAPI_eventDelegateOnSuccessUpdateUserReadOnlyData_Parms \
{ \
	FServerUpdateUserDataResult Result; \
	UObject* customData; \
}; \
static inline void FDelegateOnSuccessUpdateUserReadOnlyData_DelegateWrapper(const FScriptDelegate& DelegateOnSuccessUpdateUserReadOnlyData, FServerUpdateUserDataResult Result, UObject* customData) \
{ \
	PlayFabServerAPI_eventDelegateOnSuccessUpdateUserReadOnlyData_Parms Parms; \
	Parms.Result=Result; \
	Parms.customData=customData; \
	DelegateOnSuccessUpdateUserReadOnlyData.ProcessDelegate<UObject>(&Parms); \
}


#define Test_Plugins_EnginePlugins_PlayFab_Source_PlayFab_Public_PlayFabServerAPI_h_238_DELEGATE \
struct PlayFabServerAPI_eventDelegateOnSuccessWriteCharacterEvent_Parms \
{ \
	FServerWriteEventResponse Result; \
	UObject* customData; \
}; \
static inline void FDelegateOnSuccessWriteCharacterEvent_DelegateWrapper(const FScriptDelegate& DelegateOnSuccessWriteCharacterEvent, FServerWriteEventResponse Result, UObject* customData) \
{ \
	PlayFabServerAPI_eventDelegateOnSuccessWriteCharacterEvent_Parms Parms; \
	Parms.Result=Result; \
	Parms.customData=customData; \
	DelegateOnSuccessWriteCharacterEvent.ProcessDelegate<UObject>(&Parms); \
}


#define Test_Plugins_EnginePlugins_PlayFab_Source_PlayFab_Public_PlayFabServerAPI_h_237_DELEGATE \
struct PlayFabServerAPI_eventDelegateOnSuccessWritePlayerEvent_Parms \
{ \
	FServerWriteEventResponse Result; \
	UObject* customData; \
}; \
static inline void FDelegateOnSuccessWritePlayerEvent_DelegateWrapper(const FScriptDelegate& DelegateOnSuccessWritePlayerEvent, FServerWriteEventResponse Result, UObject* customData) \
{ \
	PlayFabServerAPI_eventDelegateOnSuccessWritePlayerEvent_Parms Parms; \
	Parms.Result=Result; \
	Parms.customData=customData; \
	DelegateOnSuccessWritePlayerEvent.ProcessDelegate<UObject>(&Parms); \
}


#define Test_Plugins_EnginePlugins_PlayFab_Source_PlayFab_Public_PlayFabServerAPI_h_236_DELEGATE \
struct PlayFabServerAPI_eventDelegateOnSuccessWriteTitleEvent_Parms \
{ \
	FServerWriteEventResponse Result; \
	UObject* customData; \
}; \
static inline void FDelegateOnSuccessWriteTitleEvent_DelegateWrapper(const FScriptDelegate& DelegateOnSuccessWriteTitleEvent, FServerWriteEventResponse Result, UObject* customData) \
{ \
	PlayFabServerAPI_eventDelegateOnSuccessWriteTitleEvent_Parms Parms; \
	Parms.Result=Result; \
	Parms.customData=customData; \
	DelegateOnSuccessWriteTitleEvent.ProcessDelegate<UObject>(&Parms); \
}


#define Test_Plugins_EnginePlugins_PlayFab_Source_PlayFab_Public_PlayFabServerAPI_h_234_SPARSE_DATA
#define Test_Plugins_EnginePlugins_PlayFab_Source_PlayFab_Public_PlayFabServerAPI_h_234_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execAddCharacterVirtualCurrency); \
	DECLARE_FUNCTION(execAddFriend); \
	DECLARE_FUNCTION(execAddGenericID); \
	DECLARE_FUNCTION(execAddPlayerTag); \
	DECLARE_FUNCTION(execAddSharedGroupMembers); \
	DECLARE_FUNCTION(execAddUserVirtualCurrency); \
	DECLARE_FUNCTION(execAuthenticateSessionTicket); \
	DECLARE_FUNCTION(execAwardSteamAchievement); \
	DECLARE_FUNCTION(execBanUsers); \
	DECLARE_FUNCTION(execConsumeItem); \
	DECLARE_FUNCTION(execCreateSharedGroup); \
	DECLARE_FUNCTION(execDeleteCharacterFromUser); \
	DECLARE_FUNCTION(execDeletePlayer); \
	DECLARE_FUNCTION(execDeletePushNotificationTemplate); \
	DECLARE_FUNCTION(execDeleteSharedGroup); \
	DECLARE_FUNCTION(execDeregisterGame); \
	DECLARE_FUNCTION(execEvaluateRandomResultTable); \
	DECLARE_FUNCTION(execExecuteCloudScript); \
	DECLARE_FUNCTION(execGetAllSegments); \
	DECLARE_FUNCTION(execGetAllUsersCharacters); \
	DECLARE_FUNCTION(execGetCatalogItems); \
	DECLARE_FUNCTION(execGetCharacterData); \
	DECLARE_FUNCTION(execGetCharacterInternalData); \
	DECLARE_FUNCTION(execGetCharacterInventory); \
	DECLARE_FUNCTION(execGetCharacterLeaderboard); \
	DECLARE_FUNCTION(execGetCharacterReadOnlyData); \
	DECLARE_FUNCTION(execGetCharacterStatistics); \
	DECLARE_FUNCTION(execGetContentDownloadUrl); \
	DECLARE_FUNCTION(execGetFriendLeaderboard); \
	DECLARE_FUNCTION(execGetFriendsList); \
	DECLARE_FUNCTION(execGetLeaderboard); \
	DECLARE_FUNCTION(execGetLeaderboardAroundCharacter); \
	DECLARE_FUNCTION(execGetLeaderboardAroundUser); \
	DECLARE_FUNCTION(execGetLeaderboardForUserCharacters); \
	DECLARE_FUNCTION(execGetPlayerCombinedInfo); \
	DECLARE_FUNCTION(execGetPlayerProfile); \
	DECLARE_FUNCTION(execGetPlayerSegments); \
	DECLARE_FUNCTION(execGetPlayersInSegment); \
	DECLARE_FUNCTION(execGetPlayerStatistics); \
	DECLARE_FUNCTION(execGetPlayerStatisticVersions); \
	DECLARE_FUNCTION(execGetPlayerTags); \
	DECLARE_FUNCTION(execGetPlayFabIDsFromFacebookIDs); \
	DECLARE_FUNCTION(execGetPlayFabIDsFromFacebookInstantGamesIds); \
	DECLARE_FUNCTION(execGetPlayFabIDsFromGenericIDs); \
	DECLARE_FUNCTION(execGetPlayFabIDsFromNintendoSwitchDeviceIds); \
	DECLARE_FUNCTION(execGetPlayFabIDsFromPSNAccountIDs); \
	DECLARE_FUNCTION(execGetPlayFabIDsFromSteamIDs); \
	DECLARE_FUNCTION(execGetPlayFabIDsFromXboxLiveIDs); \
	DECLARE_FUNCTION(execGetPublisherData); \
	DECLARE_FUNCTION(execGetRandomResultTables); \
	DECLARE_FUNCTION(execGetServerCustomIDsFromPlayFabIDs); \
	DECLARE_FUNCTION(execGetSharedGroupData); \
	DECLARE_FUNCTION(execGetStoreItems); \
	DECLARE_FUNCTION(execGetTime); \
	DECLARE_FUNCTION(execGetTitleData); \
	DECLARE_FUNCTION(execGetTitleInternalData); \
	DECLARE_FUNCTION(execGetTitleNews); \
	DECLARE_FUNCTION(execGetUserAccountInfo); \
	DECLARE_FUNCTION(execGetUserBans); \
	DECLARE_FUNCTION(execGetUserData); \
	DECLARE_FUNCTION(execGetUserInternalData); \
	DECLARE_FUNCTION(execGetUserInventory); \
	DECLARE_FUNCTION(execGetUserPublisherData); \
	DECLARE_FUNCTION(execGetUserPublisherInternalData); \
	DECLARE_FUNCTION(execGetUserPublisherReadOnlyData); \
	DECLARE_FUNCTION(execGetUserReadOnlyData); \
	DECLARE_FUNCTION(execGrantCharacterToUser); \
	DECLARE_FUNCTION(execGrantItemsToCharacter); \
	DECLARE_FUNCTION(execGrantItemsToUser); \
	DECLARE_FUNCTION(execGrantItemsToUsers); \
	DECLARE_FUNCTION(execHelperAddCharacterVirtualCurrency); \
	DECLARE_FUNCTION(execHelperAddFriend); \
	DECLARE_FUNCTION(execHelperAddGenericID); \
	DECLARE_FUNCTION(execHelperAddPlayerTag); \
	DECLARE_FUNCTION(execHelperAddSharedGroupMembers); \
	DECLARE_FUNCTION(execHelperAddUserVirtualCurrency); \
	DECLARE_FUNCTION(execHelperAuthenticateSessionTicket); \
	DECLARE_FUNCTION(execHelperAwardSteamAchievement); \
	DECLARE_FUNCTION(execHelperBanUsers); \
	DECLARE_FUNCTION(execHelperConsumeItem); \
	DECLARE_FUNCTION(execHelperCreateSharedGroup); \
	DECLARE_FUNCTION(execHelperDeleteCharacterFromUser); \
	DECLARE_FUNCTION(execHelperDeletePlayer); \
	DECLARE_FUNCTION(execHelperDeletePushNotificationTemplate); \
	DECLARE_FUNCTION(execHelperDeleteSharedGroup); \
	DECLARE_FUNCTION(execHelperDeregisterGame); \
	DECLARE_FUNCTION(execHelperEvaluateRandomResultTable); \
	DECLARE_FUNCTION(execHelperExecuteCloudScript); \
	DECLARE_FUNCTION(execHelperGetAllSegments); \
	DECLARE_FUNCTION(execHelperGetAllUsersCharacters); \
	DECLARE_FUNCTION(execHelperGetCatalogItems); \
	DECLARE_FUNCTION(execHelperGetCharacterData); \
	DECLARE_FUNCTION(execHelperGetCharacterInternalData); \
	DECLARE_FUNCTION(execHelperGetCharacterInventory); \
	DECLARE_FUNCTION(execHelperGetCharacterLeaderboard); \
	DECLARE_FUNCTION(execHelperGetCharacterReadOnlyData); \
	DECLARE_FUNCTION(execHelperGetCharacterStatistics); \
	DECLARE_FUNCTION(execHelperGetContentDownloadUrl); \
	DECLARE_FUNCTION(execHelperGetFriendLeaderboard); \
	DECLARE_FUNCTION(execHelperGetFriendsList); \
	DECLARE_FUNCTION(execHelperGetLeaderboard); \
	DECLARE_FUNCTION(execHelperGetLeaderboardAroundCharacter); \
	DECLARE_FUNCTION(execHelperGetLeaderboardAroundUser); \
	DECLARE_FUNCTION(execHelperGetLeaderboardForUserCharacters); \
	DECLARE_FUNCTION(execHelperGetPlayerCombinedInfo); \
	DECLARE_FUNCTION(execHelperGetPlayerProfile); \
	DECLARE_FUNCTION(execHelperGetPlayerSegments); \
	DECLARE_FUNCTION(execHelperGetPlayersInSegment); \
	DECLARE_FUNCTION(execHelperGetPlayerStatistics); \
	DECLARE_FUNCTION(execHelperGetPlayerStatisticVersions); \
	DECLARE_FUNCTION(execHelperGetPlayerTags); \
	DECLARE_FUNCTION(execHelperGetPlayFabIDsFromFacebookIDs); \
	DECLARE_FUNCTION(execHelperGetPlayFabIDsFromFacebookInstantGamesIds); \
	DECLARE_FUNCTION(execHelperGetPlayFabIDsFromGenericIDs); \
	DECLARE_FUNCTION(execHelperGetPlayFabIDsFromNintendoSwitchDeviceIds); \
	DECLARE_FUNCTION(execHelperGetPlayFabIDsFromPSNAccountIDs); \
	DECLARE_FUNCTION(execHelperGetPlayFabIDsFromSteamIDs); \
	DECLARE_FUNCTION(execHelperGetPlayFabIDsFromXboxLiveIDs); \
	DECLARE_FUNCTION(execHelperGetPublisherData); \
	DECLARE_FUNCTION(execHelperGetRandomResultTables); \
	DECLARE_FUNCTION(execHelperGetServerCustomIDsFromPlayFabIDs); \
	DECLARE_FUNCTION(execHelperGetSharedGroupData); \
	DECLARE_FUNCTION(execHelperGetStoreItems); \
	DECLARE_FUNCTION(execHelperGetTime); \
	DECLARE_FUNCTION(execHelperGetTitleData); \
	DECLARE_FUNCTION(execHelperGetTitleInternalData); \
	DECLARE_FUNCTION(execHelperGetTitleNews); \
	DECLARE_FUNCTION(execHelperGetUserAccountInfo); \
	DECLARE_FUNCTION(execHelperGetUserBans); \
	DECLARE_FUNCTION(execHelperGetUserData); \
	DECLARE_FUNCTION(execHelperGetUserInternalData); \
	DECLARE_FUNCTION(execHelperGetUserInventory); \
	DECLARE_FUNCTION(execHelperGetUserPublisherData); \
	DECLARE_FUNCTION(execHelperGetUserPublisherInternalData); \
	DECLARE_FUNCTION(execHelperGetUserPublisherReadOnlyData); \
	DECLARE_FUNCTION(execHelperGetUserReadOnlyData); \
	DECLARE_FUNCTION(execHelperGrantCharacterToUser); \
	DECLARE_FUNCTION(execHelperGrantItemsToCharacter); \
	DECLARE_FUNCTION(execHelperGrantItemsToUser); \
	DECLARE_FUNCTION(execHelperGrantItemsToUsers); \
	DECLARE_FUNCTION(execHelperLinkPSNAccount); \
	DECLARE_FUNCTION(execHelperLinkServerCustomId); \
	DECLARE_FUNCTION(execHelperLinkXboxAccount); \
	DECLARE_FUNCTION(execHelperLoginWithServerCustomId); \
	DECLARE_FUNCTION(execHelperLoginWithXbox); \
	DECLARE_FUNCTION(execHelperLoginWithXboxId); \
	DECLARE_FUNCTION(execHelperModifyItemUses); \
	DECLARE_FUNCTION(execHelperMoveItemToCharacterFromCharacter); \
	DECLARE_FUNCTION(execHelperMoveItemToCharacterFromUser); \
	DECLARE_FUNCTION(execHelperMoveItemToUserFromCharacter); \
	DECLARE_FUNCTION(execHelperNotifyMatchmakerPlayerLeft); \
	DECLARE_FUNCTION(execHelperRedeemCoupon); \
	DECLARE_FUNCTION(execHelperRedeemMatchmakerTicket); \
	DECLARE_FUNCTION(execHelperRefreshGameServerInstanceHeartbeat); \
	DECLARE_FUNCTION(execHelperRegisterGame); \
	DECLARE_FUNCTION(execHelperRemoveFriend); \
	DECLARE_FUNCTION(execHelperRemoveGenericID); \
	DECLARE_FUNCTION(execHelperRemovePlayerTag); \
	DECLARE_FUNCTION(execHelperRemoveSharedGroupMembers); \
	DECLARE_FUNCTION(execHelperReportPlayer); \
	DECLARE_FUNCTION(execHelperRevokeAllBansForUser); \
	DECLARE_FUNCTION(execHelperRevokeBans); \
	DECLARE_FUNCTION(execHelperRevokeInventoryItem); \
	DECLARE_FUNCTION(execHelperRevokeInventoryItems); \
	DECLARE_FUNCTION(execHelperSavePushNotificationTemplate); \
	DECLARE_FUNCTION(execHelperSendCustomAccountRecoveryEmail); \
	DECLARE_FUNCTION(execHelperSendEmailFromTemplate); \
	DECLARE_FUNCTION(execHelperSendPushNotification); \
	DECLARE_FUNCTION(execHelperSendPushNotificationFromTemplate); \
	DECLARE_FUNCTION(execHelperSetFriendTags); \
	DECLARE_FUNCTION(execHelperSetGameServerInstanceData); \
	DECLARE_FUNCTION(execHelperSetGameServerInstanceState); \
	DECLARE_FUNCTION(execHelperSetGameServerInstanceTags); \
	DECLARE_FUNCTION(execHelperSetPlayerSecret); \
	DECLARE_FUNCTION(execHelperSetPublisherData); \
	DECLARE_FUNCTION(execHelperSetTitleData); \
	DECLARE_FUNCTION(execHelperSetTitleInternalData); \
	DECLARE_FUNCTION(execHelperSubtractCharacterVirtualCurrency); \
	DECLARE_FUNCTION(execHelperSubtractUserVirtualCurrency); \
	DECLARE_FUNCTION(execHelperUnlinkPSNAccount); \
	DECLARE_FUNCTION(execHelperUnlinkServerCustomId); \
	DECLARE_FUNCTION(execHelperUnlinkXboxAccount); \
	DECLARE_FUNCTION(execHelperUnlockContainerInstance); \
	DECLARE_FUNCTION(execHelperUnlockContainerItem); \
	DECLARE_FUNCTION(execHelperUpdateAvatarUrl); \
	DECLARE_FUNCTION(execHelperUpdateBans); \
	DECLARE_FUNCTION(execHelperUpdateCharacterData); \
	DECLARE_FUNCTION(execHelperUpdateCharacterInternalData); \
	DECLARE_FUNCTION(execHelperUpdateCharacterReadOnlyData); \
	DECLARE_FUNCTION(execHelperUpdateCharacterStatistics); \
	DECLARE_FUNCTION(execHelperUpdatePlayerStatistics); \
	DECLARE_FUNCTION(execHelperUpdateSharedGroupData); \
	DECLARE_FUNCTION(execHelperUpdateUserData); \
	DECLARE_FUNCTION(execHelperUpdateUserInternalData); \
	DECLARE_FUNCTION(execHelperUpdateUserInventoryItemCustomData); \
	DECLARE_FUNCTION(execHelperUpdateUserPublisherData); \
	DECLARE_FUNCTION(execHelperUpdateUserPublisherInternalData); \
	DECLARE_FUNCTION(execHelperUpdateUserPublisherReadOnlyData); \
	DECLARE_FUNCTION(execHelperUpdateUserReadOnlyData); \
	DECLARE_FUNCTION(execHelperWriteCharacterEvent); \
	DECLARE_FUNCTION(execHelperWritePlayerEvent); \
	DECLARE_FUNCTION(execHelperWriteTitleEvent); \
	DECLARE_FUNCTION(execLinkPSNAccount); \
	DECLARE_FUNCTION(execLinkServerCustomId); \
	DECLARE_FUNCTION(execLinkXboxAccount); \
	DECLARE_FUNCTION(execLoginWithServerCustomId); \
	DECLARE_FUNCTION(execLoginWithXbox); \
	DECLARE_FUNCTION(execLoginWithXboxId); \
	DECLARE_FUNCTION(execModifyItemUses); \
	DECLARE_FUNCTION(execMoveItemToCharacterFromCharacter); \
	DECLARE_FUNCTION(execMoveItemToCharacterFromUser); \
	DECLARE_FUNCTION(execMoveItemToUserFromCharacter); \
	DECLARE_FUNCTION(execNotifyMatchmakerPlayerLeft); \
	DECLARE_FUNCTION(execRedeemCoupon); \
	DECLARE_FUNCTION(execRedeemMatchmakerTicket); \
	DECLARE_FUNCTION(execRefreshGameServerInstanceHeartbeat); \
	DECLARE_FUNCTION(execRegisterGame); \
	DECLARE_FUNCTION(execRemoveFriend); \
	DECLARE_FUNCTION(execRemoveGenericID); \
	DECLARE_FUNCTION(execRemovePlayerTag); \
	DECLARE_FUNCTION(execRemoveSharedGroupMembers); \
	DECLARE_FUNCTION(execReportPlayer); \
	DECLARE_FUNCTION(execRevokeAllBansForUser); \
	DECLARE_FUNCTION(execRevokeBans); \
	DECLARE_FUNCTION(execRevokeInventoryItem); \
	DECLARE_FUNCTION(execRevokeInventoryItems); \
	DECLARE_FUNCTION(execSavePushNotificationTemplate); \
	DECLARE_FUNCTION(execSendCustomAccountRecoveryEmail); \
	DECLARE_FUNCTION(execSendEmailFromTemplate); \
	DECLARE_FUNCTION(execSendPushNotification); \
	DECLARE_FUNCTION(execSendPushNotificationFromTemplate); \
	DECLARE_FUNCTION(execSetFriendTags); \
	DECLARE_FUNCTION(execSetGameServerInstanceData); \
	DECLARE_FUNCTION(execSetGameServerInstanceState); \
	DECLARE_FUNCTION(execSetGameServerInstanceTags); \
	DECLARE_FUNCTION(execSetPlayerSecret); \
	DECLARE_FUNCTION(execSetPublisherData); \
	DECLARE_FUNCTION(execSetTitleData); \
	DECLARE_FUNCTION(execSetTitleInternalData); \
	DECLARE_FUNCTION(execSubtractCharacterVirtualCurrency); \
	DECLARE_FUNCTION(execSubtractUserVirtualCurrency); \
	DECLARE_FUNCTION(execUnlinkPSNAccount); \
	DECLARE_FUNCTION(execUnlinkServerCustomId); \
	DECLARE_FUNCTION(execUnlinkXboxAccount); \
	DECLARE_FUNCTION(execUnlockContainerInstance); \
	DECLARE_FUNCTION(execUnlockContainerItem); \
	DECLARE_FUNCTION(execUpdateAvatarUrl); \
	DECLARE_FUNCTION(execUpdateBans); \
	DECLARE_FUNCTION(execUpdateCharacterData); \
	DECLARE_FUNCTION(execUpdateCharacterInternalData); \
	DECLARE_FUNCTION(execUpdateCharacterReadOnlyData); \
	DECLARE_FUNCTION(execUpdateCharacterStatistics); \
	DECLARE_FUNCTION(execUpdatePlayerStatistics); \
	DECLARE_FUNCTION(execUpdateSharedGroupData); \
	DECLARE_FUNCTION(execUpdateUserData); \
	DECLARE_FUNCTION(execUpdateUserInternalData); \
	DECLARE_FUNCTION(execUpdateUserInventoryItemCustomData); \
	DECLARE_FUNCTION(execUpdateUserPublisherData); \
	DECLARE_FUNCTION(execUpdateUserPublisherInternalData); \
	DECLARE_FUNCTION(execUpdateUserPublisherReadOnlyData); \
	DECLARE_FUNCTION(execUpdateUserReadOnlyData); \
	DECLARE_FUNCTION(execWriteCharacterEvent); \
	DECLARE_FUNCTION(execWritePlayerEvent); \
	DECLARE_FUNCTION(execWriteTitleEvent);


#define Test_Plugins_EnginePlugins_PlayFab_Source_PlayFab_Public_PlayFabServerAPI_h_234_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execAddCharacterVirtualCurrency); \
	DECLARE_FUNCTION(execAddFriend); \
	DECLARE_FUNCTION(execAddGenericID); \
	DECLARE_FUNCTION(execAddPlayerTag); \
	DECLARE_FUNCTION(execAddSharedGroupMembers); \
	DECLARE_FUNCTION(execAddUserVirtualCurrency); \
	DECLARE_FUNCTION(execAuthenticateSessionTicket); \
	DECLARE_FUNCTION(execAwardSteamAchievement); \
	DECLARE_FUNCTION(execBanUsers); \
	DECLARE_FUNCTION(execConsumeItem); \
	DECLARE_FUNCTION(execCreateSharedGroup); \
	DECLARE_FUNCTION(execDeleteCharacterFromUser); \
	DECLARE_FUNCTION(execDeletePlayer); \
	DECLARE_FUNCTION(execDeletePushNotificationTemplate); \
	DECLARE_FUNCTION(execDeleteSharedGroup); \
	DECLARE_FUNCTION(execDeregisterGame); \
	DECLARE_FUNCTION(execEvaluateRandomResultTable); \
	DECLARE_FUNCTION(execExecuteCloudScript); \
	DECLARE_FUNCTION(execGetAllSegments); \
	DECLARE_FUNCTION(execGetAllUsersCharacters); \
	DECLARE_FUNCTION(execGetCatalogItems); \
	DECLARE_FUNCTION(execGetCharacterData); \
	DECLARE_FUNCTION(execGetCharacterInternalData); \
	DECLARE_FUNCTION(execGetCharacterInventory); \
	DECLARE_FUNCTION(execGetCharacterLeaderboard); \
	DECLARE_FUNCTION(execGetCharacterReadOnlyData); \
	DECLARE_FUNCTION(execGetCharacterStatistics); \
	DECLARE_FUNCTION(execGetContentDownloadUrl); \
	DECLARE_FUNCTION(execGetFriendLeaderboard); \
	DECLARE_FUNCTION(execGetFriendsList); \
	DECLARE_FUNCTION(execGetLeaderboard); \
	DECLARE_FUNCTION(execGetLeaderboardAroundCharacter); \
	DECLARE_FUNCTION(execGetLeaderboardAroundUser); \
	DECLARE_FUNCTION(execGetLeaderboardForUserCharacters); \
	DECLARE_FUNCTION(execGetPlayerCombinedInfo); \
	DECLARE_FUNCTION(execGetPlayerProfile); \
	DECLARE_FUNCTION(execGetPlayerSegments); \
	DECLARE_FUNCTION(execGetPlayersInSegment); \
	DECLARE_FUNCTION(execGetPlayerStatistics); \
	DECLARE_FUNCTION(execGetPlayerStatisticVersions); \
	DECLARE_FUNCTION(execGetPlayerTags); \
	DECLARE_FUNCTION(execGetPlayFabIDsFromFacebookIDs); \
	DECLARE_FUNCTION(execGetPlayFabIDsFromFacebookInstantGamesIds); \
	DECLARE_FUNCTION(execGetPlayFabIDsFromGenericIDs); \
	DECLARE_FUNCTION(execGetPlayFabIDsFromNintendoSwitchDeviceIds); \
	DECLARE_FUNCTION(execGetPlayFabIDsFromPSNAccountIDs); \
	DECLARE_FUNCTION(execGetPlayFabIDsFromSteamIDs); \
	DECLARE_FUNCTION(execGetPlayFabIDsFromXboxLiveIDs); \
	DECLARE_FUNCTION(execGetPublisherData); \
	DECLARE_FUNCTION(execGetRandomResultTables); \
	DECLARE_FUNCTION(execGetServerCustomIDsFromPlayFabIDs); \
	DECLARE_FUNCTION(execGetSharedGroupData); \
	DECLARE_FUNCTION(execGetStoreItems); \
	DECLARE_FUNCTION(execGetTime); \
	DECLARE_FUNCTION(execGetTitleData); \
	DECLARE_FUNCTION(execGetTitleInternalData); \
	DECLARE_FUNCTION(execGetTitleNews); \
	DECLARE_FUNCTION(execGetUserAccountInfo); \
	DECLARE_FUNCTION(execGetUserBans); \
	DECLARE_FUNCTION(execGetUserData); \
	DECLARE_FUNCTION(execGetUserInternalData); \
	DECLARE_FUNCTION(execGetUserInventory); \
	DECLARE_FUNCTION(execGetUserPublisherData); \
	DECLARE_FUNCTION(execGetUserPublisherInternalData); \
	DECLARE_FUNCTION(execGetUserPublisherReadOnlyData); \
	DECLARE_FUNCTION(execGetUserReadOnlyData); \
	DECLARE_FUNCTION(execGrantCharacterToUser); \
	DECLARE_FUNCTION(execGrantItemsToCharacter); \
	DECLARE_FUNCTION(execGrantItemsToUser); \
	DECLARE_FUNCTION(execGrantItemsToUsers); \
	DECLARE_FUNCTION(execHelperAddCharacterVirtualCurrency); \
	DECLARE_FUNCTION(execHelperAddFriend); \
	DECLARE_FUNCTION(execHelperAddGenericID); \
	DECLARE_FUNCTION(execHelperAddPlayerTag); \
	DECLARE_FUNCTION(execHelperAddSharedGroupMembers); \
	DECLARE_FUNCTION(execHelperAddUserVirtualCurrency); \
	DECLARE_FUNCTION(execHelperAuthenticateSessionTicket); \
	DECLARE_FUNCTION(execHelperAwardSteamAchievement); \
	DECLARE_FUNCTION(execHelperBanUsers); \
	DECLARE_FUNCTION(execHelperConsumeItem); \
	DECLARE_FUNCTION(execHelperCreateSharedGroup); \
	DECLARE_FUNCTION(execHelperDeleteCharacterFromUser); \
	DECLARE_FUNCTION(execHelperDeletePlayer); \
	DECLARE_FUNCTION(execHelperDeletePushNotificationTemplate); \
	DECLARE_FUNCTION(execHelperDeleteSharedGroup); \
	DECLARE_FUNCTION(execHelperDeregisterGame); \
	DECLARE_FUNCTION(execHelperEvaluateRandomResultTable); \
	DECLARE_FUNCTION(execHelperExecuteCloudScript); \
	DECLARE_FUNCTION(execHelperGetAllSegments); \
	DECLARE_FUNCTION(execHelperGetAllUsersCharacters); \
	DECLARE_FUNCTION(execHelperGetCatalogItems); \
	DECLARE_FUNCTION(execHelperGetCharacterData); \
	DECLARE_FUNCTION(execHelperGetCharacterInternalData); \
	DECLARE_FUNCTION(execHelperGetCharacterInventory); \
	DECLARE_FUNCTION(execHelperGetCharacterLeaderboard); \
	DECLARE_FUNCTION(execHelperGetCharacterReadOnlyData); \
	DECLARE_FUNCTION(execHelperGetCharacterStatistics); \
	DECLARE_FUNCTION(execHelperGetContentDownloadUrl); \
	DECLARE_FUNCTION(execHelperGetFriendLeaderboard); \
	DECLARE_FUNCTION(execHelperGetFriendsList); \
	DECLARE_FUNCTION(execHelperGetLeaderboard); \
	DECLARE_FUNCTION(execHelperGetLeaderboardAroundCharacter); \
	DECLARE_FUNCTION(execHelperGetLeaderboardAroundUser); \
	DECLARE_FUNCTION(execHelperGetLeaderboardForUserCharacters); \
	DECLARE_FUNCTION(execHelperGetPlayerCombinedInfo); \
	DECLARE_FUNCTION(execHelperGetPlayerProfile); \
	DECLARE_FUNCTION(execHelperGetPlayerSegments); \
	DECLARE_FUNCTION(execHelperGetPlayersInSegment); \
	DECLARE_FUNCTION(execHelperGetPlayerStatistics); \
	DECLARE_FUNCTION(execHelperGetPlayerStatisticVersions); \
	DECLARE_FUNCTION(execHelperGetPlayerTags); \
	DECLARE_FUNCTION(execHelperGetPlayFabIDsFromFacebookIDs); \
	DECLARE_FUNCTION(execHelperGetPlayFabIDsFromFacebookInstantGamesIds); \
	DECLARE_FUNCTION(execHelperGetPlayFabIDsFromGenericIDs); \
	DECLARE_FUNCTION(execHelperGetPlayFabIDsFromNintendoSwitchDeviceIds); \
	DECLARE_FUNCTION(execHelperGetPlayFabIDsFromPSNAccountIDs); \
	DECLARE_FUNCTION(execHelperGetPlayFabIDsFromSteamIDs); \
	DECLARE_FUNCTION(execHelperGetPlayFabIDsFromXboxLiveIDs); \
	DECLARE_FUNCTION(execHelperGetPublisherData); \
	DECLARE_FUNCTION(execHelperGetRandomResultTables); \
	DECLARE_FUNCTION(execHelperGetServerCustomIDsFromPlayFabIDs); \
	DECLARE_FUNCTION(execHelperGetSharedGroupData); \
	DECLARE_FUNCTION(execHelperGetStoreItems); \
	DECLARE_FUNCTION(execHelperGetTime); \
	DECLARE_FUNCTION(execHelperGetTitleData); \
	DECLARE_FUNCTION(execHelperGetTitleInternalData); \
	DECLARE_FUNCTION(execHelperGetTitleNews); \
	DECLARE_FUNCTION(execHelperGetUserAccountInfo); \
	DECLARE_FUNCTION(execHelperGetUserBans); \
	DECLARE_FUNCTION(execHelperGetUserData); \
	DECLARE_FUNCTION(execHelperGetUserInternalData); \
	DECLARE_FUNCTION(execHelperGetUserInventory); \
	DECLARE_FUNCTION(execHelperGetUserPublisherData); \
	DECLARE_FUNCTION(execHelperGetUserPublisherInternalData); \
	DECLARE_FUNCTION(execHelperGetUserPublisherReadOnlyData); \
	DECLARE_FUNCTION(execHelperGetUserReadOnlyData); \
	DECLARE_FUNCTION(execHelperGrantCharacterToUser); \
	DECLARE_FUNCTION(execHelperGrantItemsToCharacter); \
	DECLARE_FUNCTION(execHelperGrantItemsToUser); \
	DECLARE_FUNCTION(execHelperGrantItemsToUsers); \
	DECLARE_FUNCTION(execHelperLinkPSNAccount); \
	DECLARE_FUNCTION(execHelperLinkServerCustomId); \
	DECLARE_FUNCTION(execHelperLinkXboxAccount); \
	DECLARE_FUNCTION(execHelperLoginWithServerCustomId); \
	DECLARE_FUNCTION(execHelperLoginWithXbox); \
	DECLARE_FUNCTION(execHelperLoginWithXboxId); \
	DECLARE_FUNCTION(execHelperModifyItemUses); \
	DECLARE_FUNCTION(execHelperMoveItemToCharacterFromCharacter); \
	DECLARE_FUNCTION(execHelperMoveItemToCharacterFromUser); \
	DECLARE_FUNCTION(execHelperMoveItemToUserFromCharacter); \
	DECLARE_FUNCTION(execHelperNotifyMatchmakerPlayerLeft); \
	DECLARE_FUNCTION(execHelperRedeemCoupon); \
	DECLARE_FUNCTION(execHelperRedeemMatchmakerTicket); \
	DECLARE_FUNCTION(execHelperRefreshGameServerInstanceHeartbeat); \
	DECLARE_FUNCTION(execHelperRegisterGame); \
	DECLARE_FUNCTION(execHelperRemoveFriend); \
	DECLARE_FUNCTION(execHelperRemoveGenericID); \
	DECLARE_FUNCTION(execHelperRemovePlayerTag); \
	DECLARE_FUNCTION(execHelperRemoveSharedGroupMembers); \
	DECLARE_FUNCTION(execHelperReportPlayer); \
	DECLARE_FUNCTION(execHelperRevokeAllBansForUser); \
	DECLARE_FUNCTION(execHelperRevokeBans); \
	DECLARE_FUNCTION(execHelperRevokeInventoryItem); \
	DECLARE_FUNCTION(execHelperRevokeInventoryItems); \
	DECLARE_FUNCTION(execHelperSavePushNotificationTemplate); \
	DECLARE_FUNCTION(execHelperSendCustomAccountRecoveryEmail); \
	DECLARE_FUNCTION(execHelperSendEmailFromTemplate); \
	DECLARE_FUNCTION(execHelperSendPushNotification); \
	DECLARE_FUNCTION(execHelperSendPushNotificationFromTemplate); \
	DECLARE_FUNCTION(execHelperSetFriendTags); \
	DECLARE_FUNCTION(execHelperSetGameServerInstanceData); \
	DECLARE_FUNCTION(execHelperSetGameServerInstanceState); \
	DECLARE_FUNCTION(execHelperSetGameServerInstanceTags); \
	DECLARE_FUNCTION(execHelperSetPlayerSecret); \
	DECLARE_FUNCTION(execHelperSetPublisherData); \
	DECLARE_FUNCTION(execHelperSetTitleData); \
	DECLARE_FUNCTION(execHelperSetTitleInternalData); \
	DECLARE_FUNCTION(execHelperSubtractCharacterVirtualCurrency); \
	DECLARE_FUNCTION(execHelperSubtractUserVirtualCurrency); \
	DECLARE_FUNCTION(execHelperUnlinkPSNAccount); \
	DECLARE_FUNCTION(execHelperUnlinkServerCustomId); \
	DECLARE_FUNCTION(execHelperUnlinkXboxAccount); \
	DECLARE_FUNCTION(execHelperUnlockContainerInstance); \
	DECLARE_FUNCTION(execHelperUnlockContainerItem); \
	DECLARE_FUNCTION(execHelperUpdateAvatarUrl); \
	DECLARE_FUNCTION(execHelperUpdateBans); \
	DECLARE_FUNCTION(execHelperUpdateCharacterData); \
	DECLARE_FUNCTION(execHelperUpdateCharacterInternalData); \
	DECLARE_FUNCTION(execHelperUpdateCharacterReadOnlyData); \
	DECLARE_FUNCTION(execHelperUpdateCharacterStatistics); \
	DECLARE_FUNCTION(execHelperUpdatePlayerStatistics); \
	DECLARE_FUNCTION(execHelperUpdateSharedGroupData); \
	DECLARE_FUNCTION(execHelperUpdateUserData); \
	DECLARE_FUNCTION(execHelperUpdateUserInternalData); \
	DECLARE_FUNCTION(execHelperUpdateUserInventoryItemCustomData); \
	DECLARE_FUNCTION(execHelperUpdateUserPublisherData); \
	DECLARE_FUNCTION(execHelperUpdateUserPublisherInternalData); \
	DECLARE_FUNCTION(execHelperUpdateUserPublisherReadOnlyData); \
	DECLARE_FUNCTION(execHelperUpdateUserReadOnlyData); \
	DECLARE_FUNCTION(execHelperWriteCharacterEvent); \
	DECLARE_FUNCTION(execHelperWritePlayerEvent); \
	DECLARE_FUNCTION(execHelperWriteTitleEvent); \
	DECLARE_FUNCTION(execLinkPSNAccount); \
	DECLARE_FUNCTION(execLinkServerCustomId); \
	DECLARE_FUNCTION(execLinkXboxAccount); \
	DECLARE_FUNCTION(execLoginWithServerCustomId); \
	DECLARE_FUNCTION(execLoginWithXbox); \
	DECLARE_FUNCTION(execLoginWithXboxId); \
	DECLARE_FUNCTION(execModifyItemUses); \
	DECLARE_FUNCTION(execMoveItemToCharacterFromCharacter); \
	DECLARE_FUNCTION(execMoveItemToCharacterFromUser); \
	DECLARE_FUNCTION(execMoveItemToUserFromCharacter); \
	DECLARE_FUNCTION(execNotifyMatchmakerPlayerLeft); \
	DECLARE_FUNCTION(execRedeemCoupon); \
	DECLARE_FUNCTION(execRedeemMatchmakerTicket); \
	DECLARE_FUNCTION(execRefreshGameServerInstanceHeartbeat); \
	DECLARE_FUNCTION(execRegisterGame); \
	DECLARE_FUNCTION(execRemoveFriend); \
	DECLARE_FUNCTION(execRemoveGenericID); \
	DECLARE_FUNCTION(execRemovePlayerTag); \
	DECLARE_FUNCTION(execRemoveSharedGroupMembers); \
	DECLARE_FUNCTION(execReportPlayer); \
	DECLARE_FUNCTION(execRevokeAllBansForUser); \
	DECLARE_FUNCTION(execRevokeBans); \
	DECLARE_FUNCTION(execRevokeInventoryItem); \
	DECLARE_FUNCTION(execRevokeInventoryItems); \
	DECLARE_FUNCTION(execSavePushNotificationTemplate); \
	DECLARE_FUNCTION(execSendCustomAccountRecoveryEmail); \
	DECLARE_FUNCTION(execSendEmailFromTemplate); \
	DECLARE_FUNCTION(execSendPushNotification); \
	DECLARE_FUNCTION(execSendPushNotificationFromTemplate); \
	DECLARE_FUNCTION(execSetFriendTags); \
	DECLARE_FUNCTION(execSetGameServerInstanceData); \
	DECLARE_FUNCTION(execSetGameServerInstanceState); \
	DECLARE_FUNCTION(execSetGameServerInstanceTags); \
	DECLARE_FUNCTION(execSetPlayerSecret); \
	DECLARE_FUNCTION(execSetPublisherData); \
	DECLARE_FUNCTION(execSetTitleData); \
	DECLARE_FUNCTION(execSetTitleInternalData); \
	DECLARE_FUNCTION(execSubtractCharacterVirtualCurrency); \
	DECLARE_FUNCTION(execSubtractUserVirtualCurrency); \
	DECLARE_FUNCTION(execUnlinkPSNAccount); \
	DECLARE_FUNCTION(execUnlinkServerCustomId); \
	DECLARE_FUNCTION(execUnlinkXboxAccount); \
	DECLARE_FUNCTION(execUnlockContainerInstance); \
	DECLARE_FUNCTION(execUnlockContainerItem); \
	DECLARE_FUNCTION(execUpdateAvatarUrl); \
	DECLARE_FUNCTION(execUpdateBans); \
	DECLARE_FUNCTION(execUpdateCharacterData); \
	DECLARE_FUNCTION(execUpdateCharacterInternalData); \
	DECLARE_FUNCTION(execUpdateCharacterReadOnlyData); \
	DECLARE_FUNCTION(execUpdateCharacterStatistics); \
	DECLARE_FUNCTION(execUpdatePlayerStatistics); \
	DECLARE_FUNCTION(execUpdateSharedGroupData); \
	DECLARE_FUNCTION(execUpdateUserData); \
	DECLARE_FUNCTION(execUpdateUserInternalData); \
	DECLARE_FUNCTION(execUpdateUserInventoryItemCustomData); \
	DECLARE_FUNCTION(execUpdateUserPublisherData); \
	DECLARE_FUNCTION(execUpdateUserPublisherInternalData); \
	DECLARE_FUNCTION(execUpdateUserPublisherReadOnlyData); \
	DECLARE_FUNCTION(execUpdateUserReadOnlyData); \
	DECLARE_FUNCTION(execWriteCharacterEvent); \
	DECLARE_FUNCTION(execWritePlayerEvent); \
	DECLARE_FUNCTION(execWriteTitleEvent);


#define Test_Plugins_EnginePlugins_PlayFab_Source_PlayFab_Public_PlayFabServerAPI_h_234_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPlayFabServerAPI(); \
	friend struct Z_Construct_UClass_UPlayFabServerAPI_Statics; \
public: \
	DECLARE_CLASS(UPlayFabServerAPI, UOnlineBlueprintCallProxyBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/PlayFab"), NO_API) \
	DECLARE_SERIALIZER(UPlayFabServerAPI)


#define Test_Plugins_EnginePlugins_PlayFab_Source_PlayFab_Public_PlayFabServerAPI_h_234_INCLASS \
private: \
	static void StaticRegisterNativesUPlayFabServerAPI(); \
	friend struct Z_Construct_UClass_UPlayFabServerAPI_Statics; \
public: \
	DECLARE_CLASS(UPlayFabServerAPI, UOnlineBlueprintCallProxyBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/PlayFab"), NO_API) \
	DECLARE_SERIALIZER(UPlayFabServerAPI)


#define Test_Plugins_EnginePlugins_PlayFab_Source_PlayFab_Public_PlayFabServerAPI_h_234_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UPlayFabServerAPI(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPlayFabServerAPI) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPlayFabServerAPI); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPlayFabServerAPI); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UPlayFabServerAPI(UPlayFabServerAPI&&); \
	NO_API UPlayFabServerAPI(const UPlayFabServerAPI&); \
public:


#define Test_Plugins_EnginePlugins_PlayFab_Source_PlayFab_Public_PlayFabServerAPI_h_234_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UPlayFabServerAPI(UPlayFabServerAPI&&); \
	NO_API UPlayFabServerAPI(const UPlayFabServerAPI&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPlayFabServerAPI); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPlayFabServerAPI); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UPlayFabServerAPI)


#define Test_Plugins_EnginePlugins_PlayFab_Source_PlayFab_Public_PlayFabServerAPI_h_234_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__CallAuthenticationContext() { return STRUCT_OFFSET(UPlayFabServerAPI, CallAuthenticationContext); } \
	FORCEINLINE static uint32 __PPO__RequestJsonObj() { return STRUCT_OFFSET(UPlayFabServerAPI, RequestJsonObj); } \
	FORCEINLINE static uint32 __PPO__ResponseJsonObj() { return STRUCT_OFFSET(UPlayFabServerAPI, ResponseJsonObj); }


#define Test_Plugins_EnginePlugins_PlayFab_Source_PlayFab_Public_PlayFabServerAPI_h_232_PROLOG
#define Test_Plugins_EnginePlugins_PlayFab_Source_PlayFab_Public_PlayFabServerAPI_h_234_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Test_Plugins_EnginePlugins_PlayFab_Source_PlayFab_Public_PlayFabServerAPI_h_234_PRIVATE_PROPERTY_OFFSET \
	Test_Plugins_EnginePlugins_PlayFab_Source_PlayFab_Public_PlayFabServerAPI_h_234_SPARSE_DATA \
	Test_Plugins_EnginePlugins_PlayFab_Source_PlayFab_Public_PlayFabServerAPI_h_234_RPC_WRAPPERS \
	Test_Plugins_EnginePlugins_PlayFab_Source_PlayFab_Public_PlayFabServerAPI_h_234_INCLASS \
	Test_Plugins_EnginePlugins_PlayFab_Source_PlayFab_Public_PlayFabServerAPI_h_234_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Test_Plugins_EnginePlugins_PlayFab_Source_PlayFab_Public_PlayFabServerAPI_h_234_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Test_Plugins_EnginePlugins_PlayFab_Source_PlayFab_Public_PlayFabServerAPI_h_234_PRIVATE_PROPERTY_OFFSET \
	Test_Plugins_EnginePlugins_PlayFab_Source_PlayFab_Public_PlayFabServerAPI_h_234_SPARSE_DATA \
	Test_Plugins_EnginePlugins_PlayFab_Source_PlayFab_Public_PlayFabServerAPI_h_234_RPC_WRAPPERS_NO_PURE_DECLS \
	Test_Plugins_EnginePlugins_PlayFab_Source_PlayFab_Public_PlayFabServerAPI_h_234_INCLASS_NO_PURE_DECLS \
	Test_Plugins_EnginePlugins_PlayFab_Source_PlayFab_Public_PlayFabServerAPI_h_234_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> PLAYFAB_API UClass* StaticClass<class UPlayFabServerAPI>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Test_Plugins_EnginePlugins_PlayFab_Source_PlayFab_Public_PlayFabServerAPI_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
