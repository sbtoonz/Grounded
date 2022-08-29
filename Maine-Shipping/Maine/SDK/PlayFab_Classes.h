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
	 * Class PlayFab.PlayFabAdminAPI
	 * Size -> 0x0810 (FullSize[0x0840] - InheritedSize[0x0030])
	 */
	class UPlayFabAdminAPI : public UOnlineBlueprintCallProxyBase
	{
	public:
		class FScriptMulticastDelegate                             OnPlayFabResponse;                                       // 0x0030(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_VC2L[0x798];                                 // 0x0040(0x0798) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UPlayFabAuthenticationContext*                       CallAuthenticationContext;                               // 0x07D8(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UPlayFabJsonObject*                                  RequestJsonObj;                                          // 0x07E0(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UPlayFabJsonObject*                                  ResponseJsonObj;                                         // 0x07E8(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_OD8P[0x50];                                  // 0x07F0(0x0050) MISSED OFFSET (PADDING)

	public:
		class UPlayFabAdminAPI* UpdateUserTitleDisplayName(const struct FAdminUpdateUserTitleDisplayNameRequest& Request, const class FScriptDelegate& onSuccess, const class FScriptDelegate& onFailure, class UObject* customData);
		class UPlayFabAdminAPI* UpdateUserReadOnlyData(const struct FAdminUpdateUserDataRequest& Request, const class FScriptDelegate& onSuccess, const class FScriptDelegate& onFailure, class UObject* customData);
		class UPlayFabAdminAPI* UpdateUserPublisherReadOnlyData(const struct FAdminUpdateUserDataRequest& Request, const class FScriptDelegate& onSuccess, const class FScriptDelegate& onFailure, class UObject* customData);
		class UPlayFabAdminAPI* UpdateUserPublisherInternalData(const struct FAdminUpdateUserInternalDataRequest& Request, const class FScriptDelegate& onSuccess, const class FScriptDelegate& onFailure, class UObject* customData);
		class UPlayFabAdminAPI* UpdateUserPublisherData(const struct FAdminUpdateUserDataRequest& Request, const class FScriptDelegate& onSuccess, const class FScriptDelegate& onFailure, class UObject* customData);
		class UPlayFabAdminAPI* UpdateUserInternalData(const struct FAdminUpdateUserInternalDataRequest& Request, const class FScriptDelegate& onSuccess, const class FScriptDelegate& onFailure, class UObject* customData);
		class UPlayFabAdminAPI* UpdateUserData(const struct FAdminUpdateUserDataRequest& Request, const class FScriptDelegate& onSuccess, const class FScriptDelegate& onFailure, class UObject* customData);
		class UPlayFabAdminAPI* UpdateTask(const struct FAdminUpdateTaskRequest& Request, const class FScriptDelegate& onSuccess, const class FScriptDelegate& onFailure, class UObject* customData);
		class UPlayFabAdminAPI* UpdateStoreItems(const struct FAdminUpdateStoreItemsRequest& Request, const class FScriptDelegate& onSuccess, const class FScriptDelegate& onFailure, class UObject* customData);
		class UPlayFabAdminAPI* UpdateSegment(const struct FAdminUpdateSegmentRequest& Request, const class FScriptDelegate& onSuccess, const class FScriptDelegate& onFailure, class UObject* customData);
		class UPlayFabAdminAPI* UpdateRandomResultTables(const struct FAdminUpdateRandomResultTablesRequest& Request, const class FScriptDelegate& onSuccess, const class FScriptDelegate& onFailure, class UObject* customData);
		class UPlayFabAdminAPI* UpdatePolicy(const struct FAdminUpdatePolicyRequest& Request, const class FScriptDelegate& onSuccess, const class FScriptDelegate& onFailure, class UObject* customData);
		class UPlayFabAdminAPI* UpdatePlayerStatisticDefinition(const struct FAdminUpdatePlayerStatisticDefinitionRequest& Request, const class FScriptDelegate& onSuccess, const class FScriptDelegate& onFailure, class UObject* customData);
		class UPlayFabAdminAPI* UpdatePlayerSharedSecret(const struct FAdminUpdatePlayerSharedSecretRequest& Request, const class FScriptDelegate& onSuccess, const class FScriptDelegate& onFailure, class UObject* customData);
		class UPlayFabAdminAPI* UpdateOpenIdConnection(const struct FAdminUpdateOpenIdConnectionRequest& Request, const class FScriptDelegate& onSuccess, const class FScriptDelegate& onFailure, class UObject* customData);
		class UPlayFabAdminAPI* UpdateCloudScript(const struct FAdminUpdateCloudScriptRequest& Request, const class FScriptDelegate& onSuccess, const class FScriptDelegate& onFailure, class UObject* customData);
		class UPlayFabAdminAPI* UpdateCatalogItems(const struct FAdminUpdateCatalogItemsRequest& Request, const class FScriptDelegate& onSuccess, const class FScriptDelegate& onFailure, class UObject* customData);
		class UPlayFabAdminAPI* UpdateBans(const struct FAdminUpdateBansRequest& Request, const class FScriptDelegate& onSuccess, const class FScriptDelegate& onFailure, class UObject* customData);
		class UPlayFabAdminAPI* SubtractUserVirtualCurrency(const struct FAdminSubtractUserVirtualCurrencyRequest& Request, const class FScriptDelegate& onSuccess, const class FScriptDelegate& onFailure, class UObject* customData);
		class UPlayFabAdminAPI* SetupPushNotification(const struct FAdminSetupPushNotificationRequest& Request, const class FScriptDelegate& onSuccess, const class FScriptDelegate& onFailure, class UObject* customData);
		class UPlayFabAdminAPI* SetTitleInternalData(const struct FAdminSetTitleDataRequest& Request, const class FScriptDelegate& onSuccess, const class FScriptDelegate& onFailure, class UObject* customData);
		class UPlayFabAdminAPI* SetTitleDataAndOverrides(const struct FAdminSetTitleDataAndOverridesRequest& Request, const class FScriptDelegate& onSuccess, const class FScriptDelegate& onFailure, class UObject* customData);
		class UPlayFabAdminAPI* SetTitleData(const struct FAdminSetTitleDataRequest& Request, const class FScriptDelegate& onSuccess, const class FScriptDelegate& onFailure, class UObject* customData);
		class UPlayFabAdminAPI* SetStoreItems(const struct FAdminUpdateStoreItemsRequest& Request, const class FScriptDelegate& onSuccess, const class FScriptDelegate& onFailure, class UObject* customData);
		class UPlayFabAdminAPI* SetPublisherData(const struct FAdminSetPublisherDataRequest& Request, const class FScriptDelegate& onSuccess, const class FScriptDelegate& onFailure, class UObject* customData);
		class UPlayFabAdminAPI* SetPublishedRevision(const struct FAdminSetPublishedRevisionRequest& Request, const class FScriptDelegate& onSuccess, const class FScriptDelegate& onFailure, class UObject* customData);
		class UPlayFabAdminAPI* SetPlayerSecret(const struct FAdminSetPlayerSecretRequest& Request, const class FScriptDelegate& onSuccess, const class FScriptDelegate& onFailure, class UObject* customData);
		class UPlayFabAdminAPI* SetCatalogItems(const struct FAdminUpdateCatalogItemsRequest& Request, const class FScriptDelegate& onSuccess, const class FScriptDelegate& onFailure, class UObject* customData);
		class UPlayFabAdminAPI* SendAccountRecoveryEmail(const struct FAdminSendAccountRecoveryEmailRequest& Request, const class FScriptDelegate& onSuccess, const class FScriptDelegate& onFailure, class UObject* customData);
		class UPlayFabAdminAPI* RunTask(const struct FAdminRunTaskRequest& Request, const class FScriptDelegate& onSuccess, const class FScriptDelegate& onFailure, class UObject* customData);
		class UPlayFabAdminAPI* RevokeInventoryItems(const struct FAdminRevokeInventoryItemsRequest& Request, const class FScriptDelegate& onSuccess, const class FScriptDelegate& onFailure, class UObject* customData);
		class UPlayFabAdminAPI* RevokeInventoryItem(const struct FAdminRevokeInventoryItemRequest& Request, const class FScriptDelegate& onSuccess, const class FScriptDelegate& onFailure, class UObject* customData);
		class UPlayFabAdminAPI* RevokeBans(const struct FAdminRevokeBansRequest& Request, const class FScriptDelegate& onSuccess, const class FScriptDelegate& onFailure, class UObject* customData);
		class UPlayFabAdminAPI* RevokeAllBansForUser(const struct FAdminRevokeAllBansForUserRequest& Request, const class FScriptDelegate& onSuccess, const class FScriptDelegate& onFailure, class UObject* customData);
		class UPlayFabAdminAPI* ResolvePurchaseDispute(const struct FAdminResolvePurchaseDisputeRequest& Request, const class FScriptDelegate& onSuccess, const class FScriptDelegate& onFailure, class UObject* customData);
		class UPlayFabAdminAPI* ResetUserStatistics(const struct FAdminResetUserStatisticsRequest& Request, const class FScriptDelegate& onSuccess, const class FScriptDelegate& onFailure, class UObject* customData);
		class UPlayFabAdminAPI* ResetPassword(const struct FAdminResetPasswordRequest& Request, const class FScriptDelegate& onSuccess, const class FScriptDelegate& onFailure, class UObject* customData);
		class UPlayFabAdminAPI* ResetCharacterStatistics(const struct FAdminResetCharacterStatisticsRequest& Request, const class FScriptDelegate& onSuccess, const class FScriptDelegate& onFailure, class UObject* customData);
		class UPlayFabAdminAPI* RemoveVirtualCurrencyTypes(const struct FAdminRemoveVirtualCurrencyTypesRequest& Request, const class FScriptDelegate& onSuccess, const class FScriptDelegate& onFailure, class UObject* customData);
		class UPlayFabAdminAPI* RemoveServerBuild(const struct FAdminRemoveServerBuildRequest& Request, const class FScriptDelegate& onSuccess, const class FScriptDelegate& onFailure, class UObject* customData);
		class UPlayFabAdminAPI* RemovePlayerTag(const struct FAdminRemovePlayerTagRequest& Request, const class FScriptDelegate& onSuccess, const class FScriptDelegate& onFailure, class UObject* customData);
		class UPlayFabAdminAPI* RefundPurchase(const struct FAdminRefundPurchaseRequest& Request, const class FScriptDelegate& onSuccess, const class FScriptDelegate& onFailure, class UObject* customData);
		class UPlayFabAdminAPI* ModifyServerBuild(const struct FAdminModifyServerBuildRequest& Request, const class FScriptDelegate& onSuccess, const class FScriptDelegate& onFailure, class UObject* customData);
		class UPlayFabAdminAPI* ModifyMatchmakerGameModes(const struct FAdminModifyMatchmakerGameModesRequest& Request, const class FScriptDelegate& onSuccess, const class FScriptDelegate& onFailure, class UObject* customData);
		class UPlayFabAdminAPI* ListVirtualCurrencyTypes(const struct FAdminListVirtualCurrencyTypesRequest& Request, const class FScriptDelegate& onSuccess, const class FScriptDelegate& onFailure, class UObject* customData);
		class UPlayFabAdminAPI* ListServerBuilds(const struct FAdminListBuildsRequest& Request, const class FScriptDelegate& onSuccess, const class FScriptDelegate& onFailure, class UObject* customData);
		class UPlayFabAdminAPI* ListOpenIdConnection(const struct FAdminListOpenIdConnectionRequest& Request, const class FScriptDelegate& onSuccess, const class FScriptDelegate& onFailure, class UObject* customData);
		class UPlayFabAdminAPI* IncrementPlayerStatisticVersion(const struct FAdminIncrementPlayerStatisticVersionRequest& Request, const class FScriptDelegate& onSuccess, const class FScriptDelegate& onFailure, class UObject* customData);
		class UPlayFabAdminAPI* IncrementLimitedEditionItemAvailability(const struct FAdminIncrementLimitedEditionItemAvailabilityRequest& Request, const class FScriptDelegate& onSuccess, const class FScriptDelegate& onFailure, class UObject* customData);
		void HelperUpdateUserTitleDisplayName(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
		void HelperUpdateUserReadOnlyData(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
		void HelperUpdateUserPublisherReadOnlyData(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
		void HelperUpdateUserPublisherInternalData(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
		void HelperUpdateUserPublisherData(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
		void HelperUpdateUserInternalData(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
		void HelperUpdateUserData(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
		void HelperUpdateTask(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
		void HelperUpdateStoreItems(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
		void HelperUpdateSegment(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
		void HelperUpdateRandomResultTables(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
		void HelperUpdatePolicy(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
		void HelperUpdatePlayerStatisticDefinition(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
		void HelperUpdatePlayerSharedSecret(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
		void HelperUpdateOpenIdConnection(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
		void HelperUpdateCloudScript(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
		void HelperUpdateCatalogItems(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
		void HelperUpdateBans(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
		void HelperSubtractUserVirtualCurrency(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
		void HelperSetupPushNotification(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
		void HelperSetTitleInternalData(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
		void HelperSetTitleDataAndOverrides(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
		void HelperSetTitleData(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
		void HelperSetStoreItems(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
		void HelperSetPublisherData(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
		void HelperSetPublishedRevision(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
		void HelperSetPlayerSecret(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
		void HelperSetCatalogItems(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
		void HelperSendAccountRecoveryEmail(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
		void HelperRunTask(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
		void HelperRevokeInventoryItems(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
		void HelperRevokeInventoryItem(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
		void HelperRevokeBans(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
		void HelperRevokeAllBansForUser(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
		void HelperResolvePurchaseDispute(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
		void HelperResetUserStatistics(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
		void HelperResetPassword(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
		void HelperResetCharacterStatistics(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
		void HelperRemoveVirtualCurrencyTypes(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
		void HelperRemoveServerBuild(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
		void HelperRemovePlayerTag(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
		void HelperRefundPurchase(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
		void HelperModifyServerBuild(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
		void HelperModifyMatchmakerGameModes(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
		void HelperListVirtualCurrencyTypes(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
		void HelperListServerBuilds(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
		void HelperListOpenIdConnection(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
		void HelperIncrementPlayerStatisticVersion(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
		void HelperIncrementLimitedEditionItemAvailability(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
		void HelperGrantItemsToUsers(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
		void HelperGetUserReadOnlyData(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
		void HelperGetUserPublisherReadOnlyData(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
		void HelperGetUserPublisherInternalData(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
		void HelperGetUserPublisherData(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
		void HelperGetUserInventory(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
		void HelperGetUserInternalData(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
		void HelperGetUserData(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
		void HelperGetUserBans(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
		void HelperGetUserAccountInfo(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
		void HelperGetTitleInternalData(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
		void HelperGetTitleData(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
		void HelperGetTasks(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
		void HelperGetTaskInstances(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
		void HelperGetStoreItems(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
		void HelperGetServerBuildUploadUrl(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
		void HelperGetServerBuildInfo(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
		void HelperGetSegments(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
		void HelperGetRandomResultTables(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
		void HelperGetPublisherData(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
		void HelperGetPolicy(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
		void HelperGetPlayerTags(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
		void HelperGetPlayerStatisticVersions(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
		void HelperGetPlayerStatisticDefinitions(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
		void HelperGetPlayersInSegment(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
		void HelperGetPlayerSharedSecrets(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
		void HelperGetPlayerSegments(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
		void HelperGetPlayerProfile(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
		void HelperGetPlayerIdFromAuthToken(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
		void HelperGetPlayedTitleList(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
		void HelperGetMatchmakerGameModes(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
		void HelperGetMatchmakerGameInfo(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
		void HelperGetDataReport(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
		void HelperGetContentUploadUrl(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
		void HelperGetContentList(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
		void HelperGetCloudScriptVersions(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
		void HelperGetCloudScriptTaskInstance(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
		void HelperGetCloudScriptRevision(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
		void HelperGetCatalogItems(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
		void HelperGetAllSegments(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
		void HelperGetActionsOnPlayersInSegmentTaskInstance(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
		void HelperExportMasterPlayerData(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
		void HelperDeleteTitleDataOverride(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
		void HelperDeleteTitle(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
		void HelperDeleteTask(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
		void HelperDeleteStore(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
		void HelperDeleteSegment(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
		void HelperDeletePlayerSharedSecret(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
		void HelperDeletePlayer(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
		void HelperDeleteOpenIdConnection(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
		void HelperDeleteMasterPlayerAccount(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
		void HelperDeleteContent(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
		void HelperCreateSegment(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
		void HelperCreatePlayerStatisticDefinition(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
		void HelperCreatePlayerSharedSecret(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
		void HelperCreateOpenIdConnection(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
		void HelperCreateInsightsScheduledScalingTask(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
		void HelperCreateCloudScriptTask(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
		void HelperCreateActionsOnPlayersInSegmentTask(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
		void HelperCheckLimitedEditionItemAvailability(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
		void HelperBanUsers(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
		void HelperAddVirtualCurrencyTypes(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
		void HelperAddUserVirtualCurrency(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
		void HelperAddServerBuild(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
		void HelperAddPlayerTag(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
		void HelperAddNews(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
		void HelperAddLocalizedNews(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
		void HelperAbortTaskInstance(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
		class UPlayFabAdminAPI* GrantItemsToUsers(const struct FAdminGrantItemsToUsersRequest& Request, const class FScriptDelegate& onSuccess, const class FScriptDelegate& onFailure, class UObject* customData);
		class UPlayFabAdminAPI* GetUserReadOnlyData(const struct FAdminGetUserDataRequest& Request, const class FScriptDelegate& onSuccess, const class FScriptDelegate& onFailure, class UObject* customData);
		class UPlayFabAdminAPI* GetUserPublisherReadOnlyData(const struct FAdminGetUserDataRequest& Request, const class FScriptDelegate& onSuccess, const class FScriptDelegate& onFailure, class UObject* customData);
		class UPlayFabAdminAPI* GetUserPublisherInternalData(const struct FAdminGetUserDataRequest& Request, const class FScriptDelegate& onSuccess, const class FScriptDelegate& onFailure, class UObject* customData);
		class UPlayFabAdminAPI* GetUserPublisherData(const struct FAdminGetUserDataRequest& Request, const class FScriptDelegate& onSuccess, const class FScriptDelegate& onFailure, class UObject* customData);
		class UPlayFabAdminAPI* GetUserInventory(const struct FAdminGetUserInventoryRequest& Request, const class FScriptDelegate& onSuccess, const class FScriptDelegate& onFailure, class UObject* customData);
		class UPlayFabAdminAPI* GetUserInternalData(const struct FAdminGetUserDataRequest& Request, const class FScriptDelegate& onSuccess, const class FScriptDelegate& onFailure, class UObject* customData);
		class UPlayFabAdminAPI* GetUserData(const struct FAdminGetUserDataRequest& Request, const class FScriptDelegate& onSuccess, const class FScriptDelegate& onFailure, class UObject* customData);
		class UPlayFabAdminAPI* GetUserBans(const struct FAdminGetUserBansRequest& Request, const class FScriptDelegate& onSuccess, const class FScriptDelegate& onFailure, class UObject* customData);
		class UPlayFabAdminAPI* GetUserAccountInfo(const struct FAdminLookupUserAccountInfoRequest& Request, const class FScriptDelegate& onSuccess, const class FScriptDelegate& onFailure, class UObject* customData);
		class UPlayFabAdminAPI* GetTitleInternalData(const struct FAdminGetTitleDataRequest& Request, const class FScriptDelegate& onSuccess, const class FScriptDelegate& onFailure, class UObject* customData);
		class UPlayFabAdminAPI* GetTitleData(const struct FAdminGetTitleDataRequest& Request, const class FScriptDelegate& onSuccess, const class FScriptDelegate& onFailure, class UObject* customData);
		class UPlayFabAdminAPI* GetTasks(const struct FAdminGetTasksRequest& Request, const class FScriptDelegate& onSuccess, const class FScriptDelegate& onFailure, class UObject* customData);
		class UPlayFabAdminAPI* GetTaskInstances(const struct FAdminGetTaskInstancesRequest& Request, const class FScriptDelegate& onSuccess, const class FScriptDelegate& onFailure, class UObject* customData);
		class UPlayFabAdminAPI* GetStoreItems(const struct FAdminGetStoreItemsRequest& Request, const class FScriptDelegate& onSuccess, const class FScriptDelegate& onFailure, class UObject* customData);
		class UPlayFabAdminAPI* GetServerBuildUploadUrl(const struct FAdminGetServerBuildUploadURLRequest& Request, const class FScriptDelegate& onSuccess, const class FScriptDelegate& onFailure, class UObject* customData);
		class UPlayFabAdminAPI* GetServerBuildInfo(const struct FAdminGetServerBuildInfoRequest& Request, const class FScriptDelegate& onSuccess, const class FScriptDelegate& onFailure, class UObject* customData);
		class UPlayFabAdminAPI* GetSegments(const struct FAdminGetSegmentsRequest& Request, const class FScriptDelegate& onSuccess, const class FScriptDelegate& onFailure, class UObject* customData);
		class UPlayFabAdminAPI* GetRandomResultTables(const struct FAdminGetRandomResultTablesRequest& Request, const class FScriptDelegate& onSuccess, const class FScriptDelegate& onFailure, class UObject* customData);
		class UPlayFabAdminAPI* GetPublisherData(const struct FAdminGetPublisherDataRequest& Request, const class FScriptDelegate& onSuccess, const class FScriptDelegate& onFailure, class UObject* customData);
		class UPlayFabAdminAPI* GetPolicy(const struct FAdminGetPolicyRequest& Request, const class FScriptDelegate& onSuccess, const class FScriptDelegate& onFailure, class UObject* customData);
		class UPlayFabAdminAPI* GetPlayerTags(const struct FAdminGetPlayerTagsRequest& Request, const class FScriptDelegate& onSuccess, const class FScriptDelegate& onFailure, class UObject* customData);
		class UPlayFabAdminAPI* GetPlayerStatisticVersions(const struct FAdminGetPlayerStatisticVersionsRequest& Request, const class FScriptDelegate& onSuccess, const class FScriptDelegate& onFailure, class UObject* customData);
		class UPlayFabAdminAPI* GetPlayerStatisticDefinitions(const struct FAdminGetPlayerStatisticDefinitionsRequest& Request, const class FScriptDelegate& onSuccess, const class FScriptDelegate& onFailure, class UObject* customData);
		class UPlayFabAdminAPI* GetPlayersInSegment(const struct FAdminGetPlayersInSegmentRequest& Request, const class FScriptDelegate& onSuccess, const class FScriptDelegate& onFailure, class UObject* customData);
		class UPlayFabAdminAPI* GetPlayerSharedSecrets(const struct FAdminGetPlayerSharedSecretsRequest& Request, const class FScriptDelegate& onSuccess, const class FScriptDelegate& onFailure, class UObject* customData);
		class UPlayFabAdminAPI* GetPlayerSegments(const struct FAdminGetPlayersSegmentsRequest& Request, const class FScriptDelegate& onSuccess, const class FScriptDelegate& onFailure, class UObject* customData);
		class UPlayFabAdminAPI* GetPlayerProfile(const struct FAdminGetPlayerProfileRequest& Request, const class FScriptDelegate& onSuccess, const class FScriptDelegate& onFailure, class UObject* customData);
		class UPlayFabAdminAPI* GetPlayerIdFromAuthToken(const struct FAdminGetPlayerIdFromAuthTokenRequest& Request, const class FScriptDelegate& onSuccess, const class FScriptDelegate& onFailure, class UObject* customData);
		class UPlayFabAdminAPI* GetPlayedTitleList(const struct FAdminGetPlayedTitleListRequest& Request, const class FScriptDelegate& onSuccess, const class FScriptDelegate& onFailure, class UObject* customData);
		class UPlayFabAdminAPI* GetMatchmakerGameModes(const struct FAdminGetMatchmakerGameModesRequest& Request, const class FScriptDelegate& onSuccess, const class FScriptDelegate& onFailure, class UObject* customData);
		class UPlayFabAdminAPI* GetMatchmakerGameInfo(const struct FAdminGetMatchmakerGameInfoRequest& Request, const class FScriptDelegate& onSuccess, const class FScriptDelegate& onFailure, class UObject* customData);
		class UPlayFabAdminAPI* GetDataReport(const struct FAdminGetDataReportRequest& Request, const class FScriptDelegate& onSuccess, const class FScriptDelegate& onFailure, class UObject* customData);
		class UPlayFabAdminAPI* GetContentUploadUrl(const struct FAdminGetContentUploadUrlRequest& Request, const class FScriptDelegate& onSuccess, const class FScriptDelegate& onFailure, class UObject* customData);
		class UPlayFabAdminAPI* GetContentList(const struct FAdminGetContentListRequest& Request, const class FScriptDelegate& onSuccess, const class FScriptDelegate& onFailure, class UObject* customData);
		class UPlayFabAdminAPI* GetCloudScriptVersions(const struct FAdminGetCloudScriptVersionsRequest& Request, const class FScriptDelegate& onSuccess, const class FScriptDelegate& onFailure, class UObject* customData);
		class UPlayFabAdminAPI* GetCloudScriptTaskInstance(const struct FAdminGetTaskInstanceRequest& Request, const class FScriptDelegate& onSuccess, const class FScriptDelegate& onFailure, class UObject* customData);
		class UPlayFabAdminAPI* GetCloudScriptRevision(const struct FAdminGetCloudScriptRevisionRequest& Request, const class FScriptDelegate& onSuccess, const class FScriptDelegate& onFailure, class UObject* customData);
		class UPlayFabAdminAPI* GetCatalogItems(const struct FAdminGetCatalogItemsRequest& Request, const class FScriptDelegate& onSuccess, const class FScriptDelegate& onFailure, class UObject* customData);
		class UPlayFabAdminAPI* GetAllSegments(const struct FAdminGetAllSegmentsRequest& Request, const class FScriptDelegate& onSuccess, const class FScriptDelegate& onFailure, class UObject* customData);
		class UPlayFabAdminAPI* GetActionsOnPlayersInSegmentTaskInstance(const struct FAdminGetTaskInstanceRequest& Request, const class FScriptDelegate& onSuccess, const class FScriptDelegate& onFailure, class UObject* customData);
		class UPlayFabAdminAPI* ExportMasterPlayerData(const struct FAdminExportMasterPlayerDataRequest& Request, const class FScriptDelegate& onSuccess, const class FScriptDelegate& onFailure, class UObject* customData);
		class UPlayFabAdminAPI* DeleteTitleDataOverride(const struct FAdminDeleteTitleDataOverrideRequest& Request, const class FScriptDelegate& onSuccess, const class FScriptDelegate& onFailure, class UObject* customData);
		class UPlayFabAdminAPI* DeleteTitle(const struct FAdminDeleteTitleRequest& Request, const class FScriptDelegate& onSuccess, const class FScriptDelegate& onFailure, class UObject* customData);
		class UPlayFabAdminAPI* DeleteTask(const struct FAdminDeleteTaskRequest& Request, const class FScriptDelegate& onSuccess, const class FScriptDelegate& onFailure, class UObject* customData);
		class UPlayFabAdminAPI* DeleteStore(const struct FAdminDeleteStoreRequest& Request, const class FScriptDelegate& onSuccess, const class FScriptDelegate& onFailure, class UObject* customData);
		class UPlayFabAdminAPI* DeleteSegment(const struct FAdminDeleteSegmentRequest& Request, const class FScriptDelegate& onSuccess, const class FScriptDelegate& onFailure, class UObject* customData);
		class UPlayFabAdminAPI* DeletePlayerSharedSecret(const struct FAdminDeletePlayerSharedSecretRequest& Request, const class FScriptDelegate& onSuccess, const class FScriptDelegate& onFailure, class UObject* customData);
		class UPlayFabAdminAPI* DeletePlayer(const struct FAdminDeletePlayerRequest& Request, const class FScriptDelegate& onSuccess, const class FScriptDelegate& onFailure, class UObject* customData);
		class UPlayFabAdminAPI* DeleteOpenIdConnection(const struct FAdminDeleteOpenIdConnectionRequest& Request, const class FScriptDelegate& onSuccess, const class FScriptDelegate& onFailure, class UObject* customData);
		class UPlayFabAdminAPI* DeleteMasterPlayerAccount(const struct FAdminDeleteMasterPlayerAccountRequest& Request, const class FScriptDelegate& onSuccess, const class FScriptDelegate& onFailure, class UObject* customData);
		class UPlayFabAdminAPI* DeleteContent(const struct FAdminDeleteContentRequest& Request, const class FScriptDelegate& onSuccess, const class FScriptDelegate& onFailure, class UObject* customData);
		void DelegateOnSuccessUpdateUserTitleDisplayName__DelegateSignature(const struct FAdminUpdateUserTitleDisplayNameResult& Result, class UObject* customData);
		void DelegateOnSuccessUpdateUserReadOnlyData__DelegateSignature(const struct FAdminUpdateUserDataResult& Result, class UObject* customData);
		void DelegateOnSuccessUpdateUserPublisherReadOnlyData__DelegateSignature(const struct FAdminUpdateUserDataResult& Result, class UObject* customData);
		void DelegateOnSuccessUpdateUserPublisherInternalData__DelegateSignature(const struct FAdminUpdateUserDataResult& Result, class UObject* customData);
		void DelegateOnSuccessUpdateUserPublisherData__DelegateSignature(const struct FAdminUpdateUserDataResult& Result, class UObject* customData);
		void DelegateOnSuccessUpdateUserInternalData__DelegateSignature(const struct FAdminUpdateUserDataResult& Result, class UObject* customData);
		void DelegateOnSuccessUpdateUserData__DelegateSignature(const struct FAdminUpdateUserDataResult& Result, class UObject* customData);
		void DelegateOnSuccessUpdateTask__DelegateSignature(const struct FAdminEmptyResponse& Result, class UObject* customData);
		void DelegateOnSuccessUpdateStoreItems__DelegateSignature(const struct FAdminUpdateStoreItemsResult& Result, class UObject* customData);
		void DelegateOnSuccessUpdateSegment__DelegateSignature(const struct FAdminUpdateSegmentResponse& Result, class UObject* customData);
		void DelegateOnSuccessUpdateRandomResultTables__DelegateSignature(const struct FAdminUpdateRandomResultTablesResult& Result, class UObject* customData);
		void DelegateOnSuccessUpdatePolicy__DelegateSignature(const struct FAdminUpdatePolicyResponse& Result, class UObject* customData);
		void DelegateOnSuccessUpdatePlayerStatisticDefinition__DelegateSignature(const struct FAdminUpdatePlayerStatisticDefinitionResult& Result, class UObject* customData);
		void DelegateOnSuccessUpdatePlayerSharedSecret__DelegateSignature(const struct FAdminUpdatePlayerSharedSecretResult& Result, class UObject* customData);
		void DelegateOnSuccessUpdateOpenIdConnection__DelegateSignature(const struct FAdminEmptyResponse& Result, class UObject* customData);
		void DelegateOnSuccessUpdateCloudScript__DelegateSignature(const struct FAdminUpdateCloudScriptResult& Result, class UObject* customData);
		void DelegateOnSuccessUpdateCatalogItems__DelegateSignature(const struct FAdminUpdateCatalogItemsResult& Result, class UObject* customData);
		void DelegateOnSuccessUpdateBans__DelegateSignature(const struct FAdminUpdateBansResult& Result, class UObject* customData);
		void DelegateOnSuccessSubtractUserVirtualCurrency__DelegateSignature(const struct FAdminModifyUserVirtualCurrencyResult& Result, class UObject* customData);
		void DelegateOnSuccessSetupPushNotification__DelegateSignature(const struct FAdminSetupPushNotificationResult& Result, class UObject* customData);
		void DelegateOnSuccessSetTitleInternalData__DelegateSignature(const struct FAdminSetTitleDataResult& Result, class UObject* customData);
		void DelegateOnSuccessSetTitleDataAndOverrides__DelegateSignature(const struct FAdminSetTitleDataAndOverridesResult& Result, class UObject* customData);
		void DelegateOnSuccessSetTitleData__DelegateSignature(const struct FAdminSetTitleDataResult& Result, class UObject* customData);
		void DelegateOnSuccessSetStoreItems__DelegateSignature(const struct FAdminUpdateStoreItemsResult& Result, class UObject* customData);
		void DelegateOnSuccessSetPublisherData__DelegateSignature(const struct FAdminSetPublisherDataResult& Result, class UObject* customData);
		void DelegateOnSuccessSetPublishedRevision__DelegateSignature(const struct FAdminSetPublishedRevisionResult& Result, class UObject* customData);
		void DelegateOnSuccessSetPlayerSecret__DelegateSignature(const struct FAdminSetPlayerSecretResult& Result, class UObject* customData);
		void DelegateOnSuccessSetCatalogItems__DelegateSignature(const struct FAdminUpdateCatalogItemsResult& Result, class UObject* customData);
		void DelegateOnSuccessSendAccountRecoveryEmail__DelegateSignature(const struct FAdminSendAccountRecoveryEmailResult& Result, class UObject* customData);
		void DelegateOnSuccessRunTask__DelegateSignature(const struct FAdminRunTaskResult& Result, class UObject* customData);
		void DelegateOnSuccessRevokeInventoryItems__DelegateSignature(const struct FAdminRevokeInventoryItemsResult& Result, class UObject* customData);
		void DelegateOnSuccessRevokeInventoryItem__DelegateSignature(const struct FAdminRevokeInventoryResult& Result, class UObject* customData);
		void DelegateOnSuccessRevokeBans__DelegateSignature(const struct FAdminRevokeBansResult& Result, class UObject* customData);
		void DelegateOnSuccessRevokeAllBansForUser__DelegateSignature(const struct FAdminRevokeAllBansForUserResult& Result, class UObject* customData);
		void DelegateOnSuccessResolvePurchaseDispute__DelegateSignature(const struct FAdminResolvePurchaseDisputeResponse& Result, class UObject* customData);
		void DelegateOnSuccessResetUserStatistics__DelegateSignature(const struct FAdminResetUserStatisticsResult& Result, class UObject* customData);
		void DelegateOnSuccessResetPassword__DelegateSignature(const struct FAdminResetPasswordResult& Result, class UObject* customData);
		void DelegateOnSuccessResetCharacterStatistics__DelegateSignature(const struct FAdminResetCharacterStatisticsResult& Result, class UObject* customData);
		void DelegateOnSuccessRemoveVirtualCurrencyTypes__DelegateSignature(const struct FAdminBlankResult& Result, class UObject* customData);
		void DelegateOnSuccessRemoveServerBuild__DelegateSignature(const struct FAdminRemoveServerBuildResult& Result, class UObject* customData);
		void DelegateOnSuccessRemovePlayerTag__DelegateSignature(const struct FAdminRemovePlayerTagResult& Result, class UObject* customData);
		void DelegateOnSuccessRefundPurchase__DelegateSignature(const struct FAdminRefundPurchaseResponse& Result, class UObject* customData);
		void DelegateOnSuccessModifyServerBuild__DelegateSignature(const struct FAdminModifyServerBuildResult& Result, class UObject* customData);
		void DelegateOnSuccessModifyMatchmakerGameModes__DelegateSignature(const struct FAdminModifyMatchmakerGameModesResult& Result, class UObject* customData);
		void DelegateOnSuccessListVirtualCurrencyTypes__DelegateSignature(const struct FAdminListVirtualCurrencyTypesResult& Result, class UObject* customData);
		void DelegateOnSuccessListServerBuilds__DelegateSignature(const struct FAdminListBuildsResult& Result, class UObject* customData);
		void DelegateOnSuccessListOpenIdConnection__DelegateSignature(const struct FAdminListOpenIdConnectionResponse& Result, class UObject* customData);
		void DelegateOnSuccessIncrementPlayerStatisticVersion__DelegateSignature(const struct FAdminIncrementPlayerStatisticVersionResult& Result, class UObject* customData);
		void DelegateOnSuccessIncrementLimitedEditionItemAvailability__DelegateSignature(const struct FAdminIncrementLimitedEditionItemAvailabilityResult& Result, class UObject* customData);
		void DelegateOnSuccessGrantItemsToUsers__DelegateSignature(const struct FAdminGrantItemsToUsersResult& Result, class UObject* customData);
		void DelegateOnSuccessGetUserReadOnlyData__DelegateSignature(const struct FAdminGetUserDataResult& Result, class UObject* customData);
		void DelegateOnSuccessGetUserPublisherReadOnlyData__DelegateSignature(const struct FAdminGetUserDataResult& Result, class UObject* customData);
		void DelegateOnSuccessGetUserPublisherInternalData__DelegateSignature(const struct FAdminGetUserDataResult& Result, class UObject* customData);
		void DelegateOnSuccessGetUserPublisherData__DelegateSignature(const struct FAdminGetUserDataResult& Result, class UObject* customData);
		void DelegateOnSuccessGetUserInventory__DelegateSignature(const struct FAdminGetUserInventoryResult& Result, class UObject* customData);
		void DelegateOnSuccessGetUserInternalData__DelegateSignature(const struct FAdminGetUserDataResult& Result, class UObject* customData);
		void DelegateOnSuccessGetUserData__DelegateSignature(const struct FAdminGetUserDataResult& Result, class UObject* customData);
		void DelegateOnSuccessGetUserBans__DelegateSignature(const struct FAdminGetUserBansResult& Result, class UObject* customData);
		void DelegateOnSuccessGetUserAccountInfo__DelegateSignature(const struct FAdminLookupUserAccountInfoResult& Result, class UObject* customData);
		void DelegateOnSuccessGetTitleInternalData__DelegateSignature(const struct FAdminGetTitleDataResult& Result, class UObject* customData);
		void DelegateOnSuccessGetTitleData__DelegateSignature(const struct FAdminGetTitleDataResult& Result, class UObject* customData);
		void DelegateOnSuccessGetTasks__DelegateSignature(const struct FAdminGetTasksResult& Result, class UObject* customData);
		void DelegateOnSuccessGetTaskInstances__DelegateSignature(const struct FAdminGetTaskInstancesResult& Result, class UObject* customData);
		void DelegateOnSuccessGetStoreItems__DelegateSignature(const struct FAdminGetStoreItemsResult& Result, class UObject* customData);
		void DelegateOnSuccessGetServerBuildUploadUrl__DelegateSignature(const struct FAdminGetServerBuildUploadURLResult& Result, class UObject* customData);
		void DelegateOnSuccessGetServerBuildInfo__DelegateSignature(const struct FAdminGetServerBuildInfoResult& Result, class UObject* customData);
		void DelegateOnSuccessGetSegments__DelegateSignature(const struct FAdminGetSegmentsResponse& Result, class UObject* customData);
		void DelegateOnSuccessGetRandomResultTables__DelegateSignature(const struct FAdminGetRandomResultTablesResult& Result, class UObject* customData);
		void DelegateOnSuccessGetPublisherData__DelegateSignature(const struct FAdminGetPublisherDataResult& Result, class UObject* customData);
		void DelegateOnSuccessGetPolicy__DelegateSignature(const struct FAdminGetPolicyResponse& Result, class UObject* customData);
		void DelegateOnSuccessGetPlayerTags__DelegateSignature(const struct FAdminGetPlayerTagsResult& Result, class UObject* customData);
		void DelegateOnSuccessGetPlayerStatisticVersions__DelegateSignature(const struct FAdminGetPlayerStatisticVersionsResult& Result, class UObject* customData);
		void DelegateOnSuccessGetPlayerStatisticDefinitions__DelegateSignature(const struct FAdminGetPlayerStatisticDefinitionsResult& Result, class UObject* customData);
		void DelegateOnSuccessGetPlayersInSegment__DelegateSignature(const struct FAdminGetPlayersInSegmentResult& Result, class UObject* customData);
		void DelegateOnSuccessGetPlayerSharedSecrets__DelegateSignature(const struct FAdminGetPlayerSharedSecretsResult& Result, class UObject* customData);
		void DelegateOnSuccessGetPlayerSegments__DelegateSignature(const struct FAdminGetPlayerSegmentsResult& Result, class UObject* customData);
		void DelegateOnSuccessGetPlayerProfile__DelegateSignature(const struct FAdminGetPlayerProfileResult& Result, class UObject* customData);
		void DelegateOnSuccessGetPlayerIdFromAuthToken__DelegateSignature(const struct FAdminGetPlayerIdFromAuthTokenResult& Result, class UObject* customData);
		void DelegateOnSuccessGetPlayedTitleList__DelegateSignature(const struct FAdminGetPlayedTitleListResult& Result, class UObject* customData);
		void DelegateOnSuccessGetMatchmakerGameModes__DelegateSignature(const struct FAdminGetMatchmakerGameModesResult& Result, class UObject* customData);
		void DelegateOnSuccessGetMatchmakerGameInfo__DelegateSignature(const struct FAdminGetMatchmakerGameInfoResult& Result, class UObject* customData);
		void DelegateOnSuccessGetDataReport__DelegateSignature(const struct FAdminGetDataReportResult& Result, class UObject* customData);
		void DelegateOnSuccessGetContentUploadUrl__DelegateSignature(const struct FAdminGetContentUploadUrlResult& Result, class UObject* customData);
		void DelegateOnSuccessGetContentList__DelegateSignature(const struct FAdminGetContentListResult& Result, class UObject* customData);
		void DelegateOnSuccessGetCloudScriptVersions__DelegateSignature(const struct FAdminGetCloudScriptVersionsResult& Result, class UObject* customData);
		void DelegateOnSuccessGetCloudScriptTaskInstance__DelegateSignature(const struct FAdminGetCloudScriptTaskInstanceResult& Result, class UObject* customData);
		void DelegateOnSuccessGetCloudScriptRevision__DelegateSignature(const struct FAdminGetCloudScriptRevisionResult& Result, class UObject* customData);
		void DelegateOnSuccessGetCatalogItems__DelegateSignature(const struct FAdminGetCatalogItemsResult& Result, class UObject* customData);
		void DelegateOnSuccessGetAllSegments__DelegateSignature(const struct FAdminGetAllSegmentsResult& Result, class UObject* customData);
		void DelegateOnSuccessGetActionsOnPlayersInSegmentTaskInstance__DelegateSignature(const struct FAdminGetActionsOnPlayersInSegmentTaskInstanceResult& Result, class UObject* customData);
		void DelegateOnSuccessExportMasterPlayerData__DelegateSignature(const struct FAdminExportMasterPlayerDataResult& Result, class UObject* customData);
		void DelegateOnSuccessDeleteTitleDataOverride__DelegateSignature(const struct FAdminDeleteTitleDataOverrideResult& Result, class UObject* customData);
		void DelegateOnSuccessDeleteTitle__DelegateSignature(const struct FAdminDeleteTitleResult& Result, class UObject* customData);
		void DelegateOnSuccessDeleteTask__DelegateSignature(const struct FAdminEmptyResponse& Result, class UObject* customData);
		void DelegateOnSuccessDeleteStore__DelegateSignature(const struct FAdminDeleteStoreResult& Result, class UObject* customData);
		void DelegateOnSuccessDeleteSegment__DelegateSignature(const struct FAdminDeleteSegmentsResponse& Result, class UObject* customData);
		void DelegateOnSuccessDeletePlayerSharedSecret__DelegateSignature(const struct FAdminDeletePlayerSharedSecretResult& Result, class UObject* customData);
		void DelegateOnSuccessDeletePlayer__DelegateSignature(const struct FAdminDeletePlayerResult& Result, class UObject* customData);
		void DelegateOnSuccessDeleteOpenIdConnection__DelegateSignature(const struct FAdminEmptyResponse& Result, class UObject* customData);
		void DelegateOnSuccessDeleteMasterPlayerAccount__DelegateSignature(const struct FAdminDeleteMasterPlayerAccountResult& Result, class UObject* customData);
		void DelegateOnSuccessDeleteContent__DelegateSignature(const struct FAdminBlankResult& Result, class UObject* customData);
		void DelegateOnSuccessCreateSegment__DelegateSignature(const struct FAdminCreateSegmentResponse& Result, class UObject* customData);
		void DelegateOnSuccessCreatePlayerStatisticDefinition__DelegateSignature(const struct FAdminCreatePlayerStatisticDefinitionResult& Result, class UObject* customData);
		void DelegateOnSuccessCreatePlayerSharedSecret__DelegateSignature(const struct FAdminCreatePlayerSharedSecretResult& Result, class UObject* customData);
		void DelegateOnSuccessCreateOpenIdConnection__DelegateSignature(const struct FAdminEmptyResponse& Result, class UObject* customData);
		void DelegateOnSuccessCreateInsightsScheduledScalingTask__DelegateSignature(const struct FAdminCreateTaskResult& Result, class UObject* customData);
		void DelegateOnSuccessCreateCloudScriptTask__DelegateSignature(const struct FAdminCreateTaskResult& Result, class UObject* customData);
		void DelegateOnSuccessCreateActionsOnPlayersInSegmentTask__DelegateSignature(const struct FAdminCreateTaskResult& Result, class UObject* customData);
		void DelegateOnSuccessCheckLimitedEditionItemAvailability__DelegateSignature(const struct FAdminCheckLimitedEditionItemAvailabilityResult& Result, class UObject* customData);
		void DelegateOnSuccessBanUsers__DelegateSignature(const struct FAdminBanUsersResult& Result, class UObject* customData);
		void DelegateOnSuccessAddVirtualCurrencyTypes__DelegateSignature(const struct FAdminBlankResult& Result, class UObject* customData);
		void DelegateOnSuccessAddUserVirtualCurrency__DelegateSignature(const struct FAdminModifyUserVirtualCurrencyResult& Result, class UObject* customData);
		void DelegateOnSuccessAddServerBuild__DelegateSignature(const struct FAdminAddServerBuildResult& Result, class UObject* customData);
		void DelegateOnSuccessAddPlayerTag__DelegateSignature(const struct FAdminAddPlayerTagResult& Result, class UObject* customData);
		void DelegateOnSuccessAddNews__DelegateSignature(const struct FAdminAddNewsResult& Result, class UObject* customData);
		void DelegateOnSuccessAddLocalizedNews__DelegateSignature(const struct FAdminAddLocalizedNewsResult& Result, class UObject* customData);
		void DelegateOnSuccessAbortTaskInstance__DelegateSignature(const struct FAdminEmptyResponse& Result, class UObject* customData);
		void DelegateOnFailurePlayFabError__DelegateSignature(const struct FPlayFabError& Error, class UObject* customData);
		class UPlayFabAdminAPI* CreateSegment(const struct FAdminCreateSegmentRequest& Request, const class FScriptDelegate& onSuccess, const class FScriptDelegate& onFailure, class UObject* customData);
		class UPlayFabAdminAPI* CreatePlayerStatisticDefinition(const struct FAdminCreatePlayerStatisticDefinitionRequest& Request, const class FScriptDelegate& onSuccess, const class FScriptDelegate& onFailure, class UObject* customData);
		class UPlayFabAdminAPI* CreatePlayerSharedSecret(const struct FAdminCreatePlayerSharedSecretRequest& Request, const class FScriptDelegate& onSuccess, const class FScriptDelegate& onFailure, class UObject* customData);
		class UPlayFabAdminAPI* CreateOpenIdConnection(const struct FAdminCreateOpenIdConnectionRequest& Request, const class FScriptDelegate& onSuccess, const class FScriptDelegate& onFailure, class UObject* customData);
		class UPlayFabAdminAPI* CreateInsightsScheduledScalingTask(const struct FAdminCreateInsightsScheduledScalingTaskRequest& Request, const class FScriptDelegate& onSuccess, const class FScriptDelegate& onFailure, class UObject* customData);
		class UPlayFabAdminAPI* CreateCloudScriptTask(const struct FAdminCreateCloudScriptTaskRequest& Request, const class FScriptDelegate& onSuccess, const class FScriptDelegate& onFailure, class UObject* customData);
		class UPlayFabAdminAPI* CreateActionsOnPlayersInSegmentTask(const struct FAdminCreateActionsOnPlayerSegmentTaskRequest& Request, const class FScriptDelegate& onSuccess, const class FScriptDelegate& onFailure, class UObject* customData);
		class UPlayFabAdminAPI* CheckLimitedEditionItemAvailability(const struct FAdminCheckLimitedEditionItemAvailabilityRequest& Request, const class FScriptDelegate& onSuccess, const class FScriptDelegate& onFailure, class UObject* customData);
		class UPlayFabAdminAPI* BanUsers(const struct FAdminBanUsersRequest& Request, const class FScriptDelegate& onSuccess, const class FScriptDelegate& onFailure, class UObject* customData);
		class UPlayFabAdminAPI* AddVirtualCurrencyTypes(const struct FAdminAddVirtualCurrencyTypesRequest& Request, const class FScriptDelegate& onSuccess, const class FScriptDelegate& onFailure, class UObject* customData);
		class UPlayFabAdminAPI* AddUserVirtualCurrency(const struct FAdminAddUserVirtualCurrencyRequest& Request, const class FScriptDelegate& onSuccess, const class FScriptDelegate& onFailure, class UObject* customData);
		class UPlayFabAdminAPI* AddServerBuild(const struct FAdminAddServerBuildRequest& Request, const class FScriptDelegate& onSuccess, const class FScriptDelegate& onFailure, class UObject* customData);
		class UPlayFabAdminAPI* AddPlayerTag(const struct FAdminAddPlayerTagRequest& Request, const class FScriptDelegate& onSuccess, const class FScriptDelegate& onFailure, class UObject* customData);
		class UPlayFabAdminAPI* AddNews(const struct FAdminAddNewsRequest& Request, const class FScriptDelegate& onSuccess, const class FScriptDelegate& onFailure, class UObject* customData);
		class UPlayFabAdminAPI* AddLocalizedNews(const struct FAdminAddLocalizedNewsRequest& Request, const class FScriptDelegate& onSuccess, const class FScriptDelegate& onFailure, class UObject* customData);
		class UPlayFabAdminAPI* AbortTaskInstance(const struct FAdminAbortTaskInstanceRequest& Request, const class FScriptDelegate& onSuccess, const class FScriptDelegate& onFailure, class UObject* customData);
		static UClass* StaticClass();
	};

	/**
	 * Class PlayFab.PlayFabAdminModelDecoder
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UPlayFabAdminModelDecoder : public UBlueprintFunctionLibrary
	{
	public:
		struct FAdminUpdateUserTitleDisplayNameResult decodeUpdateUserTitleDisplayNameResultResponse(class UPlayFabJsonObject* response);
		struct FAdminUpdateUserDataResult decodeUpdateUserDataResultResponse(class UPlayFabJsonObject* response);
		struct FAdminUpdateStoreItemsResult decodeUpdateStoreItemsResultResponse(class UPlayFabJsonObject* response);
		struct FAdminUpdateSegmentResponse decodeUpdateSegmentResponseResponse(class UPlayFabJsonObject* response);
		struct FAdminUpdateRandomResultTablesResult decodeUpdateRandomResultTablesResultResponse(class UPlayFabJsonObject* response);
		struct FAdminUpdatePolicyResponse decodeUpdatePolicyResponseResponse(class UPlayFabJsonObject* response);
		struct FAdminUpdatePlayerStatisticDefinitionResult decodeUpdatePlayerStatisticDefinitionResultResponse(class UPlayFabJsonObject* response);
		struct FAdminUpdatePlayerSharedSecretResult decodeUpdatePlayerSharedSecretResultResponse(class UPlayFabJsonObject* response);
		struct FAdminUpdateCloudScriptResult decodeUpdateCloudScriptResultResponse(class UPlayFabJsonObject* response);
		struct FAdminUpdateCatalogItemsResult decodeUpdateCatalogItemsResultResponse(class UPlayFabJsonObject* response);
		struct FAdminUpdateBansResult decodeUpdateBansResultResponse(class UPlayFabJsonObject* response);
		struct FAdminSetupPushNotificationResult decodeSetupPushNotificationResultResponse(class UPlayFabJsonObject* response);
		struct FAdminSetTitleDataResult decodeSetTitleDataResultResponse(class UPlayFabJsonObject* response);
		struct FAdminSetTitleDataAndOverridesResult decodeSetTitleDataAndOverridesResultResponse(class UPlayFabJsonObject* response);
		struct FAdminSetPublisherDataResult decodeSetPublisherDataResultResponse(class UPlayFabJsonObject* response);
		struct FAdminSetPublishedRevisionResult decodeSetPublishedRevisionResultResponse(class UPlayFabJsonObject* response);
		struct FAdminSetPlayerSecretResult decodeSetPlayerSecretResultResponse(class UPlayFabJsonObject* response);
		struct FAdminSendAccountRecoveryEmailResult decodeSendAccountRecoveryEmailResultResponse(class UPlayFabJsonObject* response);
		struct FAdminRunTaskResult decodeRunTaskResultResponse(class UPlayFabJsonObject* response);
		struct FAdminRevokeInventoryResult decodeRevokeInventoryResultResponse(class UPlayFabJsonObject* response);
		struct FAdminRevokeInventoryItemsResult decodeRevokeInventoryItemsResultResponse(class UPlayFabJsonObject* response);
		struct FAdminRevokeBansResult decodeRevokeBansResultResponse(class UPlayFabJsonObject* response);
		struct FAdminRevokeAllBansForUserResult decodeRevokeAllBansForUserResultResponse(class UPlayFabJsonObject* response);
		struct FAdminResolvePurchaseDisputeResponse decodeResolvePurchaseDisputeResponseResponse(class UPlayFabJsonObject* response);
		struct FAdminResetUserStatisticsResult decodeResetUserStatisticsResultResponse(class UPlayFabJsonObject* response);
		struct FAdminResetPasswordResult decodeResetPasswordResultResponse(class UPlayFabJsonObject* response);
		struct FAdminResetCharacterStatisticsResult decodeResetCharacterStatisticsResultResponse(class UPlayFabJsonObject* response);
		struct FAdminRemoveServerBuildResult decodeRemoveServerBuildResultResponse(class UPlayFabJsonObject* response);
		struct FAdminRemovePlayerTagResult decodeRemovePlayerTagResultResponse(class UPlayFabJsonObject* response);
		struct FAdminRefundPurchaseResponse decodeRefundPurchaseResponseResponse(class UPlayFabJsonObject* response);
		struct FAdminModifyUserVirtualCurrencyResult decodeModifyUserVirtualCurrencyResultResponse(class UPlayFabJsonObject* response);
		struct FAdminModifyServerBuildResult decodeModifyServerBuildResultResponse(class UPlayFabJsonObject* response);
		struct FAdminModifyMatchmakerGameModesResult decodeModifyMatchmakerGameModesResultResponse(class UPlayFabJsonObject* response);
		struct FAdminLookupUserAccountInfoResult decodeLookupUserAccountInfoResultResponse(class UPlayFabJsonObject* response);
		struct FAdminListVirtualCurrencyTypesResult decodeListVirtualCurrencyTypesResultResponse(class UPlayFabJsonObject* response);
		struct FAdminListOpenIdConnectionResponse decodeListOpenIdConnectionResponseResponse(class UPlayFabJsonObject* response);
		struct FAdminListBuildsResult decodeListBuildsResultResponse(class UPlayFabJsonObject* response);
		struct FAdminIncrementPlayerStatisticVersionResult decodeIncrementPlayerStatisticVersionResultResponse(class UPlayFabJsonObject* response);
		struct FAdminIncrementLimitedEditionItemAvailabilityResult decodeIncrementLimitedEditionItemAvailabilityResultResponse(class UPlayFabJsonObject* response);
		struct FAdminGrantItemsToUsersResult decodeGrantItemsToUsersResultResponse(class UPlayFabJsonObject* response);
		struct FAdminGetUserInventoryResult decodeGetUserInventoryResultResponse(class UPlayFabJsonObject* response);
		struct FAdminGetUserDataResult decodeGetUserDataResultResponse(class UPlayFabJsonObject* response);
		struct FAdminGetUserBansResult decodeGetUserBansResultResponse(class UPlayFabJsonObject* response);
		struct FAdminGetTitleDataResult decodeGetTitleDataResultResponse(class UPlayFabJsonObject* response);
		struct FAdminGetTasksResult decodeGetTasksResultResponse(class UPlayFabJsonObject* response);
		struct FAdminGetTaskInstancesResult decodeGetTaskInstancesResultResponse(class UPlayFabJsonObject* response);
		struct FAdminGetStoreItemsResult decodeGetStoreItemsResultResponse(class UPlayFabJsonObject* response);
		struct FAdminGetServerBuildUploadURLResult decodeGetServerBuildUploadURLResultResponse(class UPlayFabJsonObject* response);
		struct FAdminGetServerBuildInfoResult decodeGetServerBuildInfoResultResponse(class UPlayFabJsonObject* response);
		struct FAdminGetSegmentsResponse decodeGetSegmentsResponseResponse(class UPlayFabJsonObject* response);
		struct FAdminGetRandomResultTablesResult decodeGetRandomResultTablesResultResponse(class UPlayFabJsonObject* response);
		struct FAdminGetPublisherDataResult decodeGetPublisherDataResultResponse(class UPlayFabJsonObject* response);
		struct FAdminGetPolicyResponse decodeGetPolicyResponseResponse(class UPlayFabJsonObject* response);
		struct FAdminGetPlayerTagsResult decodeGetPlayerTagsResultResponse(class UPlayFabJsonObject* response);
		struct FAdminGetPlayerStatisticVersionsResult decodeGetPlayerStatisticVersionsResultResponse(class UPlayFabJsonObject* response);
		struct FAdminGetPlayerStatisticDefinitionsResult decodeGetPlayerStatisticDefinitionsResultResponse(class UPlayFabJsonObject* response);
		struct FAdminGetPlayersInSegmentResult decodeGetPlayersInSegmentResultResponse(class UPlayFabJsonObject* response);
		struct FAdminGetPlayerSharedSecretsResult decodeGetPlayerSharedSecretsResultResponse(class UPlayFabJsonObject* response);
		struct FAdminGetPlayerSegmentsResult decodeGetPlayerSegmentsResultResponse(class UPlayFabJsonObject* response);
		struct FAdminGetPlayerProfileResult decodeGetPlayerProfileResultResponse(class UPlayFabJsonObject* response);
		struct FAdminGetPlayerIdFromAuthTokenResult decodeGetPlayerIdFromAuthTokenResultResponse(class UPlayFabJsonObject* response);
		struct FAdminGetPlayedTitleListResult decodeGetPlayedTitleListResultResponse(class UPlayFabJsonObject* response);
		struct FAdminGetMatchmakerGameModesResult decodeGetMatchmakerGameModesResultResponse(class UPlayFabJsonObject* response);
		struct FAdminGetMatchmakerGameInfoResult decodeGetMatchmakerGameInfoResultResponse(class UPlayFabJsonObject* response);
		struct FAdminGetDataReportResult decodeGetDataReportResultResponse(class UPlayFabJsonObject* response);
		struct FAdminGetContentUploadUrlResult decodeGetContentUploadUrlResultResponse(class UPlayFabJsonObject* response);
		struct FAdminGetContentListResult decodeGetContentListResultResponse(class UPlayFabJsonObject* response);
		struct FAdminGetCloudScriptVersionsResult decodeGetCloudScriptVersionsResultResponse(class UPlayFabJsonObject* response);
		struct FAdminGetCloudScriptTaskInstanceResult decodeGetCloudScriptTaskInstanceResultResponse(class UPlayFabJsonObject* response);
		struct FAdminGetCloudScriptRevisionResult decodeGetCloudScriptRevisionResultResponse(class UPlayFabJsonObject* response);
		struct FAdminGetCatalogItemsResult decodeGetCatalogItemsResultResponse(class UPlayFabJsonObject* response);
		struct FAdminGetAllSegmentsResult decodeGetAllSegmentsResultResponse(class UPlayFabJsonObject* response);
		struct FAdminGetActionsOnPlayersInSegmentTaskInstanceResult decodeGetActionsOnPlayersInSegmentTaskInstanceResultResponse(class UPlayFabJsonObject* response);
		struct FAdminExportMasterPlayerDataResult decodeExportMasterPlayerDataResultResponse(class UPlayFabJsonObject* response);
		struct FAdminEmptyResponse decodeEmptyResponseResponse(class UPlayFabJsonObject* response);
		struct FAdminDeleteTitleResult decodeDeleteTitleResultResponse(class UPlayFabJsonObject* response);
		struct FAdminDeleteTitleDataOverrideResult decodeDeleteTitleDataOverrideResultResponse(class UPlayFabJsonObject* response);
		struct FAdminDeleteStoreResult decodeDeleteStoreResultResponse(class UPlayFabJsonObject* response);
		struct FAdminDeleteSegmentsResponse decodeDeleteSegmentsResponseResponse(class UPlayFabJsonObject* response);
		struct FAdminDeletePlayerSharedSecretResult decodeDeletePlayerSharedSecretResultResponse(class UPlayFabJsonObject* response);
		struct FAdminDeletePlayerResult decodeDeletePlayerResultResponse(class UPlayFabJsonObject* response);
		struct FAdminDeleteMasterPlayerAccountResult decodeDeleteMasterPlayerAccountResultResponse(class UPlayFabJsonObject* response);
		struct FAdminCreateTaskResult decodeCreateTaskResultResponse(class UPlayFabJsonObject* response);
		struct FAdminCreateSegmentResponse decodeCreateSegmentResponseResponse(class UPlayFabJsonObject* response);
		struct FAdminCreatePlayerStatisticDefinitionResult decodeCreatePlayerStatisticDefinitionResultResponse(class UPlayFabJsonObject* response);
		struct FAdminCreatePlayerSharedSecretResult decodeCreatePlayerSharedSecretResultResponse(class UPlayFabJsonObject* response);
		struct FAdminCheckLimitedEditionItemAvailabilityResult decodeCheckLimitedEditionItemAvailabilityResultResponse(class UPlayFabJsonObject* response);
		struct FAdminBlankResult decodeBlankResultResponse(class UPlayFabJsonObject* response);
		struct FAdminBanUsersResult decodeBanUsersResultResponse(class UPlayFabJsonObject* response);
		struct FAdminAddServerBuildResult decodeAddServerBuildResultResponse(class UPlayFabJsonObject* response);
		struct FAdminAddPlayerTagResult decodeAddPlayerTagResultResponse(class UPlayFabJsonObject* response);
		struct FAdminAddNewsResult decodeAddNewsResultResponse(class UPlayFabJsonObject* response);
		struct FAdminAddLocalizedNewsResult decodeAddLocalizedNewsResultResponse(class UPlayFabJsonObject* response);
		static UClass* StaticClass();
	};

	/**
	 * Class PlayFab.PlayFabAuthenticationAPI
	 * Size -> 0x00E0 (FullSize[0x0110] - InheritedSize[0x0030])
	 */
	class UPlayFabAuthenticationAPI : public UOnlineBlueprintCallProxyBase
	{
	public:
		class FScriptMulticastDelegate                             OnPlayFabResponse;                                       // 0x0030(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_JX26[0x68];                                  // 0x0040(0x0068) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UPlayFabAuthenticationContext*                       CallAuthenticationContext;                               // 0x00A8(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UPlayFabJsonObject*                                  RequestJsonObj;                                          // 0x00B0(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UPlayFabJsonObject*                                  ResponseJsonObj;                                         // 0x00B8(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_SQGY[0x50];                                  // 0x00C0(0x0050) MISSED OFFSET (PADDING)

	public:
		class UPlayFabAuthenticationAPI* ValidateEntityToken(const struct FAuthenticationValidateEntityTokenRequest& Request, const class FScriptDelegate& onSuccess, const class FScriptDelegate& onFailure, class UObject* customData);
		void HelperValidateEntityToken(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
		void HelperGetEntityToken(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
		class UPlayFabAuthenticationAPI* GetEntityToken(const struct FAuthenticationGetEntityTokenRequest& Request, const class FScriptDelegate& onSuccess, const class FScriptDelegate& onFailure, class UObject* customData);
		void DelegateOnSuccessValidateEntityToken__DelegateSignature(const struct FAuthenticationValidateEntityTokenResponse& Result, class UObject* customData);
		void DelegateOnSuccessGetEntityToken__DelegateSignature(const struct FAuthenticationGetEntityTokenResponse& Result, class UObject* customData);
		void DelegateOnFailurePlayFabError__DelegateSignature(const struct FPlayFabError& Error, class UObject* customData);
		static UClass* StaticClass();
	};

	/**
	 * Class PlayFab.PlayFabAuthenticationModelDecoder
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UPlayFabAuthenticationModelDecoder : public UBlueprintFunctionLibrary
	{
	public:
		struct FAuthenticationValidateEntityTokenResponse decodeValidateEntityTokenResponseResponse(class UPlayFabJsonObject* response);
		struct FAuthenticationGetEntityTokenResponse decodeGetEntityTokenResponseResponse(class UPlayFabJsonObject* response);
		static UClass* StaticClass();
	};

	/**
	 * Class PlayFab.PlayFabClientAPI
	 * Size -> 0x0B30 (FullSize[0x0B60] - InheritedSize[0x0030])
	 */
	class UPlayFabClientAPI : public UOnlineBlueprintCallProxyBase
	{
	public:
		class FScriptMulticastDelegate                             OnPlayFabResponse;                                       // 0x0030(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_HCH4[0xAB8];                                 // 0x0040(0x0AB8) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UPlayFabAuthenticationContext*                       CallAuthenticationContext;                               // 0x0AF8(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UPlayFabJsonObject*                                  RequestJsonObj;                                          // 0x0B00(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UPlayFabJsonObject*                                  ResponseJsonObj;                                         // 0x0B08(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_HIUO[0x50];                                  // 0x0B10(0x0050) MISSED OFFSET (PADDING)

	public:
		class UPlayFabClientAPI* WriteTitleEvent(const struct FClientWriteTitleEventRequest& Request, const class FScriptDelegate& onSuccess, const class FScriptDelegate& onFailure, class UObject* customData);
		class UPlayFabClientAPI* WritePlayerEvent(const struct FClientWriteClientPlayerEventRequest& Request, const class FScriptDelegate& onSuccess, const class FScriptDelegate& onFailure, class UObject* customData);
		class UPlayFabClientAPI* WriteCharacterEvent(const struct FClientWriteClientCharacterEventRequest& Request, const class FScriptDelegate& onSuccess, const class FScriptDelegate& onFailure, class UObject* customData);
		class UPlayFabClientAPI* ValidateWindowsStoreReceipt(const struct FClientValidateWindowsReceiptRequest& Request, const class FScriptDelegate& onSuccess, const class FScriptDelegate& onFailure, class UObject* customData);
		class UPlayFabClientAPI* ValidateIOSReceipt(const struct FClientValidateIOSReceiptRequest& Request, const class FScriptDelegate& onSuccess, const class FScriptDelegate& onFailure, class UObject* customData);
		class UPlayFabClientAPI* ValidateGooglePlayPurchase(const struct FClientValidateGooglePlayPurchaseRequest& Request, const class FScriptDelegate& onSuccess, const class FScriptDelegate& onFailure, class UObject* customData);
		class UPlayFabClientAPI* ValidateAmazonIAPReceipt(const struct FClientValidateAmazonReceiptRequest& Request, const class FScriptDelegate& onSuccess, const class FScriptDelegate& onFailure, class UObject* customData);
		class UPlayFabClientAPI* UpdateUserTitleDisplayName(const struct FClientUpdateUserTitleDisplayNameRequest& Request, const class FScriptDelegate& onSuccess, const class FScriptDelegate& onFailure, class UObject* customData);
		class UPlayFabClientAPI* UpdateUserPublisherData(const struct FClientUpdateUserDataRequest& Request, const class FScriptDelegate& onSuccess, const class FScriptDelegate& onFailure, class UObject* customData);
		class UPlayFabClientAPI* UpdateUserData(const struct FClientUpdateUserDataRequest& Request, const class FScriptDelegate& onSuccess, const class FScriptDelegate& onFailure, class UObject* customData);
		class UPlayFabClientAPI* UpdateSharedGroupData(const struct FClientUpdateSharedGroupDataRequest& Request, const class FScriptDelegate& onSuccess, const class FScriptDelegate& onFailure, class UObject* customData);
		class UPlayFabClientAPI* UpdatePlayerStatistics(const struct FClientUpdatePlayerStatisticsRequest& Request, const class FScriptDelegate& onSuccess, const class FScriptDelegate& onFailure, class UObject* customData);
		class UPlayFabClientAPI* UpdateCharacterStatistics(const struct FClientUpdateCharacterStatisticsRequest& Request, const class FScriptDelegate& onSuccess, const class FScriptDelegate& onFailure, class UObject* customData);
		class UPlayFabClientAPI* UpdateCharacterData(const struct FClientUpdateCharacterDataRequest& Request, const class FScriptDelegate& onSuccess, const class FScriptDelegate& onFailure, class UObject* customData);
		class UPlayFabClientAPI* UpdateAvatarUrl(const struct FClientUpdateAvatarUrlRequest& Request, const class FScriptDelegate& onSuccess, const class FScriptDelegate& onFailure, class UObject* customData);
		class UPlayFabClientAPI* UnlockContainerItem(const struct FClientUnlockContainerItemRequest& Request, const class FScriptDelegate& onSuccess, const class FScriptDelegate& onFailure, class UObject* customData);
		class UPlayFabClientAPI* UnlockContainerInstance(const struct FClientUnlockContainerInstanceRequest& Request, const class FScriptDelegate& onSuccess, const class FScriptDelegate& onFailure, class UObject* customData);
		class UPlayFabClientAPI* UnlinkXboxAccount(const struct FClientUnlinkXboxAccountRequest& Request, const class FScriptDelegate& onSuccess, const class FScriptDelegate& onFailure, class UObject* customData);
		class UPlayFabClientAPI* UnlinkWindowsHello(const struct FClientUnlinkWindowsHelloAccountRequest& Request, const class FScriptDelegate& onSuccess, const class FScriptDelegate& onFailure, class UObject* customData);
		class UPlayFabClientAPI* UnlinkTwitch(const struct FClientUnlinkTwitchAccountRequest& Request, const class FScriptDelegate& onSuccess, const class FScriptDelegate& onFailure, class UObject* customData);
		class UPlayFabClientAPI* UnlinkSteamAccount(const struct FClientUnlinkSteamAccountRequest& Request, const class FScriptDelegate& onSuccess, const class FScriptDelegate& onFailure, class UObject* customData);
		class UPlayFabClientAPI* UnlinkPSNAccount(const struct FClientUnlinkPSNAccountRequest& Request, const class FScriptDelegate& onSuccess, const class FScriptDelegate& onFailure, class UObject* customData);
		class UPlayFabClientAPI* UnlinkOpenIdConnect(const struct FClientUnlinkOpenIdConnectRequest& Request, const class FScriptDelegate& onSuccess, const class FScriptDelegate& onFailure, class UObject* customData);
		class UPlayFabClientAPI* UnlinkNintendoSwitchDeviceId(const struct FClientUnlinkNintendoSwitchDeviceIdRequest& Request, const class FScriptDelegate& onSuccess, const class FScriptDelegate& onFailure, class UObject* customData);
		class UPlayFabClientAPI* UnlinkNintendoServiceAccount(const struct FClientUnlinkNintendoServiceAccountRequest& Request, const class FScriptDelegate& onSuccess, const class FScriptDelegate& onFailure, class UObject* customData);
		class UPlayFabClientAPI* UnlinkKongregate(const struct FClientUnlinkKongregateAccountRequest& Request, const class FScriptDelegate& onSuccess, const class FScriptDelegate& onFailure, class UObject* customData);
		class UPlayFabClientAPI* UnlinkIOSDeviceID(const struct FClientUnlinkIOSDeviceIDRequest& Request, const class FScriptDelegate& onSuccess, const class FScriptDelegate& onFailure, class UObject* customData);
		class UPlayFabClientAPI* UnlinkGoogleAccount(const struct FClientUnlinkGoogleAccountRequest& Request, const class FScriptDelegate& onSuccess, const class FScriptDelegate& onFailure, class UObject* customData);
		class UPlayFabClientAPI* UnlinkGameCenterAccount(const struct FClientUnlinkGameCenterAccountRequest& Request, const class FScriptDelegate& onSuccess, const class FScriptDelegate& onFailure, class UObject* customData);
		class UPlayFabClientAPI* UnlinkFacebookInstantGamesId(const struct FClientUnlinkFacebookInstantGamesIdRequest& Request, const class FScriptDelegate& onSuccess, const class FScriptDelegate& onFailure, class UObject* customData);
		class UPlayFabClientAPI* UnlinkFacebookAccount(const struct FClientUnlinkFacebookAccountRequest& Request, const class FScriptDelegate& onSuccess, const class FScriptDelegate& onFailure, class UObject* customData);
		class UPlayFabClientAPI* UnlinkCustomID(const struct FClientUnlinkCustomIDRequest& Request, const class FScriptDelegate& onSuccess, const class FScriptDelegate& onFailure, class UObject* customData);
		class UPlayFabClientAPI* UnlinkApple(const struct FClientUnlinkAppleRequest& Request, const class FScriptDelegate& onSuccess, const class FScriptDelegate& onFailure, class UObject* customData);
		class UPlayFabClientAPI* UnlinkAndroidDeviceID(const struct FClientUnlinkAndroidDeviceIDRequest& Request, const class FScriptDelegate& onSuccess, const class FScriptDelegate& onFailure, class UObject* customData);
		class UPlayFabClientAPI* SubtractUserVirtualCurrency(const struct FClientSubtractUserVirtualCurrencyRequest& Request, const class FScriptDelegate& onSuccess, const class FScriptDelegate& onFailure, class UObject* customData);
		class UPlayFabClientAPI* StartPurchase(const struct FClientStartPurchaseRequest& Request, const class FScriptDelegate& onSuccess, const class FScriptDelegate& onFailure, class UObject* customData);
		class UPlayFabClientAPI* StartGame(const struct FClientStartGameRequest& Request, const class FScriptDelegate& onSuccess, const class FScriptDelegate& onFailure, class UObject* customData);
		class UPlayFabClientAPI* SetPlayerSecret(const struct FClientSetPlayerSecretRequest& Request, const class FScriptDelegate& onSuccess, const class FScriptDelegate& onFailure, class UObject* customData);
		class UPlayFabClientAPI* SetFriendTags(const struct FClientSetFriendTagsRequest& Request, const class FScriptDelegate& onSuccess, const class FScriptDelegate& onFailure, class UObject* customData);
		class UPlayFabClientAPI* SendAccountRecoveryEmail(const struct FClientSendAccountRecoveryEmailRequest& Request, const class FScriptDelegate& onSuccess, const class FScriptDelegate& onFailure, class UObject* customData);
		class UPlayFabClientAPI* RewardAdActivity(const struct FClientRewardAdActivityRequest& Request, const class FScriptDelegate& onSuccess, const class FScriptDelegate& onFailure, class UObject* customData);
		class UPlayFabClientAPI* RestoreIOSPurchases(const struct FClientRestoreIOSPurchasesRequest& Request, const class FScriptDelegate& onSuccess, const class FScriptDelegate& onFailure, class UObject* customData);
		class UPlayFabClientAPI* ReportPlayer(const struct FClientReportPlayerClientRequest& Request, const class FScriptDelegate& onSuccess, const class FScriptDelegate& onFailure, class UObject* customData);
		class UPlayFabClientAPI* ReportDeviceInfo(const struct FClientDeviceInfoRequest& Request, const class FScriptDelegate& onSuccess, const class FScriptDelegate& onFailure, class UObject* customData);
		class UPlayFabClientAPI* ReportAdActivity(const struct FClientReportAdActivityRequest& Request, const class FScriptDelegate& onSuccess, const class FScriptDelegate& onFailure, class UObject* customData);
		class UPlayFabClientAPI* RemoveSharedGroupMembers(const struct FClientRemoveSharedGroupMembersRequest& Request, const class FScriptDelegate& onSuccess, const class FScriptDelegate& onFailure, class UObject* customData);
		class UPlayFabClientAPI* RemoveGenericID(const struct FClientRemoveGenericIDRequest& Request, const class FScriptDelegate& onSuccess, const class FScriptDelegate& onFailure, class UObject* customData);
		class UPlayFabClientAPI* RemoveFriend(const struct FClientRemoveFriendRequest& Request, const class FScriptDelegate& onSuccess, const class FScriptDelegate& onFailure, class UObject* customData);
		class UPlayFabClientAPI* RemoveContactEmail(const struct FClientRemoveContactEmailRequest& Request, const class FScriptDelegate& onSuccess, const class FScriptDelegate& onFailure, class UObject* customData);
		class UPlayFabClientAPI* RegisterWithWindowsHello(const struct FClientRegisterWithWindowsHelloRequest& Request, const class FScriptDelegate& onSuccess, const class FScriptDelegate& onFailure, class UObject* customData);
		class UPlayFabClientAPI* RegisterPlayFabUser(const struct FClientRegisterPlayFabUserRequest& Request, const class FScriptDelegate& onSuccess, const class FScriptDelegate& onFailure, class UObject* customData);
		class UPlayFabClientAPI* RegisterForIOSPushNotification(const struct FClientRegisterForIOSPushNotificationRequest& Request, const class FScriptDelegate& onSuccess, const class FScriptDelegate& onFailure, class UObject* customData);
		class UPlayFabClientAPI* RefreshPSNAuthToken(const struct FClientRefreshPSNAuthTokenRequest& Request, const class FScriptDelegate& onSuccess, const class FScriptDelegate& onFailure, class UObject* customData);
		class UPlayFabClientAPI* RedeemCoupon(const struct FClientRedeemCouponRequest& Request, const class FScriptDelegate& onSuccess, const class FScriptDelegate& onFailure, class UObject* customData);
		class UPlayFabClientAPI* PurchaseItem(const struct FClientPurchaseItemRequest& Request, const class FScriptDelegate& onSuccess, const class FScriptDelegate& onFailure, class UObject* customData);
		class UPlayFabClientAPI* PayForPurchase(const struct FClientPayForPurchaseRequest& Request, const class FScriptDelegate& onSuccess, const class FScriptDelegate& onFailure, class UObject* customData);
		class UPlayFabClientAPI* OpenTrade(const struct FClientOpenTradeRequest& Request, const class FScriptDelegate& onSuccess, const class FScriptDelegate& onFailure, class UObject* customData);
		class UPlayFabClientAPI* Matchmake(const struct FClientMatchmakeRequest& Request, const class FScriptDelegate& onSuccess, const class FScriptDelegate& onFailure, class UObject* customData);
		class UPlayFabClientAPI* LoginWithXbox(const struct FClientLoginWithXboxRequest& Request, const class FScriptDelegate& onSuccess, const class FScriptDelegate& onFailure, class UObject* customData);
		class UPlayFabClientAPI* LoginWithWindowsHello(const struct FClientLoginWithWindowsHelloRequest& Request, const class FScriptDelegate& onSuccess, const class FScriptDelegate& onFailure, class UObject* customData);
		class UPlayFabClientAPI* LoginWithTwitch(const struct FClientLoginWithTwitchRequest& Request, const class FScriptDelegate& onSuccess, const class FScriptDelegate& onFailure, class UObject* customData);
		class UPlayFabClientAPI* LoginWithSteam(const struct FClientLoginWithSteamRequest& Request, const class FScriptDelegate& onSuccess, const class FScriptDelegate& onFailure, class UObject* customData);
		class UPlayFabClientAPI* LoginWithPSN(const struct FClientLoginWithPSNRequest& Request, const class FScriptDelegate& onSuccess, const class FScriptDelegate& onFailure, class UObject* customData);
		class UPlayFabClientAPI* LoginWithPlayFab(const struct FClientLoginWithPlayFabRequest& Request, const class FScriptDelegate& onSuccess, const class FScriptDelegate& onFailure, class UObject* customData);
		class UPlayFabClientAPI* LoginWithOpenIdConnect(const struct FClientLoginWithOpenIdConnectRequest& Request, const class FScriptDelegate& onSuccess, const class FScriptDelegate& onFailure, class UObject* customData);
		class UPlayFabClientAPI* LoginWithNintendoSwitchDeviceId(const struct FClientLoginWithNintendoSwitchDeviceIdRequest& Request, const class FScriptDelegate& onSuccess, const class FScriptDelegate& onFailure, class UObject* customData);
		class UPlayFabClientAPI* LoginWithNintendoServiceAccount(const struct FClientLoginWithNintendoServiceAccountRequest& Request, const class FScriptDelegate& onSuccess, const class FScriptDelegate& onFailure, class UObject* customData);
		class UPlayFabClientAPI* LoginWithKongregate(const struct FClientLoginWithKongregateRequest& Request, const class FScriptDelegate& onSuccess, const class FScriptDelegate& onFailure, class UObject* customData);
		class UPlayFabClientAPI* LoginWithIOSDeviceID(const struct FClientLoginWithIOSDeviceIDRequest& Request, const class FScriptDelegate& onSuccess, const class FScriptDelegate& onFailure, class UObject* customData);
		class UPlayFabClientAPI* LoginWithGoogleAccount(const struct FClientLoginWithGoogleAccountRequest& Request, const class FScriptDelegate& onSuccess, const class FScriptDelegate& onFailure, class UObject* customData);
		class UPlayFabClientAPI* LoginWithGameCenter(const struct FClientLoginWithGameCenterRequest& Request, const class FScriptDelegate& onSuccess, const class FScriptDelegate& onFailure, class UObject* customData);
		class UPlayFabClientAPI* LoginWithFacebookInstantGamesId(const struct FClientLoginWithFacebookInstantGamesIdRequest& Request, const class FScriptDelegate& onSuccess, const class FScriptDelegate& onFailure, class UObject* customData);
		class UPlayFabClientAPI* LoginWithFacebook(const struct FClientLoginWithFacebookRequest& Request, const class FScriptDelegate& onSuccess, const class FScriptDelegate& onFailure, class UObject* customData);
		class UPlayFabClientAPI* LoginWithEmailAddress(const struct FClientLoginWithEmailAddressRequest& Request, const class FScriptDelegate& onSuccess, const class FScriptDelegate& onFailure, class UObject* customData);
		class UPlayFabClientAPI* LoginWithCustomID(const struct FClientLoginWithCustomIDRequest& Request, const class FScriptDelegate& onSuccess, const class FScriptDelegate& onFailure, class UObject* customData);
		class UPlayFabClientAPI* LoginWithApple(const struct FClientLoginWithAppleRequest& Request, const class FScriptDelegate& onSuccess, const class FScriptDelegate& onFailure, class UObject* customData);
		class UPlayFabClientAPI* LoginWithAndroidDeviceID(const struct FClientLoginWithAndroidDeviceIDRequest& Request, const class FScriptDelegate& onSuccess, const class FScriptDelegate& onFailure, class UObject* customData);
		class UPlayFabClientAPI* LinkXboxAccount(const struct FClientLinkXboxAccountRequest& Request, const class FScriptDelegate& onSuccess, const class FScriptDelegate& onFailure, class UObject* customData);
		class UPlayFabClientAPI* LinkWindowsHello(const struct FClientLinkWindowsHelloAccountRequest& Request, const class FScriptDelegate& onSuccess, const class FScriptDelegate& onFailure, class UObject* customData);
		class UPlayFabClientAPI* LinkTwitch(const struct FClientLinkTwitchAccountRequest& Request, const class FScriptDelegate& onSuccess, const class FScriptDelegate& onFailure, class UObject* customData);
		class UPlayFabClientAPI* LinkSteamAccount(const struct FClientLinkSteamAccountRequest& Request, const class FScriptDelegate& onSuccess, const class FScriptDelegate& onFailure, class UObject* customData);
		class UPlayFabClientAPI* LinkPSNAccount(const struct FClientLinkPSNAccountRequest& Request, const class FScriptDelegate& onSuccess, const class FScriptDelegate& onFailure, class UObject* customData);
		class UPlayFabClientAPI* LinkOpenIdConnect(const struct FClientLinkOpenIdConnectRequest& Request, const class FScriptDelegate& onSuccess, const class FScriptDelegate& onFailure, class UObject* customData);
		class UPlayFabClientAPI* LinkNintendoSwitchDeviceId(const struct FClientLinkNintendoSwitchDeviceIdRequest& Request, const class FScriptDelegate& onSuccess, const class FScriptDelegate& onFailure, class UObject* customData);
		class UPlayFabClientAPI* LinkNintendoServiceAccount(const struct FClientLinkNintendoServiceAccountRequest& Request, const class FScriptDelegate& onSuccess, const class FScriptDelegate& onFailure, class UObject* customData);
		class UPlayFabClientAPI* LinkKongregate(const struct FClientLinkKongregateAccountRequest& Request, const class FScriptDelegate& onSuccess, const class FScriptDelegate& onFailure, class UObject* customData);
		class UPlayFabClientAPI* LinkIOSDeviceID(const struct FClientLinkIOSDeviceIDRequest& Request, const class FScriptDelegate& onSuccess, const class FScriptDelegate& onFailure, class UObject* customData);
		class UPlayFabClientAPI* LinkGoogleAccount(const struct FClientLinkGoogleAccountRequest& Request, const class FScriptDelegate& onSuccess, const class FScriptDelegate& onFailure, class UObject* customData);
		class UPlayFabClientAPI* LinkGameCenterAccount(const struct FClientLinkGameCenterAccountRequest& Request, const class FScriptDelegate& onSuccess, const class FScriptDelegate& onFailure, class UObject* customData);
		class UPlayFabClientAPI* LinkFacebookInstantGamesId(const struct FClientLinkFacebookInstantGamesIdRequest& Request, const class FScriptDelegate& onSuccess, const class FScriptDelegate& onFailure, class UObject* customData);
		class UPlayFabClientAPI* LinkFacebookAccount(const struct FClientLinkFacebookAccountRequest& Request, const class FScriptDelegate& onSuccess, const class FScriptDelegate& onFailure, class UObject* customData);
		class UPlayFabClientAPI* LinkCustomID(const struct FClientLinkCustomIDRequest& Request, const class FScriptDelegate& onSuccess, const class FScriptDelegate& onFailure, class UObject* customData);
		class UPlayFabClientAPI* LinkApple(const struct FClientLinkAppleRequest& Request, const class FScriptDelegate& onSuccess, const class FScriptDelegate& onFailure, class UObject* customData);
		class UPlayFabClientAPI* LinkAndroidDeviceID(const struct FClientLinkAndroidDeviceIDRequest& Request, const class FScriptDelegate& onSuccess, const class FScriptDelegate& onFailure, class UObject* customData);
		void HelperWriteTitleEvent(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
		void HelperWritePlayerEvent(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
		void HelperWriteCharacterEvent(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
		void HelperValidateWindowsStoreReceipt(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
		void HelperValidateIOSReceipt(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
		void HelperValidateGooglePlayPurchase(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
		void HelperValidateAmazonIAPReceipt(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
		void HelperUpdateUserTitleDisplayName(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
		void HelperUpdateUserPublisherData(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
		void HelperUpdateUserData(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
		void HelperUpdateSharedGroupData(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
		void HelperUpdatePlayerStatistics(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
		void HelperUpdateCharacterStatistics(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
		void HelperUpdateCharacterData(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
		void HelperUpdateAvatarUrl(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
		void HelperUnlockContainerItem(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
		void HelperUnlockContainerInstance(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
		void HelperUnlinkXboxAccount(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
		void HelperUnlinkWindowsHello(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
		void HelperUnlinkTwitch(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
		void HelperUnlinkSteamAccount(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
		void HelperUnlinkPSNAccount(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
		void HelperUnlinkOpenIdConnect(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
		void HelperUnlinkNintendoSwitchDeviceId(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
		void HelperUnlinkNintendoServiceAccount(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
		void HelperUnlinkKongregate(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
		void HelperUnlinkIOSDeviceID(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
		void HelperUnlinkGoogleAccount(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
		void HelperUnlinkGameCenterAccount(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
		void HelperUnlinkFacebookInstantGamesId(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
		void HelperUnlinkFacebookAccount(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
		void HelperUnlinkCustomID(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
		void HelperUnlinkApple(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
		void HelperUnlinkAndroidDeviceID(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
		void HelperSubtractUserVirtualCurrency(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
		void HelperStartPurchase(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
		void HelperStartGame(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
		void HelperSetPlayerSecret(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
		void HelperSetFriendTags(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
		void HelperSendAccountRecoveryEmail(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
		void HelperRewardAdActivity(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
		void HelperRestoreIOSPurchases(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
		void HelperReportPlayer(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
		void HelperReportDeviceInfo(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
		void HelperReportAdActivity(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
		void HelperRemoveSharedGroupMembers(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
		void HelperRemoveGenericID(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
		void HelperRemoveFriend(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
		void HelperRemoveContactEmail(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
		void HelperRegisterWithWindowsHello(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
		void HelperRegisterPlayFabUser(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
		void HelperRegisterForIOSPushNotification(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
		void HelperRefreshPSNAuthToken(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
		void HelperRedeemCoupon(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
		void HelperPurchaseItem(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
		void HelperPayForPurchase(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
		void HelperOpenTrade(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
		void HelperMatchmake(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
		void HelperLoginWithXbox(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
		void HelperLoginWithWindowsHello(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
		void HelperLoginWithTwitch(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
		void HelperLoginWithSteam(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
		void HelperLoginWithPSN(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
		void HelperLoginWithPlayFab(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
		void HelperLoginWithOpenIdConnect(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
		void HelperLoginWithNintendoSwitchDeviceId(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
		void HelperLoginWithNintendoServiceAccount(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
		void HelperLoginWithKongregate(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
		void HelperLoginWithIOSDeviceID(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
		void HelperLoginWithGoogleAccount(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
		void HelperLoginWithGameCenter(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
		void HelperLoginWithFacebookInstantGamesId(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
		void HelperLoginWithFacebook(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
		void HelperLoginWithEmailAddress(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
		void HelperLoginWithCustomID(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
		void HelperLoginWithApple(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
		void HelperLoginWithAndroidDeviceID(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
		void HelperLinkXboxAccount(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
		void HelperLinkWindowsHello(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
		void HelperLinkTwitch(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
		void HelperLinkSteamAccount(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
		void HelperLinkPSNAccount(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
		void HelperLinkOpenIdConnect(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
		void HelperLinkNintendoSwitchDeviceId(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
		void HelperLinkNintendoServiceAccount(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
		void HelperLinkKongregate(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
		void HelperLinkIOSDeviceID(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
		void HelperLinkGoogleAccount(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
		void HelperLinkGameCenterAccount(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
		void HelperLinkFacebookInstantGamesId(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
		void HelperLinkFacebookAccount(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
		void HelperLinkCustomID(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
		void HelperLinkApple(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
		void HelperLinkAndroidDeviceID(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
		void HelperGrantCharacterToUser(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
		void HelperGetWindowsHelloChallenge(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
		void HelperGetUserReadOnlyData(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
		void HelperGetUserPublisherReadOnlyData(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
		void HelperGetUserPublisherData(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
		void HelperGetUserInventory(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
		void HelperGetUserData(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
		void HelperGetTradeStatus(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
		void HelperGetTitlePublicKey(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
		void HelperGetTitleNews(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
		void HelperGetTitleData(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
		void HelperGetTime(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
		void HelperGetStoreItems(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
		void HelperGetSharedGroupData(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
		void HelperGetPurchase(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
		void HelperGetPublisherData(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
		void HelperGetPlayFabIDsFromXboxLiveIDs(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
		void HelperGetPlayFabIDsFromTwitchIDs(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
		void HelperGetPlayFabIDsFromSteamIDs(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
		void HelperGetPlayFabIDsFromPSNAccountIDs(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
		void HelperGetPlayFabIDsFromNintendoSwitchDeviceIds(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
		void HelperGetPlayFabIDsFromKongregateIDs(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
		void HelperGetPlayFabIDsFromGoogleIDs(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
		void HelperGetPlayFabIDsFromGenericIDs(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
		void HelperGetPlayFabIDsFromGameCenterIDs(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
		void HelperGetPlayFabIDsFromFacebookInstantGamesIds(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
		void HelperGetPlayFabIDsFromFacebookIDs(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
		void HelperGetPlayerTrades(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
		void HelperGetPlayerTags(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
		void HelperGetPlayerStatisticVersions(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
		void HelperGetPlayerStatistics(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
		void HelperGetPlayerSegments(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
		void HelperGetPlayerProfile(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
		void HelperGetPlayerCombinedInfo(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
		void HelperGetPhotonAuthenticationToken(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
		void HelperGetPaymentToken(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
		void HelperGetLeaderboardForUserCharacters(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
		void HelperGetLeaderboardAroundPlayer(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
		void HelperGetLeaderboardAroundCharacter(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
		void HelperGetLeaderboard(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
		void HelperGetGameServerRegions(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
		void HelperGetFriendsList(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
		void HelperGetFriendLeaderboardAroundPlayer(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
		void HelperGetFriendLeaderboard(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
		void HelperGetCurrentGames(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
		void HelperGetContentDownloadUrl(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
		void HelperGetCharacterStatistics(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
		void HelperGetCharacterReadOnlyData(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
		void HelperGetCharacterLeaderboard(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
		void HelperGetCharacterInventory(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
		void HelperGetCharacterData(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
		void HelperGetCatalogItems(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
		void HelperGetAllUsersCharacters(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
		void HelperGetAdPlacements(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
		void HelperGetAccountInfo(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
		void HelperExecuteCloudScript(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
		void HelperCreateSharedGroup(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
		void HelperConsumeXboxEntitlements(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
		void HelperConsumePSNEntitlements(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
		void HelperConsumePS5Entitlements(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
		void HelperConsumeMicrosoftStoreEntitlements(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
		void HelperConsumeItem(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
		void HelperConfirmPurchase(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
		void HelperCancelTrade(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
		void HelperAttributeInstall(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
		void HelperAndroidDevicePushNotificationRegistration(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
		void HelperAddUserVirtualCurrency(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
		void HelperAddUsernamePassword(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
		void HelperAddSharedGroupMembers(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
		void HelperAddOrUpdateContactEmail(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
		void HelperAddGenericID(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
		void HelperAddFriend(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
		void HelperAcceptTrade(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
		class UPlayFabClientAPI* GrantCharacterToUser(const struct FClientGrantCharacterToUserRequest& Request, const class FScriptDelegate& onSuccess, const class FScriptDelegate& onFailure, class UObject* customData);
		class UPlayFabClientAPI* GetWindowsHelloChallenge(const struct FClientGetWindowsHelloChallengeRequest& Request, const class FScriptDelegate& onSuccess, const class FScriptDelegate& onFailure, class UObject* customData);
		class UPlayFabClientAPI* GetUserReadOnlyData(const struct FClientGetUserDataRequest& Request, const class FScriptDelegate& onSuccess, const class FScriptDelegate& onFailure, class UObject* customData);
		class UPlayFabClientAPI* GetUserPublisherReadOnlyData(const struct FClientGetUserDataRequest& Request, const class FScriptDelegate& onSuccess, const class FScriptDelegate& onFailure, class UObject* customData);
		class UPlayFabClientAPI* GetUserPublisherData(const struct FClientGetUserDataRequest& Request, const class FScriptDelegate& onSuccess, const class FScriptDelegate& onFailure, class UObject* customData);
		class UPlayFabClientAPI* GetUserInventory(const struct FClientGetUserInventoryRequest& Request, const class FScriptDelegate& onSuccess, const class FScriptDelegate& onFailure, class UObject* customData);
		class UPlayFabClientAPI* GetUserData(const struct FClientGetUserDataRequest& Request, const class FScriptDelegate& onSuccess, const class FScriptDelegate& onFailure, class UObject* customData);
		class UPlayFabClientAPI* GetTradeStatus(const struct FClientGetTradeStatusRequest& Request, const class FScriptDelegate& onSuccess, const class FScriptDelegate& onFailure, class UObject* customData);
		class UPlayFabClientAPI* GetTitlePublicKey(const struct FClientGetTitlePublicKeyRequest& Request, const class FScriptDelegate& onSuccess, const class FScriptDelegate& onFailure, class UObject* customData);
		class UPlayFabClientAPI* GetTitleNews(const struct FClientGetTitleNewsRequest& Request, const class FScriptDelegate& onSuccess, const class FScriptDelegate& onFailure, class UObject* customData);
		class UPlayFabClientAPI* GetTitleData(const struct FClientGetTitleDataRequest& Request, const class FScriptDelegate& onSuccess, const class FScriptDelegate& onFailure, class UObject* customData);
		class UPlayFabClientAPI* GetTime(const struct FClientGetTimeRequest& Request, const class FScriptDelegate& onSuccess, const class FScriptDelegate& onFailure, class UObject* customData);
		class UPlayFabClientAPI* GetStoreItems(const struct FClientGetStoreItemsRequest& Request, const class FScriptDelegate& onSuccess, const class FScriptDelegate& onFailure, class UObject* customData);
		class UPlayFabClientAPI* GetSharedGroupData(const struct FClientGetSharedGroupDataRequest& Request, const class FScriptDelegate& onSuccess, const class FScriptDelegate& onFailure, class UObject* customData);
		class UPlayFabClientAPI* GetPurchase(const struct FClientGetPurchaseRequest& Request, const class FScriptDelegate& onSuccess, const class FScriptDelegate& onFailure, class UObject* customData);
		class UPlayFabClientAPI* GetPublisherData(const struct FClientGetPublisherDataRequest& Request, const class FScriptDelegate& onSuccess, const class FScriptDelegate& onFailure, class UObject* customData);
		class UPlayFabClientAPI* GetPlayFabIDsFromXboxLiveIDs(const struct FClientGetPlayFabIDsFromXboxLiveIDsRequest& Request, const class FScriptDelegate& onSuccess, const class FScriptDelegate& onFailure, class UObject* customData);
		class UPlayFabClientAPI* GetPlayFabIDsFromTwitchIDs(const struct FClientGetPlayFabIDsFromTwitchIDsRequest& Request, const class FScriptDelegate& onSuccess, const class FScriptDelegate& onFailure, class UObject* customData);
		class UPlayFabClientAPI* GetPlayFabIDsFromSteamIDs(const struct FClientGetPlayFabIDsFromSteamIDsRequest& Request, const class FScriptDelegate& onSuccess, const class FScriptDelegate& onFailure, class UObject* customData);
		class UPlayFabClientAPI* GetPlayFabIDsFromPSNAccountIDs(const struct FClientGetPlayFabIDsFromPSNAccountIDsRequest& Request, const class FScriptDelegate& onSuccess, const class FScriptDelegate& onFailure, class UObject* customData);
		class UPlayFabClientAPI* GetPlayFabIDsFromNintendoSwitchDeviceIds(const struct FClientGetPlayFabIDsFromNintendoSwitchDeviceIdsRequest& Request, const class FScriptDelegate& onSuccess, const class FScriptDelegate& onFailure, class UObject* customData);
		class UPlayFabClientAPI* GetPlayFabIDsFromKongregateIDs(const struct FClientGetPlayFabIDsFromKongregateIDsRequest& Request, const class FScriptDelegate& onSuccess, const class FScriptDelegate& onFailure, class UObject* customData);
		class UPlayFabClientAPI* GetPlayFabIDsFromGoogleIDs(const struct FClientGetPlayFabIDsFromGoogleIDsRequest& Request, const class FScriptDelegate& onSuccess, const class FScriptDelegate& onFailure, class UObject* customData);
		class UPlayFabClientAPI* GetPlayFabIDsFromGenericIDs(const struct FClientGetPlayFabIDsFromGenericIDsRequest& Request, const class FScriptDelegate& onSuccess, const class FScriptDelegate& onFailure, class UObject* customData);
		class UPlayFabClientAPI* GetPlayFabIDsFromGameCenterIDs(const struct FClientGetPlayFabIDsFromGameCenterIDsRequest& Request, const class FScriptDelegate& onSuccess, const class FScriptDelegate& onFailure, class UObject* customData);
		class UPlayFabClientAPI* GetPlayFabIDsFromFacebookInstantGamesIds(const struct FClientGetPlayFabIDsFromFacebookInstantGamesIdsRequest& Request, const class FScriptDelegate& onSuccess, const class FScriptDelegate& onFailure, class UObject* customData);
		class UPlayFabClientAPI* GetPlayFabIDsFromFacebookIDs(const struct FClientGetPlayFabIDsFromFacebookIDsRequest& Request, const class FScriptDelegate& onSuccess, const class FScriptDelegate& onFailure, class UObject* customData);
		class UPlayFabClientAPI* GetPlayerTrades(const struct FClientGetPlayerTradesRequest& Request, const class FScriptDelegate& onSuccess, const class FScriptDelegate& onFailure, class UObject* customData);
		class UPlayFabClientAPI* GetPlayerTags(const struct FClientGetPlayerTagsRequest& Request, const class FScriptDelegate& onSuccess, const class FScriptDelegate& onFailure, class UObject* customData);
		class UPlayFabClientAPI* GetPlayerStatisticVersions(const struct FClientGetPlayerStatisticVersionsRequest& Request, const class FScriptDelegate& onSuccess, const class FScriptDelegate& onFailure, class UObject* customData);
		class UPlayFabClientAPI* GetPlayerStatistics(const struct FClientGetPlayerStatisticsRequest& Request, const class FScriptDelegate& onSuccess, const class FScriptDelegate& onFailure, class UObject* customData);
		class UPlayFabClientAPI* GetPlayerSegments(const struct FClientGetPlayerSegmentsRequest& Request, const class FScriptDelegate& onSuccess, const class FScriptDelegate& onFailure, class UObject* customData);
		class UPlayFabClientAPI* GetPlayerProfile(const struct FClientGetPlayerProfileRequest& Request, const class FScriptDelegate& onSuccess, const class FScriptDelegate& onFailure, class UObject* customData);
		class UPlayFabClientAPI* GetPlayerCombinedInfo(const struct FClientGetPlayerCombinedInfoRequest& Request, const class FScriptDelegate& onSuccess, const class FScriptDelegate& onFailure, class UObject* customData);
		class UPlayFabClientAPI* GetPhotonAuthenticationToken(const struct FClientGetPhotonAuthenticationTokenRequest& Request, const class FScriptDelegate& onSuccess, const class FScriptDelegate& onFailure, class UObject* customData);
		class UPlayFabClientAPI* GetPaymentToken(const struct FClientGetPaymentTokenRequest& Request, const class FScriptDelegate& onSuccess, const class FScriptDelegate& onFailure, class UObject* customData);
		class UPlayFabClientAPI* GetLeaderboardForUserCharacters(const struct FClientGetLeaderboardForUsersCharactersRequest& Request, const class FScriptDelegate& onSuccess, const class FScriptDelegate& onFailure, class UObject* customData);
		class UPlayFabClientAPI* GetLeaderboardAroundPlayer(const struct FClientGetLeaderboardAroundPlayerRequest& Request, const class FScriptDelegate& onSuccess, const class FScriptDelegate& onFailure, class UObject* customData);
		class UPlayFabClientAPI* GetLeaderboardAroundCharacter(const struct FClientGetLeaderboardAroundCharacterRequest& Request, const class FScriptDelegate& onSuccess, const class FScriptDelegate& onFailure, class UObject* customData);
		class UPlayFabClientAPI* GetLeaderboard(const struct FClientGetLeaderboardRequest& Request, const class FScriptDelegate& onSuccess, const class FScriptDelegate& onFailure, class UObject* customData);
		class UPlayFabClientAPI* GetGameServerRegions(const struct FClientGameServerRegionsRequest& Request, const class FScriptDelegate& onSuccess, const class FScriptDelegate& onFailure, class UObject* customData);
		class UPlayFabClientAPI* GetFriendsList(const struct FClientGetFriendsListRequest& Request, const class FScriptDelegate& onSuccess, const class FScriptDelegate& onFailure, class UObject* customData);
		class UPlayFabClientAPI* GetFriendLeaderboardAroundPlayer(const struct FClientGetFriendLeaderboardAroundPlayerRequest& Request, const class FScriptDelegate& onSuccess, const class FScriptDelegate& onFailure, class UObject* customData);
		class UPlayFabClientAPI* GetFriendLeaderboard(const struct FClientGetFriendLeaderboardRequest& Request, const class FScriptDelegate& onSuccess, const class FScriptDelegate& onFailure, class UObject* customData);
		class UPlayFabClientAPI* GetCurrentGames(const struct FClientCurrentGamesRequest& Request, const class FScriptDelegate& onSuccess, const class FScriptDelegate& onFailure, class UObject* customData);
		class UPlayFabClientAPI* GetContentDownloadUrl(const struct FClientGetContentDownloadUrlRequest& Request, const class FScriptDelegate& onSuccess, const class FScriptDelegate& onFailure, class UObject* customData);
		class UPlayFabClientAPI* GetCharacterStatistics(const struct FClientGetCharacterStatisticsRequest& Request, const class FScriptDelegate& onSuccess, const class FScriptDelegate& onFailure, class UObject* customData);
		class UPlayFabClientAPI* GetCharacterReadOnlyData(const struct FClientGetCharacterDataRequest& Request, const class FScriptDelegate& onSuccess, const class FScriptDelegate& onFailure, class UObject* customData);
		class UPlayFabClientAPI* GetCharacterLeaderboard(const struct FClientGetCharacterLeaderboardRequest& Request, const class FScriptDelegate& onSuccess, const class FScriptDelegate& onFailure, class UObject* customData);
		class UPlayFabClientAPI* GetCharacterInventory(const struct FClientGetCharacterInventoryRequest& Request, const class FScriptDelegate& onSuccess, const class FScriptDelegate& onFailure, class UObject* customData);
		class UPlayFabClientAPI* GetCharacterData(const struct FClientGetCharacterDataRequest& Request, const class FScriptDelegate& onSuccess, const class FScriptDelegate& onFailure, class UObject* customData);
		class UPlayFabClientAPI* GetCatalogItems(const struct FClientGetCatalogItemsRequest& Request, const class FScriptDelegate& onSuccess, const class FScriptDelegate& onFailure, class UObject* customData);
		class UPlayFabClientAPI* GetAllUsersCharacters(const struct FClientListUsersCharactersRequest& Request, const class FScriptDelegate& onSuccess, const class FScriptDelegate& onFailure, class UObject* customData);
		class UPlayFabClientAPI* GetAdPlacements(const struct FClientGetAdPlacementsRequest& Request, const class FScriptDelegate& onSuccess, const class FScriptDelegate& onFailure, class UObject* customData);
		class UPlayFabClientAPI* GetAccountInfo(const struct FClientGetAccountInfoRequest& Request, const class FScriptDelegate& onSuccess, const class FScriptDelegate& onFailure, class UObject* customData);
		class UPlayFabClientAPI* ExecuteCloudScript(const struct FClientExecuteCloudScriptRequest& Request, const class FScriptDelegate& onSuccess, const class FScriptDelegate& onFailure, class UObject* customData);
		void DelegateOnSuccessWriteTitleEvent__DelegateSignature(const struct FClientWriteEventResponse& Result, class UObject* customData);
		void DelegateOnSuccessWritePlayerEvent__DelegateSignature(const struct FClientWriteEventResponse& Result, class UObject* customData);
		void DelegateOnSuccessWriteCharacterEvent__DelegateSignature(const struct FClientWriteEventResponse& Result, class UObject* customData);
		void DelegateOnSuccessValidateWindowsStoreReceipt__DelegateSignature(const struct FClientValidateWindowsReceiptResult& Result, class UObject* customData);
		void DelegateOnSuccessValidateIOSReceipt__DelegateSignature(const struct FClientValidateIOSReceiptResult& Result, class UObject* customData);
		void DelegateOnSuccessValidateGooglePlayPurchase__DelegateSignature(const struct FClientValidateGooglePlayPurchaseResult& Result, class UObject* customData);
		void DelegateOnSuccessValidateAmazonIAPReceipt__DelegateSignature(const struct FClientValidateAmazonReceiptResult& Result, class UObject* customData);
		void DelegateOnSuccessUpdateUserTitleDisplayName__DelegateSignature(const struct FClientUpdateUserTitleDisplayNameResult& Result, class UObject* customData);
		void DelegateOnSuccessUpdateUserPublisherData__DelegateSignature(const struct FClientUpdateUserDataResult& Result, class UObject* customData);
		void DelegateOnSuccessUpdateUserData__DelegateSignature(const struct FClientUpdateUserDataResult& Result, class UObject* customData);
		void DelegateOnSuccessUpdateSharedGroupData__DelegateSignature(const struct FClientUpdateSharedGroupDataResult& Result, class UObject* customData);
		void DelegateOnSuccessUpdatePlayerStatistics__DelegateSignature(const struct FClientUpdatePlayerStatisticsResult& Result, class UObject* customData);
		void DelegateOnSuccessUpdateCharacterStatistics__DelegateSignature(const struct FClientUpdateCharacterStatisticsResult& Result, class UObject* customData);
		void DelegateOnSuccessUpdateCharacterData__DelegateSignature(const struct FClientUpdateCharacterDataResult& Result, class UObject* customData);
		void DelegateOnSuccessUpdateAvatarUrl__DelegateSignature(const struct FClientEmptyResponse& Result, class UObject* customData);
		void DelegateOnSuccessUnlockContainerItem__DelegateSignature(const struct FClientUnlockContainerItemResult& Result, class UObject* customData);
		void DelegateOnSuccessUnlockContainerInstance__DelegateSignature(const struct FClientUnlockContainerItemResult& Result, class UObject* customData);
		void DelegateOnSuccessUnlinkXboxAccount__DelegateSignature(const struct FClientUnlinkXboxAccountResult& Result, class UObject* customData);
		void DelegateOnSuccessUnlinkWindowsHello__DelegateSignature(const struct FClientUnlinkWindowsHelloAccountResponse& Result, class UObject* customData);
		void DelegateOnSuccessUnlinkTwitch__DelegateSignature(const struct FClientUnlinkTwitchAccountResult& Result, class UObject* customData);
		void DelegateOnSuccessUnlinkSteamAccount__DelegateSignature(const struct FClientUnlinkSteamAccountResult& Result, class UObject* customData);
		void DelegateOnSuccessUnlinkPSNAccount__DelegateSignature(const struct FClientUnlinkPSNAccountResult& Result, class UObject* customData);
		void DelegateOnSuccessUnlinkOpenIdConnect__DelegateSignature(const struct FClientEmptyResponse& Result, class UObject* customData);
		void DelegateOnSuccessUnlinkNintendoSwitchDeviceId__DelegateSignature(const struct FClientUnlinkNintendoSwitchDeviceIdResult& Result, class UObject* customData);
		void DelegateOnSuccessUnlinkNintendoServiceAccount__DelegateSignature(const struct FClientEmptyResponse& Result, class UObject* customData);
		void DelegateOnSuccessUnlinkKongregate__DelegateSignature(const struct FClientUnlinkKongregateAccountResult& Result, class UObject* customData);
		void DelegateOnSuccessUnlinkIOSDeviceID__DelegateSignature(const struct FClientUnlinkIOSDeviceIDResult& Result, class UObject* customData);
		void DelegateOnSuccessUnlinkGoogleAccount__DelegateSignature(const struct FClientUnlinkGoogleAccountResult& Result, class UObject* customData);
		void DelegateOnSuccessUnlinkGameCenterAccount__DelegateSignature(const struct FClientUnlinkGameCenterAccountResult& Result, class UObject* customData);
		void DelegateOnSuccessUnlinkFacebookInstantGamesId__DelegateSignature(const struct FClientUnlinkFacebookInstantGamesIdResult& Result, class UObject* customData);
		void DelegateOnSuccessUnlinkFacebookAccount__DelegateSignature(const struct FClientUnlinkFacebookAccountResult& Result, class UObject* customData);
		void DelegateOnSuccessUnlinkCustomID__DelegateSignature(const struct FClientUnlinkCustomIDResult& Result, class UObject* customData);
		void DelegateOnSuccessUnlinkApple__DelegateSignature(const struct FClientEmptyResponse& Result, class UObject* customData);
		void DelegateOnSuccessUnlinkAndroidDeviceID__DelegateSignature(const struct FClientUnlinkAndroidDeviceIDResult& Result, class UObject* customData);
		void DelegateOnSuccessSubtractUserVirtualCurrency__DelegateSignature(const struct FClientModifyUserVirtualCurrencyResult& Result, class UObject* customData);
		void DelegateOnSuccessStartPurchase__DelegateSignature(const struct FClientStartPurchaseResult& Result, class UObject* customData);
		void DelegateOnSuccessStartGame__DelegateSignature(const struct FClientStartGameResult& Result, class UObject* customData);
		void DelegateOnSuccessSetPlayerSecret__DelegateSignature(const struct FClientSetPlayerSecretResult& Result, class UObject* customData);
		void DelegateOnSuccessSetFriendTags__DelegateSignature(const struct FClientSetFriendTagsResult& Result, class UObject* customData);
		void DelegateOnSuccessSendAccountRecoveryEmail__DelegateSignature(const struct FClientSendAccountRecoveryEmailResult& Result, class UObject* customData);
		void DelegateOnSuccessRewardAdActivity__DelegateSignature(const struct FClientRewardAdActivityResult& Result, class UObject* customData);
		void DelegateOnSuccessRestoreIOSPurchases__DelegateSignature(const struct FClientRestoreIOSPurchasesResult& Result, class UObject* customData);
		void DelegateOnSuccessReportPlayer__DelegateSignature(const struct FClientReportPlayerClientResult& Result, class UObject* customData);
		void DelegateOnSuccessReportDeviceInfo__DelegateSignature(const struct FClientEmptyResponse& Result, class UObject* customData);
		void DelegateOnSuccessReportAdActivity__DelegateSignature(const struct FClientReportAdActivityResult& Result, class UObject* customData);
		void DelegateOnSuccessRemoveSharedGroupMembers__DelegateSignature(const struct FClientRemoveSharedGroupMembersResult& Result, class UObject* customData);
		void DelegateOnSuccessRemoveGenericID__DelegateSignature(const struct FClientRemoveGenericIDResult& Result, class UObject* customData);
		void DelegateOnSuccessRemoveFriend__DelegateSignature(const struct FClientRemoveFriendResult& Result, class UObject* customData);
		void DelegateOnSuccessRemoveContactEmail__DelegateSignature(const struct FClientRemoveContactEmailResult& Result, class UObject* customData);
		void DelegateOnSuccessRegisterWithWindowsHello__DelegateSignature(const struct FClientLoginResult& Result, class UObject* customData);
		void DelegateOnSuccessRegisterPlayFabUser__DelegateSignature(const struct FClientRegisterPlayFabUserResult& Result, class UObject* customData);
		void DelegateOnSuccessRegisterForIOSPushNotification__DelegateSignature(const struct FClientRegisterForIOSPushNotificationResult& Result, class UObject* customData);
		void DelegateOnSuccessRefreshPSNAuthToken__DelegateSignature(const struct FClientEmptyResponse& Result, class UObject* customData);
		void DelegateOnSuccessRedeemCoupon__DelegateSignature(const struct FClientRedeemCouponResult& Result, class UObject* customData);
		void DelegateOnSuccessPurchaseItem__DelegateSignature(const struct FClientPurchaseItemResult& Result, class UObject* customData);
		void DelegateOnSuccessPayForPurchase__DelegateSignature(const struct FClientPayForPurchaseResult& Result, class UObject* customData);
		void DelegateOnSuccessOpenTrade__DelegateSignature(const struct FClientOpenTradeResponse& Result, class UObject* customData);
		void DelegateOnSuccessMatchmake__DelegateSignature(const struct FClientMatchmakeResult& Result, class UObject* customData);
		void DelegateOnSuccessLoginWithXbox__DelegateSignature(const struct FClientLoginResult& Result, class UObject* customData);
		void DelegateOnSuccessLoginWithWindowsHello__DelegateSignature(const struct FClientLoginResult& Result, class UObject* customData);
		void DelegateOnSuccessLoginWithTwitch__DelegateSignature(const struct FClientLoginResult& Result, class UObject* customData);
		void DelegateOnSuccessLoginWithSteam__DelegateSignature(const struct FClientLoginResult& Result, class UObject* customData);
		void DelegateOnSuccessLoginWithPSN__DelegateSignature(const struct FClientLoginResult& Result, class UObject* customData);
		void DelegateOnSuccessLoginWithPlayFab__DelegateSignature(const struct FClientLoginResult& Result, class UObject* customData);
		void DelegateOnSuccessLoginWithOpenIdConnect__DelegateSignature(const struct FClientLoginResult& Result, class UObject* customData);
		void DelegateOnSuccessLoginWithNintendoSwitchDeviceId__DelegateSignature(const struct FClientLoginResult& Result, class UObject* customData);
		void DelegateOnSuccessLoginWithNintendoServiceAccount__DelegateSignature(const struct FClientLoginResult& Result, class UObject* customData);
		void DelegateOnSuccessLoginWithKongregate__DelegateSignature(const struct FClientLoginResult& Result, class UObject* customData);
		void DelegateOnSuccessLoginWithIOSDeviceID__DelegateSignature(const struct FClientLoginResult& Result, class UObject* customData);
		void DelegateOnSuccessLoginWithGoogleAccount__DelegateSignature(const struct FClientLoginResult& Result, class UObject* customData);
		void DelegateOnSuccessLoginWithGameCenter__DelegateSignature(const struct FClientLoginResult& Result, class UObject* customData);
		void DelegateOnSuccessLoginWithFacebookInstantGamesId__DelegateSignature(const struct FClientLoginResult& Result, class UObject* customData);
		void DelegateOnSuccessLoginWithFacebook__DelegateSignature(const struct FClientLoginResult& Result, class UObject* customData);
		void DelegateOnSuccessLoginWithEmailAddress__DelegateSignature(const struct FClientLoginResult& Result, class UObject* customData);
		void DelegateOnSuccessLoginWithCustomID__DelegateSignature(const struct FClientLoginResult& Result, class UObject* customData);
		void DelegateOnSuccessLoginWithApple__DelegateSignature(const struct FClientLoginResult& Result, class UObject* customData);
		void DelegateOnSuccessLoginWithAndroidDeviceID__DelegateSignature(const struct FClientLoginResult& Result, class UObject* customData);
		void DelegateOnSuccessLinkXboxAccount__DelegateSignature(const struct FClientLinkXboxAccountResult& Result, class UObject* customData);
		void DelegateOnSuccessLinkWindowsHello__DelegateSignature(const struct FClientLinkWindowsHelloAccountResponse& Result, class UObject* customData);
		void DelegateOnSuccessLinkTwitch__DelegateSignature(const struct FClientLinkTwitchAccountResult& Result, class UObject* customData);
		void DelegateOnSuccessLinkSteamAccount__DelegateSignature(const struct FClientLinkSteamAccountResult& Result, class UObject* customData);
		void DelegateOnSuccessLinkPSNAccount__DelegateSignature(const struct FClientLinkPSNAccountResult& Result, class UObject* customData);
		void DelegateOnSuccessLinkOpenIdConnect__DelegateSignature(const struct FClientEmptyResult& Result, class UObject* customData);
		void DelegateOnSuccessLinkNintendoSwitchDeviceId__DelegateSignature(const struct FClientLinkNintendoSwitchDeviceIdResult& Result, class UObject* customData);
		void DelegateOnSuccessLinkNintendoServiceAccount__DelegateSignature(const struct FClientEmptyResult& Result, class UObject* customData);
		void DelegateOnSuccessLinkKongregate__DelegateSignature(const struct FClientLinkKongregateAccountResult& Result, class UObject* customData);
		void DelegateOnSuccessLinkIOSDeviceID__DelegateSignature(const struct FClientLinkIOSDeviceIDResult& Result, class UObject* customData);
		void DelegateOnSuccessLinkGoogleAccount__DelegateSignature(const struct FClientLinkGoogleAccountResult& Result, class UObject* customData);
		void DelegateOnSuccessLinkGameCenterAccount__DelegateSignature(const struct FClientLinkGameCenterAccountResult& Result, class UObject* customData);
		void DelegateOnSuccessLinkFacebookInstantGamesId__DelegateSignature(const struct FClientLinkFacebookInstantGamesIdResult& Result, class UObject* customData);
		void DelegateOnSuccessLinkFacebookAccount__DelegateSignature(const struct FClientLinkFacebookAccountResult& Result, class UObject* customData);
		void DelegateOnSuccessLinkCustomID__DelegateSignature(const struct FClientLinkCustomIDResult& Result, class UObject* customData);
		void DelegateOnSuccessLinkApple__DelegateSignature(const struct FClientEmptyResult& Result, class UObject* customData);
		void DelegateOnSuccessLinkAndroidDeviceID__DelegateSignature(const struct FClientLinkAndroidDeviceIDResult& Result, class UObject* customData);
		void DelegateOnSuccessGrantCharacterToUser__DelegateSignature(const struct FClientGrantCharacterToUserResult& Result, class UObject* customData);
		void DelegateOnSuccessGetWindowsHelloChallenge__DelegateSignature(const struct FClientGetWindowsHelloChallengeResponse& Result, class UObject* customData);
		void DelegateOnSuccessGetUserReadOnlyData__DelegateSignature(const struct FClientGetUserDataResult& Result, class UObject* customData);
		void DelegateOnSuccessGetUserPublisherReadOnlyData__DelegateSignature(const struct FClientGetUserDataResult& Result, class UObject* customData);
		void DelegateOnSuccessGetUserPublisherData__DelegateSignature(const struct FClientGetUserDataResult& Result, class UObject* customData);
		void DelegateOnSuccessGetUserInventory__DelegateSignature(const struct FClientGetUserInventoryResult& Result, class UObject* customData);
		void DelegateOnSuccessGetUserData__DelegateSignature(const struct FClientGetUserDataResult& Result, class UObject* customData);
		void DelegateOnSuccessGetTradeStatus__DelegateSignature(const struct FClientGetTradeStatusResponse& Result, class UObject* customData);
		void DelegateOnSuccessGetTitlePublicKey__DelegateSignature(const struct FClientGetTitlePublicKeyResult& Result, class UObject* customData);
		void DelegateOnSuccessGetTitleNews__DelegateSignature(const struct FClientGetTitleNewsResult& Result, class UObject* customData);
		void DelegateOnSuccessGetTitleData__DelegateSignature(const struct FClientGetTitleDataResult& Result, class UObject* customData);
		void DelegateOnSuccessGetTime__DelegateSignature(const struct FClientGetTimeResult& Result, class UObject* customData);
		void DelegateOnSuccessGetStoreItems__DelegateSignature(const struct FClientGetStoreItemsResult& Result, class UObject* customData);
		void DelegateOnSuccessGetSharedGroupData__DelegateSignature(const struct FClientGetSharedGroupDataResult& Result, class UObject* customData);
		void DelegateOnSuccessGetPurchase__DelegateSignature(const struct FClientGetPurchaseResult& Result, class UObject* customData);
		void DelegateOnSuccessGetPublisherData__DelegateSignature(const struct FClientGetPublisherDataResult& Result, class UObject* customData);
		void DelegateOnSuccessGetPlayFabIDsFromXboxLiveIDs__DelegateSignature(const struct FClientGetPlayFabIDsFromXboxLiveIDsResult& Result, class UObject* customData);
		void DelegateOnSuccessGetPlayFabIDsFromTwitchIDs__DelegateSignature(const struct FClientGetPlayFabIDsFromTwitchIDsResult& Result, class UObject* customData);
		void DelegateOnSuccessGetPlayFabIDsFromSteamIDs__DelegateSignature(const struct FClientGetPlayFabIDsFromSteamIDsResult& Result, class UObject* customData);
		void DelegateOnSuccessGetPlayFabIDsFromPSNAccountIDs__DelegateSignature(const struct FClientGetPlayFabIDsFromPSNAccountIDsResult& Result, class UObject* customData);
		void DelegateOnSuccessGetPlayFabIDsFromNintendoSwitchDeviceIds__DelegateSignature(const struct FClientGetPlayFabIDsFromNintendoSwitchDeviceIdsResult& Result, class UObject* customData);
		void DelegateOnSuccessGetPlayFabIDsFromKongregateIDs__DelegateSignature(const struct FClientGetPlayFabIDsFromKongregateIDsResult& Result, class UObject* customData);
		void DelegateOnSuccessGetPlayFabIDsFromGoogleIDs__DelegateSignature(const struct FClientGetPlayFabIDsFromGoogleIDsResult& Result, class UObject* customData);
		void DelegateOnSuccessGetPlayFabIDsFromGenericIDs__DelegateSignature(const struct FClientGetPlayFabIDsFromGenericIDsResult& Result, class UObject* customData);
		void DelegateOnSuccessGetPlayFabIDsFromGameCenterIDs__DelegateSignature(const struct FClientGetPlayFabIDsFromGameCenterIDsResult& Result, class UObject* customData);
		void DelegateOnSuccessGetPlayFabIDsFromFacebookInstantGamesIds__DelegateSignature(const struct FClientGetPlayFabIDsFromFacebookInstantGamesIdsResult& Result, class UObject* customData);
		void DelegateOnSuccessGetPlayFabIDsFromFacebookIDs__DelegateSignature(const struct FClientGetPlayFabIDsFromFacebookIDsResult& Result, class UObject* customData);
		void DelegateOnSuccessGetPlayerTrades__DelegateSignature(const struct FClientGetPlayerTradesResponse& Result, class UObject* customData);
		void DelegateOnSuccessGetPlayerTags__DelegateSignature(const struct FClientGetPlayerTagsResult& Result, class UObject* customData);
		void DelegateOnSuccessGetPlayerStatisticVersions__DelegateSignature(const struct FClientGetPlayerStatisticVersionsResult& Result, class UObject* customData);
		void DelegateOnSuccessGetPlayerStatistics__DelegateSignature(const struct FClientGetPlayerStatisticsResult& Result, class UObject* customData);
		void DelegateOnSuccessGetPlayerSegments__DelegateSignature(const struct FClientGetPlayerSegmentsResult& Result, class UObject* customData);
		void DelegateOnSuccessGetPlayerProfile__DelegateSignature(const struct FClientGetPlayerProfileResult& Result, class UObject* customData);
		void DelegateOnSuccessGetPlayerCombinedInfo__DelegateSignature(const struct FClientGetPlayerCombinedInfoResult& Result, class UObject* customData);
		void DelegateOnSuccessGetPhotonAuthenticationToken__DelegateSignature(const struct FClientGetPhotonAuthenticationTokenResult& Result, class UObject* customData);
		void DelegateOnSuccessGetPaymentToken__DelegateSignature(const struct FClientGetPaymentTokenResult& Result, class UObject* customData);
		void DelegateOnSuccessGetLeaderboardForUserCharacters__DelegateSignature(const struct FClientGetLeaderboardForUsersCharactersResult& Result, class UObject* customData);
		void DelegateOnSuccessGetLeaderboardAroundPlayer__DelegateSignature(const struct FClientGetLeaderboardAroundPlayerResult& Result, class UObject* customData);
		void DelegateOnSuccessGetLeaderboardAroundCharacter__DelegateSignature(const struct FClientGetLeaderboardAroundCharacterResult& Result, class UObject* customData);
		void DelegateOnSuccessGetLeaderboard__DelegateSignature(const struct FClientGetLeaderboardResult& Result, class UObject* customData);
		void DelegateOnSuccessGetGameServerRegions__DelegateSignature(const struct FClientGameServerRegionsResult& Result, class UObject* customData);
		void DelegateOnSuccessGetFriendsList__DelegateSignature(const struct FClientGetFriendsListResult& Result, class UObject* customData);
		void DelegateOnSuccessGetFriendLeaderboardAroundPlayer__DelegateSignature(const struct FClientGetFriendLeaderboardAroundPlayerResult& Result, class UObject* customData);
		void DelegateOnSuccessGetFriendLeaderboard__DelegateSignature(const struct FClientGetLeaderboardResult& Result, class UObject* customData);
		void DelegateOnSuccessGetCurrentGames__DelegateSignature(const struct FClientCurrentGamesResult& Result, class UObject* customData);
		void DelegateOnSuccessGetContentDownloadUrl__DelegateSignature(const struct FClientGetContentDownloadUrlResult& Result, class UObject* customData);
		void DelegateOnSuccessGetCharacterStatistics__DelegateSignature(const struct FClientGetCharacterStatisticsResult& Result, class UObject* customData);
		void DelegateOnSuccessGetCharacterReadOnlyData__DelegateSignature(const struct FClientGetCharacterDataResult& Result, class UObject* customData);
		void DelegateOnSuccessGetCharacterLeaderboard__DelegateSignature(const struct FClientGetCharacterLeaderboardResult& Result, class UObject* customData);
		void DelegateOnSuccessGetCharacterInventory__DelegateSignature(const struct FClientGetCharacterInventoryResult& Result, class UObject* customData);
		void DelegateOnSuccessGetCharacterData__DelegateSignature(const struct FClientGetCharacterDataResult& Result, class UObject* customData);
		void DelegateOnSuccessGetCatalogItems__DelegateSignature(const struct FClientGetCatalogItemsResult& Result, class UObject* customData);
		void DelegateOnSuccessGetAllUsersCharacters__DelegateSignature(const struct FClientListUsersCharactersResult& Result, class UObject* customData);
		void DelegateOnSuccessGetAdPlacements__DelegateSignature(const struct FClientGetAdPlacementsResult& Result, class UObject* customData);
		void DelegateOnSuccessGetAccountInfo__DelegateSignature(const struct FClientGetAccountInfoResult& Result, class UObject* customData);
		void DelegateOnSuccessExecuteCloudScript__DelegateSignature(const struct FClientExecuteCloudScriptResult& Result, class UObject* customData);
		void DelegateOnSuccessCreateSharedGroup__DelegateSignature(const struct FClientCreateSharedGroupResult& Result, class UObject* customData);
		void DelegateOnSuccessConsumeXboxEntitlements__DelegateSignature(const struct FClientConsumeXboxEntitlementsResult& Result, class UObject* customData);
		void DelegateOnSuccessConsumePSNEntitlements__DelegateSignature(const struct FClientConsumePSNEntitlementsResult& Result, class UObject* customData);
		void DelegateOnSuccessConsumePS5Entitlements__DelegateSignature(const struct FClientConsumePS5EntitlementsResult& Result, class UObject* customData);
		void DelegateOnSuccessConsumeMicrosoftStoreEntitlements__DelegateSignature(const struct FClientConsumeMicrosoftStoreEntitlementsResponse& Result, class UObject* customData);
		void DelegateOnSuccessConsumeItem__DelegateSignature(const struct FClientConsumeItemResult& Result, class UObject* customData);
		void DelegateOnSuccessConfirmPurchase__DelegateSignature(const struct FClientConfirmPurchaseResult& Result, class UObject* customData);
		void DelegateOnSuccessCancelTrade__DelegateSignature(const struct FClientCancelTradeResponse& Result, class UObject* customData);
		void DelegateOnSuccessAttributeInstall__DelegateSignature(const struct FClientAttributeInstallResult& Result, class UObject* customData);
		void DelegateOnSuccessAndroidDevicePushNotificationRegistration__DelegateSignature(const struct FClientAndroidDevicePushNotificationRegistrationResult& Result, class UObject* customData);
		void DelegateOnSuccessAddUserVirtualCurrency__DelegateSignature(const struct FClientModifyUserVirtualCurrencyResult& Result, class UObject* customData);
		void DelegateOnSuccessAddUsernamePassword__DelegateSignature(const struct FClientAddUsernamePasswordResult& Result, class UObject* customData);
		void DelegateOnSuccessAddSharedGroupMembers__DelegateSignature(const struct FClientAddSharedGroupMembersResult& Result, class UObject* customData);
		void DelegateOnSuccessAddOrUpdateContactEmail__DelegateSignature(const struct FClientAddOrUpdateContactEmailResult& Result, class UObject* customData);
		void DelegateOnSuccessAddGenericID__DelegateSignature(const struct FClientAddGenericIDResult& Result, class UObject* customData);
		void DelegateOnSuccessAddFriend__DelegateSignature(const struct FClientAddFriendResult& Result, class UObject* customData);
		void DelegateOnSuccessAcceptTrade__DelegateSignature(const struct FClientAcceptTradeResponse& Result, class UObject* customData);
		void DelegateOnFailurePlayFabError__DelegateSignature(const struct FPlayFabError& Error, class UObject* customData);
		class UPlayFabClientAPI* CreateSharedGroup(const struct FClientCreateSharedGroupRequest& Request, const class FScriptDelegate& onSuccess, const class FScriptDelegate& onFailure, class UObject* customData);
		class UPlayFabClientAPI* ConsumeXboxEntitlements(const struct FClientConsumeXboxEntitlementsRequest& Request, const class FScriptDelegate& onSuccess, const class FScriptDelegate& onFailure, class UObject* customData);
		class UPlayFabClientAPI* ConsumePSNEntitlements(const struct FClientConsumePSNEntitlementsRequest& Request, const class FScriptDelegate& onSuccess, const class FScriptDelegate& onFailure, class UObject* customData);
		class UPlayFabClientAPI* ConsumePS5Entitlements(const struct FClientConsumePS5EntitlementsRequest& Request, const class FScriptDelegate& onSuccess, const class FScriptDelegate& onFailure, class UObject* customData);
		class UPlayFabClientAPI* ConsumeMicrosoftStoreEntitlements(const struct FClientConsumeMicrosoftStoreEntitlementsRequest& Request, const class FScriptDelegate& onSuccess, const class FScriptDelegate& onFailure, class UObject* customData);
		class UPlayFabClientAPI* ConsumeItem(const struct FClientConsumeItemRequest& Request, const class FScriptDelegate& onSuccess, const class FScriptDelegate& onFailure, class UObject* customData);
		class UPlayFabClientAPI* ConfirmPurchase(const struct FClientConfirmPurchaseRequest& Request, const class FScriptDelegate& onSuccess, const class FScriptDelegate& onFailure, class UObject* customData);
		class UPlayFabClientAPI* CancelTrade(const struct FClientCancelTradeRequest& Request, const class FScriptDelegate& onSuccess, const class FScriptDelegate& onFailure, class UObject* customData);
		class UPlayFabClientAPI* AttributeInstall(const struct FClientAttributeInstallRequest& Request, const class FScriptDelegate& onSuccess, const class FScriptDelegate& onFailure, class UObject* customData);
		class UPlayFabClientAPI* AndroidDevicePushNotificationRegistration(const struct FClientAndroidDevicePushNotificationRegistrationRequest& Request, const class FScriptDelegate& onSuccess, const class FScriptDelegate& onFailure, class UObject* customData);
		class UPlayFabClientAPI* AddUserVirtualCurrency(const struct FClientAddUserVirtualCurrencyRequest& Request, const class FScriptDelegate& onSuccess, const class FScriptDelegate& onFailure, class UObject* customData);
		class UPlayFabClientAPI* AddUsernamePassword(const struct FClientAddUsernamePasswordRequest& Request, const class FScriptDelegate& onSuccess, const class FScriptDelegate& onFailure, class UObject* customData);
		class UPlayFabClientAPI* AddSharedGroupMembers(const struct FClientAddSharedGroupMembersRequest& Request, const class FScriptDelegate& onSuccess, const class FScriptDelegate& onFailure, class UObject* customData);
		class UPlayFabClientAPI* AddOrUpdateContactEmail(const struct FClientAddOrUpdateContactEmailRequest& Request, const class FScriptDelegate& onSuccess, const class FScriptDelegate& onFailure, class UObject* customData);
		class UPlayFabClientAPI* AddGenericID(const struct FClientAddGenericIDRequest& Request, const class FScriptDelegate& onSuccess, const class FScriptDelegate& onFailure, class UObject* customData);
		class UPlayFabClientAPI* AddFriend(const struct FClientAddFriendRequest& Request, const class FScriptDelegate& onSuccess, const class FScriptDelegate& onFailure, class UObject* customData);
		class UPlayFabClientAPI* AcceptTrade(const struct FClientAcceptTradeRequest& Request, const class FScriptDelegate& onSuccess, const class FScriptDelegate& onFailure, class UObject* customData);
		static UClass* StaticClass();
	};

	/**
	 * Class PlayFab.PlayFabClientModelDecoder
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UPlayFabClientModelDecoder : public UBlueprintFunctionLibrary
	{
	public:
		struct FClientWriteEventResponse decodeWriteEventResponseResponse(class UPlayFabJsonObject* response);
		struct FClientValidateWindowsReceiptResult decodeValidateWindowsReceiptResultResponse(class UPlayFabJsonObject* response);
		struct FClientValidateIOSReceiptResult decodeValidateIOSReceiptResultResponse(class UPlayFabJsonObject* response);
		struct FClientValidateGooglePlayPurchaseResult decodeValidateGooglePlayPurchaseResultResponse(class UPlayFabJsonObject* response);
		struct FClientValidateAmazonReceiptResult decodeValidateAmazonReceiptResultResponse(class UPlayFabJsonObject* response);
		struct FClientUpdateUserTitleDisplayNameResult decodeUpdateUserTitleDisplayNameResultResponse(class UPlayFabJsonObject* response);
		struct FClientUpdateUserDataResult decodeUpdateUserDataResultResponse(class UPlayFabJsonObject* response);
		struct FClientUpdateSharedGroupDataResult decodeUpdateSharedGroupDataResultResponse(class UPlayFabJsonObject* response);
		struct FClientUpdatePlayerStatisticsResult decodeUpdatePlayerStatisticsResultResponse(class UPlayFabJsonObject* response);
		struct FClientUpdateCharacterStatisticsResult decodeUpdateCharacterStatisticsResultResponse(class UPlayFabJsonObject* response);
		struct FClientUpdateCharacterDataResult decodeUpdateCharacterDataResultResponse(class UPlayFabJsonObject* response);
		struct FClientUnlockContainerItemResult decodeUnlockContainerItemResultResponse(class UPlayFabJsonObject* response);
		struct FClientUnlinkXboxAccountResult decodeUnlinkXboxAccountResultResponse(class UPlayFabJsonObject* response);
		struct FClientUnlinkWindowsHelloAccountResponse decodeUnlinkWindowsHelloAccountResponseResponse(class UPlayFabJsonObject* response);
		struct FClientUnlinkTwitchAccountResult decodeUnlinkTwitchAccountResultResponse(class UPlayFabJsonObject* response);
		struct FClientUnlinkSteamAccountResult decodeUnlinkSteamAccountResultResponse(class UPlayFabJsonObject* response);
		struct FClientUnlinkPSNAccountResult decodeUnlinkPSNAccountResultResponse(class UPlayFabJsonObject* response);
		struct FClientUnlinkNintendoSwitchDeviceIdResult decodeUnlinkNintendoSwitchDeviceIdResultResponse(class UPlayFabJsonObject* response);
		struct FClientUnlinkKongregateAccountResult decodeUnlinkKongregateAccountResultResponse(class UPlayFabJsonObject* response);
		struct FClientUnlinkIOSDeviceIDResult decodeUnlinkIOSDeviceIDResultResponse(class UPlayFabJsonObject* response);
		struct FClientUnlinkGoogleAccountResult decodeUnlinkGoogleAccountResultResponse(class UPlayFabJsonObject* response);
		struct FClientUnlinkGameCenterAccountResult decodeUnlinkGameCenterAccountResultResponse(class UPlayFabJsonObject* response);
		struct FClientUnlinkFacebookInstantGamesIdResult decodeUnlinkFacebookInstantGamesIdResultResponse(class UPlayFabJsonObject* response);
		struct FClientUnlinkFacebookAccountResult decodeUnlinkFacebookAccountResultResponse(class UPlayFabJsonObject* response);
		struct FClientUnlinkCustomIDResult decodeUnlinkCustomIDResultResponse(class UPlayFabJsonObject* response);
		struct FClientUnlinkAndroidDeviceIDResult decodeUnlinkAndroidDeviceIDResultResponse(class UPlayFabJsonObject* response);
		struct FClientStartPurchaseResult decodeStartPurchaseResultResponse(class UPlayFabJsonObject* response);
		struct FClientStartGameResult decodeStartGameResultResponse(class UPlayFabJsonObject* response);
		struct FClientSetPlayerSecretResult decodeSetPlayerSecretResultResponse(class UPlayFabJsonObject* response);
		struct FClientSetFriendTagsResult decodeSetFriendTagsResultResponse(class UPlayFabJsonObject* response);
		struct FClientSendAccountRecoveryEmailResult decodeSendAccountRecoveryEmailResultResponse(class UPlayFabJsonObject* response);
		struct FClientRewardAdActivityResult decodeRewardAdActivityResultResponse(class UPlayFabJsonObject* response);
		struct FClientRestoreIOSPurchasesResult decodeRestoreIOSPurchasesResultResponse(class UPlayFabJsonObject* response);
		struct FClientReportPlayerClientResult decodeReportPlayerClientResultResponse(class UPlayFabJsonObject* response);
		struct FClientReportAdActivityResult decodeReportAdActivityResultResponse(class UPlayFabJsonObject* response);
		struct FClientRemoveSharedGroupMembersResult decodeRemoveSharedGroupMembersResultResponse(class UPlayFabJsonObject* response);
		struct FClientRemoveGenericIDResult decodeRemoveGenericIDResultResponse(class UPlayFabJsonObject* response);
		struct FClientRemoveFriendResult decodeRemoveFriendResultResponse(class UPlayFabJsonObject* response);
		struct FClientRemoveContactEmailResult decodeRemoveContactEmailResultResponse(class UPlayFabJsonObject* response);
		struct FClientRegisterPlayFabUserResult decodeRegisterPlayFabUserResultResponse(class UPlayFabJsonObject* response);
		struct FClientRegisterForIOSPushNotificationResult decodeRegisterForIOSPushNotificationResultResponse(class UPlayFabJsonObject* response);
		struct FClientRedeemCouponResult decodeRedeemCouponResultResponse(class UPlayFabJsonObject* response);
		struct FClientPurchaseItemResult decodePurchaseItemResultResponse(class UPlayFabJsonObject* response);
		struct FClientPayForPurchaseResult decodePayForPurchaseResultResponse(class UPlayFabJsonObject* response);
		struct FClientOpenTradeResponse decodeOpenTradeResponseResponse(class UPlayFabJsonObject* response);
		struct FClientModifyUserVirtualCurrencyResult decodeModifyUserVirtualCurrencyResultResponse(class UPlayFabJsonObject* response);
		struct FClientMatchmakeResult decodeMatchmakeResultResponse(class UPlayFabJsonObject* response);
		struct FClientLoginResult decodeLoginResultResponse(class UPlayFabJsonObject* response);
		struct FClientListUsersCharactersResult decodeListUsersCharactersResultResponse(class UPlayFabJsonObject* response);
		struct FClientLinkXboxAccountResult decodeLinkXboxAccountResultResponse(class UPlayFabJsonObject* response);
		struct FClientLinkWindowsHelloAccountResponse decodeLinkWindowsHelloAccountResponseResponse(class UPlayFabJsonObject* response);
		struct FClientLinkTwitchAccountResult decodeLinkTwitchAccountResultResponse(class UPlayFabJsonObject* response);
		struct FClientLinkSteamAccountResult decodeLinkSteamAccountResultResponse(class UPlayFabJsonObject* response);
		struct FClientLinkPSNAccountResult decodeLinkPSNAccountResultResponse(class UPlayFabJsonObject* response);
		struct FClientLinkNintendoSwitchDeviceIdResult decodeLinkNintendoSwitchDeviceIdResultResponse(class UPlayFabJsonObject* response);
		struct FClientLinkKongregateAccountResult decodeLinkKongregateAccountResultResponse(class UPlayFabJsonObject* response);
		struct FClientLinkIOSDeviceIDResult decodeLinkIOSDeviceIDResultResponse(class UPlayFabJsonObject* response);
		struct FClientLinkGoogleAccountResult decodeLinkGoogleAccountResultResponse(class UPlayFabJsonObject* response);
		struct FClientLinkGameCenterAccountResult decodeLinkGameCenterAccountResultResponse(class UPlayFabJsonObject* response);
		struct FClientLinkFacebookInstantGamesIdResult decodeLinkFacebookInstantGamesIdResultResponse(class UPlayFabJsonObject* response);
		struct FClientLinkFacebookAccountResult decodeLinkFacebookAccountResultResponse(class UPlayFabJsonObject* response);
		struct FClientLinkCustomIDResult decodeLinkCustomIDResultResponse(class UPlayFabJsonObject* response);
		struct FClientLinkAndroidDeviceIDResult decodeLinkAndroidDeviceIDResultResponse(class UPlayFabJsonObject* response);
		struct FClientGrantCharacterToUserResult decodeGrantCharacterToUserResultResponse(class UPlayFabJsonObject* response);
		struct FClientGetWindowsHelloChallengeResponse decodeGetWindowsHelloChallengeResponseResponse(class UPlayFabJsonObject* response);
		struct FClientGetUserInventoryResult decodeGetUserInventoryResultResponse(class UPlayFabJsonObject* response);
		struct FClientGetUserDataResult decodeGetUserDataResultResponse(class UPlayFabJsonObject* response);
		struct FClientGetTradeStatusResponse decodeGetTradeStatusResponseResponse(class UPlayFabJsonObject* response);
		struct FClientGetTitlePublicKeyResult decodeGetTitlePublicKeyResultResponse(class UPlayFabJsonObject* response);
		struct FClientGetTitleNewsResult decodeGetTitleNewsResultResponse(class UPlayFabJsonObject* response);
		struct FClientGetTitleDataResult decodeGetTitleDataResultResponse(class UPlayFabJsonObject* response);
		struct FClientGetTimeResult decodeGetTimeResultResponse(class UPlayFabJsonObject* response);
		struct FClientGetStoreItemsResult decodeGetStoreItemsResultResponse(class UPlayFabJsonObject* response);
		struct FClientGetSharedGroupDataResult decodeGetSharedGroupDataResultResponse(class UPlayFabJsonObject* response);
		struct FClientGetPurchaseResult decodeGetPurchaseResultResponse(class UPlayFabJsonObject* response);
		struct FClientGetPublisherDataResult decodeGetPublisherDataResultResponse(class UPlayFabJsonObject* response);
		struct FClientGetPlayFabIDsFromXboxLiveIDsResult decodeGetPlayFabIDsFromXboxLiveIDsResultResponse(class UPlayFabJsonObject* response);
		struct FClientGetPlayFabIDsFromTwitchIDsResult decodeGetPlayFabIDsFromTwitchIDsResultResponse(class UPlayFabJsonObject* response);
		struct FClientGetPlayFabIDsFromSteamIDsResult decodeGetPlayFabIDsFromSteamIDsResultResponse(class UPlayFabJsonObject* response);
		struct FClientGetPlayFabIDsFromPSNAccountIDsResult decodeGetPlayFabIDsFromPSNAccountIDsResultResponse(class UPlayFabJsonObject* response);
		struct FClientGetPlayFabIDsFromNintendoSwitchDeviceIdsResult decodeGetPlayFabIDsFromNintendoSwitchDeviceIdsResultResponse(class UPlayFabJsonObject* response);
		struct FClientGetPlayFabIDsFromKongregateIDsResult decodeGetPlayFabIDsFromKongregateIDsResultResponse(class UPlayFabJsonObject* response);
		struct FClientGetPlayFabIDsFromGoogleIDsResult decodeGetPlayFabIDsFromGoogleIDsResultResponse(class UPlayFabJsonObject* response);
		struct FClientGetPlayFabIDsFromGenericIDsResult decodeGetPlayFabIDsFromGenericIDsResultResponse(class UPlayFabJsonObject* response);
		struct FClientGetPlayFabIDsFromGameCenterIDsResult decodeGetPlayFabIDsFromGameCenterIDsResultResponse(class UPlayFabJsonObject* response);
		struct FClientGetPlayFabIDsFromFacebookInstantGamesIdsResult decodeGetPlayFabIDsFromFacebookInstantGamesIdsResultResponse(class UPlayFabJsonObject* response);
		struct FClientGetPlayFabIDsFromFacebookIDsResult decodeGetPlayFabIDsFromFacebookIDsResultResponse(class UPlayFabJsonObject* response);
		struct FClientGetPlayerTradesResponse decodeGetPlayerTradesResponseResponse(class UPlayFabJsonObject* response);
		struct FClientGetPlayerTagsResult decodeGetPlayerTagsResultResponse(class UPlayFabJsonObject* response);
		struct FClientGetPlayerStatisticVersionsResult decodeGetPlayerStatisticVersionsResultResponse(class UPlayFabJsonObject* response);
		struct FClientGetPlayerStatisticsResult decodeGetPlayerStatisticsResultResponse(class UPlayFabJsonObject* response);
		struct FClientGetPlayerSegmentsResult decodeGetPlayerSegmentsResultResponse(class UPlayFabJsonObject* response);
		struct FClientGetPlayerProfileResult decodeGetPlayerProfileResultResponse(class UPlayFabJsonObject* response);
		struct FClientGetPlayerCombinedInfoResult decodeGetPlayerCombinedInfoResultResponse(class UPlayFabJsonObject* response);
		struct FClientGetPhotonAuthenticationTokenResult decodeGetPhotonAuthenticationTokenResultResponse(class UPlayFabJsonObject* response);
		struct FClientGetPaymentTokenResult decodeGetPaymentTokenResultResponse(class UPlayFabJsonObject* response);
		struct FClientGetLeaderboardResult decodeGetLeaderboardResultResponse(class UPlayFabJsonObject* response);
		struct FClientGetLeaderboardForUsersCharactersResult decodeGetLeaderboardForUsersCharactersResultResponse(class UPlayFabJsonObject* response);
		struct FClientGetLeaderboardAroundPlayerResult decodeGetLeaderboardAroundPlayerResultResponse(class UPlayFabJsonObject* response);
		struct FClientGetLeaderboardAroundCharacterResult decodeGetLeaderboardAroundCharacterResultResponse(class UPlayFabJsonObject* response);
		struct FClientGetFriendsListResult decodeGetFriendsListResultResponse(class UPlayFabJsonObject* response);
		struct FClientGetFriendLeaderboardAroundPlayerResult decodeGetFriendLeaderboardAroundPlayerResultResponse(class UPlayFabJsonObject* response);
		struct FClientGetContentDownloadUrlResult decodeGetContentDownloadUrlResultResponse(class UPlayFabJsonObject* response);
		struct FClientGetCharacterStatisticsResult decodeGetCharacterStatisticsResultResponse(class UPlayFabJsonObject* response);
		struct FClientGetCharacterLeaderboardResult decodeGetCharacterLeaderboardResultResponse(class UPlayFabJsonObject* response);
		struct FClientGetCharacterInventoryResult decodeGetCharacterInventoryResultResponse(class UPlayFabJsonObject* response);
		struct FClientGetCharacterDataResult decodeGetCharacterDataResultResponse(class UPlayFabJsonObject* response);
		struct FClientGetCatalogItemsResult decodeGetCatalogItemsResultResponse(class UPlayFabJsonObject* response);
		struct FClientGetAdPlacementsResult decodeGetAdPlacementsResultResponse(class UPlayFabJsonObject* response);
		struct FClientGetAccountInfoResult decodeGetAccountInfoResultResponse(class UPlayFabJsonObject* response);
		struct FClientGameServerRegionsResult decodeGameServerRegionsResultResponse(class UPlayFabJsonObject* response);
		struct FClientExecuteCloudScriptResult decodeExecuteCloudScriptResultResponse(class UPlayFabJsonObject* response);
		struct FClientEmptyResult decodeEmptyResultResponse(class UPlayFabJsonObject* response);
		struct FClientEmptyResponse decodeEmptyResponseResponse(class UPlayFabJsonObject* response);
		struct FClientCurrentGamesResult decodeCurrentGamesResultResponse(class UPlayFabJsonObject* response);
		struct FClientCreateSharedGroupResult decodeCreateSharedGroupResultResponse(class UPlayFabJsonObject* response);
		struct FClientConsumeXboxEntitlementsResult decodeConsumeXboxEntitlementsResultResponse(class UPlayFabJsonObject* response);
		struct FClientConsumePSNEntitlementsResult decodeConsumePSNEntitlementsResultResponse(class UPlayFabJsonObject* response);
		struct FClientConsumePS5EntitlementsResult decodeConsumePS5EntitlementsResultResponse(class UPlayFabJsonObject* response);
		struct FClientConsumeMicrosoftStoreEntitlementsResponse decodeConsumeMicrosoftStoreEntitlementsResponseResponse(class UPlayFabJsonObject* response);
		struct FClientConsumeItemResult decodeConsumeItemResultResponse(class UPlayFabJsonObject* response);
		struct FClientConfirmPurchaseResult decodeConfirmPurchaseResultResponse(class UPlayFabJsonObject* response);
		struct FClientCancelTradeResponse decodeCancelTradeResponseResponse(class UPlayFabJsonObject* response);
		struct FClientAttributeInstallResult decodeAttributeInstallResultResponse(class UPlayFabJsonObject* response);
		struct FClientAndroidDevicePushNotificationRegistrationResult decodeAndroidDevicePushNotificationRegistrationResultResponse(class UPlayFabJsonObject* response);
		struct FClientAddUsernamePasswordResult decodeAddUsernamePasswordResultResponse(class UPlayFabJsonObject* response);
		struct FClientAddSharedGroupMembersResult decodeAddSharedGroupMembersResultResponse(class UPlayFabJsonObject* response);
		struct FClientAddOrUpdateContactEmailResult decodeAddOrUpdateContactEmailResultResponse(class UPlayFabJsonObject* response);
		struct FClientAddGenericIDResult decodeAddGenericIDResultResponse(class UPlayFabJsonObject* response);
		struct FClientAddFriendResult decodeAddFriendResultResponse(class UPlayFabJsonObject* response);
		struct FClientAcceptTradeResponse decodeAcceptTradeResponseResponse(class UPlayFabJsonObject* response);
		static UClass* StaticClass();
	};

	/**
	 * Class PlayFab.PlayFabCloudScriptAPI
	 * Size -> 0x0190 (FullSize[0x01C0] - InheritedSize[0x0030])
	 */
	class UPlayFabCloudScriptAPI : public UOnlineBlueprintCallProxyBase
	{
	public:
		class FScriptMulticastDelegate                             OnPlayFabResponse;                                       // 0x0030(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_3QTZ[0x118];                                 // 0x0040(0x0118) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UPlayFabAuthenticationContext*                       CallAuthenticationContext;                               // 0x0158(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UPlayFabJsonObject*                                  RequestJsonObj;                                          // 0x0160(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UPlayFabJsonObject*                                  ResponseJsonObj;                                         // 0x0168(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_DVJ2[0x50];                                  // 0x0170(0x0050) MISSED OFFSET (PADDING)

	public:
		class UPlayFabCloudScriptAPI* UnregisterFunction(const struct FCloudScriptUnregisterFunctionRequest& Request, const class FScriptDelegate& onSuccess, const class FScriptDelegate& onFailure, class UObject* customData);
		class UPlayFabCloudScriptAPI* RegisterQueuedFunction(const struct FCloudScriptRegisterQueuedFunctionRequest& Request, const class FScriptDelegate& onSuccess, const class FScriptDelegate& onFailure, class UObject* customData);
		class UPlayFabCloudScriptAPI* RegisterHttpFunction(const struct FCloudScriptRegisterHttpFunctionRequest& Request, const class FScriptDelegate& onSuccess, const class FScriptDelegate& onFailure, class UObject* customData);
		class UPlayFabCloudScriptAPI* PostFunctionResultForScheduledTask(const struct FCloudScriptPostFunctionResultForScheduledTaskRequest& Request, const class FScriptDelegate& onSuccess, const class FScriptDelegate& onFailure, class UObject* customData);
		class UPlayFabCloudScriptAPI* PostFunctionResultForPlayerTriggeredAction(const struct FCloudScriptPostFunctionResultForPlayerTriggeredActionRequest& Request, const class FScriptDelegate& onSuccess, const class FScriptDelegate& onFailure, class UObject* customData);
		class UPlayFabCloudScriptAPI* PostFunctionResultForFunctionExecution(const struct FCloudScriptPostFunctionResultForFunctionExecutionRequest& Request, const class FScriptDelegate& onSuccess, const class FScriptDelegate& onFailure, class UObject* customData);
		class UPlayFabCloudScriptAPI* PostFunctionResultForEntityTriggeredAction(const struct FCloudScriptPostFunctionResultForEntityTriggeredActionRequest& Request, const class FScriptDelegate& onSuccess, const class FScriptDelegate& onFailure, class UObject* customData);
		class UPlayFabCloudScriptAPI* ListQueuedFunctions(const struct FCloudScriptListFunctionsRequest& Request, const class FScriptDelegate& onSuccess, const class FScriptDelegate& onFailure, class UObject* customData);
		class UPlayFabCloudScriptAPI* ListHttpFunctions(const struct FCloudScriptListFunctionsRequest& Request, const class FScriptDelegate& onSuccess, const class FScriptDelegate& onFailure, class UObject* customData);
		class UPlayFabCloudScriptAPI* ListFunctions(const struct FCloudScriptListFunctionsRequest& Request, const class FScriptDelegate& onSuccess, const class FScriptDelegate& onFailure, class UObject* customData);
		void HelperUnregisterFunction(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
		void HelperRegisterQueuedFunction(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
		void HelperRegisterHttpFunction(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
		void HelperPostFunctionResultForScheduledTask(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
		void HelperPostFunctionResultForPlayerTriggeredAction(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
		void HelperPostFunctionResultForFunctionExecution(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
		void HelperPostFunctionResultForEntityTriggeredAction(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
		void HelperListQueuedFunctions(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
		void HelperListHttpFunctions(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
		void HelperListFunctions(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
		void HelperExecuteFunction(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
		void HelperExecuteEntityCloudScript(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
		class UPlayFabCloudScriptAPI* ExecuteFunction(const struct FCloudScriptExecuteFunctionRequest& Request, const class FScriptDelegate& onSuccess, const class FScriptDelegate& onFailure, class UObject* customData);
		class UPlayFabCloudScriptAPI* ExecuteEntityCloudScript(const struct FCloudScriptExecuteEntityCloudScriptRequest& Request, const class FScriptDelegate& onSuccess, const class FScriptDelegate& onFailure, class UObject* customData);
		void DelegateOnSuccessUnregisterFunction__DelegateSignature(const struct FCloudScriptEmptyResult& Result, class UObject* customData);
		void DelegateOnSuccessRegisterQueuedFunction__DelegateSignature(const struct FCloudScriptEmptyResult& Result, class UObject* customData);
		void DelegateOnSuccessRegisterHttpFunction__DelegateSignature(const struct FCloudScriptEmptyResult& Result, class UObject* customData);
		void DelegateOnSuccessPostFunctionResultForScheduledTask__DelegateSignature(const struct FCloudScriptEmptyResult& Result, class UObject* customData);
		void DelegateOnSuccessPostFunctionResultForPlayerTriggeredAction__DelegateSignature(const struct FCloudScriptEmptyResult& Result, class UObject* customData);
		void DelegateOnSuccessPostFunctionResultForFunctionExecution__DelegateSignature(const struct FCloudScriptEmptyResult& Result, class UObject* customData);
		void DelegateOnSuccessPostFunctionResultForEntityTriggeredAction__DelegateSignature(const struct FCloudScriptEmptyResult& Result, class UObject* customData);
		void DelegateOnSuccessListQueuedFunctions__DelegateSignature(const struct FCloudScriptListQueuedFunctionsResult& Result, class UObject* customData);
		void DelegateOnSuccessListHttpFunctions__DelegateSignature(const struct FCloudScriptListHttpFunctionsResult& Result, class UObject* customData);
		void DelegateOnSuccessListFunctions__DelegateSignature(const struct FCloudScriptListFunctionsResult& Result, class UObject* customData);
		void DelegateOnSuccessExecuteFunction__DelegateSignature(const struct FCloudScriptExecuteFunctionResult& Result, class UObject* customData);
		void DelegateOnSuccessExecuteEntityCloudScript__DelegateSignature(const struct FCloudScriptExecuteCloudScriptResult& Result, class UObject* customData);
		void DelegateOnFailurePlayFabError__DelegateSignature(const struct FPlayFabError& Error, class UObject* customData);
		static UClass* StaticClass();
	};

	/**
	 * Class PlayFab.PlayFabCloudScriptModelDecoder
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UPlayFabCloudScriptModelDecoder : public UBlueprintFunctionLibrary
	{
	public:
		struct FCloudScriptListQueuedFunctionsResult decodeListQueuedFunctionsResultResponse(class UPlayFabJsonObject* response);
		struct FCloudScriptListHttpFunctionsResult decodeListHttpFunctionsResultResponse(class UPlayFabJsonObject* response);
		struct FCloudScriptListFunctionsResult decodeListFunctionsResultResponse(class UPlayFabJsonObject* response);
		struct FCloudScriptExecuteFunctionResult decodeExecuteFunctionResultResponse(class UPlayFabJsonObject* response);
		struct FCloudScriptExecuteCloudScriptResult decodeExecuteCloudScriptResultResponse(class UPlayFabJsonObject* response);
		struct FCloudScriptEmptyResult decodeEmptyResultResponse(class UPlayFabJsonObject* response);
		static UClass* StaticClass();
	};

	/**
	 * Class PlayFab.PlayFabDataAPI
	 * Size -> 0x0130 (FullSize[0x0160] - InheritedSize[0x0030])
	 */
	class UPlayFabDataAPI : public UOnlineBlueprintCallProxyBase
	{
	public:
		class FScriptMulticastDelegate                             OnPlayFabResponse;                                       // 0x0030(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_HZIJ[0xB8];                                  // 0x0040(0x00B8) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UPlayFabAuthenticationContext*                       CallAuthenticationContext;                               // 0x00F8(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UPlayFabJsonObject*                                  RequestJsonObj;                                          // 0x0100(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UPlayFabJsonObject*                                  ResponseJsonObj;                                         // 0x0108(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_MWHZ[0x50];                                  // 0x0110(0x0050) MISSED OFFSET (PADDING)

	public:
		class UPlayFabDataAPI* SetObjects(const struct FDataSetObjectsRequest& Request, const class FScriptDelegate& onSuccess, const class FScriptDelegate& onFailure, class UObject* customData);
		class UPlayFabDataAPI* InitiateFileUploads(const struct FDataInitiateFileUploadsRequest& Request, const class FScriptDelegate& onSuccess, const class FScriptDelegate& onFailure, class UObject* customData);
		void HelperSetObjects(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
		void HelperInitiateFileUploads(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
		void HelperGetObjects(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
		void HelperGetFiles(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
		void HelperFinalizeFileUploads(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
		void HelperDeleteFiles(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
		void HelperAbortFileUploads(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
		class UPlayFabDataAPI* GetObjects(const struct FDataGetObjectsRequest& Request, const class FScriptDelegate& onSuccess, const class FScriptDelegate& onFailure, class UObject* customData);
		class UPlayFabDataAPI* GetFiles(const struct FDataGetFilesRequest& Request, const class FScriptDelegate& onSuccess, const class FScriptDelegate& onFailure, class UObject* customData);
		class UPlayFabDataAPI* FinalizeFileUploads(const struct FDataFinalizeFileUploadsRequest& Request, const class FScriptDelegate& onSuccess, const class FScriptDelegate& onFailure, class UObject* customData);
		class UPlayFabDataAPI* DeleteFiles(const struct FDataDeleteFilesRequest& Request, const class FScriptDelegate& onSuccess, const class FScriptDelegate& onFailure, class UObject* customData);
		void DelegateOnSuccessSetObjects__DelegateSignature(const struct FDataSetObjectsResponse& Result, class UObject* customData);
		void DelegateOnSuccessInitiateFileUploads__DelegateSignature(const struct FDataInitiateFileUploadsResponse& Result, class UObject* customData);
		void DelegateOnSuccessGetObjects__DelegateSignature(const struct FDataGetObjectsResponse& Result, class UObject* customData);
		void DelegateOnSuccessGetFiles__DelegateSignature(const struct FDataGetFilesResponse& Result, class UObject* customData);
		void DelegateOnSuccessFinalizeFileUploads__DelegateSignature(const struct FDataFinalizeFileUploadsResponse& Result, class UObject* customData);
		void DelegateOnSuccessDeleteFiles__DelegateSignature(const struct FDataDeleteFilesResponse& Result, class UObject* customData);
		void DelegateOnSuccessAbortFileUploads__DelegateSignature(const struct FDataAbortFileUploadsResponse& Result, class UObject* customData);
		void DelegateOnFailurePlayFabError__DelegateSignature(const struct FPlayFabError& Error, class UObject* customData);
		class UPlayFabDataAPI* AbortFileUploads(const struct FDataAbortFileUploadsRequest& Request, const class FScriptDelegate& onSuccess, const class FScriptDelegate& onFailure, class UObject* customData);
		static UClass* StaticClass();
	};

	/**
	 * Class PlayFab.PlayFabDataModelDecoder
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UPlayFabDataModelDecoder : public UBlueprintFunctionLibrary
	{
	public:
		struct FDataSetObjectsResponse decodeSetObjectsResponseResponse(class UPlayFabJsonObject* response);
		struct FDataInitiateFileUploadsResponse decodeInitiateFileUploadsResponseResponse(class UPlayFabJsonObject* response);
		struct FDataGetObjectsResponse decodeGetObjectsResponseResponse(class UPlayFabJsonObject* response);
		struct FDataGetFilesResponse decodeGetFilesResponseResponse(class UPlayFabJsonObject* response);
		struct FDataFinalizeFileUploadsResponse decodeFinalizeFileUploadsResponseResponse(class UPlayFabJsonObject* response);
		struct FDataDeleteFilesResponse decodeDeleteFilesResponseResponse(class UPlayFabJsonObject* response);
		struct FDataAbortFileUploadsResponse decodeAbortFileUploadsResponseResponse(class UPlayFabJsonObject* response);
		static UClass* StaticClass();
	};

	/**
	 * Class PlayFab.PlayFabEventsAPI
	 * Size -> 0x00E0 (FullSize[0x0110] - InheritedSize[0x0030])
	 */
	class UPlayFabEventsAPI : public UOnlineBlueprintCallProxyBase
	{
	public:
		class FScriptMulticastDelegate                             OnPlayFabResponse;                                       // 0x0030(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_I7YZ[0x68];                                  // 0x0040(0x0068) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UPlayFabAuthenticationContext*                       CallAuthenticationContext;                               // 0x00A8(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UPlayFabJsonObject*                                  RequestJsonObj;                                          // 0x00B0(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UPlayFabJsonObject*                                  ResponseJsonObj;                                         // 0x00B8(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_XANP[0x50];                                  // 0x00C0(0x0050) MISSED OFFSET (PADDING)

	public:
		class UPlayFabEventsAPI* WriteTelemetryEvents(const struct FEventsWriteEventsRequest& Request, const class FScriptDelegate& onSuccess, const class FScriptDelegate& onFailure, class UObject* customData);
		class UPlayFabEventsAPI* WriteEvents(const struct FEventsWriteEventsRequest& Request, const class FScriptDelegate& onSuccess, const class FScriptDelegate& onFailure, class UObject* customData);
		void HelperWriteTelemetryEvents(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
		void HelperWriteEvents(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
		void DelegateOnSuccessWriteTelemetryEvents__DelegateSignature(const struct FEventsWriteEventsResponse& Result, class UObject* customData);
		void DelegateOnSuccessWriteEvents__DelegateSignature(const struct FEventsWriteEventsResponse& Result, class UObject* customData);
		void DelegateOnFailurePlayFabError__DelegateSignature(const struct FPlayFabError& Error, class UObject* customData);
		static UClass* StaticClass();
	};

	/**
	 * Class PlayFab.PlayFabEventsModelDecoder
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UPlayFabEventsModelDecoder : public UBlueprintFunctionLibrary
	{
	public:
		struct FEventsWriteEventsResponse decodeWriteEventsResponseResponse(class UPlayFabJsonObject* response);
		static UClass* StaticClass();
	};

	/**
	 * Class PlayFab.PlayFabExperimentationAPI
	 * Size -> 0x0190 (FullSize[0x01C0] - InheritedSize[0x0030])
	 */
	class UPlayFabExperimentationAPI : public UOnlineBlueprintCallProxyBase
	{
	public:
		class FScriptMulticastDelegate                             OnPlayFabResponse;                                       // 0x0030(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_W4SC[0x118];                                 // 0x0040(0x0118) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UPlayFabAuthenticationContext*                       CallAuthenticationContext;                               // 0x0158(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UPlayFabJsonObject*                                  RequestJsonObj;                                          // 0x0160(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UPlayFabJsonObject*                                  ResponseJsonObj;                                         // 0x0168(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_Y5OT[0x50];                                  // 0x0170(0x0050) MISSED OFFSET (PADDING)

	public:
		class UPlayFabExperimentationAPI* UpdateExperiment(const struct FExperimentationUpdateExperimentRequest& Request, const class FScriptDelegate& onSuccess, const class FScriptDelegate& onFailure, class UObject* customData);
		class UPlayFabExperimentationAPI* UpdateExclusionGroup(const struct FExperimentationUpdateExclusionGroupRequest& Request, const class FScriptDelegate& onSuccess, const class FScriptDelegate& onFailure, class UObject* customData);
		class UPlayFabExperimentationAPI* StopExperiment(const struct FExperimentationStopExperimentRequest& Request, const class FScriptDelegate& onSuccess, const class FScriptDelegate& onFailure, class UObject* customData);
		class UPlayFabExperimentationAPI* StartExperiment(const struct FExperimentationStartExperimentRequest& Request, const class FScriptDelegate& onSuccess, const class FScriptDelegate& onFailure, class UObject* customData);
		void HelperUpdateExperiment(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
		void HelperUpdateExclusionGroup(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
		void HelperStopExperiment(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
		void HelperStartExperiment(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
		void HelperGetTreatmentAssignment(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
		void HelperGetLatestScorecard(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
		void HelperGetExperiments(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
		void HelperGetExclusionGroupTraffic(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
		void HelperGetExclusionGroups(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
		void HelperDeleteExperiment(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
		void HelperDeleteExclusionGroup(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
		void HelperCreateExperiment(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
		void HelperCreateExclusionGroup(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
		class UPlayFabExperimentationAPI* GetTreatmentAssignment(const struct FExperimentationGetTreatmentAssignmentRequest& Request, const class FScriptDelegate& onSuccess, const class FScriptDelegate& onFailure, class UObject* customData);
		class UPlayFabExperimentationAPI* GetLatestScorecard(const struct FExperimentationGetLatestScorecardRequest& Request, const class FScriptDelegate& onSuccess, const class FScriptDelegate& onFailure, class UObject* customData);
		class UPlayFabExperimentationAPI* GetExperiments(const struct FExperimentationGetExperimentsRequest& Request, const class FScriptDelegate& onSuccess, const class FScriptDelegate& onFailure, class UObject* customData);
		class UPlayFabExperimentationAPI* GetExclusionGroupTraffic(const struct FExperimentationGetExclusionGroupTrafficRequest& Request, const class FScriptDelegate& onSuccess, const class FScriptDelegate& onFailure, class UObject* customData);
		class UPlayFabExperimentationAPI* GetExclusionGroups(const struct FExperimentationGetExclusionGroupsRequest& Request, const class FScriptDelegate& onSuccess, const class FScriptDelegate& onFailure, class UObject* customData);
		class UPlayFabExperimentationAPI* DeleteExperiment(const struct FExperimentationDeleteExperimentRequest& Request, const class FScriptDelegate& onSuccess, const class FScriptDelegate& onFailure, class UObject* customData);
		class UPlayFabExperimentationAPI* DeleteExclusionGroup(const struct FExperimentationDeleteExclusionGroupRequest& Request, const class FScriptDelegate& onSuccess, const class FScriptDelegate& onFailure, class UObject* customData);
		void DelegateOnSuccessUpdateExperiment__DelegateSignature(const struct FExperimentationEmptyResponse& Result, class UObject* customData);
		void DelegateOnSuccessUpdateExclusionGroup__DelegateSignature(const struct FExperimentationEmptyResponse& Result, class UObject* customData);
		void DelegateOnSuccessStopExperiment__DelegateSignature(const struct FExperimentationEmptyResponse& Result, class UObject* customData);
		void DelegateOnSuccessStartExperiment__DelegateSignature(const struct FExperimentationEmptyResponse& Result, class UObject* customData);
		void DelegateOnSuccessGetTreatmentAssignment__DelegateSignature(const struct FExperimentationGetTreatmentAssignmentResult& Result, class UObject* customData);
		void DelegateOnSuccessGetLatestScorecard__DelegateSignature(const struct FExperimentationGetLatestScorecardResult& Result, class UObject* customData);
		void DelegateOnSuccessGetExperiments__DelegateSignature(const struct FExperimentationGetExperimentsResult& Result, class UObject* customData);
		void DelegateOnSuccessGetExclusionGroupTraffic__DelegateSignature(const struct FExperimentationGetExclusionGroupTrafficResult& Result, class UObject* customData);
		void DelegateOnSuccessGetExclusionGroups__DelegateSignature(const struct FExperimentationGetExclusionGroupsResult& Result, class UObject* customData);
		void DelegateOnSuccessDeleteExperiment__DelegateSignature(const struct FExperimentationEmptyResponse& Result, class UObject* customData);
		void DelegateOnSuccessDeleteExclusionGroup__DelegateSignature(const struct FExperimentationEmptyResponse& Result, class UObject* customData);
		void DelegateOnSuccessCreateExperiment__DelegateSignature(const struct FExperimentationCreateExperimentResult& Result, class UObject* customData);
		void DelegateOnSuccessCreateExclusionGroup__DelegateSignature(const struct FExperimentationCreateExclusionGroupResult& Result, class UObject* customData);
		void DelegateOnFailurePlayFabError__DelegateSignature(const struct FPlayFabError& Error, class UObject* customData);
		class UPlayFabExperimentationAPI* CreateExperiment(const struct FExperimentationCreateExperimentRequest& Request, const class FScriptDelegate& onSuccess, const class FScriptDelegate& onFailure, class UObject* customData);
		class UPlayFabExperimentationAPI* CreateExclusionGroup(const struct FExperimentationCreateExclusionGroupRequest& Request, const class FScriptDelegate& onSuccess, const class FScriptDelegate& onFailure, class UObject* customData);
		static UClass* StaticClass();
	};

	/**
	 * Class PlayFab.PlayFabExperimentationModelDecoder
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UPlayFabExperimentationModelDecoder : public UBlueprintFunctionLibrary
	{
	public:
		struct FExperimentationGetTreatmentAssignmentResult decodeGetTreatmentAssignmentResultResponse(class UPlayFabJsonObject* response);
		struct FExperimentationGetLatestScorecardResult decodeGetLatestScorecardResultResponse(class UPlayFabJsonObject* response);
		struct FExperimentationGetExperimentsResult decodeGetExperimentsResultResponse(class UPlayFabJsonObject* response);
		struct FExperimentationGetExclusionGroupTrafficResult decodeGetExclusionGroupTrafficResultResponse(class UPlayFabJsonObject* response);
		struct FExperimentationGetExclusionGroupsResult decodeGetExclusionGroupsResultResponse(class UPlayFabJsonObject* response);
		struct FExperimentationEmptyResponse decodeEmptyResponseResponse(class UPlayFabJsonObject* response);
		struct FExperimentationCreateExperimentResult decodeCreateExperimentResultResponse(class UPlayFabJsonObject* response);
		struct FExperimentationCreateExclusionGroupResult decodeCreateExclusionGroupResultResponse(class UPlayFabJsonObject* response);
		static UClass* StaticClass();
	};

	/**
	 * Class PlayFab.PlayFabGroupsAPI
	 * Size -> 0x0250 (FullSize[0x0280] - InheritedSize[0x0030])
	 */
	class UPlayFabGroupsAPI : public UOnlineBlueprintCallProxyBase
	{
	public:
		class FScriptMulticastDelegate                             OnPlayFabResponse;                                       // 0x0030(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_GACY[0x1D8];                                 // 0x0040(0x01D8) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UPlayFabAuthenticationContext*                       CallAuthenticationContext;                               // 0x0218(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UPlayFabJsonObject*                                  RequestJsonObj;                                          // 0x0220(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UPlayFabJsonObject*                                  ResponseJsonObj;                                         // 0x0228(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_PIQ2[0x50];                                  // 0x0230(0x0050) MISSED OFFSET (PADDING)

	public:
		class UPlayFabGroupsAPI* UpdateRole(const struct FGroupsUpdateGroupRoleRequest& Request, const class FScriptDelegate& onSuccess, const class FScriptDelegate& onFailure, class UObject* customData);
		class UPlayFabGroupsAPI* UpdateGroup(const struct FGroupsUpdateGroupRequest& Request, const class FScriptDelegate& onSuccess, const class FScriptDelegate& onFailure, class UObject* customData);
		class UPlayFabGroupsAPI* UnblockEntity(const struct FGroupsUnblockEntityRequest& Request, const class FScriptDelegate& onSuccess, const class FScriptDelegate& onFailure, class UObject* customData);
		class UPlayFabGroupsAPI* RemoveMembers(const struct FGroupsRemoveMembersRequest& Request, const class FScriptDelegate& onSuccess, const class FScriptDelegate& onFailure, class UObject* customData);
		class UPlayFabGroupsAPI* RemoveGroupInvitation(const struct FGroupsRemoveGroupInvitationRequest& Request, const class FScriptDelegate& onSuccess, const class FScriptDelegate& onFailure, class UObject* customData);
		class UPlayFabGroupsAPI* RemoveGroupApplication(const struct FGroupsRemoveGroupApplicationRequest& Request, const class FScriptDelegate& onSuccess, const class FScriptDelegate& onFailure, class UObject* customData);
		class UPlayFabGroupsAPI* ListMembershipOpportunities(const struct FGroupsListMembershipOpportunitiesRequest& Request, const class FScriptDelegate& onSuccess, const class FScriptDelegate& onFailure, class UObject* customData);
		class UPlayFabGroupsAPI* ListMembership(const struct FGroupsListMembershipRequest& Request, const class FScriptDelegate& onSuccess, const class FScriptDelegate& onFailure, class UObject* customData);
		class UPlayFabGroupsAPI* ListGroupMembers(const struct FGroupsListGroupMembersRequest& Request, const class FScriptDelegate& onSuccess, const class FScriptDelegate& onFailure, class UObject* customData);
		class UPlayFabGroupsAPI* ListGroupInvitations(const struct FGroupsListGroupInvitationsRequest& Request, const class FScriptDelegate& onSuccess, const class FScriptDelegate& onFailure, class UObject* customData);
		class UPlayFabGroupsAPI* ListGroupBlocks(const struct FGroupsListGroupBlocksRequest& Request, const class FScriptDelegate& onSuccess, const class FScriptDelegate& onFailure, class UObject* customData);
		class UPlayFabGroupsAPI* ListGroupApplications(const struct FGroupsListGroupApplicationsRequest& Request, const class FScriptDelegate& onSuccess, const class FScriptDelegate& onFailure, class UObject* customData);
		class UPlayFabGroupsAPI* IsMember(const struct FGroupsIsMemberRequest& Request, const class FScriptDelegate& onSuccess, const class FScriptDelegate& onFailure, class UObject* customData);
		class UPlayFabGroupsAPI* InviteToGroup(const struct FGroupsInviteToGroupRequest& Request, const class FScriptDelegate& onSuccess, const class FScriptDelegate& onFailure, class UObject* customData);
		void HelperUpdateRole(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
		void HelperUpdateGroup(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
		void HelperUnblockEntity(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
		void HelperRemoveMembers(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
		void HelperRemoveGroupInvitation(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
		void HelperRemoveGroupApplication(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
		void HelperListMembershipOpportunities(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
		void HelperListMembership(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
		void HelperListGroupMembers(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
		void HelperListGroupInvitations(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
		void HelperListGroupBlocks(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
		void HelperListGroupApplications(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
		void HelperIsMember(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
		void HelperInviteToGroup(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
		void HelperGetGroup(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
		void HelperDeleteRole(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
		void HelperDeleteGroup(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
		void HelperCreateRole(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
		void HelperCreateGroup(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
		void HelperChangeMemberRole(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
		void HelperBlockEntity(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
		void HelperApplyToGroup(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
		void HelperAddMembers(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
		void HelperAcceptGroupInvitation(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
		void HelperAcceptGroupApplication(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
		class UPlayFabGroupsAPI* GetGroup(const struct FGroupsGetGroupRequest& Request, const class FScriptDelegate& onSuccess, const class FScriptDelegate& onFailure, class UObject* customData);
		class UPlayFabGroupsAPI* DeleteRole(const struct FGroupsDeleteRoleRequest& Request, const class FScriptDelegate& onSuccess, const class FScriptDelegate& onFailure, class UObject* customData);
		class UPlayFabGroupsAPI* DeleteGroup(const struct FGroupsDeleteGroupRequest& Request, const class FScriptDelegate& onSuccess, const class FScriptDelegate& onFailure, class UObject* customData);
		void DelegateOnSuccessUpdateRole__DelegateSignature(const struct FGroupsUpdateGroupRoleResponse& Result, class UObject* customData);
		void DelegateOnSuccessUpdateGroup__DelegateSignature(const struct FGroupsUpdateGroupResponse& Result, class UObject* customData);
		void DelegateOnSuccessUnblockEntity__DelegateSignature(const struct FGroupsEmptyResponse& Result, class UObject* customData);
		void DelegateOnSuccessRemoveMembers__DelegateSignature(const struct FGroupsEmptyResponse& Result, class UObject* customData);
		void DelegateOnSuccessRemoveGroupInvitation__DelegateSignature(const struct FGroupsEmptyResponse& Result, class UObject* customData);
		void DelegateOnSuccessRemoveGroupApplication__DelegateSignature(const struct FGroupsEmptyResponse& Result, class UObject* customData);
		void DelegateOnSuccessListMembershipOpportunities__DelegateSignature(const struct FGroupsListMembershipOpportunitiesResponse& Result, class UObject* customData);
		void DelegateOnSuccessListMembership__DelegateSignature(const struct FGroupsListMembershipResponse& Result, class UObject* customData);
		void DelegateOnSuccessListGroupMembers__DelegateSignature(const struct FGroupsListGroupMembersResponse& Result, class UObject* customData);
		void DelegateOnSuccessListGroupInvitations__DelegateSignature(const struct FGroupsListGroupInvitationsResponse& Result, class UObject* customData);
		void DelegateOnSuccessListGroupBlocks__DelegateSignature(const struct FGroupsListGroupBlocksResponse& Result, class UObject* customData);
		void DelegateOnSuccessListGroupApplications__DelegateSignature(const struct FGroupsListGroupApplicationsResponse& Result, class UObject* customData);
		void DelegateOnSuccessIsMember__DelegateSignature(const struct FGroupsIsMemberResponse& Result, class UObject* customData);
		void DelegateOnSuccessInviteToGroup__DelegateSignature(const struct FGroupsInviteToGroupResponse& Result, class UObject* customData);
		void DelegateOnSuccessGetGroup__DelegateSignature(const struct FGroupsGetGroupResponse& Result, class UObject* customData);
		void DelegateOnSuccessDeleteRole__DelegateSignature(const struct FGroupsEmptyResponse& Result, class UObject* customData);
		void DelegateOnSuccessDeleteGroup__DelegateSignature(const struct FGroupsEmptyResponse& Result, class UObject* customData);
		void DelegateOnSuccessCreateRole__DelegateSignature(const struct FGroupsCreateGroupRoleResponse& Result, class UObject* customData);
		void DelegateOnSuccessCreateGroup__DelegateSignature(const struct FGroupsCreateGroupResponse& Result, class UObject* customData);
		void DelegateOnSuccessChangeMemberRole__DelegateSignature(const struct FGroupsEmptyResponse& Result, class UObject* customData);
		void DelegateOnSuccessBlockEntity__DelegateSignature(const struct FGroupsEmptyResponse& Result, class UObject* customData);
		void DelegateOnSuccessApplyToGroup__DelegateSignature(const struct FGroupsApplyToGroupResponse& Result, class UObject* customData);
		void DelegateOnSuccessAddMembers__DelegateSignature(const struct FGroupsEmptyResponse& Result, class UObject* customData);
		void DelegateOnSuccessAcceptGroupInvitation__DelegateSignature(const struct FGroupsEmptyResponse& Result, class UObject* customData);
		void DelegateOnSuccessAcceptGroupApplication__DelegateSignature(const struct FGroupsEmptyResponse& Result, class UObject* customData);
		void DelegateOnFailurePlayFabError__DelegateSignature(const struct FPlayFabError& Error, class UObject* customData);
		class UPlayFabGroupsAPI* CreateRole(const struct FGroupsCreateGroupRoleRequest& Request, const class FScriptDelegate& onSuccess, const class FScriptDelegate& onFailure, class UObject* customData);
		class UPlayFabGroupsAPI* CreateGroup(const struct FGroupsCreateGroupRequest& Request, const class FScriptDelegate& onSuccess, const class FScriptDelegate& onFailure, class UObject* customData);
		class UPlayFabGroupsAPI* ChangeMemberRole(const struct FGroupsChangeMemberRoleRequest& Request, const class FScriptDelegate& onSuccess, const class FScriptDelegate& onFailure, class UObject* customData);
		class UPlayFabGroupsAPI* BlockEntity(const struct FGroupsBlockEntityRequest& Request, const class FScriptDelegate& onSuccess, const class FScriptDelegate& onFailure, class UObject* customData);
		class UPlayFabGroupsAPI* ApplyToGroup(const struct FGroupsApplyToGroupRequest& Request, const class FScriptDelegate& onSuccess, const class FScriptDelegate& onFailure, class UObject* customData);
		class UPlayFabGroupsAPI* AddMembers(const struct FGroupsAddMembersRequest& Request, const class FScriptDelegate& onSuccess, const class FScriptDelegate& onFailure, class UObject* customData);
		class UPlayFabGroupsAPI* AcceptGroupInvitation(const struct FGroupsAcceptGroupInvitationRequest& Request, const class FScriptDelegate& onSuccess, const class FScriptDelegate& onFailure, class UObject* customData);
		class UPlayFabGroupsAPI* AcceptGroupApplication(const struct FGroupsAcceptGroupApplicationRequest& Request, const class FScriptDelegate& onSuccess, const class FScriptDelegate& onFailure, class UObject* customData);
		static UClass* StaticClass();
	};

	/**
	 * Class PlayFab.PlayFabGroupsModelDecoder
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UPlayFabGroupsModelDecoder : public UBlueprintFunctionLibrary
	{
	public:
		struct FGroupsUpdateGroupRoleResponse decodeUpdateGroupRoleResponseResponse(class UPlayFabJsonObject* response);
		struct FGroupsUpdateGroupResponse decodeUpdateGroupResponseResponse(class UPlayFabJsonObject* response);
		struct FGroupsListMembershipResponse decodeListMembershipResponseResponse(class UPlayFabJsonObject* response);
		struct FGroupsListMembershipOpportunitiesResponse decodeListMembershipOpportunitiesResponseResponse(class UPlayFabJsonObject* response);
		struct FGroupsListGroupMembersResponse decodeListGroupMembersResponseResponse(class UPlayFabJsonObject* response);
		struct FGroupsListGroupInvitationsResponse decodeListGroupInvitationsResponseResponse(class UPlayFabJsonObject* response);
		struct FGroupsListGroupBlocksResponse decodeListGroupBlocksResponseResponse(class UPlayFabJsonObject* response);
		struct FGroupsListGroupApplicationsResponse decodeListGroupApplicationsResponseResponse(class UPlayFabJsonObject* response);
		struct FGroupsIsMemberResponse decodeIsMemberResponseResponse(class UPlayFabJsonObject* response);
		struct FGroupsInviteToGroupResponse decodeInviteToGroupResponseResponse(class UPlayFabJsonObject* response);
		struct FGroupsGetGroupResponse decodeGetGroupResponseResponse(class UPlayFabJsonObject* response);
		struct FGroupsEmptyResponse decodeEmptyResponseResponse(class UPlayFabJsonObject* response);
		struct FGroupsCreateGroupRoleResponse decodeCreateGroupRoleResponseResponse(class UPlayFabJsonObject* response);
		struct FGroupsCreateGroupResponse decodeCreateGroupResponseResponse(class UPlayFabJsonObject* response);
		struct FGroupsApplyToGroupResponse decodeApplyToGroupResponseResponse(class UPlayFabJsonObject* response);
		static UClass* StaticClass();
	};

	/**
	 * Class PlayFab.PlayFabInsightsAPI
	 * Size -> 0x0120 (FullSize[0x0150] - InheritedSize[0x0030])
	 */
	class UPlayFabInsightsAPI : public UOnlineBlueprintCallProxyBase
	{
	public:
		class FScriptMulticastDelegate                             OnPlayFabResponse;                                       // 0x0030(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_3FHD[0xA8];                                  // 0x0040(0x00A8) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UPlayFabAuthenticationContext*                       CallAuthenticationContext;                               // 0x00E8(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UPlayFabJsonObject*                                  RequestJsonObj;                                          // 0x00F0(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UPlayFabJsonObject*                                  ResponseJsonObj;                                         // 0x00F8(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_GBJN[0x50];                                  // 0x0100(0x0050) MISSED OFFSET (PADDING)

	public:
		class UPlayFabInsightsAPI* SetStorageRetention(const struct FInsightsInsightsSetStorageRetentionRequest& Request, const class FScriptDelegate& onSuccess, const class FScriptDelegate& onFailure, class UObject* customData);
		class UPlayFabInsightsAPI* SetPerformance(const struct FInsightsInsightsSetPerformanceRequest& Request, const class FScriptDelegate& onSuccess, const class FScriptDelegate& onFailure, class UObject* customData);
		void HelperSetStorageRetention(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
		void HelperSetPerformance(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
		void HelperGetPendingOperations(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
		void HelperGetOperationStatus(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
		void HelperGetLimits(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
		void HelperGetDetails(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
		class UPlayFabInsightsAPI* GetPendingOperations(const struct FInsightsInsightsGetPendingOperationsRequest& Request, const class FScriptDelegate& onSuccess, const class FScriptDelegate& onFailure, class UObject* customData);
		class UPlayFabInsightsAPI* GetOperationStatus(const struct FInsightsInsightsGetOperationStatusRequest& Request, const class FScriptDelegate& onSuccess, const class FScriptDelegate& onFailure, class UObject* customData);
		class UPlayFabInsightsAPI* GetLimits(const struct FInsightsInsightsEmptyRequest& Request, const class FScriptDelegate& onSuccess, const class FScriptDelegate& onFailure, class UObject* customData);
		class UPlayFabInsightsAPI* GetDetails(const struct FInsightsInsightsEmptyRequest& Request, const class FScriptDelegate& onSuccess, const class FScriptDelegate& onFailure, class UObject* customData);
		void DelegateOnSuccessSetStorageRetention__DelegateSignature(const struct FInsightsInsightsOperationResponse& Result, class UObject* customData);
		void DelegateOnSuccessSetPerformance__DelegateSignature(const struct FInsightsInsightsOperationResponse& Result, class UObject* customData);
		void DelegateOnSuccessGetPendingOperations__DelegateSignature(const struct FInsightsInsightsGetPendingOperationsResponse& Result, class UObject* customData);
		void DelegateOnSuccessGetOperationStatus__DelegateSignature(const struct FInsightsInsightsGetOperationStatusResponse& Result, class UObject* customData);
		void DelegateOnSuccessGetLimits__DelegateSignature(const struct FInsightsInsightsGetLimitsResponse& Result, class UObject* customData);
		void DelegateOnSuccessGetDetails__DelegateSignature(const struct FInsightsInsightsGetDetailsResponse& Result, class UObject* customData);
		void DelegateOnFailurePlayFabError__DelegateSignature(const struct FPlayFabError& Error, class UObject* customData);
		static UClass* StaticClass();
	};

	/**
	 * Class PlayFab.PlayFabInsightsModelDecoder
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UPlayFabInsightsModelDecoder : public UBlueprintFunctionLibrary
	{
	public:
		struct FInsightsInsightsOperationResponse decodeInsightsOperationResponseResponse(class UPlayFabJsonObject* response);
		struct FInsightsInsightsGetPendingOperationsResponse decodeInsightsGetPendingOperationsResponseResponse(class UPlayFabJsonObject* response);
		struct FInsightsInsightsGetOperationStatusResponse decodeInsightsGetOperationStatusResponseResponse(class UPlayFabJsonObject* response);
		struct FInsightsInsightsGetLimitsResponse decodeInsightsGetLimitsResponseResponse(class UPlayFabJsonObject* response);
		struct FInsightsInsightsGetDetailsResponse decodeInsightsGetDetailsResponseResponse(class UPlayFabJsonObject* response);
		static UClass* StaticClass();
	};

	/**
	 * Class PlayFab.PlayFabJsonObject
	 * Size -> 0x0010 (FullSize[0x0038] - InheritedSize[0x0028])
	 */
	class UPlayFabJsonObject : public UObject
	{
	public:
		unsigned char                                              UnknownData_HSUW[0x10];                                  // 0x0028(0x0010) MISSED OFFSET (PADDING)

	public:
		void SetStringField(const class FString& FieldName, const class FString& StringValue);
		void SetStringArrayField(const class FString& FieldName, TArray<class FString> StringArray);
		void SetObjectField(const class FString& FieldName, class UPlayFabJsonObject* JsonObject);
		void SetObjectArrayField(const class FString& FieldName, TArray<class UPlayFabJsonObject*> ObjectArray);
		void SetNumberField(const class FString& FieldName, float Number);
		void SetNumberArrayField(const class FString& FieldName, TArray<float> NumberArray);
		void SetFieldNull(const class FString& FieldName);
		void SetField(const class FString& FieldName, class UPlayFabJsonValue* JsonValue);
		void SetBoolField(const class FString& FieldName, bool InValue);
		void SetBoolArrayField(const class FString& FieldName, TArray<bool> BoolArray);
		void SetArrayField(const class FString& FieldName, TArray<class UPlayFabJsonValue*> inArray);
		void Reset();
		void RemoveField(const class FString& FieldName);
		void MergeJsonObject(class UPlayFabJsonObject* InJsonObject, bool Overwrite);
		bool HasField(const class FString& FieldName);
		class FString GetStringField(const class FString& FieldName);
		TArray<class FString> GetStringArrayField(const class FString& FieldName);
		class UPlayFabJsonObject* GetObjectField(const class FString& FieldName);
		TArray<class UPlayFabJsonObject*> GetObjectArrayField(const class FString& FieldName);
		float GetNumberField(const class FString& FieldName);
		TArray<float> GetNumberArrayField(const class FString& FieldName);
		TArray<class FString> GetFieldNames();
		class UPlayFabJsonValue* GetField(const class FString& FieldName);
		bool GetBoolField(const class FString& FieldName);
		TArray<bool> GetBoolArrayField(const class FString& FieldName);
		TArray<class UPlayFabJsonValue*> GetArrayField(const class FString& FieldName);
		class FString EncodeJson();
		bool DecodeJson(const class FString& JsonString);
		class UPlayFabJsonObject* ConstructJsonObject(class UObject* WorldContextObject);
		static UClass* StaticClass();
	};

	/**
	 * Class PlayFab.PlayFabJsonValue
	 * Size -> 0x0010 (FullSize[0x0038] - InheritedSize[0x0028])
	 */
	class UPlayFabJsonValue : public UObject
	{
	public:
		unsigned char                                              UnknownData_MVKW[0x10];                                  // 0x0028(0x0010) MISSED OFFSET (PADDING)

	public:
		bool IsNull();
		class FString GetTypeString();
		EPFJson GetType();
		class UPlayFabJsonValue* ConstructJsonValueString(class UObject* WorldContextObject, const class FString& StringValue);
		class UPlayFabJsonValue* ConstructJsonValueObject(class UObject* WorldContextObject, class UPlayFabJsonObject* JsonObject);
		class UPlayFabJsonValue* ConstructJsonValueNumber(class UObject* WorldContextObject, float Number);
		class UPlayFabJsonValue* ConstructJsonValueBool(class UObject* WorldContextObject, bool InValue);
		class UPlayFabJsonValue* ConstructJsonValueArray(class UObject* WorldContextObject, TArray<class UPlayFabJsonValue*> inArray);
		class FString AsString();
		class UPlayFabJsonObject* AsObject();
		float AsNumber();
		bool AsBool();
		TArray<class UPlayFabJsonValue*> AsArray();
		static UClass* StaticClass();
	};

	/**
	 * Class PlayFab.PlayFabLocalizationAPI
	 * Size -> 0x00D0 (FullSize[0x0100] - InheritedSize[0x0030])
	 */
	class UPlayFabLocalizationAPI : public UOnlineBlueprintCallProxyBase
	{
	public:
		class FScriptMulticastDelegate                             OnPlayFabResponse;                                       // 0x0030(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_2JRP[0x58];                                  // 0x0040(0x0058) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UPlayFabAuthenticationContext*                       CallAuthenticationContext;                               // 0x0098(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UPlayFabJsonObject*                                  RequestJsonObj;                                          // 0x00A0(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UPlayFabJsonObject*                                  ResponseJsonObj;                                         // 0x00A8(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_T1G3[0x50];                                  // 0x00B0(0x0050) MISSED OFFSET (PADDING)

	public:
		void HelperGetLanguageList(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
		class UPlayFabLocalizationAPI* GetLanguageList(const struct FLocalizationGetLanguageListRequest& Request, const class FScriptDelegate& onSuccess, const class FScriptDelegate& onFailure, class UObject* customData);
		void DelegateOnSuccessGetLanguageList__DelegateSignature(const struct FLocalizationGetLanguageListResponse& Result, class UObject* customData);
		void DelegateOnFailurePlayFabError__DelegateSignature(const struct FPlayFabError& Error, class UObject* customData);
		static UClass* StaticClass();
	};

	/**
	 * Class PlayFab.PlayFabLocalizationModelDecoder
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UPlayFabLocalizationModelDecoder : public UBlueprintFunctionLibrary
	{
	public:
		struct FLocalizationGetLanguageListResponse decodeGetLanguageListResponseResponse(class UPlayFabJsonObject* response);
		static UClass* StaticClass();
	};

	/**
	 * Class PlayFab.PlayFabMatchmakerAPI
	 * Size -> 0x0110 (FullSize[0x0140] - InheritedSize[0x0030])
	 */
	class UPlayFabMatchmakerAPI : public UOnlineBlueprintCallProxyBase
	{
	public:
		class FScriptMulticastDelegate                             OnPlayFabResponse;                                       // 0x0030(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_0TUW[0x98];                                  // 0x0040(0x0098) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UPlayFabAuthenticationContext*                       CallAuthenticationContext;                               // 0x00D8(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UPlayFabJsonObject*                                  RequestJsonObj;                                          // 0x00E0(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UPlayFabJsonObject*                                  ResponseJsonObj;                                         // 0x00E8(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_7RR3[0x50];                                  // 0x00F0(0x0050) MISSED OFFSET (PADDING)

	public:
		class UPlayFabMatchmakerAPI* UserInfo(const struct FMatchmakerUserInfoRequest& Request, const class FScriptDelegate& onSuccess, const class FScriptDelegate& onFailure, class UObject* customData);
		class UPlayFabMatchmakerAPI* StartGame(const struct FMatchmakerStartGameRequest& Request, const class FScriptDelegate& onSuccess, const class FScriptDelegate& onFailure, class UObject* customData);
		class UPlayFabMatchmakerAPI* PlayerLeft(const struct FMatchmakerPlayerLeftRequest& Request, const class FScriptDelegate& onSuccess, const class FScriptDelegate& onFailure, class UObject* customData);
		class UPlayFabMatchmakerAPI* PlayerJoined(const struct FMatchmakerPlayerJoinedRequest& Request, const class FScriptDelegate& onSuccess, const class FScriptDelegate& onFailure, class UObject* customData);
		void HelperUserInfo(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
		void HelperStartGame(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
		void HelperPlayerLeft(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
		void HelperPlayerJoined(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
		void HelperAuthUser(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
		void DelegateOnSuccessUserInfo__DelegateSignature(const struct FMatchmakerUserInfoResponse& Result, class UObject* customData);
		void DelegateOnSuccessStartGame__DelegateSignature(const struct FMatchmakerStartGameResponse& Result, class UObject* customData);
		void DelegateOnSuccessPlayerLeft__DelegateSignature(const struct FMatchmakerPlayerLeftResponse& Result, class UObject* customData);
		void DelegateOnSuccessPlayerJoined__DelegateSignature(const struct FMatchmakerPlayerJoinedResponse& Result, class UObject* customData);
		void DelegateOnSuccessAuthUser__DelegateSignature(const struct FMatchmakerAuthUserResponse& Result, class UObject* customData);
		void DelegateOnFailurePlayFabError__DelegateSignature(const struct FPlayFabError& Error, class UObject* customData);
		class UPlayFabMatchmakerAPI* AuthUser(const struct FMatchmakerAuthUserRequest& Request, const class FScriptDelegate& onSuccess, const class FScriptDelegate& onFailure, class UObject* customData);
		static UClass* StaticClass();
	};

	/**
	 * Class PlayFab.PlayFabMatchmakerModelDecoder
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UPlayFabMatchmakerModelDecoder : public UBlueprintFunctionLibrary
	{
	public:
		struct FMatchmakerUserInfoResponse decodeUserInfoResponseResponse(class UPlayFabJsonObject* response);
		struct FMatchmakerStartGameResponse decodeStartGameResponseResponse(class UPlayFabJsonObject* response);
		struct FMatchmakerPlayerLeftResponse decodePlayerLeftResponseResponse(class UPlayFabJsonObject* response);
		struct FMatchmakerPlayerJoinedResponse decodePlayerJoinedResponseResponse(class UPlayFabJsonObject* response);
		struct FMatchmakerAuthUserResponse decodeAuthUserResponseResponse(class UPlayFabJsonObject* response);
		static UClass* StaticClass();
	};

	/**
	 * Class PlayFab.PlayFabMultiplayerAPI
	 * Size -> 0x0480 (FullSize[0x04B0] - InheritedSize[0x0030])
	 */
	class UPlayFabMultiplayerAPI : public UOnlineBlueprintCallProxyBase
	{
	public:
		class FScriptMulticastDelegate                             OnPlayFabResponse;                                       // 0x0030(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_3YT1[0x408];                                 // 0x0040(0x0408) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UPlayFabAuthenticationContext*                       CallAuthenticationContext;                               // 0x0448(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UPlayFabJsonObject*                                  RequestJsonObj;                                          // 0x0450(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UPlayFabJsonObject*                                  ResponseJsonObj;                                         // 0x0458(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_7M4E[0x50];                                  // 0x0460(0x0050) MISSED OFFSET (PADDING)

	public:
		class UPlayFabMultiplayerAPI* UploadCertificate(const struct FMultiplayerUploadCertificateRequest& Request, const class FScriptDelegate& onSuccess, const class FScriptDelegate& onFailure, class UObject* customData);
		class UPlayFabMultiplayerAPI* UpdateBuildRegions(const struct FMultiplayerUpdateBuildRegionsRequest& Request, const class FScriptDelegate& onSuccess, const class FScriptDelegate& onFailure, class UObject* customData);
		class UPlayFabMultiplayerAPI* UpdateBuildRegion(const struct FMultiplayerUpdateBuildRegionRequest& Request, const class FScriptDelegate& onSuccess, const class FScriptDelegate& onFailure, class UObject* customData);
		class UPlayFabMultiplayerAPI* UpdateBuildName(const struct FMultiplayerUpdateBuildNameRequest& Request, const class FScriptDelegate& onSuccess, const class FScriptDelegate& onFailure, class UObject* customData);
		class UPlayFabMultiplayerAPI* UpdateBuildAlias(const struct FMultiplayerUpdateBuildAliasRequest& Request, const class FScriptDelegate& onSuccess, const class FScriptDelegate& onFailure, class UObject* customData);
		class UPlayFabMultiplayerAPI* UntagContainerImage(const struct FMultiplayerUntagContainerImageRequest& Request, const class FScriptDelegate& onSuccess, const class FScriptDelegate& onFailure, class UObject* customData);
		class UPlayFabMultiplayerAPI* ShutdownMultiplayerServer(const struct FMultiplayerShutdownMultiplayerServerRequest& Request, const class FScriptDelegate& onSuccess, const class FScriptDelegate& onFailure, class UObject* customData);
		class UPlayFabMultiplayerAPI* RolloverContainerRegistryCredentials(const struct FMultiplayerRolloverContainerRegistryCredentialsRequest& Request, const class FScriptDelegate& onSuccess, const class FScriptDelegate& onFailure, class UObject* customData);
		class UPlayFabMultiplayerAPI* RequestMultiplayerServer(const struct FMultiplayerRequestMultiplayerServerRequest& Request, const class FScriptDelegate& onSuccess, const class FScriptDelegate& onFailure, class UObject* customData);
		class UPlayFabMultiplayerAPI* ListVirtualMachineSummaries(const struct FMultiplayerListVirtualMachineSummariesRequest& Request, const class FScriptDelegate& onSuccess, const class FScriptDelegate& onFailure, class UObject* customData);
		class UPlayFabMultiplayerAPI* ListTitleMultiplayerServersQuotaChanges(const struct FMultiplayerListTitleMultiplayerServersQuotaChangesRequest& Request, const class FScriptDelegate& onSuccess, const class FScriptDelegate& onFailure, class UObject* customData);
		class UPlayFabMultiplayerAPI* ListServerBackfillTicketsForPlayer(const struct FMultiplayerListServerBackfillTicketsForPlayerRequest& Request, const class FScriptDelegate& onSuccess, const class FScriptDelegate& onFailure, class UObject* customData);
		class UPlayFabMultiplayerAPI* ListQosServersForTitle(const struct FMultiplayerListQosServersForTitleRequest& Request, const class FScriptDelegate& onSuccess, const class FScriptDelegate& onFailure, class UObject* customData);
		class UPlayFabMultiplayerAPI* ListPartyQosServers(const struct FMultiplayerListPartyQosServersRequest& Request, const class FScriptDelegate& onSuccess, const class FScriptDelegate& onFailure, class UObject* customData);
		class UPlayFabMultiplayerAPI* ListMultiplayerServers(const struct FMultiplayerListMultiplayerServersRequest& Request, const class FScriptDelegate& onSuccess, const class FScriptDelegate& onFailure, class UObject* customData);
		class UPlayFabMultiplayerAPI* ListMatchmakingTicketsForPlayer(const struct FMultiplayerListMatchmakingTicketsForPlayerRequest& Request, const class FScriptDelegate& onSuccess, const class FScriptDelegate& onFailure, class UObject* customData);
		class UPlayFabMultiplayerAPI* ListContainerImageTags(const struct FMultiplayerListContainerImageTagsRequest& Request, const class FScriptDelegate& onSuccess, const class FScriptDelegate& onFailure, class UObject* customData);
		class UPlayFabMultiplayerAPI* ListContainerImages(const struct FMultiplayerListContainerImagesRequest& Request, const class FScriptDelegate& onSuccess, const class FScriptDelegate& onFailure, class UObject* customData);
		class UPlayFabMultiplayerAPI* ListCertificateSummaries(const struct FMultiplayerListCertificateSummariesRequest& Request, const class FScriptDelegate& onSuccess, const class FScriptDelegate& onFailure, class UObject* customData);
		class UPlayFabMultiplayerAPI* ListBuildSummariesV2(const struct FMultiplayerListBuildSummariesRequest& Request, const class FScriptDelegate& onSuccess, const class FScriptDelegate& onFailure, class UObject* customData);
		class UPlayFabMultiplayerAPI* ListBuildAliases(const struct FMultiplayerMultiplayerEmptyRequest& Request, const class FScriptDelegate& onSuccess, const class FScriptDelegate& onFailure, class UObject* customData);
		class UPlayFabMultiplayerAPI* ListAssetSummaries(const struct FMultiplayerListAssetSummariesRequest& Request, const class FScriptDelegate& onSuccess, const class FScriptDelegate& onFailure, class UObject* customData);
		class UPlayFabMultiplayerAPI* ListArchivedMultiplayerServers(const struct FMultiplayerListMultiplayerServersRequest& Request, const class FScriptDelegate& onSuccess, const class FScriptDelegate& onFailure, class UObject* customData);
		class UPlayFabMultiplayerAPI* JoinMatchmakingTicket(const struct FMultiplayerJoinMatchmakingTicketRequest& Request, const class FScriptDelegate& onSuccess, const class FScriptDelegate& onFailure, class UObject* customData);
		void HelperUploadCertificate(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
		void HelperUpdateBuildRegions(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
		void HelperUpdateBuildRegion(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
		void HelperUpdateBuildName(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
		void HelperUpdateBuildAlias(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
		void HelperUntagContainerImage(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
		void HelperShutdownMultiplayerServer(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
		void HelperRolloverContainerRegistryCredentials(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
		void HelperRequestMultiplayerServer(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
		void HelperListVirtualMachineSummaries(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
		void HelperListTitleMultiplayerServersQuotaChanges(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
		void HelperListServerBackfillTicketsForPlayer(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
		void HelperListQosServersForTitle(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
		void HelperListPartyQosServers(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
		void HelperListMultiplayerServers(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
		void HelperListMatchmakingTicketsForPlayer(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
		void HelperListContainerImageTags(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
		void HelperListContainerImages(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
		void HelperListCertificateSummaries(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
		void HelperListBuildSummariesV2(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
		void HelperListBuildAliases(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
		void HelperListAssetSummaries(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
		void HelperListArchivedMultiplayerServers(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
		void HelperJoinMatchmakingTicket(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
		void HelperGetTitleMultiplayerServersQuotas(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
		void HelperGetTitleMultiplayerServersQuotaChange(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
		void HelperGetTitleEnabledForMultiplayerServersStatus(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
		void HelperGetServerBackfillTicket(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
		void HelperGetRemoteLoginEndpoint(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
		void HelperGetQueueStatistics(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
		void HelperGetMultiplayerSessionLogsBySessionId(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
		void HelperGetMultiplayerServerLogs(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
		void HelperGetMultiplayerServerDetails(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
		void HelperGetMatchmakingTicket(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
		void HelperGetMatch(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
		void HelperGetContainerRegistryCredentials(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
		void HelperGetBuildAlias(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
		void HelperGetBuild(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
		void HelperGetAssetUploadUrl(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
		void HelperEnableMultiplayerServersForTitle(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
		void HelperDeleteRemoteUser(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
		void HelperDeleteContainerImageRepository(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
		void HelperDeleteCertificate(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
		void HelperDeleteBuildRegion(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
		void HelperDeleteBuildAlias(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
		void HelperDeleteBuild(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
		void HelperDeleteAsset(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
		void HelperCreateTitleMultiplayerServersQuotaChange(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
		void HelperCreateServerMatchmakingTicket(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
		void HelperCreateServerBackfillTicket(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
		void HelperCreateRemoteUser(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
		void HelperCreateMatchmakingTicket(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
		void HelperCreateBuildWithProcessBasedServer(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
		void HelperCreateBuildWithManagedContainer(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
		void HelperCreateBuildWithCustomContainer(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
		void HelperCreateBuildAlias(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
		void HelperCancelServerBackfillTicket(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
		void HelperCancelMatchmakingTicket(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
		void HelperCancelAllServerBackfillTicketsForPlayer(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
		void HelperCancelAllMatchmakingTicketsForPlayer(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
		class UPlayFabMultiplayerAPI* GetTitleMultiplayerServersQuotas(const struct FMultiplayerGetTitleMultiplayerServersQuotasRequest& Request, const class FScriptDelegate& onSuccess, const class FScriptDelegate& onFailure, class UObject* customData);
		class UPlayFabMultiplayerAPI* GetTitleMultiplayerServersQuotaChange(const struct FMultiplayerGetTitleMultiplayerServersQuotaChangeRequest& Request, const class FScriptDelegate& onSuccess, const class FScriptDelegate& onFailure, class UObject* customData);
		class UPlayFabMultiplayerAPI* GetTitleEnabledForMultiplayerServersStatus(const struct FMultiplayerGetTitleEnabledForMultiplayerServersStatusRequest& Request, const class FScriptDelegate& onSuccess, const class FScriptDelegate& onFailure, class UObject* customData);
		class UPlayFabMultiplayerAPI* GetServerBackfillTicket(const struct FMultiplayerGetServerBackfillTicketRequest& Request, const class FScriptDelegate& onSuccess, const class FScriptDelegate& onFailure, class UObject* customData);
		class UPlayFabMultiplayerAPI* GetRemoteLoginEndpoint(const struct FMultiplayerGetRemoteLoginEndpointRequest& Request, const class FScriptDelegate& onSuccess, const class FScriptDelegate& onFailure, class UObject* customData);
		class UPlayFabMultiplayerAPI* GetQueueStatistics(const struct FMultiplayerGetQueueStatisticsRequest& Request, const class FScriptDelegate& onSuccess, const class FScriptDelegate& onFailure, class UObject* customData);
		class UPlayFabMultiplayerAPI* GetMultiplayerSessionLogsBySessionId(const struct FMultiplayerGetMultiplayerSessionLogsBySessionIdRequest& Request, const class FScriptDelegate& onSuccess, const class FScriptDelegate& onFailure, class UObject* customData);
		class UPlayFabMultiplayerAPI* GetMultiplayerServerLogs(const struct FMultiplayerGetMultiplayerServerLogsRequest& Request, const class FScriptDelegate& onSuccess, const class FScriptDelegate& onFailure, class UObject* customData);
		class UPlayFabMultiplayerAPI* GetMultiplayerServerDetails(const struct FMultiplayerGetMultiplayerServerDetailsRequest& Request, const class FScriptDelegate& onSuccess, const class FScriptDelegate& onFailure, class UObject* customData);
		class UPlayFabMultiplayerAPI* GetMatchmakingTicket(const struct FMultiplayerGetMatchmakingTicketRequest& Request, const class FScriptDelegate& onSuccess, const class FScriptDelegate& onFailure, class UObject* customData);
		class UPlayFabMultiplayerAPI* GetMatch(const struct FMultiplayerGetMatchRequest& Request, const class FScriptDelegate& onSuccess, const class FScriptDelegate& onFailure, class UObject* customData);
		class UPlayFabMultiplayerAPI* GetContainerRegistryCredentials(const struct FMultiplayerGetContainerRegistryCredentialsRequest& Request, const class FScriptDelegate& onSuccess, const class FScriptDelegate& onFailure, class UObject* customData);
		class UPlayFabMultiplayerAPI* GetBuildAlias(const struct FMultiplayerGetBuildAliasRequest& Request, const class FScriptDelegate& onSuccess, const class FScriptDelegate& onFailure, class UObject* customData);
		class UPlayFabMultiplayerAPI* GetBuild(const struct FMultiplayerGetBuildRequest& Request, const class FScriptDelegate& onSuccess, const class FScriptDelegate& onFailure, class UObject* customData);
		class UPlayFabMultiplayerAPI* GetAssetUploadUrl(const struct FMultiplayerGetAssetUploadUrlRequest& Request, const class FScriptDelegate& onSuccess, const class FScriptDelegate& onFailure, class UObject* customData);
		class UPlayFabMultiplayerAPI* EnableMultiplayerServersForTitle(const struct FMultiplayerEnableMultiplayerServersForTitleRequest& Request, const class FScriptDelegate& onSuccess, const class FScriptDelegate& onFailure, class UObject* customData);
		class UPlayFabMultiplayerAPI* DeleteRemoteUser(const struct FMultiplayerDeleteRemoteUserRequest& Request, const class FScriptDelegate& onSuccess, const class FScriptDelegate& onFailure, class UObject* customData);
		class UPlayFabMultiplayerAPI* DeleteContainerImageRepository(const struct FMultiplayerDeleteContainerImageRequest& Request, const class FScriptDelegate& onSuccess, const class FScriptDelegate& onFailure, class UObject* customData);
		class UPlayFabMultiplayerAPI* DeleteCertificate(const struct FMultiplayerDeleteCertificateRequest& Request, const class FScriptDelegate& onSuccess, const class FScriptDelegate& onFailure, class UObject* customData);
		class UPlayFabMultiplayerAPI* DeleteBuildRegion(const struct FMultiplayerDeleteBuildRegionRequest& Request, const class FScriptDelegate& onSuccess, const class FScriptDelegate& onFailure, class UObject* customData);
		class UPlayFabMultiplayerAPI* DeleteBuildAlias(const struct FMultiplayerDeleteBuildAliasRequest& Request, const class FScriptDelegate& onSuccess, const class FScriptDelegate& onFailure, class UObject* customData);
		class UPlayFabMultiplayerAPI* DeleteBuild(const struct FMultiplayerDeleteBuildRequest& Request, const class FScriptDelegate& onSuccess, const class FScriptDelegate& onFailure, class UObject* customData);
		class UPlayFabMultiplayerAPI* DeleteAsset(const struct FMultiplayerDeleteAssetRequest& Request, const class FScriptDelegate& onSuccess, const class FScriptDelegate& onFailure, class UObject* customData);
		void DelegateOnSuccessUploadCertificate__DelegateSignature(const struct FMultiplayerEmptyResponse& Result, class UObject* customData);
		void DelegateOnSuccessUpdateBuildRegions__DelegateSignature(const struct FMultiplayerEmptyResponse& Result, class UObject* customData);
		void DelegateOnSuccessUpdateBuildRegion__DelegateSignature(const struct FMultiplayerEmptyResponse& Result, class UObject* customData);
		void DelegateOnSuccessUpdateBuildName__DelegateSignature(const struct FMultiplayerEmptyResponse& Result, class UObject* customData);
		void DelegateOnSuccessUpdateBuildAlias__DelegateSignature(const struct FMultiplayerBuildAliasDetailsResponse& Result, class UObject* customData);
		void DelegateOnSuccessUntagContainerImage__DelegateSignature(const struct FMultiplayerEmptyResponse& Result, class UObject* customData);
		void DelegateOnSuccessShutdownMultiplayerServer__DelegateSignature(const struct FMultiplayerEmptyResponse& Result, class UObject* customData);
		void DelegateOnSuccessRolloverContainerRegistryCredentials__DelegateSignature(const struct FMultiplayerRolloverContainerRegistryCredentialsResponse& Result, class UObject* customData);
		void DelegateOnSuccessRequestMultiplayerServer__DelegateSignature(const struct FMultiplayerRequestMultiplayerServerResponse& Result, class UObject* customData);
		void DelegateOnSuccessListVirtualMachineSummaries__DelegateSignature(const struct FMultiplayerListVirtualMachineSummariesResponse& Result, class UObject* customData);
		void DelegateOnSuccessListTitleMultiplayerServersQuotaChanges__DelegateSignature(const struct FMultiplayerListTitleMultiplayerServersQuotaChangesResponse& Result, class UObject* customData);
		void DelegateOnSuccessListServerBackfillTicketsForPlayer__DelegateSignature(const struct FMultiplayerListServerBackfillTicketsForPlayerResult& Result, class UObject* customData);
		void DelegateOnSuccessListQosServersForTitle__DelegateSignature(const struct FMultiplayerListQosServersForTitleResponse& Result, class UObject* customData);
		void DelegateOnSuccessListPartyQosServers__DelegateSignature(const struct FMultiplayerListPartyQosServersResponse& Result, class UObject* customData);
		void DelegateOnSuccessListMultiplayerServers__DelegateSignature(const struct FMultiplayerListMultiplayerServersResponse& Result, class UObject* customData);
		void DelegateOnSuccessListMatchmakingTicketsForPlayer__DelegateSignature(const struct FMultiplayerListMatchmakingTicketsForPlayerResult& Result, class UObject* customData);
		void DelegateOnSuccessListContainerImageTags__DelegateSignature(const struct FMultiplayerListContainerImageTagsResponse& Result, class UObject* customData);
		void DelegateOnSuccessListContainerImages__DelegateSignature(const struct FMultiplayerListContainerImagesResponse& Result, class UObject* customData);
		void DelegateOnSuccessListCertificateSummaries__DelegateSignature(const struct FMultiplayerListCertificateSummariesResponse& Result, class UObject* customData);
		void DelegateOnSuccessListBuildSummariesV2__DelegateSignature(const struct FMultiplayerListBuildSummariesResponse& Result, class UObject* customData);
		void DelegateOnSuccessListBuildAliases__DelegateSignature(const struct FMultiplayerListBuildAliasesForTitleResponse& Result, class UObject* customData);
		void DelegateOnSuccessListAssetSummaries__DelegateSignature(const struct FMultiplayerListAssetSummariesResponse& Result, class UObject* customData);
		void DelegateOnSuccessListArchivedMultiplayerServers__DelegateSignature(const struct FMultiplayerListMultiplayerServersResponse& Result, class UObject* customData);
		void DelegateOnSuccessJoinMatchmakingTicket__DelegateSignature(const struct FMultiplayerJoinMatchmakingTicketResult& Result, class UObject* customData);
		void DelegateOnSuccessGetTitleMultiplayerServersQuotas__DelegateSignature(const struct FMultiplayerGetTitleMultiplayerServersQuotasResponse& Result, class UObject* customData);
		void DelegateOnSuccessGetTitleMultiplayerServersQuotaChange__DelegateSignature(const struct FMultiplayerGetTitleMultiplayerServersQuotaChangeResponse& Result, class UObject* customData);
		void DelegateOnSuccessGetTitleEnabledForMultiplayerServersStatus__DelegateSignature(const struct FMultiplayerGetTitleEnabledForMultiplayerServersStatusResponse& Result, class UObject* customData);
		void DelegateOnSuccessGetServerBackfillTicket__DelegateSignature(const struct FMultiplayerGetServerBackfillTicketResult& Result, class UObject* customData);
		void DelegateOnSuccessGetRemoteLoginEndpoint__DelegateSignature(const struct FMultiplayerGetRemoteLoginEndpointResponse& Result, class UObject* customData);
		void DelegateOnSuccessGetQueueStatistics__DelegateSignature(const struct FMultiplayerGetQueueStatisticsResult& Result, class UObject* customData);
		void DelegateOnSuccessGetMultiplayerSessionLogsBySessionId__DelegateSignature(const struct FMultiplayerGetMultiplayerServerLogsResponse& Result, class UObject* customData);
		void DelegateOnSuccessGetMultiplayerServerLogs__DelegateSignature(const struct FMultiplayerGetMultiplayerServerLogsResponse& Result, class UObject* customData);
		void DelegateOnSuccessGetMultiplayerServerDetails__DelegateSignature(const struct FMultiplayerGetMultiplayerServerDetailsResponse& Result, class UObject* customData);
		void DelegateOnSuccessGetMatchmakingTicket__DelegateSignature(const struct FMultiplayerGetMatchmakingTicketResult& Result, class UObject* customData);
		void DelegateOnSuccessGetMatch__DelegateSignature(const struct FMultiplayerGetMatchResult& Result, class UObject* customData);
		void DelegateOnSuccessGetContainerRegistryCredentials__DelegateSignature(const struct FMultiplayerGetContainerRegistryCredentialsResponse& Result, class UObject* customData);
		void DelegateOnSuccessGetBuildAlias__DelegateSignature(const struct FMultiplayerBuildAliasDetailsResponse& Result, class UObject* customData);
		void DelegateOnSuccessGetBuild__DelegateSignature(const struct FMultiplayerGetBuildResponse& Result, class UObject* customData);
		void DelegateOnSuccessGetAssetUploadUrl__DelegateSignature(const struct FMultiplayerGetAssetUploadUrlResponse& Result, class UObject* customData);
		void DelegateOnSuccessEnableMultiplayerServersForTitle__DelegateSignature(const struct FMultiplayerEnableMultiplayerServersForTitleResponse& Result, class UObject* customData);
		void DelegateOnSuccessDeleteRemoteUser__DelegateSignature(const struct FMultiplayerEmptyResponse& Result, class UObject* customData);
		void DelegateOnSuccessDeleteContainerImageRepository__DelegateSignature(const struct FMultiplayerEmptyResponse& Result, class UObject* customData);
		void DelegateOnSuccessDeleteCertificate__DelegateSignature(const struct FMultiplayerEmptyResponse& Result, class UObject* customData);
		void DelegateOnSuccessDeleteBuildRegion__DelegateSignature(const struct FMultiplayerEmptyResponse& Result, class UObject* customData);
		void DelegateOnSuccessDeleteBuildAlias__DelegateSignature(const struct FMultiplayerEmptyResponse& Result, class UObject* customData);
		void DelegateOnSuccessDeleteBuild__DelegateSignature(const struct FMultiplayerEmptyResponse& Result, class UObject* customData);
		void DelegateOnSuccessDeleteAsset__DelegateSignature(const struct FMultiplayerEmptyResponse& Result, class UObject* customData);
		void DelegateOnSuccessCreateTitleMultiplayerServersQuotaChange__DelegateSignature(const struct FMultiplayerCreateTitleMultiplayerServersQuotaChangeResponse& Result, class UObject* customData);
		void DelegateOnSuccessCreateServerMatchmakingTicket__DelegateSignature(const struct FMultiplayerCreateMatchmakingTicketResult& Result, class UObject* customData);
		void DelegateOnSuccessCreateServerBackfillTicket__DelegateSignature(const struct FMultiplayerCreateServerBackfillTicketResult& Result, class UObject* customData);
		void DelegateOnSuccessCreateRemoteUser__DelegateSignature(const struct FMultiplayerCreateRemoteUserResponse& Result, class UObject* customData);
		void DelegateOnSuccessCreateMatchmakingTicket__DelegateSignature(const struct FMultiplayerCreateMatchmakingTicketResult& Result, class UObject* customData);
		void DelegateOnSuccessCreateBuildWithProcessBasedServer__DelegateSignature(const struct FMultiplayerCreateBuildWithProcessBasedServerResponse& Result, class UObject* customData);
		void DelegateOnSuccessCreateBuildWithManagedContainer__DelegateSignature(const struct FMultiplayerCreateBuildWithManagedContainerResponse& Result, class UObject* customData);
		void DelegateOnSuccessCreateBuildWithCustomContainer__DelegateSignature(const struct FMultiplayerCreateBuildWithCustomContainerResponse& Result, class UObject* customData);
		void DelegateOnSuccessCreateBuildAlias__DelegateSignature(const struct FMultiplayerBuildAliasDetailsResponse& Result, class UObject* customData);
		void DelegateOnSuccessCancelServerBackfillTicket__DelegateSignature(const struct FMultiplayerCancelServerBackfillTicketResult& Result, class UObject* customData);
		void DelegateOnSuccessCancelMatchmakingTicket__DelegateSignature(const struct FMultiplayerCancelMatchmakingTicketResult& Result, class UObject* customData);
		void DelegateOnSuccessCancelAllServerBackfillTicketsForPlayer__DelegateSignature(const struct FMultiplayerCancelAllServerBackfillTicketsForPlayerResult& Result, class UObject* customData);
		void DelegateOnSuccessCancelAllMatchmakingTicketsForPlayer__DelegateSignature(const struct FMultiplayerCancelAllMatchmakingTicketsForPlayerResult& Result, class UObject* customData);
		void DelegateOnFailurePlayFabError__DelegateSignature(const struct FPlayFabError& Error, class UObject* customData);
		class UPlayFabMultiplayerAPI* CreateTitleMultiplayerServersQuotaChange(const struct FMultiplayerCreateTitleMultiplayerServersQuotaChangeRequest& Request, const class FScriptDelegate& onSuccess, const class FScriptDelegate& onFailure, class UObject* customData);
		class UPlayFabMultiplayerAPI* CreateServerMatchmakingTicket(const struct FMultiplayerCreateServerMatchmakingTicketRequest& Request, const class FScriptDelegate& onSuccess, const class FScriptDelegate& onFailure, class UObject* customData);
		class UPlayFabMultiplayerAPI* CreateServerBackfillTicket(const struct FMultiplayerCreateServerBackfillTicketRequest& Request, const class FScriptDelegate& onSuccess, const class FScriptDelegate& onFailure, class UObject* customData);
		class UPlayFabMultiplayerAPI* CreateRemoteUser(const struct FMultiplayerCreateRemoteUserRequest& Request, const class FScriptDelegate& onSuccess, const class FScriptDelegate& onFailure, class UObject* customData);
		class UPlayFabMultiplayerAPI* CreateMatchmakingTicket(const struct FMultiplayerCreateMatchmakingTicketRequest& Request, const class FScriptDelegate& onSuccess, const class FScriptDelegate& onFailure, class UObject* customData);
		class UPlayFabMultiplayerAPI* CreateBuildWithProcessBasedServer(const struct FMultiplayerCreateBuildWithProcessBasedServerRequest& Request, const class FScriptDelegate& onSuccess, const class FScriptDelegate& onFailure, class UObject* customData);
		class UPlayFabMultiplayerAPI* CreateBuildWithManagedContainer(const struct FMultiplayerCreateBuildWithManagedContainerRequest& Request, const class FScriptDelegate& onSuccess, const class FScriptDelegate& onFailure, class UObject* customData);
		class UPlayFabMultiplayerAPI* CreateBuildWithCustomContainer(const struct FMultiplayerCreateBuildWithCustomContainerRequest& Request, const class FScriptDelegate& onSuccess, const class FScriptDelegate& onFailure, class UObject* customData);
		class UPlayFabMultiplayerAPI* CreateBuildAlias(const struct FMultiplayerCreateBuildAliasRequest& Request, const class FScriptDelegate& onSuccess, const class FScriptDelegate& onFailure, class UObject* customData);
		class UPlayFabMultiplayerAPI* CancelServerBackfillTicket(const struct FMultiplayerCancelServerBackfillTicketRequest& Request, const class FScriptDelegate& onSuccess, const class FScriptDelegate& onFailure, class UObject* customData);
		class UPlayFabMultiplayerAPI* CancelMatchmakingTicket(const struct FMultiplayerCancelMatchmakingTicketRequest& Request, const class FScriptDelegate& onSuccess, const class FScriptDelegate& onFailure, class UObject* customData);
		class UPlayFabMultiplayerAPI* CancelAllServerBackfillTicketsForPlayer(const struct FMultiplayerCancelAllServerBackfillTicketsForPlayerRequest& Request, const class FScriptDelegate& onSuccess, const class FScriptDelegate& onFailure, class UObject* customData);
		class UPlayFabMultiplayerAPI* CancelAllMatchmakingTicketsForPlayer(const struct FMultiplayerCancelAllMatchmakingTicketsForPlayerRequest& Request, const class FScriptDelegate& onSuccess, const class FScriptDelegate& onFailure, class UObject* customData);
		static UClass* StaticClass();
	};

	/**
	 * Class PlayFab.PlayFabMultiplayerModelDecoder
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UPlayFabMultiplayerModelDecoder : public UBlueprintFunctionLibrary
	{
	public:
		struct FMultiplayerRolloverContainerRegistryCredentialsResponse decodeRolloverContainerRegistryCredentialsResponseResponse(class UPlayFabJsonObject* response);
		struct FMultiplayerRequestMultiplayerServerResponse decodeRequestMultiplayerServerResponseResponse(class UPlayFabJsonObject* response);
		struct FMultiplayerListVirtualMachineSummariesResponse decodeListVirtualMachineSummariesResponseResponse(class UPlayFabJsonObject* response);
		struct FMultiplayerListTitleMultiplayerServersQuotaChangesResponse decodeListTitleMultiplayerServersQuotaChangesResponseResponse(class UPlayFabJsonObject* response);
		struct FMultiplayerListServerBackfillTicketsForPlayerResult decodeListServerBackfillTicketsForPlayerResultResponse(class UPlayFabJsonObject* response);
		struct FMultiplayerListQosServersForTitleResponse decodeListQosServersForTitleResponseResponse(class UPlayFabJsonObject* response);
		struct FMultiplayerListPartyQosServersResponse decodeListPartyQosServersResponseResponse(class UPlayFabJsonObject* response);
		struct FMultiplayerListMultiplayerServersResponse decodeListMultiplayerServersResponseResponse(class UPlayFabJsonObject* response);
		struct FMultiplayerListMatchmakingTicketsForPlayerResult decodeListMatchmakingTicketsForPlayerResultResponse(class UPlayFabJsonObject* response);
		struct FMultiplayerListContainerImageTagsResponse decodeListContainerImageTagsResponseResponse(class UPlayFabJsonObject* response);
		struct FMultiplayerListContainerImagesResponse decodeListContainerImagesResponseResponse(class UPlayFabJsonObject* response);
		struct FMultiplayerListCertificateSummariesResponse decodeListCertificateSummariesResponseResponse(class UPlayFabJsonObject* response);
		struct FMultiplayerListBuildSummariesResponse decodeListBuildSummariesResponseResponse(class UPlayFabJsonObject* response);
		struct FMultiplayerListBuildAliasesForTitleResponse decodeListBuildAliasesForTitleResponseResponse(class UPlayFabJsonObject* response);
		struct FMultiplayerListAssetSummariesResponse decodeListAssetSummariesResponseResponse(class UPlayFabJsonObject* response);
		struct FMultiplayerJoinMatchmakingTicketResult decodeJoinMatchmakingTicketResultResponse(class UPlayFabJsonObject* response);
		struct FMultiplayerGetTitleMultiplayerServersQuotasResponse decodeGetTitleMultiplayerServersQuotasResponseResponse(class UPlayFabJsonObject* response);
		struct FMultiplayerGetTitleMultiplayerServersQuotaChangeResponse decodeGetTitleMultiplayerServersQuotaChangeResponseResponse(class UPlayFabJsonObject* response);
		struct FMultiplayerGetTitleEnabledForMultiplayerServersStatusResponse decodeGetTitleEnabledForMultiplayerServersStatusResponseResponse(class UPlayFabJsonObject* response);
		struct FMultiplayerGetServerBackfillTicketResult decodeGetServerBackfillTicketResultResponse(class UPlayFabJsonObject* response);
		struct FMultiplayerGetRemoteLoginEndpointResponse decodeGetRemoteLoginEndpointResponseResponse(class UPlayFabJsonObject* response);
		struct FMultiplayerGetQueueStatisticsResult decodeGetQueueStatisticsResultResponse(class UPlayFabJsonObject* response);
		struct FMultiplayerGetMultiplayerServerLogsResponse decodeGetMultiplayerServerLogsResponseResponse(class UPlayFabJsonObject* response);
		struct FMultiplayerGetMultiplayerServerDetailsResponse decodeGetMultiplayerServerDetailsResponseResponse(class UPlayFabJsonObject* response);
		struct FMultiplayerGetMatchResult decodeGetMatchResultResponse(class UPlayFabJsonObject* response);
		struct FMultiplayerGetMatchmakingTicketResult decodeGetMatchmakingTicketResultResponse(class UPlayFabJsonObject* response);
		struct FMultiplayerGetContainerRegistryCredentialsResponse decodeGetContainerRegistryCredentialsResponseResponse(class UPlayFabJsonObject* response);
		struct FMultiplayerGetBuildResponse decodeGetBuildResponseResponse(class UPlayFabJsonObject* response);
		struct FMultiplayerGetAssetUploadUrlResponse decodeGetAssetUploadUrlResponseResponse(class UPlayFabJsonObject* response);
		struct FMultiplayerEnableMultiplayerServersForTitleResponse decodeEnableMultiplayerServersForTitleResponseResponse(class UPlayFabJsonObject* response);
		struct FMultiplayerEmptyResponse decodeEmptyResponseResponse(class UPlayFabJsonObject* response);
		struct FMultiplayerCreateTitleMultiplayerServersQuotaChangeResponse decodeCreateTitleMultiplayerServersQuotaChangeResponseResponse(class UPlayFabJsonObject* response);
		struct FMultiplayerCreateServerBackfillTicketResult decodeCreateServerBackfillTicketResultResponse(class UPlayFabJsonObject* response);
		struct FMultiplayerCreateRemoteUserResponse decodeCreateRemoteUserResponseResponse(class UPlayFabJsonObject* response);
		struct FMultiplayerCreateMatchmakingTicketResult decodeCreateMatchmakingTicketResultResponse(class UPlayFabJsonObject* response);
		struct FMultiplayerCreateBuildWithProcessBasedServerResponse decodeCreateBuildWithProcessBasedServerResponseResponse(class UPlayFabJsonObject* response);
		struct FMultiplayerCreateBuildWithManagedContainerResponse decodeCreateBuildWithManagedContainerResponseResponse(class UPlayFabJsonObject* response);
		struct FMultiplayerCreateBuildWithCustomContainerResponse decodeCreateBuildWithCustomContainerResponseResponse(class UPlayFabJsonObject* response);
		struct FMultiplayerCancelServerBackfillTicketResult decodeCancelServerBackfillTicketResultResponse(class UPlayFabJsonObject* response);
		struct FMultiplayerCancelMatchmakingTicketResult decodeCancelMatchmakingTicketResultResponse(class UPlayFabJsonObject* response);
		struct FMultiplayerCancelAllServerBackfillTicketsForPlayerResult decodeCancelAllServerBackfillTicketsForPlayerResultResponse(class UPlayFabJsonObject* response);
		struct FMultiplayerCancelAllMatchmakingTicketsForPlayerResult decodeCancelAllMatchmakingTicketsForPlayerResultResponse(class UPlayFabJsonObject* response);
		struct FMultiplayerBuildAliasDetailsResponse decodeBuildAliasDetailsResponseResponse(class UPlayFabJsonObject* response);
		static UClass* StaticClass();
	};

	/**
	 * Class PlayFab.PlayFabProfilesAPI
	 * Size -> 0x0130 (FullSize[0x0160] - InheritedSize[0x0030])
	 */
	class UPlayFabProfilesAPI : public UOnlineBlueprintCallProxyBase
	{
	public:
		class FScriptMulticastDelegate                             OnPlayFabResponse;                                       // 0x0030(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_63PF[0xB8];                                  // 0x0040(0x00B8) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UPlayFabAuthenticationContext*                       CallAuthenticationContext;                               // 0x00F8(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UPlayFabJsonObject*                                  RequestJsonObj;                                          // 0x0100(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UPlayFabJsonObject*                                  ResponseJsonObj;                                         // 0x0108(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_MR5C[0x50];                                  // 0x0110(0x0050) MISSED OFFSET (PADDING)

	public:
		class UPlayFabProfilesAPI* SetProfilePolicy(const struct FProfilesSetEntityProfilePolicyRequest& Request, const class FScriptDelegate& onSuccess, const class FScriptDelegate& onFailure, class UObject* customData);
		class UPlayFabProfilesAPI* SetProfileLanguage(const struct FProfilesSetProfileLanguageRequest& Request, const class FScriptDelegate& onSuccess, const class FScriptDelegate& onFailure, class UObject* customData);
		class UPlayFabProfilesAPI* SetGlobalPolicy(const struct FProfilesSetGlobalPolicyRequest& Request, const class FScriptDelegate& onSuccess, const class FScriptDelegate& onFailure, class UObject* customData);
		void HelperSetProfilePolicy(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
		void HelperSetProfileLanguage(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
		void HelperSetGlobalPolicy(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
		void HelperGetTitlePlayersFromMasterPlayerAccountIds(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
		void HelperGetProfiles(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
		void HelperGetProfile(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
		void HelperGetGlobalPolicy(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
		class UPlayFabProfilesAPI* GetTitlePlayersFromMasterPlayerAccountIds(const struct FProfilesGetTitlePlayersFromMasterPlayerAccountIdsRequest& Request, const class FScriptDelegate& onSuccess, const class FScriptDelegate& onFailure, class UObject* customData);
		class UPlayFabProfilesAPI* GetProfiles(const struct FProfilesGetEntityProfilesRequest& Request, const class FScriptDelegate& onSuccess, const class FScriptDelegate& onFailure, class UObject* customData);
		class UPlayFabProfilesAPI* GetProfile(const struct FProfilesGetEntityProfileRequest& Request, const class FScriptDelegate& onSuccess, const class FScriptDelegate& onFailure, class UObject* customData);
		class UPlayFabProfilesAPI* GetGlobalPolicy(const struct FProfilesGetGlobalPolicyRequest& Request, const class FScriptDelegate& onSuccess, const class FScriptDelegate& onFailure, class UObject* customData);
		void DelegateOnSuccessSetProfilePolicy__DelegateSignature(const struct FProfilesSetEntityProfilePolicyResponse& Result, class UObject* customData);
		void DelegateOnSuccessSetProfileLanguage__DelegateSignature(const struct FProfilesSetProfileLanguageResponse& Result, class UObject* customData);
		void DelegateOnSuccessSetGlobalPolicy__DelegateSignature(const struct FProfilesSetGlobalPolicyResponse& Result, class UObject* customData);
		void DelegateOnSuccessGetTitlePlayersFromMasterPlayerAccountIds__DelegateSignature(const struct FProfilesGetTitlePlayersFromMasterPlayerAccountIdsResponse& Result, class UObject* customData);
		void DelegateOnSuccessGetProfiles__DelegateSignature(const struct FProfilesGetEntityProfilesResponse& Result, class UObject* customData);
		void DelegateOnSuccessGetProfile__DelegateSignature(const struct FProfilesGetEntityProfileResponse& Result, class UObject* customData);
		void DelegateOnSuccessGetGlobalPolicy__DelegateSignature(const struct FProfilesGetGlobalPolicyResponse& Result, class UObject* customData);
		void DelegateOnFailurePlayFabError__DelegateSignature(const struct FPlayFabError& Error, class UObject* customData);
		static UClass* StaticClass();
	};

	/**
	 * Class PlayFab.PlayFabProfilesModelDecoder
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UPlayFabProfilesModelDecoder : public UBlueprintFunctionLibrary
	{
	public:
		struct FProfilesSetProfileLanguageResponse decodeSetProfileLanguageResponseResponse(class UPlayFabJsonObject* response);
		struct FProfilesSetGlobalPolicyResponse decodeSetGlobalPolicyResponseResponse(class UPlayFabJsonObject* response);
		struct FProfilesSetEntityProfilePolicyResponse decodeSetEntityProfilePolicyResponseResponse(class UPlayFabJsonObject* response);
		struct FProfilesGetTitlePlayersFromMasterPlayerAccountIdsResponse decodeGetTitlePlayersFromMasterPlayerAccountIdsResponseResponse(class UPlayFabJsonObject* response);
		struct FProfilesGetGlobalPolicyResponse decodeGetGlobalPolicyResponseResponse(class UPlayFabJsonObject* response);
		struct FProfilesGetEntityProfilesResponse decodeGetEntityProfilesResponseResponse(class UPlayFabJsonObject* response);
		struct FProfilesGetEntityProfileResponse decodeGetEntityProfileResponseResponse(class UPlayFabJsonObject* response);
		static UClass* StaticClass();
	};

	/**
	 * Class PlayFab.PlayFabServerAPI
	 * Size -> 0x0900 (FullSize[0x0930] - InheritedSize[0x0030])
	 */
	class UPlayFabServerAPI : public UOnlineBlueprintCallProxyBase
	{
	public:
		class FScriptMulticastDelegate                             OnPlayFabResponse;                                       // 0x0030(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_DEYU[0x888];                                 // 0x0040(0x0888) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UPlayFabAuthenticationContext*                       CallAuthenticationContext;                               // 0x08C8(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UPlayFabJsonObject*                                  RequestJsonObj;                                          // 0x08D0(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UPlayFabJsonObject*                                  ResponseJsonObj;                                         // 0x08D8(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_UX7R[0x50];                                  // 0x08E0(0x0050) MISSED OFFSET (PADDING)

	public:
		class UPlayFabServerAPI* WriteTitleEvent(const struct FServerWriteTitleEventRequest& Request, const class FScriptDelegate& onSuccess, const class FScriptDelegate& onFailure, class UObject* customData);
		class UPlayFabServerAPI* WritePlayerEvent(const struct FServerWriteServerPlayerEventRequest& Request, const class FScriptDelegate& onSuccess, const class FScriptDelegate& onFailure, class UObject* customData);
		class UPlayFabServerAPI* WriteCharacterEvent(const struct FServerWriteServerCharacterEventRequest& Request, const class FScriptDelegate& onSuccess, const class FScriptDelegate& onFailure, class UObject* customData);
		class UPlayFabServerAPI* UpdateUserReadOnlyData(const struct FServerUpdateUserDataRequest& Request, const class FScriptDelegate& onSuccess, const class FScriptDelegate& onFailure, class UObject* customData);
		class UPlayFabServerAPI* UpdateUserPublisherReadOnlyData(const struct FServerUpdateUserDataRequest& Request, const class FScriptDelegate& onSuccess, const class FScriptDelegate& onFailure, class UObject* customData);
		class UPlayFabServerAPI* UpdateUserPublisherInternalData(const struct FServerUpdateUserInternalDataRequest& Request, const class FScriptDelegate& onSuccess, const class FScriptDelegate& onFailure, class UObject* customData);
		class UPlayFabServerAPI* UpdateUserPublisherData(const struct FServerUpdateUserDataRequest& Request, const class FScriptDelegate& onSuccess, const class FScriptDelegate& onFailure, class UObject* customData);
		class UPlayFabServerAPI* UpdateUserInventoryItemCustomData(const struct FServerUpdateUserInventoryItemDataRequest& Request, const class FScriptDelegate& onSuccess, const class FScriptDelegate& onFailure, class UObject* customData);
		class UPlayFabServerAPI* UpdateUserInternalData(const struct FServerUpdateUserInternalDataRequest& Request, const class FScriptDelegate& onSuccess, const class FScriptDelegate& onFailure, class UObject* customData);
		class UPlayFabServerAPI* UpdateUserData(const struct FServerUpdateUserDataRequest& Request, const class FScriptDelegate& onSuccess, const class FScriptDelegate& onFailure, class UObject* customData);
		class UPlayFabServerAPI* UpdateSharedGroupData(const struct FServerUpdateSharedGroupDataRequest& Request, const class FScriptDelegate& onSuccess, const class FScriptDelegate& onFailure, class UObject* customData);
		class UPlayFabServerAPI* UpdatePlayerStatistics(const struct FServerUpdatePlayerStatisticsRequest& Request, const class FScriptDelegate& onSuccess, const class FScriptDelegate& onFailure, class UObject* customData);
		class UPlayFabServerAPI* UpdateCharacterStatistics(const struct FServerUpdateCharacterStatisticsRequest& Request, const class FScriptDelegate& onSuccess, const class FScriptDelegate& onFailure, class UObject* customData);
		class UPlayFabServerAPI* UpdateCharacterReadOnlyData(const struct FServerUpdateCharacterDataRequest& Request, const class FScriptDelegate& onSuccess, const class FScriptDelegate& onFailure, class UObject* customData);
		class UPlayFabServerAPI* UpdateCharacterInternalData(const struct FServerUpdateCharacterDataRequest& Request, const class FScriptDelegate& onSuccess, const class FScriptDelegate& onFailure, class UObject* customData);
		class UPlayFabServerAPI* UpdateCharacterData(const struct FServerUpdateCharacterDataRequest& Request, const class FScriptDelegate& onSuccess, const class FScriptDelegate& onFailure, class UObject* customData);
		class UPlayFabServerAPI* UpdateBans(const struct FServerUpdateBansRequest& Request, const class FScriptDelegate& onSuccess, const class FScriptDelegate& onFailure, class UObject* customData);
		class UPlayFabServerAPI* UpdateAvatarUrl(const struct FServerUpdateAvatarUrlRequest& Request, const class FScriptDelegate& onSuccess, const class FScriptDelegate& onFailure, class UObject* customData);
		class UPlayFabServerAPI* UnlockContainerItem(const struct FServerUnlockContainerItemRequest& Request, const class FScriptDelegate& onSuccess, const class FScriptDelegate& onFailure, class UObject* customData);
		class UPlayFabServerAPI* UnlockContainerInstance(const struct FServerUnlockContainerInstanceRequest& Request, const class FScriptDelegate& onSuccess, const class FScriptDelegate& onFailure, class UObject* customData);
		class UPlayFabServerAPI* UnlinkXboxAccount(const struct FServerUnlinkXboxAccountRequest& Request, const class FScriptDelegate& onSuccess, const class FScriptDelegate& onFailure, class UObject* customData);
		class UPlayFabServerAPI* UnlinkServerCustomId(const struct FServerUnlinkServerCustomIdRequest& Request, const class FScriptDelegate& onSuccess, const class FScriptDelegate& onFailure, class UObject* customData);
		class UPlayFabServerAPI* UnlinkPSNAccount(const struct FServerUnlinkPSNAccountRequest& Request, const class FScriptDelegate& onSuccess, const class FScriptDelegate& onFailure, class UObject* customData);
		class UPlayFabServerAPI* SubtractUserVirtualCurrency(const struct FServerSubtractUserVirtualCurrencyRequest& Request, const class FScriptDelegate& onSuccess, const class FScriptDelegate& onFailure, class UObject* customData);
		class UPlayFabServerAPI* SubtractCharacterVirtualCurrency(const struct FServerSubtractCharacterVirtualCurrencyRequest& Request, const class FScriptDelegate& onSuccess, const class FScriptDelegate& onFailure, class UObject* customData);
		class UPlayFabServerAPI* SetTitleInternalData(const struct FServerSetTitleDataRequest& Request, const class FScriptDelegate& onSuccess, const class FScriptDelegate& onFailure, class UObject* customData);
		class UPlayFabServerAPI* SetTitleData(const struct FServerSetTitleDataRequest& Request, const class FScriptDelegate& onSuccess, const class FScriptDelegate& onFailure, class UObject* customData);
		class UPlayFabServerAPI* SetPublisherData(const struct FServerSetPublisherDataRequest& Request, const class FScriptDelegate& onSuccess, const class FScriptDelegate& onFailure, class UObject* customData);
		class UPlayFabServerAPI* SetPlayerSecret(const struct FServerSetPlayerSecretRequest& Request, const class FScriptDelegate& onSuccess, const class FScriptDelegate& onFailure, class UObject* customData);
		class UPlayFabServerAPI* SetGameServerInstanceTags(const struct FServerSetGameServerInstanceTagsRequest& Request, const class FScriptDelegate& onSuccess, const class FScriptDelegate& onFailure, class UObject* customData);
		class UPlayFabServerAPI* SetGameServerInstanceState(const struct FServerSetGameServerInstanceStateRequest& Request, const class FScriptDelegate& onSuccess, const class FScriptDelegate& onFailure, class UObject* customData);
		class UPlayFabServerAPI* SetGameServerInstanceData(const struct FServerSetGameServerInstanceDataRequest& Request, const class FScriptDelegate& onSuccess, const class FScriptDelegate& onFailure, class UObject* customData);
		class UPlayFabServerAPI* SetFriendTags(const struct FServerSetFriendTagsRequest& Request, const class FScriptDelegate& onSuccess, const class FScriptDelegate& onFailure, class UObject* customData);
		class UPlayFabServerAPI* SendPushNotificationFromTemplate(const struct FServerSendPushNotificationFromTemplateRequest& Request, const class FScriptDelegate& onSuccess, const class FScriptDelegate& onFailure, class UObject* customData);
		class UPlayFabServerAPI* SendPushNotification(const struct FServerSendPushNotificationRequest& Request, const class FScriptDelegate& onSuccess, const class FScriptDelegate& onFailure, class UObject* customData);
		class UPlayFabServerAPI* SendEmailFromTemplate(const struct FServerSendEmailFromTemplateRequest& Request, const class FScriptDelegate& onSuccess, const class FScriptDelegate& onFailure, class UObject* customData);
		class UPlayFabServerAPI* SendCustomAccountRecoveryEmail(const struct FServerSendCustomAccountRecoveryEmailRequest& Request, const class FScriptDelegate& onSuccess, const class FScriptDelegate& onFailure, class UObject* customData);
		class UPlayFabServerAPI* SavePushNotificationTemplate(const struct FServerSavePushNotificationTemplateRequest& Request, const class FScriptDelegate& onSuccess, const class FScriptDelegate& onFailure, class UObject* customData);
		class UPlayFabServerAPI* RevokeInventoryItems(const struct FServerRevokeInventoryItemsRequest& Request, const class FScriptDelegate& onSuccess, const class FScriptDelegate& onFailure, class UObject* customData);
		class UPlayFabServerAPI* RevokeInventoryItem(const struct FServerRevokeInventoryItemRequest& Request, const class FScriptDelegate& onSuccess, const class FScriptDelegate& onFailure, class UObject* customData);
		class UPlayFabServerAPI* RevokeBans(const struct FServerRevokeBansRequest& Request, const class FScriptDelegate& onSuccess, const class FScriptDelegate& onFailure, class UObject* customData);
		class UPlayFabServerAPI* RevokeAllBansForUser(const struct FServerRevokeAllBansForUserRequest& Request, const class FScriptDelegate& onSuccess, const class FScriptDelegate& onFailure, class UObject* customData);
		class UPlayFabServerAPI* ReportPlayer(const struct FServerReportPlayerServerRequest& Request, const class FScriptDelegate& onSuccess, const class FScriptDelegate& onFailure, class UObject* customData);
		class UPlayFabServerAPI* RemoveSharedGroupMembers(const struct FServerRemoveSharedGroupMembersRequest& Request, const class FScriptDelegate& onSuccess, const class FScriptDelegate& onFailure, class UObject* customData);
		class UPlayFabServerAPI* RemovePlayerTag(const struct FServerRemovePlayerTagRequest& Request, const class FScriptDelegate& onSuccess, const class FScriptDelegate& onFailure, class UObject* customData);
		class UPlayFabServerAPI* RemoveGenericID(const struct FServerRemoveGenericIDRequest& Request, const class FScriptDelegate& onSuccess, const class FScriptDelegate& onFailure, class UObject* customData);
		class UPlayFabServerAPI* RemoveFriend(const struct FServerRemoveFriendRequest& Request, const class FScriptDelegate& onSuccess, const class FScriptDelegate& onFailure, class UObject* customData);
		class UPlayFabServerAPI* RegisterGame(const struct FServerRegisterGameRequest& Request, const class FScriptDelegate& onSuccess, const class FScriptDelegate& onFailure, class UObject* customData);
		class UPlayFabServerAPI* RefreshGameServerInstanceHeartbeat(const struct FServerRefreshGameServerInstanceHeartbeatRequest& Request, const class FScriptDelegate& onSuccess, const class FScriptDelegate& onFailure, class UObject* customData);
		class UPlayFabServerAPI* RedeemMatchmakerTicket(const struct FServerRedeemMatchmakerTicketRequest& Request, const class FScriptDelegate& onSuccess, const class FScriptDelegate& onFailure, class UObject* customData);
		class UPlayFabServerAPI* RedeemCoupon(const struct FServerRedeemCouponRequest& Request, const class FScriptDelegate& onSuccess, const class FScriptDelegate& onFailure, class UObject* customData);
		class UPlayFabServerAPI* NotifyMatchmakerPlayerLeft(const struct FServerNotifyMatchmakerPlayerLeftRequest& Request, const class FScriptDelegate& onSuccess, const class FScriptDelegate& onFailure, class UObject* customData);
		class UPlayFabServerAPI* MoveItemToUserFromCharacter(const struct FServerMoveItemToUserFromCharacterRequest& Request, const class FScriptDelegate& onSuccess, const class FScriptDelegate& onFailure, class UObject* customData);
		class UPlayFabServerAPI* MoveItemToCharacterFromUser(const struct FServerMoveItemToCharacterFromUserRequest& Request, const class FScriptDelegate& onSuccess, const class FScriptDelegate& onFailure, class UObject* customData);
		class UPlayFabServerAPI* MoveItemToCharacterFromCharacter(const struct FServerMoveItemToCharacterFromCharacterRequest& Request, const class FScriptDelegate& onSuccess, const class FScriptDelegate& onFailure, class UObject* customData);
		class UPlayFabServerAPI* ModifyItemUses(const struct FServerModifyItemUsesRequest& Request, const class FScriptDelegate& onSuccess, const class FScriptDelegate& onFailure, class UObject* customData);
		class UPlayFabServerAPI* LoginWithXboxId(const struct FServerLoginWithXboxIdRequest& Request, const class FScriptDelegate& onSuccess, const class FScriptDelegate& onFailure, class UObject* customData);
		class UPlayFabServerAPI* LoginWithXbox(const struct FServerLoginWithXboxRequest& Request, const class FScriptDelegate& onSuccess, const class FScriptDelegate& onFailure, class UObject* customData);
		class UPlayFabServerAPI* LoginWithServerCustomId(const struct FServerLoginWithServerCustomIdRequest& Request, const class FScriptDelegate& onSuccess, const class FScriptDelegate& onFailure, class UObject* customData);
		class UPlayFabServerAPI* LinkXboxAccount(const struct FServerLinkXboxAccountRequest& Request, const class FScriptDelegate& onSuccess, const class FScriptDelegate& onFailure, class UObject* customData);
		class UPlayFabServerAPI* LinkServerCustomId(const struct FServerLinkServerCustomIdRequest& Request, const class FScriptDelegate& onSuccess, const class FScriptDelegate& onFailure, class UObject* customData);
		class UPlayFabServerAPI* LinkPSNAccount(const struct FServerLinkPSNAccountRequest& Request, const class FScriptDelegate& onSuccess, const class FScriptDelegate& onFailure, class UObject* customData);
		void HelperWriteTitleEvent(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
		void HelperWritePlayerEvent(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
		void HelperWriteCharacterEvent(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
		void HelperUpdateUserReadOnlyData(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
		void HelperUpdateUserPublisherReadOnlyData(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
		void HelperUpdateUserPublisherInternalData(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
		void HelperUpdateUserPublisherData(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
		void HelperUpdateUserInventoryItemCustomData(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
		void HelperUpdateUserInternalData(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
		void HelperUpdateUserData(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
		void HelperUpdateSharedGroupData(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
		void HelperUpdatePlayerStatistics(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
		void HelperUpdateCharacterStatistics(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
		void HelperUpdateCharacterReadOnlyData(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
		void HelperUpdateCharacterInternalData(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
		void HelperUpdateCharacterData(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
		void HelperUpdateBans(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
		void HelperUpdateAvatarUrl(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
		void HelperUnlockContainerItem(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
		void HelperUnlockContainerInstance(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
		void HelperUnlinkXboxAccount(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
		void HelperUnlinkServerCustomId(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
		void HelperUnlinkPSNAccount(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
		void HelperSubtractUserVirtualCurrency(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
		void HelperSubtractCharacterVirtualCurrency(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
		void HelperSetTitleInternalData(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
		void HelperSetTitleData(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
		void HelperSetPublisherData(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
		void HelperSetPlayerSecret(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
		void HelperSetGameServerInstanceTags(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
		void HelperSetGameServerInstanceState(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
		void HelperSetGameServerInstanceData(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
		void HelperSetFriendTags(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
		void HelperSendPushNotificationFromTemplate(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
		void HelperSendPushNotification(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
		void HelperSendEmailFromTemplate(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
		void HelperSendCustomAccountRecoveryEmail(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
		void HelperSavePushNotificationTemplate(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
		void HelperRevokeInventoryItems(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
		void HelperRevokeInventoryItem(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
		void HelperRevokeBans(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
		void HelperRevokeAllBansForUser(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
		void HelperReportPlayer(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
		void HelperRemoveSharedGroupMembers(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
		void HelperRemovePlayerTag(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
		void HelperRemoveGenericID(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
		void HelperRemoveFriend(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
		void HelperRegisterGame(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
		void HelperRefreshGameServerInstanceHeartbeat(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
		void HelperRedeemMatchmakerTicket(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
		void HelperRedeemCoupon(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
		void HelperNotifyMatchmakerPlayerLeft(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
		void HelperMoveItemToUserFromCharacter(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
		void HelperMoveItemToCharacterFromUser(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
		void HelperMoveItemToCharacterFromCharacter(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
		void HelperModifyItemUses(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
		void HelperLoginWithXboxId(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
		void HelperLoginWithXbox(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
		void HelperLoginWithServerCustomId(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
		void HelperLinkXboxAccount(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
		void HelperLinkServerCustomId(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
		void HelperLinkPSNAccount(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
		void HelperGrantItemsToUsers(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
		void HelperGrantItemsToUser(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
		void HelperGrantItemsToCharacter(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
		void HelperGrantCharacterToUser(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
		void HelperGetUserReadOnlyData(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
		void HelperGetUserPublisherReadOnlyData(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
		void HelperGetUserPublisherInternalData(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
		void HelperGetUserPublisherData(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
		void HelperGetUserInventory(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
		void HelperGetUserInternalData(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
		void HelperGetUserData(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
		void HelperGetUserBans(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
		void HelperGetUserAccountInfo(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
		void HelperGetTitleNews(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
		void HelperGetTitleInternalData(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
		void HelperGetTitleData(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
		void HelperGetTime(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
		void HelperGetStoreItems(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
		void HelperGetSharedGroupData(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
		void HelperGetServerCustomIDsFromPlayFabIDs(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
		void HelperGetRandomResultTables(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
		void HelperGetPublisherData(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
		void HelperGetPlayFabIDsFromXboxLiveIDs(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
		void HelperGetPlayFabIDsFromSteamIDs(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
		void HelperGetPlayFabIDsFromPSNAccountIDs(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
		void HelperGetPlayFabIDsFromNintendoSwitchDeviceIds(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
		void HelperGetPlayFabIDsFromGenericIDs(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
		void HelperGetPlayFabIDsFromFacebookInstantGamesIds(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
		void HelperGetPlayFabIDsFromFacebookIDs(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
		void HelperGetPlayerTags(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
		void HelperGetPlayerStatisticVersions(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
		void HelperGetPlayerStatistics(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
		void HelperGetPlayersInSegment(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
		void HelperGetPlayerSegments(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
		void HelperGetPlayerProfile(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
		void HelperGetPlayerCombinedInfo(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
		void HelperGetLeaderboardForUserCharacters(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
		void HelperGetLeaderboardAroundUser(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
		void HelperGetLeaderboardAroundCharacter(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
		void HelperGetLeaderboard(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
		void HelperGetFriendsList(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
		void HelperGetFriendLeaderboard(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
		void HelperGetContentDownloadUrl(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
		void HelperGetCharacterStatistics(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
		void HelperGetCharacterReadOnlyData(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
		void HelperGetCharacterLeaderboard(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
		void HelperGetCharacterInventory(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
		void HelperGetCharacterInternalData(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
		void HelperGetCharacterData(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
		void HelperGetCatalogItems(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
		void HelperGetAllUsersCharacters(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
		void HelperGetAllSegments(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
		void HelperExecuteCloudScript(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
		void HelperEvaluateRandomResultTable(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
		void HelperDeregisterGame(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
		void HelperDeleteSharedGroup(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
		void HelperDeletePushNotificationTemplate(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
		void HelperDeletePlayer(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
		void HelperDeleteCharacterFromUser(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
		void HelperCreateSharedGroup(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
		void HelperConsumeItem(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
		void HelperBanUsers(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
		void HelperAwardSteamAchievement(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
		void HelperAuthenticateSessionTicket(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
		void HelperAddUserVirtualCurrency(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
		void HelperAddSharedGroupMembers(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
		void HelperAddPlayerTag(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
		void HelperAddGenericID(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
		void HelperAddFriend(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
		void HelperAddCharacterVirtualCurrency(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
		class UPlayFabServerAPI* GrantItemsToUsers(const struct FServerGrantItemsToUsersRequest& Request, const class FScriptDelegate& onSuccess, const class FScriptDelegate& onFailure, class UObject* customData);
		class UPlayFabServerAPI* GrantItemsToUser(const struct FServerGrantItemsToUserRequest& Request, const class FScriptDelegate& onSuccess, const class FScriptDelegate& onFailure, class UObject* customData);
		class UPlayFabServerAPI* GrantItemsToCharacter(const struct FServerGrantItemsToCharacterRequest& Request, const class FScriptDelegate& onSuccess, const class FScriptDelegate& onFailure, class UObject* customData);
		class UPlayFabServerAPI* GrantCharacterToUser(const struct FServerGrantCharacterToUserRequest& Request, const class FScriptDelegate& onSuccess, const class FScriptDelegate& onFailure, class UObject* customData);
		class UPlayFabServerAPI* GetUserReadOnlyData(const struct FServerGetUserDataRequest& Request, const class FScriptDelegate& onSuccess, const class FScriptDelegate& onFailure, class UObject* customData);
		class UPlayFabServerAPI* GetUserPublisherReadOnlyData(const struct FServerGetUserDataRequest& Request, const class FScriptDelegate& onSuccess, const class FScriptDelegate& onFailure, class UObject* customData);
		class UPlayFabServerAPI* GetUserPublisherInternalData(const struct FServerGetUserDataRequest& Request, const class FScriptDelegate& onSuccess, const class FScriptDelegate& onFailure, class UObject* customData);
		class UPlayFabServerAPI* GetUserPublisherData(const struct FServerGetUserDataRequest& Request, const class FScriptDelegate& onSuccess, const class FScriptDelegate& onFailure, class UObject* customData);
		class UPlayFabServerAPI* GetUserInventory(const struct FServerGetUserInventoryRequest& Request, const class FScriptDelegate& onSuccess, const class FScriptDelegate& onFailure, class UObject* customData);
		class UPlayFabServerAPI* GetUserInternalData(const struct FServerGetUserDataRequest& Request, const class FScriptDelegate& onSuccess, const class FScriptDelegate& onFailure, class UObject* customData);
		class UPlayFabServerAPI* GetUserData(const struct FServerGetUserDataRequest& Request, const class FScriptDelegate& onSuccess, const class FScriptDelegate& onFailure, class UObject* customData);
		class UPlayFabServerAPI* GetUserBans(const struct FServerGetUserBansRequest& Request, const class FScriptDelegate& onSuccess, const class FScriptDelegate& onFailure, class UObject* customData);
		class UPlayFabServerAPI* GetUserAccountInfo(const struct FServerGetUserAccountInfoRequest& Request, const class FScriptDelegate& onSuccess, const class FScriptDelegate& onFailure, class UObject* customData);
		class UPlayFabServerAPI* GetTitleNews(const struct FServerGetTitleNewsRequest& Request, const class FScriptDelegate& onSuccess, const class FScriptDelegate& onFailure, class UObject* customData);
		class UPlayFabServerAPI* GetTitleInternalData(const struct FServerGetTitleDataRequest& Request, const class FScriptDelegate& onSuccess, const class FScriptDelegate& onFailure, class UObject* customData);
		class UPlayFabServerAPI* GetTitleData(const struct FServerGetTitleDataRequest& Request, const class FScriptDelegate& onSuccess, const class FScriptDelegate& onFailure, class UObject* customData);
		class UPlayFabServerAPI* GetTime(const struct FServerGetTimeRequest& Request, const class FScriptDelegate& onSuccess, const class FScriptDelegate& onFailure, class UObject* customData);
		class UPlayFabServerAPI* GetStoreItems(const struct FServerGetStoreItemsServerRequest& Request, const class FScriptDelegate& onSuccess, const class FScriptDelegate& onFailure, class UObject* customData);
		class UPlayFabServerAPI* GetSharedGroupData(const struct FServerGetSharedGroupDataRequest& Request, const class FScriptDelegate& onSuccess, const class FScriptDelegate& onFailure, class UObject* customData);
		class UPlayFabServerAPI* GetServerCustomIDsFromPlayFabIDs(const struct FServerGetServerCustomIDsFromPlayFabIDsRequest& Request, const class FScriptDelegate& onSuccess, const class FScriptDelegate& onFailure, class UObject* customData);
		class UPlayFabServerAPI* GetRandomResultTables(const struct FServerGetRandomResultTablesRequest& Request, const class FScriptDelegate& onSuccess, const class FScriptDelegate& onFailure, class UObject* customData);
		class UPlayFabServerAPI* GetPublisherData(const struct FServerGetPublisherDataRequest& Request, const class FScriptDelegate& onSuccess, const class FScriptDelegate& onFailure, class UObject* customData);
		class UPlayFabServerAPI* GetPlayFabIDsFromXboxLiveIDs(const struct FServerGetPlayFabIDsFromXboxLiveIDsRequest& Request, const class FScriptDelegate& onSuccess, const class FScriptDelegate& onFailure, class UObject* customData);
		class UPlayFabServerAPI* GetPlayFabIDsFromSteamIDs(const struct FServerGetPlayFabIDsFromSteamIDsRequest& Request, const class FScriptDelegate& onSuccess, const class FScriptDelegate& onFailure, class UObject* customData);
		class UPlayFabServerAPI* GetPlayFabIDsFromPSNAccountIDs(const struct FServerGetPlayFabIDsFromPSNAccountIDsRequest& Request, const class FScriptDelegate& onSuccess, const class FScriptDelegate& onFailure, class UObject* customData);
		class UPlayFabServerAPI* GetPlayFabIDsFromNintendoSwitchDeviceIds(const struct FServerGetPlayFabIDsFromNintendoSwitchDeviceIdsRequest& Request, const class FScriptDelegate& onSuccess, const class FScriptDelegate& onFailure, class UObject* customData);
		class UPlayFabServerAPI* GetPlayFabIDsFromGenericIDs(const struct FServerGetPlayFabIDsFromGenericIDsRequest& Request, const class FScriptDelegate& onSuccess, const class FScriptDelegate& onFailure, class UObject* customData);
		class UPlayFabServerAPI* GetPlayFabIDsFromFacebookInstantGamesIds(const struct FServerGetPlayFabIDsFromFacebookInstantGamesIdsRequest& Request, const class FScriptDelegate& onSuccess, const class FScriptDelegate& onFailure, class UObject* customData);
		class UPlayFabServerAPI* GetPlayFabIDsFromFacebookIDs(const struct FServerGetPlayFabIDsFromFacebookIDsRequest& Request, const class FScriptDelegate& onSuccess, const class FScriptDelegate& onFailure, class UObject* customData);
		class UPlayFabServerAPI* GetPlayerTags(const struct FServerGetPlayerTagsRequest& Request, const class FScriptDelegate& onSuccess, const class FScriptDelegate& onFailure, class UObject* customData);
		class UPlayFabServerAPI* GetPlayerStatisticVersions(const struct FServerGetPlayerStatisticVersionsRequest& Request, const class FScriptDelegate& onSuccess, const class FScriptDelegate& onFailure, class UObject* customData);
		class UPlayFabServerAPI* GetPlayerStatistics(const struct FServerGetPlayerStatisticsRequest& Request, const class FScriptDelegate& onSuccess, const class FScriptDelegate& onFailure, class UObject* customData);
		class UPlayFabServerAPI* GetPlayersInSegment(const struct FServerGetPlayersInSegmentRequest& Request, const class FScriptDelegate& onSuccess, const class FScriptDelegate& onFailure, class UObject* customData);
		class UPlayFabServerAPI* GetPlayerSegments(const struct FServerGetPlayersSegmentsRequest& Request, const class FScriptDelegate& onSuccess, const class FScriptDelegate& onFailure, class UObject* customData);
		class UPlayFabServerAPI* GetPlayerProfile(const struct FServerGetPlayerProfileRequest& Request, const class FScriptDelegate& onSuccess, const class FScriptDelegate& onFailure, class UObject* customData);
		class UPlayFabServerAPI* GetPlayerCombinedInfo(const struct FServerGetPlayerCombinedInfoRequest& Request, const class FScriptDelegate& onSuccess, const class FScriptDelegate& onFailure, class UObject* customData);
		class UPlayFabServerAPI* GetLeaderboardForUserCharacters(const struct FServerGetLeaderboardForUsersCharactersRequest& Request, const class FScriptDelegate& onSuccess, const class FScriptDelegate& onFailure, class UObject* customData);
		class UPlayFabServerAPI* GetLeaderboardAroundUser(const struct FServerGetLeaderboardAroundUserRequest& Request, const class FScriptDelegate& onSuccess, const class FScriptDelegate& onFailure, class UObject* customData);
		class UPlayFabServerAPI* GetLeaderboardAroundCharacter(const struct FServerGetLeaderboardAroundCharacterRequest& Request, const class FScriptDelegate& onSuccess, const class FScriptDelegate& onFailure, class UObject* customData);
		class UPlayFabServerAPI* GetLeaderboard(const struct FServerGetLeaderboardRequest& Request, const class FScriptDelegate& onSuccess, const class FScriptDelegate& onFailure, class UObject* customData);
		class UPlayFabServerAPI* GetFriendsList(const struct FServerGetFriendsListRequest& Request, const class FScriptDelegate& onSuccess, const class FScriptDelegate& onFailure, class UObject* customData);
		class UPlayFabServerAPI* GetFriendLeaderboard(const struct FServerGetFriendLeaderboardRequest& Request, const class FScriptDelegate& onSuccess, const class FScriptDelegate& onFailure, class UObject* customData);
		class UPlayFabServerAPI* GetContentDownloadUrl(const struct FServerGetContentDownloadUrlRequest& Request, const class FScriptDelegate& onSuccess, const class FScriptDelegate& onFailure, class UObject* customData);
		class UPlayFabServerAPI* GetCharacterStatistics(const struct FServerGetCharacterStatisticsRequest& Request, const class FScriptDelegate& onSuccess, const class FScriptDelegate& onFailure, class UObject* customData);
		class UPlayFabServerAPI* GetCharacterReadOnlyData(const struct FServerGetCharacterDataRequest& Request, const class FScriptDelegate& onSuccess, const class FScriptDelegate& onFailure, class UObject* customData);
		class UPlayFabServerAPI* GetCharacterLeaderboard(const struct FServerGetCharacterLeaderboardRequest& Request, const class FScriptDelegate& onSuccess, const class FScriptDelegate& onFailure, class UObject* customData);
		class UPlayFabServerAPI* GetCharacterInventory(const struct FServerGetCharacterInventoryRequest& Request, const class FScriptDelegate& onSuccess, const class FScriptDelegate& onFailure, class UObject* customData);
		class UPlayFabServerAPI* GetCharacterInternalData(const struct FServerGetCharacterDataRequest& Request, const class FScriptDelegate& onSuccess, const class FScriptDelegate& onFailure, class UObject* customData);
		class UPlayFabServerAPI* GetCharacterData(const struct FServerGetCharacterDataRequest& Request, const class FScriptDelegate& onSuccess, const class FScriptDelegate& onFailure, class UObject* customData);
		class UPlayFabServerAPI* GetCatalogItems(const struct FServerGetCatalogItemsRequest& Request, const class FScriptDelegate& onSuccess, const class FScriptDelegate& onFailure, class UObject* customData);
		class UPlayFabServerAPI* GetAllUsersCharacters(const struct FServerListUsersCharactersRequest& Request, const class FScriptDelegate& onSuccess, const class FScriptDelegate& onFailure, class UObject* customData);
		class UPlayFabServerAPI* GetAllSegments(const struct FServerGetAllSegmentsRequest& Request, const class FScriptDelegate& onSuccess, const class FScriptDelegate& onFailure, class UObject* customData);
		class UPlayFabServerAPI* ExecuteCloudScript(const struct FServerExecuteCloudScriptServerRequest& Request, const class FScriptDelegate& onSuccess, const class FScriptDelegate& onFailure, class UObject* customData);
		class UPlayFabServerAPI* EvaluateRandomResultTable(const struct FServerEvaluateRandomResultTableRequest& Request, const class FScriptDelegate& onSuccess, const class FScriptDelegate& onFailure, class UObject* customData);
		class UPlayFabServerAPI* DeregisterGame(const struct FServerDeregisterGameRequest& Request, const class FScriptDelegate& onSuccess, const class FScriptDelegate& onFailure, class UObject* customData);
		class UPlayFabServerAPI* DeleteSharedGroup(const struct FServerDeleteSharedGroupRequest& Request, const class FScriptDelegate& onSuccess, const class FScriptDelegate& onFailure, class UObject* customData);
		class UPlayFabServerAPI* DeletePushNotificationTemplate(const struct FServerDeletePushNotificationTemplateRequest& Request, const class FScriptDelegate& onSuccess, const class FScriptDelegate& onFailure, class UObject* customData);
		class UPlayFabServerAPI* DeletePlayer(const struct FServerDeletePlayerRequest& Request, const class FScriptDelegate& onSuccess, const class FScriptDelegate& onFailure, class UObject* customData);
		class UPlayFabServerAPI* DeleteCharacterFromUser(const struct FServerDeleteCharacterFromUserRequest& Request, const class FScriptDelegate& onSuccess, const class FScriptDelegate& onFailure, class UObject* customData);
		void DelegateOnSuccessWriteTitleEvent__DelegateSignature(const struct FServerWriteEventResponse& Result, class UObject* customData);
		void DelegateOnSuccessWritePlayerEvent__DelegateSignature(const struct FServerWriteEventResponse& Result, class UObject* customData);
		void DelegateOnSuccessWriteCharacterEvent__DelegateSignature(const struct FServerWriteEventResponse& Result, class UObject* customData);
		void DelegateOnSuccessUpdateUserReadOnlyData__DelegateSignature(const struct FServerUpdateUserDataResult& Result, class UObject* customData);
		void DelegateOnSuccessUpdateUserPublisherReadOnlyData__DelegateSignature(const struct FServerUpdateUserDataResult& Result, class UObject* customData);
		void DelegateOnSuccessUpdateUserPublisherInternalData__DelegateSignature(const struct FServerUpdateUserDataResult& Result, class UObject* customData);
		void DelegateOnSuccessUpdateUserPublisherData__DelegateSignature(const struct FServerUpdateUserDataResult& Result, class UObject* customData);
		void DelegateOnSuccessUpdateUserInventoryItemCustomData__DelegateSignature(const struct FServerEmptyResponse& Result, class UObject* customData);
		void DelegateOnSuccessUpdateUserInternalData__DelegateSignature(const struct FServerUpdateUserDataResult& Result, class UObject* customData);
		void DelegateOnSuccessUpdateUserData__DelegateSignature(const struct FServerUpdateUserDataResult& Result, class UObject* customData);
		void DelegateOnSuccessUpdateSharedGroupData__DelegateSignature(const struct FServerUpdateSharedGroupDataResult& Result, class UObject* customData);
		void DelegateOnSuccessUpdatePlayerStatistics__DelegateSignature(const struct FServerUpdatePlayerStatisticsResult& Result, class UObject* customData);
		void DelegateOnSuccessUpdateCharacterStatistics__DelegateSignature(const struct FServerUpdateCharacterStatisticsResult& Result, class UObject* customData);
		void DelegateOnSuccessUpdateCharacterReadOnlyData__DelegateSignature(const struct FServerUpdateCharacterDataResult& Result, class UObject* customData);
		void DelegateOnSuccessUpdateCharacterInternalData__DelegateSignature(const struct FServerUpdateCharacterDataResult& Result, class UObject* customData);
		void DelegateOnSuccessUpdateCharacterData__DelegateSignature(const struct FServerUpdateCharacterDataResult& Result, class UObject* customData);
		void DelegateOnSuccessUpdateBans__DelegateSignature(const struct FServerUpdateBansResult& Result, class UObject* customData);
		void DelegateOnSuccessUpdateAvatarUrl__DelegateSignature(const struct FServerEmptyResponse& Result, class UObject* customData);
		void DelegateOnSuccessUnlockContainerItem__DelegateSignature(const struct FServerUnlockContainerItemResult& Result, class UObject* customData);
		void DelegateOnSuccessUnlockContainerInstance__DelegateSignature(const struct FServerUnlockContainerItemResult& Result, class UObject* customData);
		void DelegateOnSuccessUnlinkXboxAccount__DelegateSignature(const struct FServerUnlinkXboxAccountResult& Result, class UObject* customData);
		void DelegateOnSuccessUnlinkServerCustomId__DelegateSignature(const struct FServerUnlinkServerCustomIdResult& Result, class UObject* customData);
		void DelegateOnSuccessUnlinkPSNAccount__DelegateSignature(const struct FServerUnlinkPSNAccountResult& Result, class UObject* customData);
		void DelegateOnSuccessSubtractUserVirtualCurrency__DelegateSignature(const struct FServerModifyUserVirtualCurrencyResult& Result, class UObject* customData);
		void DelegateOnSuccessSubtractCharacterVirtualCurrency__DelegateSignature(const struct FServerModifyCharacterVirtualCurrencyResult& Result, class UObject* customData);
		void DelegateOnSuccessSetTitleInternalData__DelegateSignature(const struct FServerSetTitleDataResult& Result, class UObject* customData);
		void DelegateOnSuccessSetTitleData__DelegateSignature(const struct FServerSetTitleDataResult& Result, class UObject* customData);
		void DelegateOnSuccessSetPublisherData__DelegateSignature(const struct FServerSetPublisherDataResult& Result, class UObject* customData);
		void DelegateOnSuccessSetPlayerSecret__DelegateSignature(const struct FServerSetPlayerSecretResult& Result, class UObject* customData);
		void DelegateOnSuccessSetGameServerInstanceTags__DelegateSignature(const struct FServerSetGameServerInstanceTagsResult& Result, class UObject* customData);
		void DelegateOnSuccessSetGameServerInstanceState__DelegateSignature(const struct FServerSetGameServerInstanceStateResult& Result, class UObject* customData);
		void DelegateOnSuccessSetGameServerInstanceData__DelegateSignature(const struct FServerSetGameServerInstanceDataResult& Result, class UObject* customData);
		void DelegateOnSuccessSetFriendTags__DelegateSignature(const struct FServerEmptyResponse& Result, class UObject* customData);
		void DelegateOnSuccessSendPushNotificationFromTemplate__DelegateSignature(const struct FServerSendPushNotificationResult& Result, class UObject* customData);
		void DelegateOnSuccessSendPushNotification__DelegateSignature(const struct FServerSendPushNotificationResult& Result, class UObject* customData);
		void DelegateOnSuccessSendEmailFromTemplate__DelegateSignature(const struct FServerSendEmailFromTemplateResult& Result, class UObject* customData);
		void DelegateOnSuccessSendCustomAccountRecoveryEmail__DelegateSignature(const struct FServerSendCustomAccountRecoveryEmailResult& Result, class UObject* customData);
		void DelegateOnSuccessSavePushNotificationTemplate__DelegateSignature(const struct FServerSavePushNotificationTemplateResult& Result, class UObject* customData);
		void DelegateOnSuccessRevokeInventoryItems__DelegateSignature(const struct FServerRevokeInventoryItemsResult& Result, class UObject* customData);
		void DelegateOnSuccessRevokeInventoryItem__DelegateSignature(const struct FServerRevokeInventoryResult& Result, class UObject* customData);
		void DelegateOnSuccessRevokeBans__DelegateSignature(const struct FServerRevokeBansResult& Result, class UObject* customData);
		void DelegateOnSuccessRevokeAllBansForUser__DelegateSignature(const struct FServerRevokeAllBansForUserResult& Result, class UObject* customData);
		void DelegateOnSuccessReportPlayer__DelegateSignature(const struct FServerReportPlayerServerResult& Result, class UObject* customData);
		void DelegateOnSuccessRemoveSharedGroupMembers__DelegateSignature(const struct FServerRemoveSharedGroupMembersResult& Result, class UObject* customData);
		void DelegateOnSuccessRemovePlayerTag__DelegateSignature(const struct FServerRemovePlayerTagResult& Result, class UObject* customData);
		void DelegateOnSuccessRemoveGenericID__DelegateSignature(const struct FServerEmptyResult& Result, class UObject* customData);
		void DelegateOnSuccessRemoveFriend__DelegateSignature(const struct FServerEmptyResponse& Result, class UObject* customData);
		void DelegateOnSuccessRegisterGame__DelegateSignature(const struct FServerRegisterGameResponse& Result, class UObject* customData);
		void DelegateOnSuccessRefreshGameServerInstanceHeartbeat__DelegateSignature(const struct FServerRefreshGameServerInstanceHeartbeatResult& Result, class UObject* customData);
		void DelegateOnSuccessRedeemMatchmakerTicket__DelegateSignature(const struct FServerRedeemMatchmakerTicketResult& Result, class UObject* customData);
		void DelegateOnSuccessRedeemCoupon__DelegateSignature(const struct FServerRedeemCouponResult& Result, class UObject* customData);
		void DelegateOnSuccessNotifyMatchmakerPlayerLeft__DelegateSignature(const struct FServerNotifyMatchmakerPlayerLeftResult& Result, class UObject* customData);
		void DelegateOnSuccessMoveItemToUserFromCharacter__DelegateSignature(const struct FServerMoveItemToUserFromCharacterResult& Result, class UObject* customData);
		void DelegateOnSuccessMoveItemToCharacterFromUser__DelegateSignature(const struct FServerMoveItemToCharacterFromUserResult& Result, class UObject* customData);
		void DelegateOnSuccessMoveItemToCharacterFromCharacter__DelegateSignature(const struct FServerMoveItemToCharacterFromCharacterResult& Result, class UObject* customData);
		void DelegateOnSuccessModifyItemUses__DelegateSignature(const struct FServerModifyItemUsesResult& Result, class UObject* customData);
		void DelegateOnSuccessLoginWithXboxId__DelegateSignature(const struct FServerServerLoginResult& Result, class UObject* customData);
		void DelegateOnSuccessLoginWithXbox__DelegateSignature(const struct FServerServerLoginResult& Result, class UObject* customData);
		void DelegateOnSuccessLoginWithServerCustomId__DelegateSignature(const struct FServerServerLoginResult& Result, class UObject* customData);
		void DelegateOnSuccessLinkXboxAccount__DelegateSignature(const struct FServerLinkXboxAccountResult& Result, class UObject* customData);
		void DelegateOnSuccessLinkServerCustomId__DelegateSignature(const struct FServerLinkServerCustomIdResult& Result, class UObject* customData);
		void DelegateOnSuccessLinkPSNAccount__DelegateSignature(const struct FServerLinkPSNAccountResult& Result, class UObject* customData);
		void DelegateOnSuccessGrantItemsToUsers__DelegateSignature(const struct FServerGrantItemsToUsersResult& Result, class UObject* customData);
		void DelegateOnSuccessGrantItemsToUser__DelegateSignature(const struct FServerGrantItemsToUserResult& Result, class UObject* customData);
		void DelegateOnSuccessGrantItemsToCharacter__DelegateSignature(const struct FServerGrantItemsToCharacterResult& Result, class UObject* customData);
		void DelegateOnSuccessGrantCharacterToUser__DelegateSignature(const struct FServerGrantCharacterToUserResult& Result, class UObject* customData);
		void DelegateOnSuccessGetUserReadOnlyData__DelegateSignature(const struct FServerGetUserDataResult& Result, class UObject* customData);
		void DelegateOnSuccessGetUserPublisherReadOnlyData__DelegateSignature(const struct FServerGetUserDataResult& Result, class UObject* customData);
		void DelegateOnSuccessGetUserPublisherInternalData__DelegateSignature(const struct FServerGetUserDataResult& Result, class UObject* customData);
		void DelegateOnSuccessGetUserPublisherData__DelegateSignature(const struct FServerGetUserDataResult& Result, class UObject* customData);
		void DelegateOnSuccessGetUserInventory__DelegateSignature(const struct FServerGetUserInventoryResult& Result, class UObject* customData);
		void DelegateOnSuccessGetUserInternalData__DelegateSignature(const struct FServerGetUserDataResult& Result, class UObject* customData);
		void DelegateOnSuccessGetUserData__DelegateSignature(const struct FServerGetUserDataResult& Result, class UObject* customData);
		void DelegateOnSuccessGetUserBans__DelegateSignature(const struct FServerGetUserBansResult& Result, class UObject* customData);
		void DelegateOnSuccessGetUserAccountInfo__DelegateSignature(const struct FServerGetUserAccountInfoResult& Result, class UObject* customData);
		void DelegateOnSuccessGetTitleNews__DelegateSignature(const struct FServerGetTitleNewsResult& Result, class UObject* customData);
		void DelegateOnSuccessGetTitleInternalData__DelegateSignature(const struct FServerGetTitleDataResult& Result, class UObject* customData);
		void DelegateOnSuccessGetTitleData__DelegateSignature(const struct FServerGetTitleDataResult& Result, class UObject* customData);
		void DelegateOnSuccessGetTime__DelegateSignature(const struct FServerGetTimeResult& Result, class UObject* customData);
		void DelegateOnSuccessGetStoreItems__DelegateSignature(const struct FServerGetStoreItemsResult& Result, class UObject* customData);
		void DelegateOnSuccessGetSharedGroupData__DelegateSignature(const struct FServerGetSharedGroupDataResult& Result, class UObject* customData);
		void DelegateOnSuccessGetServerCustomIDsFromPlayFabIDs__DelegateSignature(const struct FServerGetServerCustomIDsFromPlayFabIDsResult& Result, class UObject* customData);
		void DelegateOnSuccessGetRandomResultTables__DelegateSignature(const struct FServerGetRandomResultTablesResult& Result, class UObject* customData);
		void DelegateOnSuccessGetPublisherData__DelegateSignature(const struct FServerGetPublisherDataResult& Result, class UObject* customData);
		void DelegateOnSuccessGetPlayFabIDsFromXboxLiveIDs__DelegateSignature(const struct FServerGetPlayFabIDsFromXboxLiveIDsResult& Result, class UObject* customData);
		void DelegateOnSuccessGetPlayFabIDsFromSteamIDs__DelegateSignature(const struct FServerGetPlayFabIDsFromSteamIDsResult& Result, class UObject* customData);
		void DelegateOnSuccessGetPlayFabIDsFromPSNAccountIDs__DelegateSignature(const struct FServerGetPlayFabIDsFromPSNAccountIDsResult& Result, class UObject* customData);
		void DelegateOnSuccessGetPlayFabIDsFromNintendoSwitchDeviceIds__DelegateSignature(const struct FServerGetPlayFabIDsFromNintendoSwitchDeviceIdsResult& Result, class UObject* customData);
		void DelegateOnSuccessGetPlayFabIDsFromGenericIDs__DelegateSignature(const struct FServerGetPlayFabIDsFromGenericIDsResult& Result, class UObject* customData);
		void DelegateOnSuccessGetPlayFabIDsFromFacebookInstantGamesIds__DelegateSignature(const struct FServerGetPlayFabIDsFromFacebookInstantGamesIdsResult& Result, class UObject* customData);
		void DelegateOnSuccessGetPlayFabIDsFromFacebookIDs__DelegateSignature(const struct FServerGetPlayFabIDsFromFacebookIDsResult& Result, class UObject* customData);
		void DelegateOnSuccessGetPlayerTags__DelegateSignature(const struct FServerGetPlayerTagsResult& Result, class UObject* customData);
		void DelegateOnSuccessGetPlayerStatisticVersions__DelegateSignature(const struct FServerGetPlayerStatisticVersionsResult& Result, class UObject* customData);
		void DelegateOnSuccessGetPlayerStatistics__DelegateSignature(const struct FServerGetPlayerStatisticsResult& Result, class UObject* customData);
		void DelegateOnSuccessGetPlayersInSegment__DelegateSignature(const struct FServerGetPlayersInSegmentResult& Result, class UObject* customData);
		void DelegateOnSuccessGetPlayerSegments__DelegateSignature(const struct FServerGetPlayerSegmentsResult& Result, class UObject* customData);
		void DelegateOnSuccessGetPlayerProfile__DelegateSignature(const struct FServerGetPlayerProfileResult& Result, class UObject* customData);
		void DelegateOnSuccessGetPlayerCombinedInfo__DelegateSignature(const struct FServerGetPlayerCombinedInfoResult& Result, class UObject* customData);
		void DelegateOnSuccessGetLeaderboardForUserCharacters__DelegateSignature(const struct FServerGetLeaderboardForUsersCharactersResult& Result, class UObject* customData);
		void DelegateOnSuccessGetLeaderboardAroundUser__DelegateSignature(const struct FServerGetLeaderboardAroundUserResult& Result, class UObject* customData);
		void DelegateOnSuccessGetLeaderboardAroundCharacter__DelegateSignature(const struct FServerGetLeaderboardAroundCharacterResult& Result, class UObject* customData);
		void DelegateOnSuccessGetLeaderboard__DelegateSignature(const struct FServerGetLeaderboardResult& Result, class UObject* customData);
		void DelegateOnSuccessGetFriendsList__DelegateSignature(const struct FServerGetFriendsListResult& Result, class UObject* customData);
		void DelegateOnSuccessGetFriendLeaderboard__DelegateSignature(const struct FServerGetLeaderboardResult& Result, class UObject* customData);
		void DelegateOnSuccessGetContentDownloadUrl__DelegateSignature(const struct FServerGetContentDownloadUrlResult& Result, class UObject* customData);
		void DelegateOnSuccessGetCharacterStatistics__DelegateSignature(const struct FServerGetCharacterStatisticsResult& Result, class UObject* customData);
		void DelegateOnSuccessGetCharacterReadOnlyData__DelegateSignature(const struct FServerGetCharacterDataResult& Result, class UObject* customData);
		void DelegateOnSuccessGetCharacterLeaderboard__DelegateSignature(const struct FServerGetCharacterLeaderboardResult& Result, class UObject* customData);
		void DelegateOnSuccessGetCharacterInventory__DelegateSignature(const struct FServerGetCharacterInventoryResult& Result, class UObject* customData);
		void DelegateOnSuccessGetCharacterInternalData__DelegateSignature(const struct FServerGetCharacterDataResult& Result, class UObject* customData);
		void DelegateOnSuccessGetCharacterData__DelegateSignature(const struct FServerGetCharacterDataResult& Result, class UObject* customData);
		void DelegateOnSuccessGetCatalogItems__DelegateSignature(const struct FServerGetCatalogItemsResult& Result, class UObject* customData);
		void DelegateOnSuccessGetAllUsersCharacters__DelegateSignature(const struct FServerListUsersCharactersResult& Result, class UObject* customData);
		void DelegateOnSuccessGetAllSegments__DelegateSignature(const struct FServerGetAllSegmentsResult& Result, class UObject* customData);
		void DelegateOnSuccessExecuteCloudScript__DelegateSignature(const struct FServerExecuteCloudScriptResult& Result, class UObject* customData);
		void DelegateOnSuccessEvaluateRandomResultTable__DelegateSignature(const struct FServerEvaluateRandomResultTableResult& Result, class UObject* customData);
		void DelegateOnSuccessDeregisterGame__DelegateSignature(const struct FServerDeregisterGameResponse& Result, class UObject* customData);
		void DelegateOnSuccessDeleteSharedGroup__DelegateSignature(const struct FServerEmptyResponse& Result, class UObject* customData);
		void DelegateOnSuccessDeletePushNotificationTemplate__DelegateSignature(const struct FServerDeletePushNotificationTemplateResult& Result, class UObject* customData);
		void DelegateOnSuccessDeletePlayer__DelegateSignature(const struct FServerDeletePlayerResult& Result, class UObject* customData);
		void DelegateOnSuccessDeleteCharacterFromUser__DelegateSignature(const struct FServerDeleteCharacterFromUserResult& Result, class UObject* customData);
		void DelegateOnSuccessCreateSharedGroup__DelegateSignature(const struct FServerCreateSharedGroupResult& Result, class UObject* customData);
		void DelegateOnSuccessConsumeItem__DelegateSignature(const struct FServerConsumeItemResult& Result, class UObject* customData);
		void DelegateOnSuccessBanUsers__DelegateSignature(const struct FServerBanUsersResult& Result, class UObject* customData);
		void DelegateOnSuccessAwardSteamAchievement__DelegateSignature(const struct FServerAwardSteamAchievementResult& Result, class UObject* customData);
		void DelegateOnSuccessAuthenticateSessionTicket__DelegateSignature(const struct FServerAuthenticateSessionTicketResult& Result, class UObject* customData);
		void DelegateOnSuccessAddUserVirtualCurrency__DelegateSignature(const struct FServerModifyUserVirtualCurrencyResult& Result, class UObject* customData);
		void DelegateOnSuccessAddSharedGroupMembers__DelegateSignature(const struct FServerAddSharedGroupMembersResult& Result, class UObject* customData);
		void DelegateOnSuccessAddPlayerTag__DelegateSignature(const struct FServerAddPlayerTagResult& Result, class UObject* customData);
		void DelegateOnSuccessAddGenericID__DelegateSignature(const struct FServerEmptyResult& Result, class UObject* customData);
		void DelegateOnSuccessAddFriend__DelegateSignature(const struct FServerEmptyResponse& Result, class UObject* customData);
		void DelegateOnSuccessAddCharacterVirtualCurrency__DelegateSignature(const struct FServerModifyCharacterVirtualCurrencyResult& Result, class UObject* customData);
		void DelegateOnFailurePlayFabError__DelegateSignature(const struct FPlayFabError& Error, class UObject* customData);
		class UPlayFabServerAPI* CreateSharedGroup(const struct FServerCreateSharedGroupRequest& Request, const class FScriptDelegate& onSuccess, const class FScriptDelegate& onFailure, class UObject* customData);
		class UPlayFabServerAPI* ConsumeItem(const struct FServerConsumeItemRequest& Request, const class FScriptDelegate& onSuccess, const class FScriptDelegate& onFailure, class UObject* customData);
		class UPlayFabServerAPI* BanUsers(const struct FServerBanUsersRequest& Request, const class FScriptDelegate& onSuccess, const class FScriptDelegate& onFailure, class UObject* customData);
		class UPlayFabServerAPI* AwardSteamAchievement(const struct FServerAwardSteamAchievementRequest& Request, const class FScriptDelegate& onSuccess, const class FScriptDelegate& onFailure, class UObject* customData);
		class UPlayFabServerAPI* AuthenticateSessionTicket(const struct FServerAuthenticateSessionTicketRequest& Request, const class FScriptDelegate& onSuccess, const class FScriptDelegate& onFailure, class UObject* customData);
		class UPlayFabServerAPI* AddUserVirtualCurrency(const struct FServerAddUserVirtualCurrencyRequest& Request, const class FScriptDelegate& onSuccess, const class FScriptDelegate& onFailure, class UObject* customData);
		class UPlayFabServerAPI* AddSharedGroupMembers(const struct FServerAddSharedGroupMembersRequest& Request, const class FScriptDelegate& onSuccess, const class FScriptDelegate& onFailure, class UObject* customData);
		class UPlayFabServerAPI* AddPlayerTag(const struct FServerAddPlayerTagRequest& Request, const class FScriptDelegate& onSuccess, const class FScriptDelegate& onFailure, class UObject* customData);
		class UPlayFabServerAPI* AddGenericID(const struct FServerAddGenericIDRequest& Request, const class FScriptDelegate& onSuccess, const class FScriptDelegate& onFailure, class UObject* customData);
		class UPlayFabServerAPI* AddFriend(const struct FServerAddFriendRequest& Request, const class FScriptDelegate& onSuccess, const class FScriptDelegate& onFailure, class UObject* customData);
		class UPlayFabServerAPI* AddCharacterVirtualCurrency(const struct FServerAddCharacterVirtualCurrencyRequest& Request, const class FScriptDelegate& onSuccess, const class FScriptDelegate& onFailure, class UObject* customData);
		static UClass* StaticClass();
	};

	/**
	 * Class PlayFab.PlayFabServerModelDecoder
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UPlayFabServerModelDecoder : public UBlueprintFunctionLibrary
	{
	public:
		struct FServerWriteEventResponse decodeWriteEventResponseResponse(class UPlayFabJsonObject* response);
		struct FServerUpdateUserDataResult decodeUpdateUserDataResultResponse(class UPlayFabJsonObject* response);
		struct FServerUpdateSharedGroupDataResult decodeUpdateSharedGroupDataResultResponse(class UPlayFabJsonObject* response);
		struct FServerUpdatePlayerStatisticsResult decodeUpdatePlayerStatisticsResultResponse(class UPlayFabJsonObject* response);
		struct FServerUpdateCharacterStatisticsResult decodeUpdateCharacterStatisticsResultResponse(class UPlayFabJsonObject* response);
		struct FServerUpdateCharacterDataResult decodeUpdateCharacterDataResultResponse(class UPlayFabJsonObject* response);
		struct FServerUpdateBansResult decodeUpdateBansResultResponse(class UPlayFabJsonObject* response);
		struct FServerUnlockContainerItemResult decodeUnlockContainerItemResultResponse(class UPlayFabJsonObject* response);
		struct FServerUnlinkXboxAccountResult decodeUnlinkXboxAccountResultResponse(class UPlayFabJsonObject* response);
		struct FServerUnlinkServerCustomIdResult decodeUnlinkServerCustomIdResultResponse(class UPlayFabJsonObject* response);
		struct FServerUnlinkPSNAccountResult decodeUnlinkPSNAccountResultResponse(class UPlayFabJsonObject* response);
		struct FServerSetTitleDataResult decodeSetTitleDataResultResponse(class UPlayFabJsonObject* response);
		struct FServerSetPublisherDataResult decodeSetPublisherDataResultResponse(class UPlayFabJsonObject* response);
		struct FServerSetPlayerSecretResult decodeSetPlayerSecretResultResponse(class UPlayFabJsonObject* response);
		struct FServerSetGameServerInstanceTagsResult decodeSetGameServerInstanceTagsResultResponse(class UPlayFabJsonObject* response);
		struct FServerSetGameServerInstanceStateResult decodeSetGameServerInstanceStateResultResponse(class UPlayFabJsonObject* response);
		struct FServerSetGameServerInstanceDataResult decodeSetGameServerInstanceDataResultResponse(class UPlayFabJsonObject* response);
		struct FServerServerLoginResult decodeServerLoginResultResponse(class UPlayFabJsonObject* response);
		struct FServerSendPushNotificationResult decodeSendPushNotificationResultResponse(class UPlayFabJsonObject* response);
		struct FServerSendEmailFromTemplateResult decodeSendEmailFromTemplateResultResponse(class UPlayFabJsonObject* response);
		struct FServerSendCustomAccountRecoveryEmailResult decodeSendCustomAccountRecoveryEmailResultResponse(class UPlayFabJsonObject* response);
		struct FServerSavePushNotificationTemplateResult decodeSavePushNotificationTemplateResultResponse(class UPlayFabJsonObject* response);
		struct FServerRevokeInventoryResult decodeRevokeInventoryResultResponse(class UPlayFabJsonObject* response);
		struct FServerRevokeInventoryItemsResult decodeRevokeInventoryItemsResultResponse(class UPlayFabJsonObject* response);
		struct FServerRevokeBansResult decodeRevokeBansResultResponse(class UPlayFabJsonObject* response);
		struct FServerRevokeAllBansForUserResult decodeRevokeAllBansForUserResultResponse(class UPlayFabJsonObject* response);
		struct FServerReportPlayerServerResult decodeReportPlayerServerResultResponse(class UPlayFabJsonObject* response);
		struct FServerRemoveSharedGroupMembersResult decodeRemoveSharedGroupMembersResultResponse(class UPlayFabJsonObject* response);
		struct FServerRemovePlayerTagResult decodeRemovePlayerTagResultResponse(class UPlayFabJsonObject* response);
		struct FServerRegisterGameResponse decodeRegisterGameResponseResponse(class UPlayFabJsonObject* response);
		struct FServerRefreshGameServerInstanceHeartbeatResult decodeRefreshGameServerInstanceHeartbeatResultResponse(class UPlayFabJsonObject* response);
		struct FServerRedeemMatchmakerTicketResult decodeRedeemMatchmakerTicketResultResponse(class UPlayFabJsonObject* response);
		struct FServerRedeemCouponResult decodeRedeemCouponResultResponse(class UPlayFabJsonObject* response);
		struct FServerNotifyMatchmakerPlayerLeftResult decodeNotifyMatchmakerPlayerLeftResultResponse(class UPlayFabJsonObject* response);
		struct FServerMoveItemToUserFromCharacterResult decodeMoveItemToUserFromCharacterResultResponse(class UPlayFabJsonObject* response);
		struct FServerMoveItemToCharacterFromUserResult decodeMoveItemToCharacterFromUserResultResponse(class UPlayFabJsonObject* response);
		struct FServerMoveItemToCharacterFromCharacterResult decodeMoveItemToCharacterFromCharacterResultResponse(class UPlayFabJsonObject* response);
		struct FServerModifyUserVirtualCurrencyResult decodeModifyUserVirtualCurrencyResultResponse(class UPlayFabJsonObject* response);
		struct FServerModifyItemUsesResult decodeModifyItemUsesResultResponse(class UPlayFabJsonObject* response);
		struct FServerModifyCharacterVirtualCurrencyResult decodeModifyCharacterVirtualCurrencyResultResponse(class UPlayFabJsonObject* response);
		struct FServerListUsersCharactersResult decodeListUsersCharactersResultResponse(class UPlayFabJsonObject* response);
		struct FServerLinkXboxAccountResult decodeLinkXboxAccountResultResponse(class UPlayFabJsonObject* response);
		struct FServerLinkServerCustomIdResult decodeLinkServerCustomIdResultResponse(class UPlayFabJsonObject* response);
		struct FServerLinkPSNAccountResult decodeLinkPSNAccountResultResponse(class UPlayFabJsonObject* response);
		struct FServerGrantItemsToUsersResult decodeGrantItemsToUsersResultResponse(class UPlayFabJsonObject* response);
		struct FServerGrantItemsToUserResult decodeGrantItemsToUserResultResponse(class UPlayFabJsonObject* response);
		struct FServerGrantItemsToCharacterResult decodeGrantItemsToCharacterResultResponse(class UPlayFabJsonObject* response);
		struct FServerGrantCharacterToUserResult decodeGrantCharacterToUserResultResponse(class UPlayFabJsonObject* response);
		struct FServerGetUserInventoryResult decodeGetUserInventoryResultResponse(class UPlayFabJsonObject* response);
		struct FServerGetUserDataResult decodeGetUserDataResultResponse(class UPlayFabJsonObject* response);
		struct FServerGetUserBansResult decodeGetUserBansResultResponse(class UPlayFabJsonObject* response);
		struct FServerGetUserAccountInfoResult decodeGetUserAccountInfoResultResponse(class UPlayFabJsonObject* response);
		struct FServerGetTitleNewsResult decodeGetTitleNewsResultResponse(class UPlayFabJsonObject* response);
		struct FServerGetTitleDataResult decodeGetTitleDataResultResponse(class UPlayFabJsonObject* response);
		struct FServerGetTimeResult decodeGetTimeResultResponse(class UPlayFabJsonObject* response);
		struct FServerGetStoreItemsResult decodeGetStoreItemsResultResponse(class UPlayFabJsonObject* response);
		struct FServerGetSharedGroupDataResult decodeGetSharedGroupDataResultResponse(class UPlayFabJsonObject* response);
		struct FServerGetServerCustomIDsFromPlayFabIDsResult decodeGetServerCustomIDsFromPlayFabIDsResultResponse(class UPlayFabJsonObject* response);
		struct FServerGetRandomResultTablesResult decodeGetRandomResultTablesResultResponse(class UPlayFabJsonObject* response);
		struct FServerGetPublisherDataResult decodeGetPublisherDataResultResponse(class UPlayFabJsonObject* response);
		struct FServerGetPlayFabIDsFromXboxLiveIDsResult decodeGetPlayFabIDsFromXboxLiveIDsResultResponse(class UPlayFabJsonObject* response);
		struct FServerGetPlayFabIDsFromSteamIDsResult decodeGetPlayFabIDsFromSteamIDsResultResponse(class UPlayFabJsonObject* response);
		struct FServerGetPlayFabIDsFromPSNAccountIDsResult decodeGetPlayFabIDsFromPSNAccountIDsResultResponse(class UPlayFabJsonObject* response);
		struct FServerGetPlayFabIDsFromNintendoSwitchDeviceIdsResult decodeGetPlayFabIDsFromNintendoSwitchDeviceIdsResultResponse(class UPlayFabJsonObject* response);
		struct FServerGetPlayFabIDsFromGenericIDsResult decodeGetPlayFabIDsFromGenericIDsResultResponse(class UPlayFabJsonObject* response);
		struct FServerGetPlayFabIDsFromFacebookInstantGamesIdsResult decodeGetPlayFabIDsFromFacebookInstantGamesIdsResultResponse(class UPlayFabJsonObject* response);
		struct FServerGetPlayFabIDsFromFacebookIDsResult decodeGetPlayFabIDsFromFacebookIDsResultResponse(class UPlayFabJsonObject* response);
		struct FServerGetPlayerTagsResult decodeGetPlayerTagsResultResponse(class UPlayFabJsonObject* response);
		struct FServerGetPlayerStatisticVersionsResult decodeGetPlayerStatisticVersionsResultResponse(class UPlayFabJsonObject* response);
		struct FServerGetPlayerStatisticsResult decodeGetPlayerStatisticsResultResponse(class UPlayFabJsonObject* response);
		struct FServerGetPlayersInSegmentResult decodeGetPlayersInSegmentResultResponse(class UPlayFabJsonObject* response);
		struct FServerGetPlayerSegmentsResult decodeGetPlayerSegmentsResultResponse(class UPlayFabJsonObject* response);
		struct FServerGetPlayerProfileResult decodeGetPlayerProfileResultResponse(class UPlayFabJsonObject* response);
		struct FServerGetPlayerCombinedInfoResult decodeGetPlayerCombinedInfoResultResponse(class UPlayFabJsonObject* response);
		struct FServerGetLeaderboardResult decodeGetLeaderboardResultResponse(class UPlayFabJsonObject* response);
		struct FServerGetLeaderboardForUsersCharactersResult decodeGetLeaderboardForUsersCharactersResultResponse(class UPlayFabJsonObject* response);
		struct FServerGetLeaderboardAroundUserResult decodeGetLeaderboardAroundUserResultResponse(class UPlayFabJsonObject* response);
		struct FServerGetLeaderboardAroundCharacterResult decodeGetLeaderboardAroundCharacterResultResponse(class UPlayFabJsonObject* response);
		struct FServerGetFriendsListResult decodeGetFriendsListResultResponse(class UPlayFabJsonObject* response);
		struct FServerGetContentDownloadUrlResult decodeGetContentDownloadUrlResultResponse(class UPlayFabJsonObject* response);
		struct FServerGetCharacterStatisticsResult decodeGetCharacterStatisticsResultResponse(class UPlayFabJsonObject* response);
		struct FServerGetCharacterLeaderboardResult decodeGetCharacterLeaderboardResultResponse(class UPlayFabJsonObject* response);
		struct FServerGetCharacterInventoryResult decodeGetCharacterInventoryResultResponse(class UPlayFabJsonObject* response);
		struct FServerGetCharacterDataResult decodeGetCharacterDataResultResponse(class UPlayFabJsonObject* response);
		struct FServerGetCatalogItemsResult decodeGetCatalogItemsResultResponse(class UPlayFabJsonObject* response);
		struct FServerGetAllSegmentsResult decodeGetAllSegmentsResultResponse(class UPlayFabJsonObject* response);
		struct FServerExecuteCloudScriptResult decodeExecuteCloudScriptResultResponse(class UPlayFabJsonObject* response);
		struct FServerEvaluateRandomResultTableResult decodeEvaluateRandomResultTableResultResponse(class UPlayFabJsonObject* response);
		struct FServerEmptyResult decodeEmptyResultResponse(class UPlayFabJsonObject* response);
		struct FServerEmptyResponse decodeEmptyResponseResponse(class UPlayFabJsonObject* response);
		struct FServerDeregisterGameResponse decodeDeregisterGameResponseResponse(class UPlayFabJsonObject* response);
		struct FServerDeletePushNotificationTemplateResult decodeDeletePushNotificationTemplateResultResponse(class UPlayFabJsonObject* response);
		struct FServerDeletePlayerResult decodeDeletePlayerResultResponse(class UPlayFabJsonObject* response);
		struct FServerDeleteCharacterFromUserResult decodeDeleteCharacterFromUserResultResponse(class UPlayFabJsonObject* response);
		struct FServerCreateSharedGroupResult decodeCreateSharedGroupResultResponse(class UPlayFabJsonObject* response);
		struct FServerConsumeItemResult decodeConsumeItemResultResponse(class UPlayFabJsonObject* response);
		struct FServerBanUsersResult decodeBanUsersResultResponse(class UPlayFabJsonObject* response);
		struct FServerAwardSteamAchievementResult decodeAwardSteamAchievementResultResponse(class UPlayFabJsonObject* response);
		struct FServerAuthenticateSessionTicketResult decodeAuthenticateSessionTicketResultResponse(class UPlayFabJsonObject* response);
		struct FServerAddSharedGroupMembersResult decodeAddSharedGroupMembersResultResponse(class UPlayFabJsonObject* response);
		struct FServerAddPlayerTagResult decodeAddPlayerTagResultResponse(class UPlayFabJsonObject* response);
		static UClass* StaticClass();
	};

	/**
	 * Class PlayFab.PlayFabUtilities
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UPlayFabUtilities : public UBlueprintFunctionLibrary
	{
	public:
		void setPlayFabSettings(const class FString& GameTitleId, const class FString& PlayFabSecretApiKey, const class FString& ProductionUrl, const class FString& PhotonRealtimeAppId, const class FString& PhotonTurnbasedAppId, const class FString& PhotonChatAppId);
		class FString getPhotonAppId(bool Realtime, bool Chat, bool Turnbased);
		class FString getErrorText(int32_t code);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
