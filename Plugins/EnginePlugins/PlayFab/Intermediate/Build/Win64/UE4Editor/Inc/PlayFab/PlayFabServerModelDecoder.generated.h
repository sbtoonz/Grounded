// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UPlayFabJsonObject;
struct FServerAddPlayerTagResult;
struct FServerAddSharedGroupMembersResult;
struct FServerAuthenticateSessionTicketResult;
struct FServerAwardSteamAchievementResult;
struct FServerBanUsersResult;
struct FServerConsumeItemResult;
struct FServerCreateSharedGroupResult;
struct FServerDeleteCharacterFromUserResult;
struct FServerDeletePlayerResult;
struct FServerDeletePushNotificationTemplateResult;
struct FServerDeregisterGameResponse;
struct FServerEmptyResponse;
struct FServerEmptyResult;
struct FServerEvaluateRandomResultTableResult;
struct FServerExecuteCloudScriptResult;
struct FServerGetAllSegmentsResult;
struct FServerGetCatalogItemsResult;
struct FServerGetCharacterDataResult;
struct FServerGetCharacterInventoryResult;
struct FServerGetCharacterLeaderboardResult;
struct FServerGetCharacterStatisticsResult;
struct FServerGetContentDownloadUrlResult;
struct FServerGetFriendsListResult;
struct FServerGetLeaderboardAroundCharacterResult;
struct FServerGetLeaderboardAroundUserResult;
struct FServerGetLeaderboardForUsersCharactersResult;
struct FServerGetLeaderboardResult;
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
struct FServerListUsersCharactersResult;
struct FServerModifyCharacterVirtualCurrencyResult;
struct FServerModifyItemUsesResult;
struct FServerModifyUserVirtualCurrencyResult;
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
struct FServerRevokeInventoryItemsResult;
struct FServerRevokeInventoryResult;
struct FServerSavePushNotificationTemplateResult;
struct FServerSendCustomAccountRecoveryEmailResult;
struct FServerSendEmailFromTemplateResult;
struct FServerSendPushNotificationResult;
struct FServerServerLoginResult;
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
#ifdef PLAYFAB_PlayFabServerModelDecoder_generated_h
#error "PlayFabServerModelDecoder.generated.h already included, missing '#pragma once' in PlayFabServerModelDecoder.h"
#endif
#define PLAYFAB_PlayFabServerModelDecoder_generated_h

#define Test_Plugins_EnginePlugins_PlayFab_Source_PlayFab_Public_PlayFabServerModelDecoder_h_111_SPARSE_DATA
#define Test_Plugins_EnginePlugins_PlayFab_Source_PlayFab_Public_PlayFabServerModelDecoder_h_111_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execdecodeAddPlayerTagResultResponse); \
	DECLARE_FUNCTION(execdecodeAddSharedGroupMembersResultResponse); \
	DECLARE_FUNCTION(execdecodeAuthenticateSessionTicketResultResponse); \
	DECLARE_FUNCTION(execdecodeAwardSteamAchievementResultResponse); \
	DECLARE_FUNCTION(execdecodeBanUsersResultResponse); \
	DECLARE_FUNCTION(execdecodeConsumeItemResultResponse); \
	DECLARE_FUNCTION(execdecodeCreateSharedGroupResultResponse); \
	DECLARE_FUNCTION(execdecodeDeleteCharacterFromUserResultResponse); \
	DECLARE_FUNCTION(execdecodeDeletePlayerResultResponse); \
	DECLARE_FUNCTION(execdecodeDeletePushNotificationTemplateResultResponse); \
	DECLARE_FUNCTION(execdecodeDeregisterGameResponseResponse); \
	DECLARE_FUNCTION(execdecodeEmptyResponseResponse); \
	DECLARE_FUNCTION(execdecodeEmptyResultResponse); \
	DECLARE_FUNCTION(execdecodeEvaluateRandomResultTableResultResponse); \
	DECLARE_FUNCTION(execdecodeExecuteCloudScriptResultResponse); \
	DECLARE_FUNCTION(execdecodeGetAllSegmentsResultResponse); \
	DECLARE_FUNCTION(execdecodeGetCatalogItemsResultResponse); \
	DECLARE_FUNCTION(execdecodeGetCharacterDataResultResponse); \
	DECLARE_FUNCTION(execdecodeGetCharacterInventoryResultResponse); \
	DECLARE_FUNCTION(execdecodeGetCharacterLeaderboardResultResponse); \
	DECLARE_FUNCTION(execdecodeGetCharacterStatisticsResultResponse); \
	DECLARE_FUNCTION(execdecodeGetContentDownloadUrlResultResponse); \
	DECLARE_FUNCTION(execdecodeGetFriendsListResultResponse); \
	DECLARE_FUNCTION(execdecodeGetLeaderboardAroundCharacterResultResponse); \
	DECLARE_FUNCTION(execdecodeGetLeaderboardAroundUserResultResponse); \
	DECLARE_FUNCTION(execdecodeGetLeaderboardForUsersCharactersResultResponse); \
	DECLARE_FUNCTION(execdecodeGetLeaderboardResultResponse); \
	DECLARE_FUNCTION(execdecodeGetPlayerCombinedInfoResultResponse); \
	DECLARE_FUNCTION(execdecodeGetPlayerProfileResultResponse); \
	DECLARE_FUNCTION(execdecodeGetPlayerSegmentsResultResponse); \
	DECLARE_FUNCTION(execdecodeGetPlayersInSegmentResultResponse); \
	DECLARE_FUNCTION(execdecodeGetPlayerStatisticsResultResponse); \
	DECLARE_FUNCTION(execdecodeGetPlayerStatisticVersionsResultResponse); \
	DECLARE_FUNCTION(execdecodeGetPlayerTagsResultResponse); \
	DECLARE_FUNCTION(execdecodeGetPlayFabIDsFromFacebookIDsResultResponse); \
	DECLARE_FUNCTION(execdecodeGetPlayFabIDsFromFacebookInstantGamesIdsResultResponse); \
	DECLARE_FUNCTION(execdecodeGetPlayFabIDsFromGenericIDsResultResponse); \
	DECLARE_FUNCTION(execdecodeGetPlayFabIDsFromNintendoSwitchDeviceIdsResultResponse); \
	DECLARE_FUNCTION(execdecodeGetPlayFabIDsFromPSNAccountIDsResultResponse); \
	DECLARE_FUNCTION(execdecodeGetPlayFabIDsFromSteamIDsResultResponse); \
	DECLARE_FUNCTION(execdecodeGetPlayFabIDsFromXboxLiveIDsResultResponse); \
	DECLARE_FUNCTION(execdecodeGetPublisherDataResultResponse); \
	DECLARE_FUNCTION(execdecodeGetRandomResultTablesResultResponse); \
	DECLARE_FUNCTION(execdecodeGetServerCustomIDsFromPlayFabIDsResultResponse); \
	DECLARE_FUNCTION(execdecodeGetSharedGroupDataResultResponse); \
	DECLARE_FUNCTION(execdecodeGetStoreItemsResultResponse); \
	DECLARE_FUNCTION(execdecodeGetTimeResultResponse); \
	DECLARE_FUNCTION(execdecodeGetTitleDataResultResponse); \
	DECLARE_FUNCTION(execdecodeGetTitleNewsResultResponse); \
	DECLARE_FUNCTION(execdecodeGetUserAccountInfoResultResponse); \
	DECLARE_FUNCTION(execdecodeGetUserBansResultResponse); \
	DECLARE_FUNCTION(execdecodeGetUserDataResultResponse); \
	DECLARE_FUNCTION(execdecodeGetUserInventoryResultResponse); \
	DECLARE_FUNCTION(execdecodeGrantCharacterToUserResultResponse); \
	DECLARE_FUNCTION(execdecodeGrantItemsToCharacterResultResponse); \
	DECLARE_FUNCTION(execdecodeGrantItemsToUserResultResponse); \
	DECLARE_FUNCTION(execdecodeGrantItemsToUsersResultResponse); \
	DECLARE_FUNCTION(execdecodeLinkPSNAccountResultResponse); \
	DECLARE_FUNCTION(execdecodeLinkServerCustomIdResultResponse); \
	DECLARE_FUNCTION(execdecodeLinkXboxAccountResultResponse); \
	DECLARE_FUNCTION(execdecodeListUsersCharactersResultResponse); \
	DECLARE_FUNCTION(execdecodeModifyCharacterVirtualCurrencyResultResponse); \
	DECLARE_FUNCTION(execdecodeModifyItemUsesResultResponse); \
	DECLARE_FUNCTION(execdecodeModifyUserVirtualCurrencyResultResponse); \
	DECLARE_FUNCTION(execdecodeMoveItemToCharacterFromCharacterResultResponse); \
	DECLARE_FUNCTION(execdecodeMoveItemToCharacterFromUserResultResponse); \
	DECLARE_FUNCTION(execdecodeMoveItemToUserFromCharacterResultResponse); \
	DECLARE_FUNCTION(execdecodeNotifyMatchmakerPlayerLeftResultResponse); \
	DECLARE_FUNCTION(execdecodeRedeemCouponResultResponse); \
	DECLARE_FUNCTION(execdecodeRedeemMatchmakerTicketResultResponse); \
	DECLARE_FUNCTION(execdecodeRefreshGameServerInstanceHeartbeatResultResponse); \
	DECLARE_FUNCTION(execdecodeRegisterGameResponseResponse); \
	DECLARE_FUNCTION(execdecodeRemovePlayerTagResultResponse); \
	DECLARE_FUNCTION(execdecodeRemoveSharedGroupMembersResultResponse); \
	DECLARE_FUNCTION(execdecodeReportPlayerServerResultResponse); \
	DECLARE_FUNCTION(execdecodeRevokeAllBansForUserResultResponse); \
	DECLARE_FUNCTION(execdecodeRevokeBansResultResponse); \
	DECLARE_FUNCTION(execdecodeRevokeInventoryItemsResultResponse); \
	DECLARE_FUNCTION(execdecodeRevokeInventoryResultResponse); \
	DECLARE_FUNCTION(execdecodeSavePushNotificationTemplateResultResponse); \
	DECLARE_FUNCTION(execdecodeSendCustomAccountRecoveryEmailResultResponse); \
	DECLARE_FUNCTION(execdecodeSendEmailFromTemplateResultResponse); \
	DECLARE_FUNCTION(execdecodeSendPushNotificationResultResponse); \
	DECLARE_FUNCTION(execdecodeServerLoginResultResponse); \
	DECLARE_FUNCTION(execdecodeSetGameServerInstanceDataResultResponse); \
	DECLARE_FUNCTION(execdecodeSetGameServerInstanceStateResultResponse); \
	DECLARE_FUNCTION(execdecodeSetGameServerInstanceTagsResultResponse); \
	DECLARE_FUNCTION(execdecodeSetPlayerSecretResultResponse); \
	DECLARE_FUNCTION(execdecodeSetPublisherDataResultResponse); \
	DECLARE_FUNCTION(execdecodeSetTitleDataResultResponse); \
	DECLARE_FUNCTION(execdecodeUnlinkPSNAccountResultResponse); \
	DECLARE_FUNCTION(execdecodeUnlinkServerCustomIdResultResponse); \
	DECLARE_FUNCTION(execdecodeUnlinkXboxAccountResultResponse); \
	DECLARE_FUNCTION(execdecodeUnlockContainerItemResultResponse); \
	DECLARE_FUNCTION(execdecodeUpdateBansResultResponse); \
	DECLARE_FUNCTION(execdecodeUpdateCharacterDataResultResponse); \
	DECLARE_FUNCTION(execdecodeUpdateCharacterStatisticsResultResponse); \
	DECLARE_FUNCTION(execdecodeUpdatePlayerStatisticsResultResponse); \
	DECLARE_FUNCTION(execdecodeUpdateSharedGroupDataResultResponse); \
	DECLARE_FUNCTION(execdecodeUpdateUserDataResultResponse); \
	DECLARE_FUNCTION(execdecodeWriteEventResponseResponse);


#define Test_Plugins_EnginePlugins_PlayFab_Source_PlayFab_Public_PlayFabServerModelDecoder_h_111_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execdecodeAddPlayerTagResultResponse); \
	DECLARE_FUNCTION(execdecodeAddSharedGroupMembersResultResponse); \
	DECLARE_FUNCTION(execdecodeAuthenticateSessionTicketResultResponse); \
	DECLARE_FUNCTION(execdecodeAwardSteamAchievementResultResponse); \
	DECLARE_FUNCTION(execdecodeBanUsersResultResponse); \
	DECLARE_FUNCTION(execdecodeConsumeItemResultResponse); \
	DECLARE_FUNCTION(execdecodeCreateSharedGroupResultResponse); \
	DECLARE_FUNCTION(execdecodeDeleteCharacterFromUserResultResponse); \
	DECLARE_FUNCTION(execdecodeDeletePlayerResultResponse); \
	DECLARE_FUNCTION(execdecodeDeletePushNotificationTemplateResultResponse); \
	DECLARE_FUNCTION(execdecodeDeregisterGameResponseResponse); \
	DECLARE_FUNCTION(execdecodeEmptyResponseResponse); \
	DECLARE_FUNCTION(execdecodeEmptyResultResponse); \
	DECLARE_FUNCTION(execdecodeEvaluateRandomResultTableResultResponse); \
	DECLARE_FUNCTION(execdecodeExecuteCloudScriptResultResponse); \
	DECLARE_FUNCTION(execdecodeGetAllSegmentsResultResponse); \
	DECLARE_FUNCTION(execdecodeGetCatalogItemsResultResponse); \
	DECLARE_FUNCTION(execdecodeGetCharacterDataResultResponse); \
	DECLARE_FUNCTION(execdecodeGetCharacterInventoryResultResponse); \
	DECLARE_FUNCTION(execdecodeGetCharacterLeaderboardResultResponse); \
	DECLARE_FUNCTION(execdecodeGetCharacterStatisticsResultResponse); \
	DECLARE_FUNCTION(execdecodeGetContentDownloadUrlResultResponse); \
	DECLARE_FUNCTION(execdecodeGetFriendsListResultResponse); \
	DECLARE_FUNCTION(execdecodeGetLeaderboardAroundCharacterResultResponse); \
	DECLARE_FUNCTION(execdecodeGetLeaderboardAroundUserResultResponse); \
	DECLARE_FUNCTION(execdecodeGetLeaderboardForUsersCharactersResultResponse); \
	DECLARE_FUNCTION(execdecodeGetLeaderboardResultResponse); \
	DECLARE_FUNCTION(execdecodeGetPlayerCombinedInfoResultResponse); \
	DECLARE_FUNCTION(execdecodeGetPlayerProfileResultResponse); \
	DECLARE_FUNCTION(execdecodeGetPlayerSegmentsResultResponse); \
	DECLARE_FUNCTION(execdecodeGetPlayersInSegmentResultResponse); \
	DECLARE_FUNCTION(execdecodeGetPlayerStatisticsResultResponse); \
	DECLARE_FUNCTION(execdecodeGetPlayerStatisticVersionsResultResponse); \
	DECLARE_FUNCTION(execdecodeGetPlayerTagsResultResponse); \
	DECLARE_FUNCTION(execdecodeGetPlayFabIDsFromFacebookIDsResultResponse); \
	DECLARE_FUNCTION(execdecodeGetPlayFabIDsFromFacebookInstantGamesIdsResultResponse); \
	DECLARE_FUNCTION(execdecodeGetPlayFabIDsFromGenericIDsResultResponse); \
	DECLARE_FUNCTION(execdecodeGetPlayFabIDsFromNintendoSwitchDeviceIdsResultResponse); \
	DECLARE_FUNCTION(execdecodeGetPlayFabIDsFromPSNAccountIDsResultResponse); \
	DECLARE_FUNCTION(execdecodeGetPlayFabIDsFromSteamIDsResultResponse); \
	DECLARE_FUNCTION(execdecodeGetPlayFabIDsFromXboxLiveIDsResultResponse); \
	DECLARE_FUNCTION(execdecodeGetPublisherDataResultResponse); \
	DECLARE_FUNCTION(execdecodeGetRandomResultTablesResultResponse); \
	DECLARE_FUNCTION(execdecodeGetServerCustomIDsFromPlayFabIDsResultResponse); \
	DECLARE_FUNCTION(execdecodeGetSharedGroupDataResultResponse); \
	DECLARE_FUNCTION(execdecodeGetStoreItemsResultResponse); \
	DECLARE_FUNCTION(execdecodeGetTimeResultResponse); \
	DECLARE_FUNCTION(execdecodeGetTitleDataResultResponse); \
	DECLARE_FUNCTION(execdecodeGetTitleNewsResultResponse); \
	DECLARE_FUNCTION(execdecodeGetUserAccountInfoResultResponse); \
	DECLARE_FUNCTION(execdecodeGetUserBansResultResponse); \
	DECLARE_FUNCTION(execdecodeGetUserDataResultResponse); \
	DECLARE_FUNCTION(execdecodeGetUserInventoryResultResponse); \
	DECLARE_FUNCTION(execdecodeGrantCharacterToUserResultResponse); \
	DECLARE_FUNCTION(execdecodeGrantItemsToCharacterResultResponse); \
	DECLARE_FUNCTION(execdecodeGrantItemsToUserResultResponse); \
	DECLARE_FUNCTION(execdecodeGrantItemsToUsersResultResponse); \
	DECLARE_FUNCTION(execdecodeLinkPSNAccountResultResponse); \
	DECLARE_FUNCTION(execdecodeLinkServerCustomIdResultResponse); \
	DECLARE_FUNCTION(execdecodeLinkXboxAccountResultResponse); \
	DECLARE_FUNCTION(execdecodeListUsersCharactersResultResponse); \
	DECLARE_FUNCTION(execdecodeModifyCharacterVirtualCurrencyResultResponse); \
	DECLARE_FUNCTION(execdecodeModifyItemUsesResultResponse); \
	DECLARE_FUNCTION(execdecodeModifyUserVirtualCurrencyResultResponse); \
	DECLARE_FUNCTION(execdecodeMoveItemToCharacterFromCharacterResultResponse); \
	DECLARE_FUNCTION(execdecodeMoveItemToCharacterFromUserResultResponse); \
	DECLARE_FUNCTION(execdecodeMoveItemToUserFromCharacterResultResponse); \
	DECLARE_FUNCTION(execdecodeNotifyMatchmakerPlayerLeftResultResponse); \
	DECLARE_FUNCTION(execdecodeRedeemCouponResultResponse); \
	DECLARE_FUNCTION(execdecodeRedeemMatchmakerTicketResultResponse); \
	DECLARE_FUNCTION(execdecodeRefreshGameServerInstanceHeartbeatResultResponse); \
	DECLARE_FUNCTION(execdecodeRegisterGameResponseResponse); \
	DECLARE_FUNCTION(execdecodeRemovePlayerTagResultResponse); \
	DECLARE_FUNCTION(execdecodeRemoveSharedGroupMembersResultResponse); \
	DECLARE_FUNCTION(execdecodeReportPlayerServerResultResponse); \
	DECLARE_FUNCTION(execdecodeRevokeAllBansForUserResultResponse); \
	DECLARE_FUNCTION(execdecodeRevokeBansResultResponse); \
	DECLARE_FUNCTION(execdecodeRevokeInventoryItemsResultResponse); \
	DECLARE_FUNCTION(execdecodeRevokeInventoryResultResponse); \
	DECLARE_FUNCTION(execdecodeSavePushNotificationTemplateResultResponse); \
	DECLARE_FUNCTION(execdecodeSendCustomAccountRecoveryEmailResultResponse); \
	DECLARE_FUNCTION(execdecodeSendEmailFromTemplateResultResponse); \
	DECLARE_FUNCTION(execdecodeSendPushNotificationResultResponse); \
	DECLARE_FUNCTION(execdecodeServerLoginResultResponse); \
	DECLARE_FUNCTION(execdecodeSetGameServerInstanceDataResultResponse); \
	DECLARE_FUNCTION(execdecodeSetGameServerInstanceStateResultResponse); \
	DECLARE_FUNCTION(execdecodeSetGameServerInstanceTagsResultResponse); \
	DECLARE_FUNCTION(execdecodeSetPlayerSecretResultResponse); \
	DECLARE_FUNCTION(execdecodeSetPublisherDataResultResponse); \
	DECLARE_FUNCTION(execdecodeSetTitleDataResultResponse); \
	DECLARE_FUNCTION(execdecodeUnlinkPSNAccountResultResponse); \
	DECLARE_FUNCTION(execdecodeUnlinkServerCustomIdResultResponse); \
	DECLARE_FUNCTION(execdecodeUnlinkXboxAccountResultResponse); \
	DECLARE_FUNCTION(execdecodeUnlockContainerItemResultResponse); \
	DECLARE_FUNCTION(execdecodeUpdateBansResultResponse); \
	DECLARE_FUNCTION(execdecodeUpdateCharacterDataResultResponse); \
	DECLARE_FUNCTION(execdecodeUpdateCharacterStatisticsResultResponse); \
	DECLARE_FUNCTION(execdecodeUpdatePlayerStatisticsResultResponse); \
	DECLARE_FUNCTION(execdecodeUpdateSharedGroupDataResultResponse); \
	DECLARE_FUNCTION(execdecodeUpdateUserDataResultResponse); \
	DECLARE_FUNCTION(execdecodeWriteEventResponseResponse);


#define Test_Plugins_EnginePlugins_PlayFab_Source_PlayFab_Public_PlayFabServerModelDecoder_h_111_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPlayFabServerModelDecoder(); \
	friend struct Z_Construct_UClass_UPlayFabServerModelDecoder_Statics; \
public: \
	DECLARE_CLASS(UPlayFabServerModelDecoder, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/PlayFab"), NO_API) \
	DECLARE_SERIALIZER(UPlayFabServerModelDecoder)


#define Test_Plugins_EnginePlugins_PlayFab_Source_PlayFab_Public_PlayFabServerModelDecoder_h_111_INCLASS \
private: \
	static void StaticRegisterNativesUPlayFabServerModelDecoder(); \
	friend struct Z_Construct_UClass_UPlayFabServerModelDecoder_Statics; \
public: \
	DECLARE_CLASS(UPlayFabServerModelDecoder, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/PlayFab"), NO_API) \
	DECLARE_SERIALIZER(UPlayFabServerModelDecoder)


#define Test_Plugins_EnginePlugins_PlayFab_Source_PlayFab_Public_PlayFabServerModelDecoder_h_111_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UPlayFabServerModelDecoder(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPlayFabServerModelDecoder) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPlayFabServerModelDecoder); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPlayFabServerModelDecoder); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UPlayFabServerModelDecoder(UPlayFabServerModelDecoder&&); \
	NO_API UPlayFabServerModelDecoder(const UPlayFabServerModelDecoder&); \
public:


#define Test_Plugins_EnginePlugins_PlayFab_Source_PlayFab_Public_PlayFabServerModelDecoder_h_111_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UPlayFabServerModelDecoder(UPlayFabServerModelDecoder&&); \
	NO_API UPlayFabServerModelDecoder(const UPlayFabServerModelDecoder&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPlayFabServerModelDecoder); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPlayFabServerModelDecoder); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UPlayFabServerModelDecoder)


#define Test_Plugins_EnginePlugins_PlayFab_Source_PlayFab_Public_PlayFabServerModelDecoder_h_111_PRIVATE_PROPERTY_OFFSET
#define Test_Plugins_EnginePlugins_PlayFab_Source_PlayFab_Public_PlayFabServerModelDecoder_h_109_PROLOG
#define Test_Plugins_EnginePlugins_PlayFab_Source_PlayFab_Public_PlayFabServerModelDecoder_h_111_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Test_Plugins_EnginePlugins_PlayFab_Source_PlayFab_Public_PlayFabServerModelDecoder_h_111_PRIVATE_PROPERTY_OFFSET \
	Test_Plugins_EnginePlugins_PlayFab_Source_PlayFab_Public_PlayFabServerModelDecoder_h_111_SPARSE_DATA \
	Test_Plugins_EnginePlugins_PlayFab_Source_PlayFab_Public_PlayFabServerModelDecoder_h_111_RPC_WRAPPERS \
	Test_Plugins_EnginePlugins_PlayFab_Source_PlayFab_Public_PlayFabServerModelDecoder_h_111_INCLASS \
	Test_Plugins_EnginePlugins_PlayFab_Source_PlayFab_Public_PlayFabServerModelDecoder_h_111_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Test_Plugins_EnginePlugins_PlayFab_Source_PlayFab_Public_PlayFabServerModelDecoder_h_111_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Test_Plugins_EnginePlugins_PlayFab_Source_PlayFab_Public_PlayFabServerModelDecoder_h_111_PRIVATE_PROPERTY_OFFSET \
	Test_Plugins_EnginePlugins_PlayFab_Source_PlayFab_Public_PlayFabServerModelDecoder_h_111_SPARSE_DATA \
	Test_Plugins_EnginePlugins_PlayFab_Source_PlayFab_Public_PlayFabServerModelDecoder_h_111_RPC_WRAPPERS_NO_PURE_DECLS \
	Test_Plugins_EnginePlugins_PlayFab_Source_PlayFab_Public_PlayFabServerModelDecoder_h_111_INCLASS_NO_PURE_DECLS \
	Test_Plugins_EnginePlugins_PlayFab_Source_PlayFab_Public_PlayFabServerModelDecoder_h_111_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> PLAYFAB_API UClass* StaticClass<class UPlayFabServerModelDecoder>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Test_Plugins_EnginePlugins_PlayFab_Source_PlayFab_Public_PlayFabServerModelDecoder_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
