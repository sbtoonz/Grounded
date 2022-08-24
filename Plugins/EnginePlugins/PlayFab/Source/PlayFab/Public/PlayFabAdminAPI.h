#pragma once
#include "CoreMinimal.h"
#include "AdminUpdateRandomResultTablesResult.h"
#include "AdminGetPlayersInSegmentResult.h"
#include "AdminDeleteTaskRequest.h"
#include "Net/OnlineBlueprintCallProxyBase.h"
#include "AdminGetCloudScriptTaskInstanceResult.h"
#include "AdminGetServerBuildInfoResult.h"
#include "AdminModifyMatchmakerGameModesResult.h"
#include "AdminSetPublishedRevisionResult.h"
#include "AdminUpdateUserTitleDisplayNameResult.h"
#include "AdminUpdateStoreItemsResult.h"
#include "AdminGetRandomResultTablesResult.h"
#include "AdminDeleteMasterPlayerAccountRequest.h"
#include "AdminListBuildsResult.h"
#include "AdminUpdateUserDataResult.h"
#include "AdminSetupPushNotificationResult.h"
#include "AdminExportMasterPlayerDataResult.h"
#include "AdminEmptyResponse.h"
#include "AdminRevokeInventoryItemsResult.h"
#include "AdminUpdateSegmentResponse.h"
#include "AdminUpdatePolicyResponse.h"
#include "AdminUpdatePlayerStatisticDefinitionResult.h"
#include "AdminUpdatePlayerSharedSecretResult.h"
#include "AdminGetPlayerSharedSecretsResult.h"
#include "AdminCheckLimitedEditionItemAvailabilityResult.h"
#include "AdminResetPasswordResult.h"
#include "AdminUpdateCloudScriptResult.h"
#include "AdminUpdateCatalogItemsResult.h"
#include "AdminGetPlayerStatisticDefinitionsResult.h"
#include "AdminResetPasswordRequest.h"
#include "AdminUpdateBansResult.h"
#include "AdminModifyUserVirtualCurrencyResult.h"
#include "AdminSetTitleDataResult.h"
#include "AdminSetTitleDataAndOverridesResult.h"
#include "AdminSetPublisherDataResult.h"
#include "AdminModifyServerBuildResult.h"
#include "AdminGetServerBuildUploadURLResult.h"
#include "AdminSetPlayerSecretResult.h"
#include "AdminSendAccountRecoveryEmailResult.h"
#include "AdminRemovePlayerTagResult.h"
#include "AdminRemoveServerBuildResult.h"
#include "AdminRunTaskResult.h"
#include "AdminRevokeInventoryResult.h"
#include "AdminRevokeBansResult.h"
#include "AdminGetUserBansResult.h"
#include "AdminRevokeAllBansForUserResult.h"
#include "AdminResolvePurchaseDisputeResponse.h"
#include "AdminGetUserInventoryResult.h"
#include "AdminResetUserStatisticsResult.h"
#include "AdminAddUserVirtualCurrencyRequest.h"
#include "AdminGetTitleDataResult.h"
#include "AdminResetCharacterStatisticsResult.h"
#include "AdminLookupUserAccountInfoResult.h"
#include "AdminBlankResult.h"
#include "AdminRefundPurchaseResponse.h"
#include "AdminListVirtualCurrencyTypesResult.h"
#include "AdminCreateInsightsScheduledScalingTaskRequest.h"
#include "AdminDeleteOpenIdConnectionRequest.h"
#include "AdminListOpenIdConnectionResponse.h"
#include "AdminGetPlayerIdFromAuthTokenRequest.h"
#include "AdminGetPolicyResponse.h"
#include "AdminIncrementPlayerStatisticVersionResult.h"
#include "AdminIncrementLimitedEditionItemAvailabilityResult.h"
#include "AdminGetPlayerTagsResult.h"
#include "AdminGrantItemsToUsersResult.h"
#include "AdminGetPlayerProfileResult.h"
#include "AdminGetUserDataResult.h"
#include "AdminGetTasksResult.h"
#include "AdminAddServerBuildRequest.h"
#include "AdminGetServerBuildInfoRequest.h"
#include "AdminIncrementPlayerStatisticVersionRequest.h"
#include "AdminGetTaskInstancesResult.h"
#include "AdminGetStoreItemsResult.h"
#include "AdminGetSegmentsResponse.h"
#include "AdminGetPublisherDataResult.h"
#include "AdminGetPlayerStatisticVersionsResult.h"
#include "AdminGetPlayerSegmentsResult.h"
#include "AdminGetPlayerIdFromAuthTokenResult.h"
#include "AdminGetPlayedTitleListResult.h"
#include "AdminGetMatchmakerGameModesResult.h"
#include "AdminGetMatchmakerGameInfoResult.h"
#include "AdminGetDataReportResult.h"
#include "AdminGetContentUploadUrlResult.h"
#include "AdminGetStoreItemsRequest.h"
#include "AdminListBuildsRequest.h"
#include "AdminGetContentListResult.h"
#include "AdminGetCloudScriptVersionsResult.h"
#include "AdminGetCloudScriptRevisionResult.h"
#include "AdminGetCatalogItemsResult.h"
#include "AdminAddLocalizedNewsRequest.h"
#include "AdminGetAllSegmentsResult.h"
#include "AdminGetActionsOnPlayersInSegmentTaskInstanceResult.h"
#include "AdminDeleteTitleDataOverrideResult.h"
#include "AdminDeleteTitleResult.h"
#include "AdminDeleteStoreResult.h"
#include "AdminDeleteSegmentsResponse.h"
#include "AdminGetPlayerTagsRequest.h"
#include "AdminDeletePlayerSharedSecretResult.h"
#include "AdminDeletePlayerResult.h"
#include "AdminDeleteMasterPlayerAccountResult.h"
#include "AdminCreateSegmentResponse.h"
#include "AdminCreatePlayerStatisticDefinitionResult.h"
#include "AdminModifyMatchmakerGameModesRequest.h"
#include "AdminCreatePlayerSharedSecretResult.h"
#include "AdminCreateTaskResult.h"
#include "AdminBanUsersResult.h"
#include "AdminAddServerBuildResult.h"
#include "AdminAddPlayerTagResult.h"
#include "AdminModifyServerBuildRequest.h"
#include "AdminAddNewsResult.h"
#include "AdminAddLocalizedNewsResult.h"
#include "PlayFabError.h"
#include "AdminGetPlayerStatisticVersionsRequest.h"
#include "OnPlayFabAdminRequestCompletedDelegate.h"
#include "AdminDeletePlayerRequest.h"
#include "AdminUpdateUserTitleDisplayNameRequest.h"
#include "AdminUpdateUserDataRequest.h"
#include "AdminUpdateUserInternalDataRequest.h"
#include "AdminGetContentListRequest.h"
#include "AdminRevokeInventoryItemsRequest.h"
#include "AdminUpdateTaskRequest.h"
#include "AdminIncrementLimitedEditionItemAvailabilityRequest.h"
#include "AdminUpdateStoreItemsRequest.h"
#include "AdminUpdateSegmentRequest.h"
#include "AdminUpdateRandomResultTablesRequest.h"
#include "AdminUpdatePolicyRequest.h"
#include "AdminUpdatePlayerStatisticDefinitionRequest.h"
#include "AdminUpdatePlayerSharedSecretRequest.h"
#include "AdminUpdateOpenIdConnectionRequest.h"
#include "AdminUpdateCloudScriptRequest.h"
#include "AdminUpdateCatalogItemsRequest.h"
#include "AdminUpdateBansRequest.h"
#include "AdminSubtractUserVirtualCurrencyRequest.h"
#include "AdminDeleteContentRequest.h"
#include "AdminSetupPushNotificationRequest.h"
#include "AdminDeletePlayerSharedSecretRequest.h"
#include "AdminSetTitleDataRequest.h"
#include "AdminSetTitleDataAndOverridesRequest.h"
#include "AdminSetPublisherDataRequest.h"
#include "AdminCreateOpenIdConnectionRequest.h"
#include "AdminRefundPurchaseRequest.h"
#include "AdminSetPublishedRevisionRequest.h"
#include "AdminSetPlayerSecretRequest.h"
#include "AdminSendAccountRecoveryEmailRequest.h"
#include "AdminRunTaskRequest.h"
#include "AdminRevokeInventoryItemRequest.h"
#include "AdminRevokeBansRequest.h"
#include "AdminRevokeAllBansForUserRequest.h"
#include "AdminResolvePurchaseDisputeRequest.h"
#include "AdminAbortTaskInstanceRequest.h"
#include "AdminCreateCloudScriptTaskRequest.h"
#include "AdminResetUserStatisticsRequest.h"
#include "AdminResetCharacterStatisticsRequest.h"
#include "AdminCreateSegmentRequest.h"
#include "AdminRemoveVirtualCurrencyTypesRequest.h"
#include "AdminRemoveServerBuildRequest.h"
#include "AdminRemovePlayerTagRequest.h"
#include "AdminListVirtualCurrencyTypesRequest.h"
#include "AdminListOpenIdConnectionRequest.h"
#include "PlayFabBaseModel.h"
#include "AdminDeleteTitleDataOverrideRequest.h"
#include "AdminGrantItemsToUsersRequest.h"
#include "AdminGetUserDataRequest.h"
#include "AdminGetPlayerSharedSecretsRequest.h"
#include "AdminGetUserInventoryRequest.h"
#include "AdminGetUserBansRequest.h"
#include "AdminLookupUserAccountInfoRequest.h"
#include "AdminGetTitleDataRequest.h"
#include "AdminGetMatchmakerGameInfoRequest.h"
#include "AdminGetTasksRequest.h"
#include "AdminGetTaskInstancesRequest.h"
#include "AdminGetServerBuildUploadURLRequest.h"
#include "AdminGetSegmentsRequest.h"
#include "AdminGetRandomResultTablesRequest.h"
#include "AdminGetPublisherDataRequest.h"
#include "AdminGetPolicyRequest.h"
#include "AdminGetPlayerStatisticDefinitionsRequest.h"
#include "AdminGetPlayersInSegmentRequest.h"
#include "AdminGetPlayersSegmentsRequest.h"
#include "AdminGetPlayerProfileRequest.h"
#include "AdminGetPlayedTitleListRequest.h"
#include "AdminGetMatchmakerGameModesRequest.h"
#include "AdminGetDataReportRequest.h"
#include "AdminGetContentUploadUrlRequest.h"
#include "AdminGetCloudScriptVersionsRequest.h"
#include "AdminGetTaskInstanceRequest.h"
#include "AdminGetCloudScriptRevisionRequest.h"
#include "AdminGetCatalogItemsRequest.h"
#include "AdminGetAllSegmentsRequest.h"
#include "AdminExportMasterPlayerDataRequest.h"
#include "AdminDeleteTitleRequest.h"
#include "AdminDeleteStoreRequest.h"
#include "AdminDeleteSegmentRequest.h"
#include "AdminCreatePlayerStatisticDefinitionRequest.h"
#include "AdminCreatePlayerSharedSecretRequest.h"
#include "AdminCreateActionsOnPlayerSegmentTaskRequest.h"
#include "AdminCheckLimitedEditionItemAvailabilityRequest.h"
#include "AdminBanUsersRequest.h"
#include "AdminAddVirtualCurrencyTypesRequest.h"
#include "AdminAddPlayerTagRequest.h"
#include "AdminAddNewsRequest.h"
#include "PlayFabAdminAPI.generated.h"

class UObject;
class UPlayFabAuthenticationContext;
class UPlayFabJsonObject;
class UPlayFabAdminAPI;

UCLASS(Blueprintable)
class PLAYFAB_API UPlayFabAdminAPI : public UOnlineBlueprintCallProxyBase {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_DELEGATE_TwoParams(FDelegateOnSuccessUpdateUserTitleDisplayName, FAdminUpdateUserTitleDisplayNameResult, Result, UObject*, customData);
    DECLARE_DYNAMIC_DELEGATE_TwoParams(FDelegateOnSuccessUpdateUserReadOnlyData, FAdminUpdateUserDataResult, Result, UObject*, customData);
    DECLARE_DYNAMIC_DELEGATE_TwoParams(FDelegateOnSuccessUpdateUserPublisherReadOnlyData, FAdminUpdateUserDataResult, Result, UObject*, customData);
    DECLARE_DYNAMIC_DELEGATE_TwoParams(FDelegateOnSuccessUpdateUserPublisherInternalData, FAdminUpdateUserDataResult, Result, UObject*, customData);
    DECLARE_DYNAMIC_DELEGATE_TwoParams(FDelegateOnSuccessUpdateUserPublisherData, FAdminUpdateUserDataResult, Result, UObject*, customData);
    DECLARE_DYNAMIC_DELEGATE_TwoParams(FDelegateOnSuccessUpdateUserInternalData, FAdminUpdateUserDataResult, Result, UObject*, customData);
    DECLARE_DYNAMIC_DELEGATE_TwoParams(FDelegateOnSuccessUpdateUserData, FAdminUpdateUserDataResult, Result, UObject*, customData);
    DECLARE_DYNAMIC_DELEGATE_TwoParams(FDelegateOnSuccessUpdateTask, FAdminEmptyResponse, Result, UObject*, customData);
    DECLARE_DYNAMIC_DELEGATE_TwoParams(FDelegateOnSuccessUpdateStoreItems, FAdminUpdateStoreItemsResult, Result, UObject*, customData);
    DECLARE_DYNAMIC_DELEGATE_TwoParams(FDelegateOnSuccessUpdateSegment, FAdminUpdateSegmentResponse, Result, UObject*, customData);
    DECLARE_DYNAMIC_DELEGATE_TwoParams(FDelegateOnSuccessUpdateRandomResultTables, FAdminUpdateRandomResultTablesResult, Result, UObject*, customData);
    DECLARE_DYNAMIC_DELEGATE_TwoParams(FDelegateOnSuccessUpdatePolicy, FAdminUpdatePolicyResponse, Result, UObject*, customData);
    DECLARE_DYNAMIC_DELEGATE_TwoParams(FDelegateOnSuccessUpdatePlayerStatisticDefinition, FAdminUpdatePlayerStatisticDefinitionResult, Result, UObject*, customData);
    DECLARE_DYNAMIC_DELEGATE_TwoParams(FDelegateOnSuccessUpdatePlayerSharedSecret, FAdminUpdatePlayerSharedSecretResult, Result, UObject*, customData);
    DECLARE_DYNAMIC_DELEGATE_TwoParams(FDelegateOnSuccessUpdateOpenIdConnection, FAdminEmptyResponse, Result, UObject*, customData);
    DECLARE_DYNAMIC_DELEGATE_TwoParams(FDelegateOnSuccessUpdateCloudScript, FAdminUpdateCloudScriptResult, Result, UObject*, customData);
    DECLARE_DYNAMIC_DELEGATE_TwoParams(FDelegateOnSuccessUpdateCatalogItems, FAdminUpdateCatalogItemsResult, Result, UObject*, customData);
    DECLARE_DYNAMIC_DELEGATE_TwoParams(FDelegateOnSuccessUpdateBans, FAdminUpdateBansResult, Result, UObject*, customData);
    DECLARE_DYNAMIC_DELEGATE_TwoParams(FDelegateOnSuccessSubtractUserVirtualCurrency, FAdminModifyUserVirtualCurrencyResult, Result, UObject*, customData);
    DECLARE_DYNAMIC_DELEGATE_TwoParams(FDelegateOnSuccessSetupPushNotification, FAdminSetupPushNotificationResult, Result, UObject*, customData);
    DECLARE_DYNAMIC_DELEGATE_TwoParams(FDelegateOnSuccessSetTitleInternalData, FAdminSetTitleDataResult, Result, UObject*, customData);
    DECLARE_DYNAMIC_DELEGATE_TwoParams(FDelegateOnSuccessSetTitleDataAndOverrides, FAdminSetTitleDataAndOverridesResult, Result, UObject*, customData);
    DECLARE_DYNAMIC_DELEGATE_TwoParams(FDelegateOnSuccessSetTitleData, FAdminSetTitleDataResult, Result, UObject*, customData);
    DECLARE_DYNAMIC_DELEGATE_TwoParams(FDelegateOnSuccessSetStoreItems, FAdminUpdateStoreItemsResult, Result, UObject*, customData);
    DECLARE_DYNAMIC_DELEGATE_TwoParams(FDelegateOnSuccessSetPublisherData, FAdminSetPublisherDataResult, Result, UObject*, customData);
    DECLARE_DYNAMIC_DELEGATE_TwoParams(FDelegateOnSuccessSetPublishedRevision, FAdminSetPublishedRevisionResult, Result, UObject*, customData);
    DECLARE_DYNAMIC_DELEGATE_TwoParams(FDelegateOnSuccessSetPlayerSecret, FAdminSetPlayerSecretResult, Result, UObject*, customData);
    DECLARE_DYNAMIC_DELEGATE_TwoParams(FDelegateOnSuccessSetCatalogItems, FAdminUpdateCatalogItemsResult, Result, UObject*, customData);
    DECLARE_DYNAMIC_DELEGATE_TwoParams(FDelegateOnSuccessSendAccountRecoveryEmail, FAdminSendAccountRecoveryEmailResult, Result, UObject*, customData);
    DECLARE_DYNAMIC_DELEGATE_TwoParams(FDelegateOnSuccessRunTask, FAdminRunTaskResult, Result, UObject*, customData);
    DECLARE_DYNAMIC_DELEGATE_TwoParams(FDelegateOnSuccessRevokeInventoryItems, FAdminRevokeInventoryItemsResult, Result, UObject*, customData);
    DECLARE_DYNAMIC_DELEGATE_TwoParams(FDelegateOnSuccessRevokeInventoryItem, FAdminRevokeInventoryResult, Result, UObject*, customData);
    DECLARE_DYNAMIC_DELEGATE_TwoParams(FDelegateOnSuccessRevokeBans, FAdminRevokeBansResult, Result, UObject*, customData);
    DECLARE_DYNAMIC_DELEGATE_TwoParams(FDelegateOnSuccessRevokeAllBansForUser, FAdminRevokeAllBansForUserResult, Result, UObject*, customData);
    DECLARE_DYNAMIC_DELEGATE_TwoParams(FDelegateOnSuccessResolvePurchaseDispute, FAdminResolvePurchaseDisputeResponse, Result, UObject*, customData);
    DECLARE_DYNAMIC_DELEGATE_TwoParams(FDelegateOnSuccessResetUserStatistics, FAdminResetUserStatisticsResult, Result, UObject*, customData);
    DECLARE_DYNAMIC_DELEGATE_TwoParams(FDelegateOnSuccessResetPassword, FAdminResetPasswordResult, Result, UObject*, customData);
    DECLARE_DYNAMIC_DELEGATE_TwoParams(FDelegateOnSuccessResetCharacterStatistics, FAdminResetCharacterStatisticsResult, Result, UObject*, customData);
    DECLARE_DYNAMIC_DELEGATE_TwoParams(FDelegateOnSuccessRemoveVirtualCurrencyTypes, FAdminBlankResult, Result, UObject*, customData);
    DECLARE_DYNAMIC_DELEGATE_TwoParams(FDelegateOnSuccessRemoveServerBuild, FAdminRemoveServerBuildResult, Result, UObject*, customData);
    DECLARE_DYNAMIC_DELEGATE_TwoParams(FDelegateOnSuccessRemovePlayerTag, FAdminRemovePlayerTagResult, Result, UObject*, customData);
    DECLARE_DYNAMIC_DELEGATE_TwoParams(FDelegateOnSuccessRefundPurchase, FAdminRefundPurchaseResponse, Result, UObject*, customData);
    DECLARE_DYNAMIC_DELEGATE_TwoParams(FDelegateOnSuccessModifyServerBuild, FAdminModifyServerBuildResult, Result, UObject*, customData);
    DECLARE_DYNAMIC_DELEGATE_TwoParams(FDelegateOnSuccessModifyMatchmakerGameModes, FAdminModifyMatchmakerGameModesResult, Result, UObject*, customData);
    DECLARE_DYNAMIC_DELEGATE_TwoParams(FDelegateOnSuccessListVirtualCurrencyTypes, FAdminListVirtualCurrencyTypesResult, Result, UObject*, customData);
    DECLARE_DYNAMIC_DELEGATE_TwoParams(FDelegateOnSuccessListServerBuilds, FAdminListBuildsResult, Result, UObject*, customData);
    DECLARE_DYNAMIC_DELEGATE_TwoParams(FDelegateOnSuccessListOpenIdConnection, FAdminListOpenIdConnectionResponse, Result, UObject*, customData);
    DECLARE_DYNAMIC_DELEGATE_TwoParams(FDelegateOnSuccessIncrementPlayerStatisticVersion, FAdminIncrementPlayerStatisticVersionResult, Result, UObject*, customData);
    DECLARE_DYNAMIC_DELEGATE_TwoParams(FDelegateOnSuccessIncrementLimitedEditionItemAvailability, FAdminIncrementLimitedEditionItemAvailabilityResult, Result, UObject*, customData);
    DECLARE_DYNAMIC_DELEGATE_TwoParams(FDelegateOnSuccessGrantItemsToUsers, FAdminGrantItemsToUsersResult, Result, UObject*, customData);
    DECLARE_DYNAMIC_DELEGATE_TwoParams(FDelegateOnSuccessGetUserReadOnlyData, FAdminGetUserDataResult, Result, UObject*, customData);
    DECLARE_DYNAMIC_DELEGATE_TwoParams(FDelegateOnSuccessGetUserPublisherReadOnlyData, FAdminGetUserDataResult, Result, UObject*, customData);
    DECLARE_DYNAMIC_DELEGATE_TwoParams(FDelegateOnSuccessGetUserPublisherInternalData, FAdminGetUserDataResult, Result, UObject*, customData);
    DECLARE_DYNAMIC_DELEGATE_TwoParams(FDelegateOnSuccessGetUserPublisherData, FAdminGetUserDataResult, Result, UObject*, customData);
    DECLARE_DYNAMIC_DELEGATE_TwoParams(FDelegateOnSuccessGetUserInventory, FAdminGetUserInventoryResult, Result, UObject*, customData);
    DECLARE_DYNAMIC_DELEGATE_TwoParams(FDelegateOnSuccessGetUserInternalData, FAdminGetUserDataResult, Result, UObject*, customData);
    DECLARE_DYNAMIC_DELEGATE_TwoParams(FDelegateOnSuccessGetUserData, FAdminGetUserDataResult, Result, UObject*, customData);
    DECLARE_DYNAMIC_DELEGATE_TwoParams(FDelegateOnSuccessGetUserBans, FAdminGetUserBansResult, Result, UObject*, customData);
    DECLARE_DYNAMIC_DELEGATE_TwoParams(FDelegateOnSuccessGetUserAccountInfo, FAdminLookupUserAccountInfoResult, Result, UObject*, customData);
    DECLARE_DYNAMIC_DELEGATE_TwoParams(FDelegateOnSuccessGetTitleInternalData, FAdminGetTitleDataResult, Result, UObject*, customData);
    DECLARE_DYNAMIC_DELEGATE_TwoParams(FDelegateOnSuccessGetTitleData, FAdminGetTitleDataResult, Result, UObject*, customData);
    DECLARE_DYNAMIC_DELEGATE_TwoParams(FDelegateOnSuccessGetTasks, FAdminGetTasksResult, Result, UObject*, customData);
    DECLARE_DYNAMIC_DELEGATE_TwoParams(FDelegateOnSuccessGetTaskInstances, FAdminGetTaskInstancesResult, Result, UObject*, customData);
    DECLARE_DYNAMIC_DELEGATE_TwoParams(FDelegateOnSuccessGetStoreItems, FAdminGetStoreItemsResult, Result, UObject*, customData);
    DECLARE_DYNAMIC_DELEGATE_TwoParams(FDelegateOnSuccessGetServerBuildUploadUrl, FAdminGetServerBuildUploadURLResult, Result, UObject*, customData);
    DECLARE_DYNAMIC_DELEGATE_TwoParams(FDelegateOnSuccessGetServerBuildInfo, FAdminGetServerBuildInfoResult, Result, UObject*, customData);
    DECLARE_DYNAMIC_DELEGATE_TwoParams(FDelegateOnSuccessGetSegments, FAdminGetSegmentsResponse, Result, UObject*, customData);
    DECLARE_DYNAMIC_DELEGATE_TwoParams(FDelegateOnSuccessGetRandomResultTables, FAdminGetRandomResultTablesResult, Result, UObject*, customData);
    DECLARE_DYNAMIC_DELEGATE_TwoParams(FDelegateOnSuccessGetPublisherData, FAdminGetPublisherDataResult, Result, UObject*, customData);
    DECLARE_DYNAMIC_DELEGATE_TwoParams(FDelegateOnSuccessGetPolicy, FAdminGetPolicyResponse, Result, UObject*, customData);
    DECLARE_DYNAMIC_DELEGATE_TwoParams(FDelegateOnSuccessGetPlayerTags, FAdminGetPlayerTagsResult, Result, UObject*, customData);
    DECLARE_DYNAMIC_DELEGATE_TwoParams(FDelegateOnSuccessGetPlayerStatisticVersions, FAdminGetPlayerStatisticVersionsResult, Result, UObject*, customData);
    DECLARE_DYNAMIC_DELEGATE_TwoParams(FDelegateOnSuccessGetPlayerStatisticDefinitions, FAdminGetPlayerStatisticDefinitionsResult, Result, UObject*, customData);
    DECLARE_DYNAMIC_DELEGATE_TwoParams(FDelegateOnSuccessGetPlayersInSegment, FAdminGetPlayersInSegmentResult, Result, UObject*, customData);
    DECLARE_DYNAMIC_DELEGATE_TwoParams(FDelegateOnSuccessGetPlayerSharedSecrets, FAdminGetPlayerSharedSecretsResult, Result, UObject*, customData);
    DECLARE_DYNAMIC_DELEGATE_TwoParams(FDelegateOnSuccessGetPlayerSegments, FAdminGetPlayerSegmentsResult, Result, UObject*, customData);
    DECLARE_DYNAMIC_DELEGATE_TwoParams(FDelegateOnSuccessGetPlayerProfile, FAdminGetPlayerProfileResult, Result, UObject*, customData);
    DECLARE_DYNAMIC_DELEGATE_TwoParams(FDelegateOnSuccessGetPlayerIdFromAuthToken, FAdminGetPlayerIdFromAuthTokenResult, Result, UObject*, customData);
    DECLARE_DYNAMIC_DELEGATE_TwoParams(FDelegateOnSuccessGetPlayedTitleList, FAdminGetPlayedTitleListResult, Result, UObject*, customData);
    DECLARE_DYNAMIC_DELEGATE_TwoParams(FDelegateOnSuccessGetMatchmakerGameModes, FAdminGetMatchmakerGameModesResult, Result, UObject*, customData);
    DECLARE_DYNAMIC_DELEGATE_TwoParams(FDelegateOnSuccessGetMatchmakerGameInfo, FAdminGetMatchmakerGameInfoResult, Result, UObject*, customData);
    DECLARE_DYNAMIC_DELEGATE_TwoParams(FDelegateOnSuccessGetDataReport, FAdminGetDataReportResult, Result, UObject*, customData);
    DECLARE_DYNAMIC_DELEGATE_TwoParams(FDelegateOnSuccessGetContentUploadUrl, FAdminGetContentUploadUrlResult, Result, UObject*, customData);
    DECLARE_DYNAMIC_DELEGATE_TwoParams(FDelegateOnSuccessGetContentList, FAdminGetContentListResult, Result, UObject*, customData);
    DECLARE_DYNAMIC_DELEGATE_TwoParams(FDelegateOnSuccessGetCloudScriptVersions, FAdminGetCloudScriptVersionsResult, Result, UObject*, customData);
    DECLARE_DYNAMIC_DELEGATE_TwoParams(FDelegateOnSuccessGetCloudScriptTaskInstance, FAdminGetCloudScriptTaskInstanceResult, Result, UObject*, customData);
    DECLARE_DYNAMIC_DELEGATE_TwoParams(FDelegateOnSuccessGetCloudScriptRevision, FAdminGetCloudScriptRevisionResult, Result, UObject*, customData);
    DECLARE_DYNAMIC_DELEGATE_TwoParams(FDelegateOnSuccessGetCatalogItems, FAdminGetCatalogItemsResult, Result, UObject*, customData);
    DECLARE_DYNAMIC_DELEGATE_TwoParams(FDelegateOnSuccessGetAllSegments, FAdminGetAllSegmentsResult, Result, UObject*, customData);
    DECLARE_DYNAMIC_DELEGATE_TwoParams(FDelegateOnSuccessGetActionsOnPlayersInSegmentTaskInstance, FAdminGetActionsOnPlayersInSegmentTaskInstanceResult, Result, UObject*, customData);
    DECLARE_DYNAMIC_DELEGATE_TwoParams(FDelegateOnSuccessExportMasterPlayerData, FAdminExportMasterPlayerDataResult, Result, UObject*, customData);
    DECLARE_DYNAMIC_DELEGATE_TwoParams(FDelegateOnSuccessDeleteTitleDataOverride, FAdminDeleteTitleDataOverrideResult, Result, UObject*, customData);
    DECLARE_DYNAMIC_DELEGATE_TwoParams(FDelegateOnSuccessDeleteTitle, FAdminDeleteTitleResult, Result, UObject*, customData);
    DECLARE_DYNAMIC_DELEGATE_TwoParams(FDelegateOnSuccessDeleteTask, FAdminEmptyResponse, Result, UObject*, customData);
    DECLARE_DYNAMIC_DELEGATE_TwoParams(FDelegateOnSuccessDeleteStore, FAdminDeleteStoreResult, Result, UObject*, customData);
    DECLARE_DYNAMIC_DELEGATE_TwoParams(FDelegateOnSuccessDeleteSegment, FAdminDeleteSegmentsResponse, Result, UObject*, customData);
    DECLARE_DYNAMIC_DELEGATE_TwoParams(FDelegateOnSuccessDeletePlayerSharedSecret, FAdminDeletePlayerSharedSecretResult, Result, UObject*, customData);
    DECLARE_DYNAMIC_DELEGATE_TwoParams(FDelegateOnSuccessDeletePlayer, FAdminDeletePlayerResult, Result, UObject*, customData);
    DECLARE_DYNAMIC_DELEGATE_TwoParams(FDelegateOnSuccessDeleteOpenIdConnection, FAdminEmptyResponse, Result, UObject*, customData);
    DECLARE_DYNAMIC_DELEGATE_TwoParams(FDelegateOnSuccessDeleteMasterPlayerAccount, FAdminDeleteMasterPlayerAccountResult, Result, UObject*, customData);
    DECLARE_DYNAMIC_DELEGATE_TwoParams(FDelegateOnSuccessDeleteContent, FAdminBlankResult, Result, UObject*, customData);
    DECLARE_DYNAMIC_DELEGATE_TwoParams(FDelegateOnSuccessCreateSegment, FAdminCreateSegmentResponse, Result, UObject*, customData);
    DECLARE_DYNAMIC_DELEGATE_TwoParams(FDelegateOnSuccessCreatePlayerStatisticDefinition, FAdminCreatePlayerStatisticDefinitionResult, Result, UObject*, customData);
    DECLARE_DYNAMIC_DELEGATE_TwoParams(FDelegateOnSuccessCreatePlayerSharedSecret, FAdminCreatePlayerSharedSecretResult, Result, UObject*, customData);
    DECLARE_DYNAMIC_DELEGATE_TwoParams(FDelegateOnSuccessCreateOpenIdConnection, FAdminEmptyResponse, Result, UObject*, customData);
    DECLARE_DYNAMIC_DELEGATE_TwoParams(FDelegateOnSuccessCreateInsightsScheduledScalingTask, FAdminCreateTaskResult, Result, UObject*, customData);
    DECLARE_DYNAMIC_DELEGATE_TwoParams(FDelegateOnSuccessCreateCloudScriptTask, FAdminCreateTaskResult, Result, UObject*, customData);
    DECLARE_DYNAMIC_DELEGATE_TwoParams(FDelegateOnSuccessCreateActionsOnPlayersInSegmentTask, FAdminCreateTaskResult, Result, UObject*, customData);
    DECLARE_DYNAMIC_DELEGATE_TwoParams(FDelegateOnSuccessCheckLimitedEditionItemAvailability, FAdminCheckLimitedEditionItemAvailabilityResult, Result, UObject*, customData);
    DECLARE_DYNAMIC_DELEGATE_TwoParams(FDelegateOnSuccessBanUsers, FAdminBanUsersResult, Result, UObject*, customData);
    DECLARE_DYNAMIC_DELEGATE_TwoParams(FDelegateOnSuccessAddVirtualCurrencyTypes, FAdminBlankResult, Result, UObject*, customData);
    DECLARE_DYNAMIC_DELEGATE_TwoParams(FDelegateOnSuccessAddUserVirtualCurrency, FAdminModifyUserVirtualCurrencyResult, Result, UObject*, customData);
    DECLARE_DYNAMIC_DELEGATE_TwoParams(FDelegateOnSuccessAddServerBuild, FAdminAddServerBuildResult, Result, UObject*, customData);
    DECLARE_DYNAMIC_DELEGATE_TwoParams(FDelegateOnSuccessAddPlayerTag, FAdminAddPlayerTagResult, Result, UObject*, customData);
    DECLARE_DYNAMIC_DELEGATE_TwoParams(FDelegateOnSuccessAddNews, FAdminAddNewsResult, Result, UObject*, customData);
    DECLARE_DYNAMIC_DELEGATE_TwoParams(FDelegateOnSuccessAddLocalizedNews, FAdminAddLocalizedNewsResult, Result, UObject*, customData);
    DECLARE_DYNAMIC_DELEGATE_TwoParams(FDelegateOnSuccessAbortTaskInstance, FAdminEmptyResponse, Result, UObject*, customData);
    DECLARE_DYNAMIC_DELEGATE_TwoParams(FDelegateOnFailurePlayFabError, FPlayFabError, Error, UObject*, customData);
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnPlayFabAdminRequestCompleted OnPlayFabResponse;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UPlayFabAuthenticationContext* CallAuthenticationContext;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UPlayFabJsonObject* RequestJsonObj;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UPlayFabJsonObject* ResponseJsonObj;
    
public:
    UPlayFabAdminAPI();
    UFUNCTION(BlueprintCallable)
    static UPlayFabAdminAPI* UpdateUserTitleDisplayName(FAdminUpdateUserTitleDisplayNameRequest Request, UPlayFabAdminAPI::FDelegateOnSuccessUpdateUserTitleDisplayName onSuccess, UPlayFabAdminAPI::FDelegateOnFailurePlayFabError onFailure, UObject* customData);
    
    UFUNCTION(BlueprintCallable)
    static UPlayFabAdminAPI* UpdateUserReadOnlyData(FAdminUpdateUserDataRequest Request, UPlayFabAdminAPI::FDelegateOnSuccessUpdateUserReadOnlyData onSuccess, UPlayFabAdminAPI::FDelegateOnFailurePlayFabError onFailure, UObject* customData);
    
    UFUNCTION(BlueprintCallable)
    static UPlayFabAdminAPI* UpdateUserPublisherReadOnlyData(FAdminUpdateUserDataRequest Request, UPlayFabAdminAPI::FDelegateOnSuccessUpdateUserPublisherReadOnlyData onSuccess, UPlayFabAdminAPI::FDelegateOnFailurePlayFabError onFailure, UObject* customData);
    
    UFUNCTION(BlueprintCallable)
    static UPlayFabAdminAPI* UpdateUserPublisherInternalData(FAdminUpdateUserInternalDataRequest Request, UPlayFabAdminAPI::FDelegateOnSuccessUpdateUserPublisherInternalData onSuccess, UPlayFabAdminAPI::FDelegateOnFailurePlayFabError onFailure, UObject* customData);
    
    UFUNCTION(BlueprintCallable)
    static UPlayFabAdminAPI* UpdateUserPublisherData(FAdminUpdateUserDataRequest Request, UPlayFabAdminAPI::FDelegateOnSuccessUpdateUserPublisherData onSuccess, UPlayFabAdminAPI::FDelegateOnFailurePlayFabError onFailure, UObject* customData);
    
    UFUNCTION(BlueprintCallable)
    static UPlayFabAdminAPI* UpdateUserInternalData(FAdminUpdateUserInternalDataRequest Request, UPlayFabAdminAPI::FDelegateOnSuccessUpdateUserInternalData onSuccess, UPlayFabAdminAPI::FDelegateOnFailurePlayFabError onFailure, UObject* customData);
    
    UFUNCTION(BlueprintCallable)
    static UPlayFabAdminAPI* UpdateUserData(FAdminUpdateUserDataRequest Request, UPlayFabAdminAPI::FDelegateOnSuccessUpdateUserData onSuccess, UPlayFabAdminAPI::FDelegateOnFailurePlayFabError onFailure, UObject* customData);
    
    UFUNCTION(BlueprintCallable)
    static UPlayFabAdminAPI* UpdateTask(FAdminUpdateTaskRequest Request, UPlayFabAdminAPI::FDelegateOnSuccessUpdateTask onSuccess, UPlayFabAdminAPI::FDelegateOnFailurePlayFabError onFailure, UObject* customData);
    
    UFUNCTION(BlueprintCallable)
    static UPlayFabAdminAPI* UpdateStoreItems(FAdminUpdateStoreItemsRequest Request, UPlayFabAdminAPI::FDelegateOnSuccessUpdateStoreItems onSuccess, UPlayFabAdminAPI::FDelegateOnFailurePlayFabError onFailure, UObject* customData);
    
    UFUNCTION(BlueprintCallable)
    static UPlayFabAdminAPI* UpdateSegment(FAdminUpdateSegmentRequest Request, UPlayFabAdminAPI::FDelegateOnSuccessUpdateSegment onSuccess, UPlayFabAdminAPI::FDelegateOnFailurePlayFabError onFailure, UObject* customData);
    
    UFUNCTION(BlueprintCallable)
    static UPlayFabAdminAPI* UpdateRandomResultTables(FAdminUpdateRandomResultTablesRequest Request, UPlayFabAdminAPI::FDelegateOnSuccessUpdateRandomResultTables onSuccess, UPlayFabAdminAPI::FDelegateOnFailurePlayFabError onFailure, UObject* customData);
    
    UFUNCTION(BlueprintCallable)
    static UPlayFabAdminAPI* UpdatePolicy(FAdminUpdatePolicyRequest Request, UPlayFabAdminAPI::FDelegateOnSuccessUpdatePolicy onSuccess, UPlayFabAdminAPI::FDelegateOnFailurePlayFabError onFailure, UObject* customData);
    
    UFUNCTION(BlueprintCallable)
    static UPlayFabAdminAPI* UpdatePlayerStatisticDefinition(FAdminUpdatePlayerStatisticDefinitionRequest Request, UPlayFabAdminAPI::FDelegateOnSuccessUpdatePlayerStatisticDefinition onSuccess, UPlayFabAdminAPI::FDelegateOnFailurePlayFabError onFailure, UObject* customData);
    
    UFUNCTION(BlueprintCallable)
    static UPlayFabAdminAPI* UpdatePlayerSharedSecret(FAdminUpdatePlayerSharedSecretRequest Request, UPlayFabAdminAPI::FDelegateOnSuccessUpdatePlayerSharedSecret onSuccess, UPlayFabAdminAPI::FDelegateOnFailurePlayFabError onFailure, UObject* customData);
    
    UFUNCTION(BlueprintCallable)
    static UPlayFabAdminAPI* UpdateOpenIdConnection(FAdminUpdateOpenIdConnectionRequest Request, UPlayFabAdminAPI::FDelegateOnSuccessUpdateOpenIdConnection onSuccess, UPlayFabAdminAPI::FDelegateOnFailurePlayFabError onFailure, UObject* customData);
    
    UFUNCTION(BlueprintCallable)
    static UPlayFabAdminAPI* UpdateCloudScript(FAdminUpdateCloudScriptRequest Request, UPlayFabAdminAPI::FDelegateOnSuccessUpdateCloudScript onSuccess, UPlayFabAdminAPI::FDelegateOnFailurePlayFabError onFailure, UObject* customData);
    
    UFUNCTION(BlueprintCallable)
    static UPlayFabAdminAPI* UpdateCatalogItems(FAdminUpdateCatalogItemsRequest Request, UPlayFabAdminAPI::FDelegateOnSuccessUpdateCatalogItems onSuccess, UPlayFabAdminAPI::FDelegateOnFailurePlayFabError onFailure, UObject* customData);
    
    UFUNCTION(BlueprintCallable)
    static UPlayFabAdminAPI* UpdateBans(FAdminUpdateBansRequest Request, UPlayFabAdminAPI::FDelegateOnSuccessUpdateBans onSuccess, UPlayFabAdminAPI::FDelegateOnFailurePlayFabError onFailure, UObject* customData);
    
    UFUNCTION(BlueprintCallable)
    static UPlayFabAdminAPI* SubtractUserVirtualCurrency(FAdminSubtractUserVirtualCurrencyRequest Request, UPlayFabAdminAPI::FDelegateOnSuccessSubtractUserVirtualCurrency onSuccess, UPlayFabAdminAPI::FDelegateOnFailurePlayFabError onFailure, UObject* customData);
    
    UFUNCTION(BlueprintCallable)
    static UPlayFabAdminAPI* SetupPushNotification(FAdminSetupPushNotificationRequest Request, UPlayFabAdminAPI::FDelegateOnSuccessSetupPushNotification onSuccess, UPlayFabAdminAPI::FDelegateOnFailurePlayFabError onFailure, UObject* customData);
    
    UFUNCTION(BlueprintCallable)
    static UPlayFabAdminAPI* SetTitleInternalData(FAdminSetTitleDataRequest Request, UPlayFabAdminAPI::FDelegateOnSuccessSetTitleInternalData onSuccess, UPlayFabAdminAPI::FDelegateOnFailurePlayFabError onFailure, UObject* customData);
    
    UFUNCTION(BlueprintCallable)
    static UPlayFabAdminAPI* SetTitleDataAndOverrides(FAdminSetTitleDataAndOverridesRequest Request, UPlayFabAdminAPI::FDelegateOnSuccessSetTitleDataAndOverrides onSuccess, UPlayFabAdminAPI::FDelegateOnFailurePlayFabError onFailure, UObject* customData);
    
    UFUNCTION(BlueprintCallable)
    static UPlayFabAdminAPI* SetTitleData(FAdminSetTitleDataRequest Request, UPlayFabAdminAPI::FDelegateOnSuccessSetTitleData onSuccess, UPlayFabAdminAPI::FDelegateOnFailurePlayFabError onFailure, UObject* customData);
    
    UFUNCTION(BlueprintCallable)
    static UPlayFabAdminAPI* SetStoreItems(FAdminUpdateStoreItemsRequest Request, UPlayFabAdminAPI::FDelegateOnSuccessSetStoreItems onSuccess, UPlayFabAdminAPI::FDelegateOnFailurePlayFabError onFailure, UObject* customData);
    
    UFUNCTION(BlueprintCallable)
    static UPlayFabAdminAPI* SetPublisherData(FAdminSetPublisherDataRequest Request, UPlayFabAdminAPI::FDelegateOnSuccessSetPublisherData onSuccess, UPlayFabAdminAPI::FDelegateOnFailurePlayFabError onFailure, UObject* customData);
    
    UFUNCTION(BlueprintCallable)
    static UPlayFabAdminAPI* SetPublishedRevision(FAdminSetPublishedRevisionRequest Request, UPlayFabAdminAPI::FDelegateOnSuccessSetPublishedRevision onSuccess, UPlayFabAdminAPI::FDelegateOnFailurePlayFabError onFailure, UObject* customData);
    
    UFUNCTION(BlueprintCallable)
    static UPlayFabAdminAPI* SetPlayerSecret(FAdminSetPlayerSecretRequest Request, UPlayFabAdminAPI::FDelegateOnSuccessSetPlayerSecret onSuccess, UPlayFabAdminAPI::FDelegateOnFailurePlayFabError onFailure, UObject* customData);
    
    UFUNCTION(BlueprintCallable)
    static UPlayFabAdminAPI* SetCatalogItems(FAdminUpdateCatalogItemsRequest Request, UPlayFabAdminAPI::FDelegateOnSuccessSetCatalogItems onSuccess, UPlayFabAdminAPI::FDelegateOnFailurePlayFabError onFailure, UObject* customData);
    
    UFUNCTION(BlueprintCallable)
    static UPlayFabAdminAPI* SendAccountRecoveryEmail(FAdminSendAccountRecoveryEmailRequest Request, UPlayFabAdminAPI::FDelegateOnSuccessSendAccountRecoveryEmail onSuccess, UPlayFabAdminAPI::FDelegateOnFailurePlayFabError onFailure, UObject* customData);
    
    UFUNCTION(BlueprintCallable)
    static UPlayFabAdminAPI* RunTask(FAdminRunTaskRequest Request, UPlayFabAdminAPI::FDelegateOnSuccessRunTask onSuccess, UPlayFabAdminAPI::FDelegateOnFailurePlayFabError onFailure, UObject* customData);
    
    UFUNCTION(BlueprintCallable)
    static UPlayFabAdminAPI* RevokeInventoryItems(FAdminRevokeInventoryItemsRequest Request, UPlayFabAdminAPI::FDelegateOnSuccessRevokeInventoryItems onSuccess, UPlayFabAdminAPI::FDelegateOnFailurePlayFabError onFailure, UObject* customData);
    
    UFUNCTION(BlueprintCallable)
    static UPlayFabAdminAPI* RevokeInventoryItem(FAdminRevokeInventoryItemRequest Request, UPlayFabAdminAPI::FDelegateOnSuccessRevokeInventoryItem onSuccess, UPlayFabAdminAPI::FDelegateOnFailurePlayFabError onFailure, UObject* customData);
    
    UFUNCTION(BlueprintCallable)
    static UPlayFabAdminAPI* RevokeBans(FAdminRevokeBansRequest Request, UPlayFabAdminAPI::FDelegateOnSuccessRevokeBans onSuccess, UPlayFabAdminAPI::FDelegateOnFailurePlayFabError onFailure, UObject* customData);
    
    UFUNCTION(BlueprintCallable)
    static UPlayFabAdminAPI* RevokeAllBansForUser(FAdminRevokeAllBansForUserRequest Request, UPlayFabAdminAPI::FDelegateOnSuccessRevokeAllBansForUser onSuccess, UPlayFabAdminAPI::FDelegateOnFailurePlayFabError onFailure, UObject* customData);
    
    UFUNCTION(BlueprintCallable)
    static UPlayFabAdminAPI* ResolvePurchaseDispute(FAdminResolvePurchaseDisputeRequest Request, UPlayFabAdminAPI::FDelegateOnSuccessResolvePurchaseDispute onSuccess, UPlayFabAdminAPI::FDelegateOnFailurePlayFabError onFailure, UObject* customData);
    
    UFUNCTION(BlueprintCallable)
    static UPlayFabAdminAPI* ResetUserStatistics(FAdminResetUserStatisticsRequest Request, UPlayFabAdminAPI::FDelegateOnSuccessResetUserStatistics onSuccess, UPlayFabAdminAPI::FDelegateOnFailurePlayFabError onFailure, UObject* customData);
    
    UFUNCTION(BlueprintCallable)
    static UPlayFabAdminAPI* ResetPassword(FAdminResetPasswordRequest Request, UPlayFabAdminAPI::FDelegateOnSuccessResetPassword onSuccess, UPlayFabAdminAPI::FDelegateOnFailurePlayFabError onFailure, UObject* customData);
    
    UFUNCTION(BlueprintCallable)
    static UPlayFabAdminAPI* ResetCharacterStatistics(FAdminResetCharacterStatisticsRequest Request, UPlayFabAdminAPI::FDelegateOnSuccessResetCharacterStatistics onSuccess, UPlayFabAdminAPI::FDelegateOnFailurePlayFabError onFailure, UObject* customData);
    
    UFUNCTION(BlueprintCallable)
    static UPlayFabAdminAPI* RemoveVirtualCurrencyTypes(FAdminRemoveVirtualCurrencyTypesRequest Request, UPlayFabAdminAPI::FDelegateOnSuccessRemoveVirtualCurrencyTypes onSuccess, UPlayFabAdminAPI::FDelegateOnFailurePlayFabError onFailure, UObject* customData);
    
    UFUNCTION(BlueprintCallable)
    static UPlayFabAdminAPI* RemoveServerBuild(FAdminRemoveServerBuildRequest Request, UPlayFabAdminAPI::FDelegateOnSuccessRemoveServerBuild onSuccess, UPlayFabAdminAPI::FDelegateOnFailurePlayFabError onFailure, UObject* customData);
    
    UFUNCTION(BlueprintCallable)
    static UPlayFabAdminAPI* RemovePlayerTag(FAdminRemovePlayerTagRequest Request, UPlayFabAdminAPI::FDelegateOnSuccessRemovePlayerTag onSuccess, UPlayFabAdminAPI::FDelegateOnFailurePlayFabError onFailure, UObject* customData);
    
    UFUNCTION(BlueprintCallable)
    static UPlayFabAdminAPI* RefundPurchase(FAdminRefundPurchaseRequest Request, UPlayFabAdminAPI::FDelegateOnSuccessRefundPurchase onSuccess, UPlayFabAdminAPI::FDelegateOnFailurePlayFabError onFailure, UObject* customData);
    
    UFUNCTION(BlueprintCallable)
    static UPlayFabAdminAPI* ModifyServerBuild(FAdminModifyServerBuildRequest Request, UPlayFabAdminAPI::FDelegateOnSuccessModifyServerBuild onSuccess, UPlayFabAdminAPI::FDelegateOnFailurePlayFabError onFailure, UObject* customData);
    
    UFUNCTION(BlueprintCallable)
    static UPlayFabAdminAPI* ModifyMatchmakerGameModes(FAdminModifyMatchmakerGameModesRequest Request, UPlayFabAdminAPI::FDelegateOnSuccessModifyMatchmakerGameModes onSuccess, UPlayFabAdminAPI::FDelegateOnFailurePlayFabError onFailure, UObject* customData);
    
    UFUNCTION(BlueprintCallable)
    static UPlayFabAdminAPI* ListVirtualCurrencyTypes(FAdminListVirtualCurrencyTypesRequest Request, UPlayFabAdminAPI::FDelegateOnSuccessListVirtualCurrencyTypes onSuccess, UPlayFabAdminAPI::FDelegateOnFailurePlayFabError onFailure, UObject* customData);
    
    UFUNCTION(BlueprintCallable)
    static UPlayFabAdminAPI* ListServerBuilds(FAdminListBuildsRequest Request, UPlayFabAdminAPI::FDelegateOnSuccessListServerBuilds onSuccess, UPlayFabAdminAPI::FDelegateOnFailurePlayFabError onFailure, UObject* customData);
    
    UFUNCTION(BlueprintCallable)
    static UPlayFabAdminAPI* ListOpenIdConnection(FAdminListOpenIdConnectionRequest Request, UPlayFabAdminAPI::FDelegateOnSuccessListOpenIdConnection onSuccess, UPlayFabAdminAPI::FDelegateOnFailurePlayFabError onFailure, UObject* customData);
    
    UFUNCTION(BlueprintCallable)
    static UPlayFabAdminAPI* IncrementPlayerStatisticVersion(FAdminIncrementPlayerStatisticVersionRequest Request, UPlayFabAdminAPI::FDelegateOnSuccessIncrementPlayerStatisticVersion onSuccess, UPlayFabAdminAPI::FDelegateOnFailurePlayFabError onFailure, UObject* customData);
    
    UFUNCTION(BlueprintCallable)
    static UPlayFabAdminAPI* IncrementLimitedEditionItemAvailability(FAdminIncrementLimitedEditionItemAvailabilityRequest Request, UPlayFabAdminAPI::FDelegateOnSuccessIncrementLimitedEditionItemAvailability onSuccess, UPlayFabAdminAPI::FDelegateOnFailurePlayFabError onFailure, UObject* customData);
    
    UFUNCTION(BlueprintCallable)
    void HelperUpdateUserTitleDisplayName(FPlayFabBaseModel response, UObject* customData, bool successful);
    
    UFUNCTION(BlueprintCallable)
    void HelperUpdateUserReadOnlyData(FPlayFabBaseModel response, UObject* customData, bool successful);
    
    UFUNCTION(BlueprintCallable)
    void HelperUpdateUserPublisherReadOnlyData(FPlayFabBaseModel response, UObject* customData, bool successful);
    
    UFUNCTION(BlueprintCallable)
    void HelperUpdateUserPublisherInternalData(FPlayFabBaseModel response, UObject* customData, bool successful);
    
    UFUNCTION(BlueprintCallable)
    void HelperUpdateUserPublisherData(FPlayFabBaseModel response, UObject* customData, bool successful);
    
    UFUNCTION(BlueprintCallable)
    void HelperUpdateUserInternalData(FPlayFabBaseModel response, UObject* customData, bool successful);
    
    UFUNCTION(BlueprintCallable)
    void HelperUpdateUserData(FPlayFabBaseModel response, UObject* customData, bool successful);
    
    UFUNCTION(BlueprintCallable)
    void HelperUpdateTask(FPlayFabBaseModel response, UObject* customData, bool successful);
    
    UFUNCTION(BlueprintCallable)
    void HelperUpdateStoreItems(FPlayFabBaseModel response, UObject* customData, bool successful);
    
    UFUNCTION(BlueprintCallable)
    void HelperUpdateSegment(FPlayFabBaseModel response, UObject* customData, bool successful);
    
    UFUNCTION(BlueprintCallable)
    void HelperUpdateRandomResultTables(FPlayFabBaseModel response, UObject* customData, bool successful);
    
    UFUNCTION(BlueprintCallable)
    void HelperUpdatePolicy(FPlayFabBaseModel response, UObject* customData, bool successful);
    
    UFUNCTION(BlueprintCallable)
    void HelperUpdatePlayerStatisticDefinition(FPlayFabBaseModel response, UObject* customData, bool successful);
    
    UFUNCTION(BlueprintCallable)
    void HelperUpdatePlayerSharedSecret(FPlayFabBaseModel response, UObject* customData, bool successful);
    
    UFUNCTION(BlueprintCallable)
    void HelperUpdateOpenIdConnection(FPlayFabBaseModel response, UObject* customData, bool successful);
    
    UFUNCTION(BlueprintCallable)
    void HelperUpdateCloudScript(FPlayFabBaseModel response, UObject* customData, bool successful);
    
    UFUNCTION(BlueprintCallable)
    void HelperUpdateCatalogItems(FPlayFabBaseModel response, UObject* customData, bool successful);
    
    UFUNCTION(BlueprintCallable)
    void HelperUpdateBans(FPlayFabBaseModel response, UObject* customData, bool successful);
    
    UFUNCTION(BlueprintCallable)
    void HelperSubtractUserVirtualCurrency(FPlayFabBaseModel response, UObject* customData, bool successful);
    
    UFUNCTION(BlueprintCallable)
    void HelperSetupPushNotification(FPlayFabBaseModel response, UObject* customData, bool successful);
    
    UFUNCTION(BlueprintCallable)
    void HelperSetTitleInternalData(FPlayFabBaseModel response, UObject* customData, bool successful);
    
    UFUNCTION(BlueprintCallable)
    void HelperSetTitleDataAndOverrides(FPlayFabBaseModel response, UObject* customData, bool successful);
    
    UFUNCTION(BlueprintCallable)
    void HelperSetTitleData(FPlayFabBaseModel response, UObject* customData, bool successful);
    
    UFUNCTION(BlueprintCallable)
    void HelperSetStoreItems(FPlayFabBaseModel response, UObject* customData, bool successful);
    
    UFUNCTION(BlueprintCallable)
    void HelperSetPublisherData(FPlayFabBaseModel response, UObject* customData, bool successful);
    
    UFUNCTION(BlueprintCallable)
    void HelperSetPublishedRevision(FPlayFabBaseModel response, UObject* customData, bool successful);
    
    UFUNCTION(BlueprintCallable)
    void HelperSetPlayerSecret(FPlayFabBaseModel response, UObject* customData, bool successful);
    
    UFUNCTION(BlueprintCallable)
    void HelperSetCatalogItems(FPlayFabBaseModel response, UObject* customData, bool successful);
    
    UFUNCTION(BlueprintCallable)
    void HelperSendAccountRecoveryEmail(FPlayFabBaseModel response, UObject* customData, bool successful);
    
    UFUNCTION(BlueprintCallable)
    void HelperRunTask(FPlayFabBaseModel response, UObject* customData, bool successful);
    
    UFUNCTION(BlueprintCallable)
    void HelperRevokeInventoryItems(FPlayFabBaseModel response, UObject* customData, bool successful);
    
    UFUNCTION(BlueprintCallable)
    void HelperRevokeInventoryItem(FPlayFabBaseModel response, UObject* customData, bool successful);
    
    UFUNCTION(BlueprintCallable)
    void HelperRevokeBans(FPlayFabBaseModel response, UObject* customData, bool successful);
    
    UFUNCTION(BlueprintCallable)
    void HelperRevokeAllBansForUser(FPlayFabBaseModel response, UObject* customData, bool successful);
    
    UFUNCTION(BlueprintCallable)
    void HelperResolvePurchaseDispute(FPlayFabBaseModel response, UObject* customData, bool successful);
    
    UFUNCTION(BlueprintCallable)
    void HelperResetUserStatistics(FPlayFabBaseModel response, UObject* customData, bool successful);
    
    UFUNCTION(BlueprintCallable)
    void HelperResetPassword(FPlayFabBaseModel response, UObject* customData, bool successful);
    
    UFUNCTION(BlueprintCallable)
    void HelperResetCharacterStatistics(FPlayFabBaseModel response, UObject* customData, bool successful);
    
    UFUNCTION(BlueprintCallable)
    void HelperRemoveVirtualCurrencyTypes(FPlayFabBaseModel response, UObject* customData, bool successful);
    
    UFUNCTION(BlueprintCallable)
    void HelperRemoveServerBuild(FPlayFabBaseModel response, UObject* customData, bool successful);
    
    UFUNCTION(BlueprintCallable)
    void HelperRemovePlayerTag(FPlayFabBaseModel response, UObject* customData, bool successful);
    
    UFUNCTION(BlueprintCallable)
    void HelperRefundPurchase(FPlayFabBaseModel response, UObject* customData, bool successful);
    
    UFUNCTION(BlueprintCallable)
    void HelperModifyServerBuild(FPlayFabBaseModel response, UObject* customData, bool successful);
    
    UFUNCTION(BlueprintCallable)
    void HelperModifyMatchmakerGameModes(FPlayFabBaseModel response, UObject* customData, bool successful);
    
    UFUNCTION(BlueprintCallable)
    void HelperListVirtualCurrencyTypes(FPlayFabBaseModel response, UObject* customData, bool successful);
    
    UFUNCTION(BlueprintCallable)
    void HelperListServerBuilds(FPlayFabBaseModel response, UObject* customData, bool successful);
    
    UFUNCTION(BlueprintCallable)
    void HelperListOpenIdConnection(FPlayFabBaseModel response, UObject* customData, bool successful);
    
    UFUNCTION(BlueprintCallable)
    void HelperIncrementPlayerStatisticVersion(FPlayFabBaseModel response, UObject* customData, bool successful);
    
    UFUNCTION(BlueprintCallable)
    void HelperIncrementLimitedEditionItemAvailability(FPlayFabBaseModel response, UObject* customData, bool successful);
    
    UFUNCTION(BlueprintCallable)
    void HelperGrantItemsToUsers(FPlayFabBaseModel response, UObject* customData, bool successful);
    
    UFUNCTION(BlueprintCallable)
    void HelperGetUserReadOnlyData(FPlayFabBaseModel response, UObject* customData, bool successful);
    
    UFUNCTION(BlueprintCallable)
    void HelperGetUserPublisherReadOnlyData(FPlayFabBaseModel response, UObject* customData, bool successful);
    
    UFUNCTION(BlueprintCallable)
    void HelperGetUserPublisherInternalData(FPlayFabBaseModel response, UObject* customData, bool successful);
    
    UFUNCTION(BlueprintCallable)
    void HelperGetUserPublisherData(FPlayFabBaseModel response, UObject* customData, bool successful);
    
    UFUNCTION(BlueprintCallable)
    void HelperGetUserInventory(FPlayFabBaseModel response, UObject* customData, bool successful);
    
    UFUNCTION(BlueprintCallable)
    void HelperGetUserInternalData(FPlayFabBaseModel response, UObject* customData, bool successful);
    
    UFUNCTION(BlueprintCallable)
    void HelperGetUserData(FPlayFabBaseModel response, UObject* customData, bool successful);
    
    UFUNCTION(BlueprintCallable)
    void HelperGetUserBans(FPlayFabBaseModel response, UObject* customData, bool successful);
    
    UFUNCTION(BlueprintCallable)
    void HelperGetUserAccountInfo(FPlayFabBaseModel response, UObject* customData, bool successful);
    
    UFUNCTION(BlueprintCallable)
    void HelperGetTitleInternalData(FPlayFabBaseModel response, UObject* customData, bool successful);
    
    UFUNCTION(BlueprintCallable)
    void HelperGetTitleData(FPlayFabBaseModel response, UObject* customData, bool successful);
    
    UFUNCTION(BlueprintCallable)
    void HelperGetTasks(FPlayFabBaseModel response, UObject* customData, bool successful);
    
    UFUNCTION(BlueprintCallable)
    void HelperGetTaskInstances(FPlayFabBaseModel response, UObject* customData, bool successful);
    
    UFUNCTION(BlueprintCallable)
    void HelperGetStoreItems(FPlayFabBaseModel response, UObject* customData, bool successful);
    
    UFUNCTION(BlueprintCallable)
    void HelperGetServerBuildUploadUrl(FPlayFabBaseModel response, UObject* customData, bool successful);
    
    UFUNCTION(BlueprintCallable)
    void HelperGetServerBuildInfo(FPlayFabBaseModel response, UObject* customData, bool successful);
    
    UFUNCTION(BlueprintCallable)
    void HelperGetSegments(FPlayFabBaseModel response, UObject* customData, bool successful);
    
    UFUNCTION(BlueprintCallable)
    void HelperGetRandomResultTables(FPlayFabBaseModel response, UObject* customData, bool successful);
    
    UFUNCTION(BlueprintCallable)
    void HelperGetPublisherData(FPlayFabBaseModel response, UObject* customData, bool successful);
    
    UFUNCTION(BlueprintCallable)
    void HelperGetPolicy(FPlayFabBaseModel response, UObject* customData, bool successful);
    
    UFUNCTION(BlueprintCallable)
    void HelperGetPlayerTags(FPlayFabBaseModel response, UObject* customData, bool successful);
    
    UFUNCTION(BlueprintCallable)
    void HelperGetPlayerStatisticVersions(FPlayFabBaseModel response, UObject* customData, bool successful);
    
    UFUNCTION(BlueprintCallable)
    void HelperGetPlayerStatisticDefinitions(FPlayFabBaseModel response, UObject* customData, bool successful);
    
    UFUNCTION(BlueprintCallable)
    void HelperGetPlayersInSegment(FPlayFabBaseModel response, UObject* customData, bool successful);
    
    UFUNCTION(BlueprintCallable)
    void HelperGetPlayerSharedSecrets(FPlayFabBaseModel response, UObject* customData, bool successful);
    
    UFUNCTION(BlueprintCallable)
    void HelperGetPlayerSegments(FPlayFabBaseModel response, UObject* customData, bool successful);
    
    UFUNCTION(BlueprintCallable)
    void HelperGetPlayerProfile(FPlayFabBaseModel response, UObject* customData, bool successful);
    
    UFUNCTION(BlueprintCallable)
    void HelperGetPlayerIdFromAuthToken(FPlayFabBaseModel response, UObject* customData, bool successful);
    
    UFUNCTION(BlueprintCallable)
    void HelperGetPlayedTitleList(FPlayFabBaseModel response, UObject* customData, bool successful);
    
    UFUNCTION(BlueprintCallable)
    void HelperGetMatchmakerGameModes(FPlayFabBaseModel response, UObject* customData, bool successful);
    
    UFUNCTION(BlueprintCallable)
    void HelperGetMatchmakerGameInfo(FPlayFabBaseModel response, UObject* customData, bool successful);
    
    UFUNCTION(BlueprintCallable)
    void HelperGetDataReport(FPlayFabBaseModel response, UObject* customData, bool successful);
    
    UFUNCTION(BlueprintCallable)
    void HelperGetContentUploadUrl(FPlayFabBaseModel response, UObject* customData, bool successful);
    
    UFUNCTION(BlueprintCallable)
    void HelperGetContentList(FPlayFabBaseModel response, UObject* customData, bool successful);
    
    UFUNCTION(BlueprintCallable)
    void HelperGetCloudScriptVersions(FPlayFabBaseModel response, UObject* customData, bool successful);
    
    UFUNCTION(BlueprintCallable)
    void HelperGetCloudScriptTaskInstance(FPlayFabBaseModel response, UObject* customData, bool successful);
    
    UFUNCTION(BlueprintCallable)
    void HelperGetCloudScriptRevision(FPlayFabBaseModel response, UObject* customData, bool successful);
    
    UFUNCTION(BlueprintCallable)
    void HelperGetCatalogItems(FPlayFabBaseModel response, UObject* customData, bool successful);
    
    UFUNCTION(BlueprintCallable)
    void HelperGetAllSegments(FPlayFabBaseModel response, UObject* customData, bool successful);
    
    UFUNCTION(BlueprintCallable)
    void HelperGetActionsOnPlayersInSegmentTaskInstance(FPlayFabBaseModel response, UObject* customData, bool successful);
    
    UFUNCTION(BlueprintCallable)
    void HelperExportMasterPlayerData(FPlayFabBaseModel response, UObject* customData, bool successful);
    
    UFUNCTION(BlueprintCallable)
    void HelperDeleteTitleDataOverride(FPlayFabBaseModel response, UObject* customData, bool successful);
    
    UFUNCTION(BlueprintCallable)
    void HelperDeleteTitle(FPlayFabBaseModel response, UObject* customData, bool successful);
    
    UFUNCTION(BlueprintCallable)
    void HelperDeleteTask(FPlayFabBaseModel response, UObject* customData, bool successful);
    
    UFUNCTION(BlueprintCallable)
    void HelperDeleteStore(FPlayFabBaseModel response, UObject* customData, bool successful);
    
    UFUNCTION(BlueprintCallable)
    void HelperDeleteSegment(FPlayFabBaseModel response, UObject* customData, bool successful);
    
    UFUNCTION(BlueprintCallable)
    void HelperDeletePlayerSharedSecret(FPlayFabBaseModel response, UObject* customData, bool successful);
    
    UFUNCTION(BlueprintCallable)
    void HelperDeletePlayer(FPlayFabBaseModel response, UObject* customData, bool successful);
    
    UFUNCTION(BlueprintCallable)
    void HelperDeleteOpenIdConnection(FPlayFabBaseModel response, UObject* customData, bool successful);
    
    UFUNCTION(BlueprintCallable)
    void HelperDeleteMasterPlayerAccount(FPlayFabBaseModel response, UObject* customData, bool successful);
    
    UFUNCTION(BlueprintCallable)
    void HelperDeleteContent(FPlayFabBaseModel response, UObject* customData, bool successful);
    
    UFUNCTION(BlueprintCallable)
    void HelperCreateSegment(FPlayFabBaseModel response, UObject* customData, bool successful);
    
    UFUNCTION(BlueprintCallable)
    void HelperCreatePlayerStatisticDefinition(FPlayFabBaseModel response, UObject* customData, bool successful);
    
    UFUNCTION(BlueprintCallable)
    void HelperCreatePlayerSharedSecret(FPlayFabBaseModel response, UObject* customData, bool successful);
    
    UFUNCTION(BlueprintCallable)
    void HelperCreateOpenIdConnection(FPlayFabBaseModel response, UObject* customData, bool successful);
    
    UFUNCTION(BlueprintCallable)
    void HelperCreateInsightsScheduledScalingTask(FPlayFabBaseModel response, UObject* customData, bool successful);
    
    UFUNCTION(BlueprintCallable)
    void HelperCreateCloudScriptTask(FPlayFabBaseModel response, UObject* customData, bool successful);
    
    UFUNCTION(BlueprintCallable)
    void HelperCreateActionsOnPlayersInSegmentTask(FPlayFabBaseModel response, UObject* customData, bool successful);
    
    UFUNCTION(BlueprintCallable)
    void HelperCheckLimitedEditionItemAvailability(FPlayFabBaseModel response, UObject* customData, bool successful);
    
    UFUNCTION(BlueprintCallable)
    void HelperBanUsers(FPlayFabBaseModel response, UObject* customData, bool successful);
    
    UFUNCTION(BlueprintCallable)
    void HelperAddVirtualCurrencyTypes(FPlayFabBaseModel response, UObject* customData, bool successful);
    
    UFUNCTION(BlueprintCallable)
    void HelperAddUserVirtualCurrency(FPlayFabBaseModel response, UObject* customData, bool successful);
    
    UFUNCTION(BlueprintCallable)
    void HelperAddServerBuild(FPlayFabBaseModel response, UObject* customData, bool successful);
    
    UFUNCTION(BlueprintCallable)
    void HelperAddPlayerTag(FPlayFabBaseModel response, UObject* customData, bool successful);
    
    UFUNCTION(BlueprintCallable)
    void HelperAddNews(FPlayFabBaseModel response, UObject* customData, bool successful);
    
    UFUNCTION(BlueprintCallable)
    void HelperAddLocalizedNews(FPlayFabBaseModel response, UObject* customData, bool successful);
    
    UFUNCTION(BlueprintCallable)
    void HelperAbortTaskInstance(FPlayFabBaseModel response, UObject* customData, bool successful);
    
    UFUNCTION(BlueprintCallable)
    static UPlayFabAdminAPI* GrantItemsToUsers(FAdminGrantItemsToUsersRequest Request, UPlayFabAdminAPI::FDelegateOnSuccessGrantItemsToUsers onSuccess, UPlayFabAdminAPI::FDelegateOnFailurePlayFabError onFailure, UObject* customData);
    
    UFUNCTION(BlueprintCallable)
    static UPlayFabAdminAPI* GetUserReadOnlyData(FAdminGetUserDataRequest Request, UPlayFabAdminAPI::FDelegateOnSuccessGetUserReadOnlyData onSuccess, UPlayFabAdminAPI::FDelegateOnFailurePlayFabError onFailure, UObject* customData);
    
    UFUNCTION(BlueprintCallable)
    static UPlayFabAdminAPI* GetUserPublisherReadOnlyData(FAdminGetUserDataRequest Request, UPlayFabAdminAPI::FDelegateOnSuccessGetUserPublisherReadOnlyData onSuccess, UPlayFabAdminAPI::FDelegateOnFailurePlayFabError onFailure, UObject* customData);
    
    UFUNCTION(BlueprintCallable)
    static UPlayFabAdminAPI* GetUserPublisherInternalData(FAdminGetUserDataRequest Request, UPlayFabAdminAPI::FDelegateOnSuccessGetUserPublisherInternalData onSuccess, UPlayFabAdminAPI::FDelegateOnFailurePlayFabError onFailure, UObject* customData);
    
    UFUNCTION(BlueprintCallable)
    static UPlayFabAdminAPI* GetUserPublisherData(FAdminGetUserDataRequest Request, UPlayFabAdminAPI::FDelegateOnSuccessGetUserPublisherData onSuccess, UPlayFabAdminAPI::FDelegateOnFailurePlayFabError onFailure, UObject* customData);
    
    UFUNCTION(BlueprintCallable)
    static UPlayFabAdminAPI* GetUserInventory(FAdminGetUserInventoryRequest Request, UPlayFabAdminAPI::FDelegateOnSuccessGetUserInventory onSuccess, UPlayFabAdminAPI::FDelegateOnFailurePlayFabError onFailure, UObject* customData);
    
    UFUNCTION(BlueprintCallable)
    static UPlayFabAdminAPI* GetUserInternalData(FAdminGetUserDataRequest Request, UPlayFabAdminAPI::FDelegateOnSuccessGetUserInternalData onSuccess, UPlayFabAdminAPI::FDelegateOnFailurePlayFabError onFailure, UObject* customData);
    
    UFUNCTION(BlueprintCallable)
    static UPlayFabAdminAPI* GetUserData(FAdminGetUserDataRequest Request, UPlayFabAdminAPI::FDelegateOnSuccessGetUserData onSuccess, UPlayFabAdminAPI::FDelegateOnFailurePlayFabError onFailure, UObject* customData);
    
    UFUNCTION(BlueprintCallable)
    static UPlayFabAdminAPI* GetUserBans(FAdminGetUserBansRequest Request, UPlayFabAdminAPI::FDelegateOnSuccessGetUserBans onSuccess, UPlayFabAdminAPI::FDelegateOnFailurePlayFabError onFailure, UObject* customData);
    
    UFUNCTION(BlueprintCallable)
    static UPlayFabAdminAPI* GetUserAccountInfo(FAdminLookupUserAccountInfoRequest Request, UPlayFabAdminAPI::FDelegateOnSuccessGetUserAccountInfo onSuccess, UPlayFabAdminAPI::FDelegateOnFailurePlayFabError onFailure, UObject* customData);
    
    UFUNCTION(BlueprintCallable)
    static UPlayFabAdminAPI* GetTitleInternalData(FAdminGetTitleDataRequest Request, UPlayFabAdminAPI::FDelegateOnSuccessGetTitleInternalData onSuccess, UPlayFabAdminAPI::FDelegateOnFailurePlayFabError onFailure, UObject* customData);
    
    UFUNCTION(BlueprintCallable)
    static UPlayFabAdminAPI* GetTitleData(FAdminGetTitleDataRequest Request, UPlayFabAdminAPI::FDelegateOnSuccessGetTitleData onSuccess, UPlayFabAdminAPI::FDelegateOnFailurePlayFabError onFailure, UObject* customData);
    
    UFUNCTION(BlueprintCallable)
    static UPlayFabAdminAPI* GetTasks(FAdminGetTasksRequest Request, UPlayFabAdminAPI::FDelegateOnSuccessGetTasks onSuccess, UPlayFabAdminAPI::FDelegateOnFailurePlayFabError onFailure, UObject* customData);
    
    UFUNCTION(BlueprintCallable)
    static UPlayFabAdminAPI* GetTaskInstances(FAdminGetTaskInstancesRequest Request, UPlayFabAdminAPI::FDelegateOnSuccessGetTaskInstances onSuccess, UPlayFabAdminAPI::FDelegateOnFailurePlayFabError onFailure, UObject* customData);
    
    UFUNCTION(BlueprintCallable)
    static UPlayFabAdminAPI* GetStoreItems(FAdminGetStoreItemsRequest Request, UPlayFabAdminAPI::FDelegateOnSuccessGetStoreItems onSuccess, UPlayFabAdminAPI::FDelegateOnFailurePlayFabError onFailure, UObject* customData);
    
    UFUNCTION(BlueprintCallable)
    static UPlayFabAdminAPI* GetServerBuildUploadUrl(FAdminGetServerBuildUploadURLRequest Request, UPlayFabAdminAPI::FDelegateOnSuccessGetServerBuildUploadUrl onSuccess, UPlayFabAdminAPI::FDelegateOnFailurePlayFabError onFailure, UObject* customData);
    
    UFUNCTION(BlueprintCallable)
    static UPlayFabAdminAPI* GetServerBuildInfo(FAdminGetServerBuildInfoRequest Request, UPlayFabAdminAPI::FDelegateOnSuccessGetServerBuildInfo onSuccess, UPlayFabAdminAPI::FDelegateOnFailurePlayFabError onFailure, UObject* customData);
    
    UFUNCTION(BlueprintCallable)
    static UPlayFabAdminAPI* GetSegments(FAdminGetSegmentsRequest Request, UPlayFabAdminAPI::FDelegateOnSuccessGetSegments onSuccess, UPlayFabAdminAPI::FDelegateOnFailurePlayFabError onFailure, UObject* customData);
    
    UFUNCTION(BlueprintCallable)
    static UPlayFabAdminAPI* GetRandomResultTables(FAdminGetRandomResultTablesRequest Request, UPlayFabAdminAPI::FDelegateOnSuccessGetRandomResultTables onSuccess, UPlayFabAdminAPI::FDelegateOnFailurePlayFabError onFailure, UObject* customData);
    
    UFUNCTION(BlueprintCallable)
    static UPlayFabAdminAPI* GetPublisherData(FAdminGetPublisherDataRequest Request, UPlayFabAdminAPI::FDelegateOnSuccessGetPublisherData onSuccess, UPlayFabAdminAPI::FDelegateOnFailurePlayFabError onFailure, UObject* customData);
    
    UFUNCTION(BlueprintCallable)
    static UPlayFabAdminAPI* GetPolicy(FAdminGetPolicyRequest Request, UPlayFabAdminAPI::FDelegateOnSuccessGetPolicy onSuccess, UPlayFabAdminAPI::FDelegateOnFailurePlayFabError onFailure, UObject* customData);
    
    UFUNCTION(BlueprintCallable)
    static UPlayFabAdminAPI* GetPlayerTags(FAdminGetPlayerTagsRequest Request, UPlayFabAdminAPI::FDelegateOnSuccessGetPlayerTags onSuccess, UPlayFabAdminAPI::FDelegateOnFailurePlayFabError onFailure, UObject* customData);
    
    UFUNCTION(BlueprintCallable)
    static UPlayFabAdminAPI* GetPlayerStatisticVersions(FAdminGetPlayerStatisticVersionsRequest Request, UPlayFabAdminAPI::FDelegateOnSuccessGetPlayerStatisticVersions onSuccess, UPlayFabAdminAPI::FDelegateOnFailurePlayFabError onFailure, UObject* customData);
    
    UFUNCTION(BlueprintCallable)
    static UPlayFabAdminAPI* GetPlayerStatisticDefinitions(FAdminGetPlayerStatisticDefinitionsRequest Request, UPlayFabAdminAPI::FDelegateOnSuccessGetPlayerStatisticDefinitions onSuccess, UPlayFabAdminAPI::FDelegateOnFailurePlayFabError onFailure, UObject* customData);
    
    UFUNCTION(BlueprintCallable)
    static UPlayFabAdminAPI* GetPlayersInSegment(FAdminGetPlayersInSegmentRequest Request, UPlayFabAdminAPI::FDelegateOnSuccessGetPlayersInSegment onSuccess, UPlayFabAdminAPI::FDelegateOnFailurePlayFabError onFailure, UObject* customData);
    
    UFUNCTION(BlueprintCallable)
    static UPlayFabAdminAPI* GetPlayerSharedSecrets(FAdminGetPlayerSharedSecretsRequest Request, UPlayFabAdminAPI::FDelegateOnSuccessGetPlayerSharedSecrets onSuccess, UPlayFabAdminAPI::FDelegateOnFailurePlayFabError onFailure, UObject* customData);
    
    UFUNCTION(BlueprintCallable)
    static UPlayFabAdminAPI* GetPlayerSegments(FAdminGetPlayersSegmentsRequest Request, UPlayFabAdminAPI::FDelegateOnSuccessGetPlayerSegments onSuccess, UPlayFabAdminAPI::FDelegateOnFailurePlayFabError onFailure, UObject* customData);
    
    UFUNCTION(BlueprintCallable)
    static UPlayFabAdminAPI* GetPlayerProfile(FAdminGetPlayerProfileRequest Request, UPlayFabAdminAPI::FDelegateOnSuccessGetPlayerProfile onSuccess, UPlayFabAdminAPI::FDelegateOnFailurePlayFabError onFailure, UObject* customData);
    
    UFUNCTION(BlueprintCallable)
    static UPlayFabAdminAPI* GetPlayerIdFromAuthToken(FAdminGetPlayerIdFromAuthTokenRequest Request, UPlayFabAdminAPI::FDelegateOnSuccessGetPlayerIdFromAuthToken onSuccess, UPlayFabAdminAPI::FDelegateOnFailurePlayFabError onFailure, UObject* customData);
    
    UFUNCTION(BlueprintCallable)
    static UPlayFabAdminAPI* GetPlayedTitleList(FAdminGetPlayedTitleListRequest Request, UPlayFabAdminAPI::FDelegateOnSuccessGetPlayedTitleList onSuccess, UPlayFabAdminAPI::FDelegateOnFailurePlayFabError onFailure, UObject* customData);
    
    UFUNCTION(BlueprintCallable)
    static UPlayFabAdminAPI* GetMatchmakerGameModes(FAdminGetMatchmakerGameModesRequest Request, UPlayFabAdminAPI::FDelegateOnSuccessGetMatchmakerGameModes onSuccess, UPlayFabAdminAPI::FDelegateOnFailurePlayFabError onFailure, UObject* customData);
    
    UFUNCTION(BlueprintCallable)
    static UPlayFabAdminAPI* GetMatchmakerGameInfo(FAdminGetMatchmakerGameInfoRequest Request, UPlayFabAdminAPI::FDelegateOnSuccessGetMatchmakerGameInfo onSuccess, UPlayFabAdminAPI::FDelegateOnFailurePlayFabError onFailure, UObject* customData);
    
    UFUNCTION(BlueprintCallable)
    static UPlayFabAdminAPI* GetDataReport(FAdminGetDataReportRequest Request, UPlayFabAdminAPI::FDelegateOnSuccessGetDataReport onSuccess, UPlayFabAdminAPI::FDelegateOnFailurePlayFabError onFailure, UObject* customData);
    
    UFUNCTION(BlueprintCallable)
    static UPlayFabAdminAPI* GetContentUploadUrl(FAdminGetContentUploadUrlRequest Request, UPlayFabAdminAPI::FDelegateOnSuccessGetContentUploadUrl onSuccess, UPlayFabAdminAPI::FDelegateOnFailurePlayFabError onFailure, UObject* customData);
    
    UFUNCTION(BlueprintCallable)
    static UPlayFabAdminAPI* GetContentList(FAdminGetContentListRequest Request, UPlayFabAdminAPI::FDelegateOnSuccessGetContentList onSuccess, UPlayFabAdminAPI::FDelegateOnFailurePlayFabError onFailure, UObject* customData);
    
    UFUNCTION(BlueprintCallable)
    static UPlayFabAdminAPI* GetCloudScriptVersions(FAdminGetCloudScriptVersionsRequest Request, UPlayFabAdminAPI::FDelegateOnSuccessGetCloudScriptVersions onSuccess, UPlayFabAdminAPI::FDelegateOnFailurePlayFabError onFailure, UObject* customData);
    
    UFUNCTION(BlueprintCallable)
    static UPlayFabAdminAPI* GetCloudScriptTaskInstance(FAdminGetTaskInstanceRequest Request, UPlayFabAdminAPI::FDelegateOnSuccessGetCloudScriptTaskInstance onSuccess, UPlayFabAdminAPI::FDelegateOnFailurePlayFabError onFailure, UObject* customData);
    
    UFUNCTION(BlueprintCallable)
    static UPlayFabAdminAPI* GetCloudScriptRevision(FAdminGetCloudScriptRevisionRequest Request, UPlayFabAdminAPI::FDelegateOnSuccessGetCloudScriptRevision onSuccess, UPlayFabAdminAPI::FDelegateOnFailurePlayFabError onFailure, UObject* customData);
    
    UFUNCTION(BlueprintCallable)
    static UPlayFabAdminAPI* GetCatalogItems(FAdminGetCatalogItemsRequest Request, UPlayFabAdminAPI::FDelegateOnSuccessGetCatalogItems onSuccess, UPlayFabAdminAPI::FDelegateOnFailurePlayFabError onFailure, UObject* customData);
    
    UFUNCTION(BlueprintCallable)
    static UPlayFabAdminAPI* GetAllSegments(FAdminGetAllSegmentsRequest Request, UPlayFabAdminAPI::FDelegateOnSuccessGetAllSegments onSuccess, UPlayFabAdminAPI::FDelegateOnFailurePlayFabError onFailure, UObject* customData);
    
    UFUNCTION(BlueprintCallable)
    static UPlayFabAdminAPI* GetActionsOnPlayersInSegmentTaskInstance(FAdminGetTaskInstanceRequest Request, UPlayFabAdminAPI::FDelegateOnSuccessGetActionsOnPlayersInSegmentTaskInstance onSuccess, UPlayFabAdminAPI::FDelegateOnFailurePlayFabError onFailure, UObject* customData);
    
    UFUNCTION(BlueprintCallable)
    static UPlayFabAdminAPI* ExportMasterPlayerData(FAdminExportMasterPlayerDataRequest Request, UPlayFabAdminAPI::FDelegateOnSuccessExportMasterPlayerData onSuccess, UPlayFabAdminAPI::FDelegateOnFailurePlayFabError onFailure, UObject* customData);
    
    UFUNCTION(BlueprintCallable)
    static UPlayFabAdminAPI* DeleteTitleDataOverride(FAdminDeleteTitleDataOverrideRequest Request, UPlayFabAdminAPI::FDelegateOnSuccessDeleteTitleDataOverride onSuccess, UPlayFabAdminAPI::FDelegateOnFailurePlayFabError onFailure, UObject* customData);
    
    UFUNCTION(BlueprintCallable)
    static UPlayFabAdminAPI* DeleteTitle(FAdminDeleteTitleRequest Request, UPlayFabAdminAPI::FDelegateOnSuccessDeleteTitle onSuccess, UPlayFabAdminAPI::FDelegateOnFailurePlayFabError onFailure, UObject* customData);
    
    UFUNCTION(BlueprintCallable)
    static UPlayFabAdminAPI* DeleteTask(FAdminDeleteTaskRequest Request, UPlayFabAdminAPI::FDelegateOnSuccessDeleteTask onSuccess, UPlayFabAdminAPI::FDelegateOnFailurePlayFabError onFailure, UObject* customData);
    
    UFUNCTION(BlueprintCallable)
    static UPlayFabAdminAPI* DeleteStore(FAdminDeleteStoreRequest Request, UPlayFabAdminAPI::FDelegateOnSuccessDeleteStore onSuccess, UPlayFabAdminAPI::FDelegateOnFailurePlayFabError onFailure, UObject* customData);
    
    UFUNCTION(BlueprintCallable)
    static UPlayFabAdminAPI* DeleteSegment(FAdminDeleteSegmentRequest Request, UPlayFabAdminAPI::FDelegateOnSuccessDeleteSegment onSuccess, UPlayFabAdminAPI::FDelegateOnFailurePlayFabError onFailure, UObject* customData);
    
    UFUNCTION(BlueprintCallable)
    static UPlayFabAdminAPI* DeletePlayerSharedSecret(FAdminDeletePlayerSharedSecretRequest Request, UPlayFabAdminAPI::FDelegateOnSuccessDeletePlayerSharedSecret onSuccess, UPlayFabAdminAPI::FDelegateOnFailurePlayFabError onFailure, UObject* customData);
    
    UFUNCTION(BlueprintCallable)
    static UPlayFabAdminAPI* DeletePlayer(FAdminDeletePlayerRequest Request, UPlayFabAdminAPI::FDelegateOnSuccessDeletePlayer onSuccess, UPlayFabAdminAPI::FDelegateOnFailurePlayFabError onFailure, UObject* customData);
    
    UFUNCTION(BlueprintCallable)
    static UPlayFabAdminAPI* DeleteOpenIdConnection(FAdminDeleteOpenIdConnectionRequest Request, UPlayFabAdminAPI::FDelegateOnSuccessDeleteOpenIdConnection onSuccess, UPlayFabAdminAPI::FDelegateOnFailurePlayFabError onFailure, UObject* customData);
    
    UFUNCTION(BlueprintCallable)
    static UPlayFabAdminAPI* DeleteMasterPlayerAccount(FAdminDeleteMasterPlayerAccountRequest Request, UPlayFabAdminAPI::FDelegateOnSuccessDeleteMasterPlayerAccount onSuccess, UPlayFabAdminAPI::FDelegateOnFailurePlayFabError onFailure, UObject* customData);
    
    UFUNCTION(BlueprintCallable)
    static UPlayFabAdminAPI* DeleteContent(FAdminDeleteContentRequest Request, UPlayFabAdminAPI::FDelegateOnSuccessDeleteContent onSuccess, UPlayFabAdminAPI::FDelegateOnFailurePlayFabError onFailure, UObject* customData);
    
    UFUNCTION(BlueprintCallable)
    static UPlayFabAdminAPI* CreateSegment(FAdminCreateSegmentRequest Request, UPlayFabAdminAPI::FDelegateOnSuccessCreateSegment onSuccess, UPlayFabAdminAPI::FDelegateOnFailurePlayFabError onFailure, UObject* customData);
    
    UFUNCTION(BlueprintCallable)
    static UPlayFabAdminAPI* CreatePlayerStatisticDefinition(FAdminCreatePlayerStatisticDefinitionRequest Request, UPlayFabAdminAPI::FDelegateOnSuccessCreatePlayerStatisticDefinition onSuccess, UPlayFabAdminAPI::FDelegateOnFailurePlayFabError onFailure, UObject* customData);
    
    UFUNCTION(BlueprintCallable)
    static UPlayFabAdminAPI* CreatePlayerSharedSecret(FAdminCreatePlayerSharedSecretRequest Request, UPlayFabAdminAPI::FDelegateOnSuccessCreatePlayerSharedSecret onSuccess, UPlayFabAdminAPI::FDelegateOnFailurePlayFabError onFailure, UObject* customData);
    
    UFUNCTION(BlueprintCallable)
    static UPlayFabAdminAPI* CreateOpenIdConnection(FAdminCreateOpenIdConnectionRequest Request, UPlayFabAdminAPI::FDelegateOnSuccessCreateOpenIdConnection onSuccess, UPlayFabAdminAPI::FDelegateOnFailurePlayFabError onFailure, UObject* customData);
    
    UFUNCTION(BlueprintCallable)
    static UPlayFabAdminAPI* CreateInsightsScheduledScalingTask(FAdminCreateInsightsScheduledScalingTaskRequest Request, UPlayFabAdminAPI::FDelegateOnSuccessCreateInsightsScheduledScalingTask onSuccess, UPlayFabAdminAPI::FDelegateOnFailurePlayFabError onFailure, UObject* customData);
    
    UFUNCTION(BlueprintCallable)
    static UPlayFabAdminAPI* CreateCloudScriptTask(FAdminCreateCloudScriptTaskRequest Request, UPlayFabAdminAPI::FDelegateOnSuccessCreateCloudScriptTask onSuccess, UPlayFabAdminAPI::FDelegateOnFailurePlayFabError onFailure, UObject* customData);
    
    UFUNCTION(BlueprintCallable)
    static UPlayFabAdminAPI* CreateActionsOnPlayersInSegmentTask(FAdminCreateActionsOnPlayerSegmentTaskRequest Request, UPlayFabAdminAPI::FDelegateOnSuccessCreateActionsOnPlayersInSegmentTask onSuccess, UPlayFabAdminAPI::FDelegateOnFailurePlayFabError onFailure, UObject* customData);
    
    UFUNCTION(BlueprintCallable)
    static UPlayFabAdminAPI* CheckLimitedEditionItemAvailability(FAdminCheckLimitedEditionItemAvailabilityRequest Request, UPlayFabAdminAPI::FDelegateOnSuccessCheckLimitedEditionItemAvailability onSuccess, UPlayFabAdminAPI::FDelegateOnFailurePlayFabError onFailure, UObject* customData);
    
    UFUNCTION(BlueprintCallable)
    static UPlayFabAdminAPI* BanUsers(FAdminBanUsersRequest Request, UPlayFabAdminAPI::FDelegateOnSuccessBanUsers onSuccess, UPlayFabAdminAPI::FDelegateOnFailurePlayFabError onFailure, UObject* customData);
    
    UFUNCTION(BlueprintCallable)
    static UPlayFabAdminAPI* AddVirtualCurrencyTypes(FAdminAddVirtualCurrencyTypesRequest Request, UPlayFabAdminAPI::FDelegateOnSuccessAddVirtualCurrencyTypes onSuccess, UPlayFabAdminAPI::FDelegateOnFailurePlayFabError onFailure, UObject* customData);
    
    UFUNCTION(BlueprintCallable)
    static UPlayFabAdminAPI* AddUserVirtualCurrency(FAdminAddUserVirtualCurrencyRequest Request, UPlayFabAdminAPI::FDelegateOnSuccessAddUserVirtualCurrency onSuccess, UPlayFabAdminAPI::FDelegateOnFailurePlayFabError onFailure, UObject* customData);
    
    UFUNCTION(BlueprintCallable)
    static UPlayFabAdminAPI* AddServerBuild(FAdminAddServerBuildRequest Request, UPlayFabAdminAPI::FDelegateOnSuccessAddServerBuild onSuccess, UPlayFabAdminAPI::FDelegateOnFailurePlayFabError onFailure, UObject* customData);
    
    UFUNCTION(BlueprintCallable)
    static UPlayFabAdminAPI* AddPlayerTag(FAdminAddPlayerTagRequest Request, UPlayFabAdminAPI::FDelegateOnSuccessAddPlayerTag onSuccess, UPlayFabAdminAPI::FDelegateOnFailurePlayFabError onFailure, UObject* customData);
    
    UFUNCTION(BlueprintCallable)
    static UPlayFabAdminAPI* AddNews(FAdminAddNewsRequest Request, UPlayFabAdminAPI::FDelegateOnSuccessAddNews onSuccess, UPlayFabAdminAPI::FDelegateOnFailurePlayFabError onFailure, UObject* customData);
    
    UFUNCTION(BlueprintCallable)
    static UPlayFabAdminAPI* AddLocalizedNews(FAdminAddLocalizedNewsRequest Request, UPlayFabAdminAPI::FDelegateOnSuccessAddLocalizedNews onSuccess, UPlayFabAdminAPI::FDelegateOnFailurePlayFabError onFailure, UObject* customData);
    
    UFUNCTION(BlueprintCallable)
    static UPlayFabAdminAPI* AbortTaskInstance(FAdminAbortTaskInstanceRequest Request, UPlayFabAdminAPI::FDelegateOnSuccessAbortTaskInstance onSuccess, UPlayFabAdminAPI::FDelegateOnFailurePlayFabError onFailure, UObject* customData);
    
};

