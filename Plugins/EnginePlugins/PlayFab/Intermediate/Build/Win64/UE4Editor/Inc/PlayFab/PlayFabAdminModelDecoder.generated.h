// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UPlayFabJsonObject;
struct FAdminAddLocalizedNewsResult;
struct FAdminAddNewsResult;
struct FAdminAddPlayerTagResult;
struct FAdminAddServerBuildResult;
struct FAdminBanUsersResult;
struct FAdminBlankResult;
struct FAdminCheckLimitedEditionItemAvailabilityResult;
struct FAdminCreatePlayerSharedSecretResult;
struct FAdminCreatePlayerStatisticDefinitionResult;
struct FAdminCreateSegmentResponse;
struct FAdminCreateTaskResult;
struct FAdminDeleteMasterPlayerAccountResult;
struct FAdminDeletePlayerResult;
struct FAdminDeletePlayerSharedSecretResult;
struct FAdminDeleteSegmentsResponse;
struct FAdminDeleteStoreResult;
struct FAdminDeleteTitleDataOverrideResult;
struct FAdminDeleteTitleResult;
struct FAdminEmptyResponse;
struct FAdminExportMasterPlayerDataResult;
struct FAdminGetActionsOnPlayersInSegmentTaskInstanceResult;
struct FAdminGetAllSegmentsResult;
struct FAdminGetCatalogItemsResult;
struct FAdminGetCloudScriptRevisionResult;
struct FAdminGetCloudScriptTaskInstanceResult;
struct FAdminGetCloudScriptVersionsResult;
struct FAdminGetContentListResult;
struct FAdminGetContentUploadUrlResult;
struct FAdminGetDataReportResult;
struct FAdminGetMatchmakerGameInfoResult;
struct FAdminGetMatchmakerGameModesResult;
struct FAdminGetPlayedTitleListResult;
struct FAdminGetPlayerIdFromAuthTokenResult;
struct FAdminGetPlayerProfileResult;
struct FAdminGetPlayerSegmentsResult;
struct FAdminGetPlayerSharedSecretsResult;
struct FAdminGetPlayersInSegmentResult;
struct FAdminGetPlayerStatisticDefinitionsResult;
struct FAdminGetPlayerStatisticVersionsResult;
struct FAdminGetPlayerTagsResult;
struct FAdminGetPolicyResponse;
struct FAdminGetPublisherDataResult;
struct FAdminGetRandomResultTablesResult;
struct FAdminGetSegmentsResponse;
struct FAdminGetServerBuildInfoResult;
struct FAdminGetServerBuildUploadURLResult;
struct FAdminGetStoreItemsResult;
struct FAdminGetTaskInstancesResult;
struct FAdminGetTasksResult;
struct FAdminGetTitleDataResult;
struct FAdminGetUserBansResult;
struct FAdminGetUserDataResult;
struct FAdminGetUserInventoryResult;
struct FAdminGrantItemsToUsersResult;
struct FAdminIncrementLimitedEditionItemAvailabilityResult;
struct FAdminIncrementPlayerStatisticVersionResult;
struct FAdminListBuildsResult;
struct FAdminListOpenIdConnectionResponse;
struct FAdminListVirtualCurrencyTypesResult;
struct FAdminLookupUserAccountInfoResult;
struct FAdminModifyMatchmakerGameModesResult;
struct FAdminModifyServerBuildResult;
struct FAdminModifyUserVirtualCurrencyResult;
struct FAdminRefundPurchaseResponse;
struct FAdminRemovePlayerTagResult;
struct FAdminRemoveServerBuildResult;
struct FAdminResetCharacterStatisticsResult;
struct FAdminResetPasswordResult;
struct FAdminResetUserStatisticsResult;
struct FAdminResolvePurchaseDisputeResponse;
struct FAdminRevokeAllBansForUserResult;
struct FAdminRevokeBansResult;
struct FAdminRevokeInventoryItemsResult;
struct FAdminRevokeInventoryResult;
struct FAdminRunTaskResult;
struct FAdminSendAccountRecoveryEmailResult;
struct FAdminSetPlayerSecretResult;
struct FAdminSetPublishedRevisionResult;
struct FAdminSetPublisherDataResult;
struct FAdminSetTitleDataAndOverridesResult;
struct FAdminSetTitleDataResult;
struct FAdminSetupPushNotificationResult;
struct FAdminUpdateBansResult;
struct FAdminUpdateCatalogItemsResult;
struct FAdminUpdateCloudScriptResult;
struct FAdminUpdatePlayerSharedSecretResult;
struct FAdminUpdatePlayerStatisticDefinitionResult;
struct FAdminUpdatePolicyResponse;
struct FAdminUpdateRandomResultTablesResult;
struct FAdminUpdateSegmentResponse;
struct FAdminUpdateStoreItemsResult;
struct FAdminUpdateUserDataResult;
struct FAdminUpdateUserTitleDisplayNameResult;
#ifdef PLAYFAB_PlayFabAdminModelDecoder_generated_h
#error "PlayFabAdminModelDecoder.generated.h already included, missing '#pragma once' in PlayFabAdminModelDecoder.h"
#endif
#define PLAYFAB_PlayFabAdminModelDecoder_generated_h

#define Test_Plugins_EnginePlugins_PlayFab_Source_PlayFab_Public_PlayFabAdminModelDecoder_h_103_SPARSE_DATA
#define Test_Plugins_EnginePlugins_PlayFab_Source_PlayFab_Public_PlayFabAdminModelDecoder_h_103_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execdecodeAddLocalizedNewsResultResponse); \
	DECLARE_FUNCTION(execdecodeAddNewsResultResponse); \
	DECLARE_FUNCTION(execdecodeAddPlayerTagResultResponse); \
	DECLARE_FUNCTION(execdecodeAddServerBuildResultResponse); \
	DECLARE_FUNCTION(execdecodeBanUsersResultResponse); \
	DECLARE_FUNCTION(execdecodeBlankResultResponse); \
	DECLARE_FUNCTION(execdecodeCheckLimitedEditionItemAvailabilityResultResponse); \
	DECLARE_FUNCTION(execdecodeCreatePlayerSharedSecretResultResponse); \
	DECLARE_FUNCTION(execdecodeCreatePlayerStatisticDefinitionResultResponse); \
	DECLARE_FUNCTION(execdecodeCreateSegmentResponseResponse); \
	DECLARE_FUNCTION(execdecodeCreateTaskResultResponse); \
	DECLARE_FUNCTION(execdecodeDeleteMasterPlayerAccountResultResponse); \
	DECLARE_FUNCTION(execdecodeDeletePlayerResultResponse); \
	DECLARE_FUNCTION(execdecodeDeletePlayerSharedSecretResultResponse); \
	DECLARE_FUNCTION(execdecodeDeleteSegmentsResponseResponse); \
	DECLARE_FUNCTION(execdecodeDeleteStoreResultResponse); \
	DECLARE_FUNCTION(execdecodeDeleteTitleDataOverrideResultResponse); \
	DECLARE_FUNCTION(execdecodeDeleteTitleResultResponse); \
	DECLARE_FUNCTION(execdecodeEmptyResponseResponse); \
	DECLARE_FUNCTION(execdecodeExportMasterPlayerDataResultResponse); \
	DECLARE_FUNCTION(execdecodeGetActionsOnPlayersInSegmentTaskInstanceResultResponse); \
	DECLARE_FUNCTION(execdecodeGetAllSegmentsResultResponse); \
	DECLARE_FUNCTION(execdecodeGetCatalogItemsResultResponse); \
	DECLARE_FUNCTION(execdecodeGetCloudScriptRevisionResultResponse); \
	DECLARE_FUNCTION(execdecodeGetCloudScriptTaskInstanceResultResponse); \
	DECLARE_FUNCTION(execdecodeGetCloudScriptVersionsResultResponse); \
	DECLARE_FUNCTION(execdecodeGetContentListResultResponse); \
	DECLARE_FUNCTION(execdecodeGetContentUploadUrlResultResponse); \
	DECLARE_FUNCTION(execdecodeGetDataReportResultResponse); \
	DECLARE_FUNCTION(execdecodeGetMatchmakerGameInfoResultResponse); \
	DECLARE_FUNCTION(execdecodeGetMatchmakerGameModesResultResponse); \
	DECLARE_FUNCTION(execdecodeGetPlayedTitleListResultResponse); \
	DECLARE_FUNCTION(execdecodeGetPlayerIdFromAuthTokenResultResponse); \
	DECLARE_FUNCTION(execdecodeGetPlayerProfileResultResponse); \
	DECLARE_FUNCTION(execdecodeGetPlayerSegmentsResultResponse); \
	DECLARE_FUNCTION(execdecodeGetPlayerSharedSecretsResultResponse); \
	DECLARE_FUNCTION(execdecodeGetPlayersInSegmentResultResponse); \
	DECLARE_FUNCTION(execdecodeGetPlayerStatisticDefinitionsResultResponse); \
	DECLARE_FUNCTION(execdecodeGetPlayerStatisticVersionsResultResponse); \
	DECLARE_FUNCTION(execdecodeGetPlayerTagsResultResponse); \
	DECLARE_FUNCTION(execdecodeGetPolicyResponseResponse); \
	DECLARE_FUNCTION(execdecodeGetPublisherDataResultResponse); \
	DECLARE_FUNCTION(execdecodeGetRandomResultTablesResultResponse); \
	DECLARE_FUNCTION(execdecodeGetSegmentsResponseResponse); \
	DECLARE_FUNCTION(execdecodeGetServerBuildInfoResultResponse); \
	DECLARE_FUNCTION(execdecodeGetServerBuildUploadURLResultResponse); \
	DECLARE_FUNCTION(execdecodeGetStoreItemsResultResponse); \
	DECLARE_FUNCTION(execdecodeGetTaskInstancesResultResponse); \
	DECLARE_FUNCTION(execdecodeGetTasksResultResponse); \
	DECLARE_FUNCTION(execdecodeGetTitleDataResultResponse); \
	DECLARE_FUNCTION(execdecodeGetUserBansResultResponse); \
	DECLARE_FUNCTION(execdecodeGetUserDataResultResponse); \
	DECLARE_FUNCTION(execdecodeGetUserInventoryResultResponse); \
	DECLARE_FUNCTION(execdecodeGrantItemsToUsersResultResponse); \
	DECLARE_FUNCTION(execdecodeIncrementLimitedEditionItemAvailabilityResultResponse); \
	DECLARE_FUNCTION(execdecodeIncrementPlayerStatisticVersionResultResponse); \
	DECLARE_FUNCTION(execdecodeListBuildsResultResponse); \
	DECLARE_FUNCTION(execdecodeListOpenIdConnectionResponseResponse); \
	DECLARE_FUNCTION(execdecodeListVirtualCurrencyTypesResultResponse); \
	DECLARE_FUNCTION(execdecodeLookupUserAccountInfoResultResponse); \
	DECLARE_FUNCTION(execdecodeModifyMatchmakerGameModesResultResponse); \
	DECLARE_FUNCTION(execdecodeModifyServerBuildResultResponse); \
	DECLARE_FUNCTION(execdecodeModifyUserVirtualCurrencyResultResponse); \
	DECLARE_FUNCTION(execdecodeRefundPurchaseResponseResponse); \
	DECLARE_FUNCTION(execdecodeRemovePlayerTagResultResponse); \
	DECLARE_FUNCTION(execdecodeRemoveServerBuildResultResponse); \
	DECLARE_FUNCTION(execdecodeResetCharacterStatisticsResultResponse); \
	DECLARE_FUNCTION(execdecodeResetPasswordResultResponse); \
	DECLARE_FUNCTION(execdecodeResetUserStatisticsResultResponse); \
	DECLARE_FUNCTION(execdecodeResolvePurchaseDisputeResponseResponse); \
	DECLARE_FUNCTION(execdecodeRevokeAllBansForUserResultResponse); \
	DECLARE_FUNCTION(execdecodeRevokeBansResultResponse); \
	DECLARE_FUNCTION(execdecodeRevokeInventoryItemsResultResponse); \
	DECLARE_FUNCTION(execdecodeRevokeInventoryResultResponse); \
	DECLARE_FUNCTION(execdecodeRunTaskResultResponse); \
	DECLARE_FUNCTION(execdecodeSendAccountRecoveryEmailResultResponse); \
	DECLARE_FUNCTION(execdecodeSetPlayerSecretResultResponse); \
	DECLARE_FUNCTION(execdecodeSetPublishedRevisionResultResponse); \
	DECLARE_FUNCTION(execdecodeSetPublisherDataResultResponse); \
	DECLARE_FUNCTION(execdecodeSetTitleDataAndOverridesResultResponse); \
	DECLARE_FUNCTION(execdecodeSetTitleDataResultResponse); \
	DECLARE_FUNCTION(execdecodeSetupPushNotificationResultResponse); \
	DECLARE_FUNCTION(execdecodeUpdateBansResultResponse); \
	DECLARE_FUNCTION(execdecodeUpdateCatalogItemsResultResponse); \
	DECLARE_FUNCTION(execdecodeUpdateCloudScriptResultResponse); \
	DECLARE_FUNCTION(execdecodeUpdatePlayerSharedSecretResultResponse); \
	DECLARE_FUNCTION(execdecodeUpdatePlayerStatisticDefinitionResultResponse); \
	DECLARE_FUNCTION(execdecodeUpdatePolicyResponseResponse); \
	DECLARE_FUNCTION(execdecodeUpdateRandomResultTablesResultResponse); \
	DECLARE_FUNCTION(execdecodeUpdateSegmentResponseResponse); \
	DECLARE_FUNCTION(execdecodeUpdateStoreItemsResultResponse); \
	DECLARE_FUNCTION(execdecodeUpdateUserDataResultResponse); \
	DECLARE_FUNCTION(execdecodeUpdateUserTitleDisplayNameResultResponse);


#define Test_Plugins_EnginePlugins_PlayFab_Source_PlayFab_Public_PlayFabAdminModelDecoder_h_103_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execdecodeAddLocalizedNewsResultResponse); \
	DECLARE_FUNCTION(execdecodeAddNewsResultResponse); \
	DECLARE_FUNCTION(execdecodeAddPlayerTagResultResponse); \
	DECLARE_FUNCTION(execdecodeAddServerBuildResultResponse); \
	DECLARE_FUNCTION(execdecodeBanUsersResultResponse); \
	DECLARE_FUNCTION(execdecodeBlankResultResponse); \
	DECLARE_FUNCTION(execdecodeCheckLimitedEditionItemAvailabilityResultResponse); \
	DECLARE_FUNCTION(execdecodeCreatePlayerSharedSecretResultResponse); \
	DECLARE_FUNCTION(execdecodeCreatePlayerStatisticDefinitionResultResponse); \
	DECLARE_FUNCTION(execdecodeCreateSegmentResponseResponse); \
	DECLARE_FUNCTION(execdecodeCreateTaskResultResponse); \
	DECLARE_FUNCTION(execdecodeDeleteMasterPlayerAccountResultResponse); \
	DECLARE_FUNCTION(execdecodeDeletePlayerResultResponse); \
	DECLARE_FUNCTION(execdecodeDeletePlayerSharedSecretResultResponse); \
	DECLARE_FUNCTION(execdecodeDeleteSegmentsResponseResponse); \
	DECLARE_FUNCTION(execdecodeDeleteStoreResultResponse); \
	DECLARE_FUNCTION(execdecodeDeleteTitleDataOverrideResultResponse); \
	DECLARE_FUNCTION(execdecodeDeleteTitleResultResponse); \
	DECLARE_FUNCTION(execdecodeEmptyResponseResponse); \
	DECLARE_FUNCTION(execdecodeExportMasterPlayerDataResultResponse); \
	DECLARE_FUNCTION(execdecodeGetActionsOnPlayersInSegmentTaskInstanceResultResponse); \
	DECLARE_FUNCTION(execdecodeGetAllSegmentsResultResponse); \
	DECLARE_FUNCTION(execdecodeGetCatalogItemsResultResponse); \
	DECLARE_FUNCTION(execdecodeGetCloudScriptRevisionResultResponse); \
	DECLARE_FUNCTION(execdecodeGetCloudScriptTaskInstanceResultResponse); \
	DECLARE_FUNCTION(execdecodeGetCloudScriptVersionsResultResponse); \
	DECLARE_FUNCTION(execdecodeGetContentListResultResponse); \
	DECLARE_FUNCTION(execdecodeGetContentUploadUrlResultResponse); \
	DECLARE_FUNCTION(execdecodeGetDataReportResultResponse); \
	DECLARE_FUNCTION(execdecodeGetMatchmakerGameInfoResultResponse); \
	DECLARE_FUNCTION(execdecodeGetMatchmakerGameModesResultResponse); \
	DECLARE_FUNCTION(execdecodeGetPlayedTitleListResultResponse); \
	DECLARE_FUNCTION(execdecodeGetPlayerIdFromAuthTokenResultResponse); \
	DECLARE_FUNCTION(execdecodeGetPlayerProfileResultResponse); \
	DECLARE_FUNCTION(execdecodeGetPlayerSegmentsResultResponse); \
	DECLARE_FUNCTION(execdecodeGetPlayerSharedSecretsResultResponse); \
	DECLARE_FUNCTION(execdecodeGetPlayersInSegmentResultResponse); \
	DECLARE_FUNCTION(execdecodeGetPlayerStatisticDefinitionsResultResponse); \
	DECLARE_FUNCTION(execdecodeGetPlayerStatisticVersionsResultResponse); \
	DECLARE_FUNCTION(execdecodeGetPlayerTagsResultResponse); \
	DECLARE_FUNCTION(execdecodeGetPolicyResponseResponse); \
	DECLARE_FUNCTION(execdecodeGetPublisherDataResultResponse); \
	DECLARE_FUNCTION(execdecodeGetRandomResultTablesResultResponse); \
	DECLARE_FUNCTION(execdecodeGetSegmentsResponseResponse); \
	DECLARE_FUNCTION(execdecodeGetServerBuildInfoResultResponse); \
	DECLARE_FUNCTION(execdecodeGetServerBuildUploadURLResultResponse); \
	DECLARE_FUNCTION(execdecodeGetStoreItemsResultResponse); \
	DECLARE_FUNCTION(execdecodeGetTaskInstancesResultResponse); \
	DECLARE_FUNCTION(execdecodeGetTasksResultResponse); \
	DECLARE_FUNCTION(execdecodeGetTitleDataResultResponse); \
	DECLARE_FUNCTION(execdecodeGetUserBansResultResponse); \
	DECLARE_FUNCTION(execdecodeGetUserDataResultResponse); \
	DECLARE_FUNCTION(execdecodeGetUserInventoryResultResponse); \
	DECLARE_FUNCTION(execdecodeGrantItemsToUsersResultResponse); \
	DECLARE_FUNCTION(execdecodeIncrementLimitedEditionItemAvailabilityResultResponse); \
	DECLARE_FUNCTION(execdecodeIncrementPlayerStatisticVersionResultResponse); \
	DECLARE_FUNCTION(execdecodeListBuildsResultResponse); \
	DECLARE_FUNCTION(execdecodeListOpenIdConnectionResponseResponse); \
	DECLARE_FUNCTION(execdecodeListVirtualCurrencyTypesResultResponse); \
	DECLARE_FUNCTION(execdecodeLookupUserAccountInfoResultResponse); \
	DECLARE_FUNCTION(execdecodeModifyMatchmakerGameModesResultResponse); \
	DECLARE_FUNCTION(execdecodeModifyServerBuildResultResponse); \
	DECLARE_FUNCTION(execdecodeModifyUserVirtualCurrencyResultResponse); \
	DECLARE_FUNCTION(execdecodeRefundPurchaseResponseResponse); \
	DECLARE_FUNCTION(execdecodeRemovePlayerTagResultResponse); \
	DECLARE_FUNCTION(execdecodeRemoveServerBuildResultResponse); \
	DECLARE_FUNCTION(execdecodeResetCharacterStatisticsResultResponse); \
	DECLARE_FUNCTION(execdecodeResetPasswordResultResponse); \
	DECLARE_FUNCTION(execdecodeResetUserStatisticsResultResponse); \
	DECLARE_FUNCTION(execdecodeResolvePurchaseDisputeResponseResponse); \
	DECLARE_FUNCTION(execdecodeRevokeAllBansForUserResultResponse); \
	DECLARE_FUNCTION(execdecodeRevokeBansResultResponse); \
	DECLARE_FUNCTION(execdecodeRevokeInventoryItemsResultResponse); \
	DECLARE_FUNCTION(execdecodeRevokeInventoryResultResponse); \
	DECLARE_FUNCTION(execdecodeRunTaskResultResponse); \
	DECLARE_FUNCTION(execdecodeSendAccountRecoveryEmailResultResponse); \
	DECLARE_FUNCTION(execdecodeSetPlayerSecretResultResponse); \
	DECLARE_FUNCTION(execdecodeSetPublishedRevisionResultResponse); \
	DECLARE_FUNCTION(execdecodeSetPublisherDataResultResponse); \
	DECLARE_FUNCTION(execdecodeSetTitleDataAndOverridesResultResponse); \
	DECLARE_FUNCTION(execdecodeSetTitleDataResultResponse); \
	DECLARE_FUNCTION(execdecodeSetupPushNotificationResultResponse); \
	DECLARE_FUNCTION(execdecodeUpdateBansResultResponse); \
	DECLARE_FUNCTION(execdecodeUpdateCatalogItemsResultResponse); \
	DECLARE_FUNCTION(execdecodeUpdateCloudScriptResultResponse); \
	DECLARE_FUNCTION(execdecodeUpdatePlayerSharedSecretResultResponse); \
	DECLARE_FUNCTION(execdecodeUpdatePlayerStatisticDefinitionResultResponse); \
	DECLARE_FUNCTION(execdecodeUpdatePolicyResponseResponse); \
	DECLARE_FUNCTION(execdecodeUpdateRandomResultTablesResultResponse); \
	DECLARE_FUNCTION(execdecodeUpdateSegmentResponseResponse); \
	DECLARE_FUNCTION(execdecodeUpdateStoreItemsResultResponse); \
	DECLARE_FUNCTION(execdecodeUpdateUserDataResultResponse); \
	DECLARE_FUNCTION(execdecodeUpdateUserTitleDisplayNameResultResponse);


#define Test_Plugins_EnginePlugins_PlayFab_Source_PlayFab_Public_PlayFabAdminModelDecoder_h_103_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPlayFabAdminModelDecoder(); \
	friend struct Z_Construct_UClass_UPlayFabAdminModelDecoder_Statics; \
public: \
	DECLARE_CLASS(UPlayFabAdminModelDecoder, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/PlayFab"), NO_API) \
	DECLARE_SERIALIZER(UPlayFabAdminModelDecoder)


#define Test_Plugins_EnginePlugins_PlayFab_Source_PlayFab_Public_PlayFabAdminModelDecoder_h_103_INCLASS \
private: \
	static void StaticRegisterNativesUPlayFabAdminModelDecoder(); \
	friend struct Z_Construct_UClass_UPlayFabAdminModelDecoder_Statics; \
public: \
	DECLARE_CLASS(UPlayFabAdminModelDecoder, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/PlayFab"), NO_API) \
	DECLARE_SERIALIZER(UPlayFabAdminModelDecoder)


#define Test_Plugins_EnginePlugins_PlayFab_Source_PlayFab_Public_PlayFabAdminModelDecoder_h_103_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UPlayFabAdminModelDecoder(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPlayFabAdminModelDecoder) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPlayFabAdminModelDecoder); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPlayFabAdminModelDecoder); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UPlayFabAdminModelDecoder(UPlayFabAdminModelDecoder&&); \
	NO_API UPlayFabAdminModelDecoder(const UPlayFabAdminModelDecoder&); \
public:


#define Test_Plugins_EnginePlugins_PlayFab_Source_PlayFab_Public_PlayFabAdminModelDecoder_h_103_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UPlayFabAdminModelDecoder(UPlayFabAdminModelDecoder&&); \
	NO_API UPlayFabAdminModelDecoder(const UPlayFabAdminModelDecoder&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPlayFabAdminModelDecoder); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPlayFabAdminModelDecoder); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UPlayFabAdminModelDecoder)


#define Test_Plugins_EnginePlugins_PlayFab_Source_PlayFab_Public_PlayFabAdminModelDecoder_h_103_PRIVATE_PROPERTY_OFFSET
#define Test_Plugins_EnginePlugins_PlayFab_Source_PlayFab_Public_PlayFabAdminModelDecoder_h_101_PROLOG
#define Test_Plugins_EnginePlugins_PlayFab_Source_PlayFab_Public_PlayFabAdminModelDecoder_h_103_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Test_Plugins_EnginePlugins_PlayFab_Source_PlayFab_Public_PlayFabAdminModelDecoder_h_103_PRIVATE_PROPERTY_OFFSET \
	Test_Plugins_EnginePlugins_PlayFab_Source_PlayFab_Public_PlayFabAdminModelDecoder_h_103_SPARSE_DATA \
	Test_Plugins_EnginePlugins_PlayFab_Source_PlayFab_Public_PlayFabAdminModelDecoder_h_103_RPC_WRAPPERS \
	Test_Plugins_EnginePlugins_PlayFab_Source_PlayFab_Public_PlayFabAdminModelDecoder_h_103_INCLASS \
	Test_Plugins_EnginePlugins_PlayFab_Source_PlayFab_Public_PlayFabAdminModelDecoder_h_103_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Test_Plugins_EnginePlugins_PlayFab_Source_PlayFab_Public_PlayFabAdminModelDecoder_h_103_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Test_Plugins_EnginePlugins_PlayFab_Source_PlayFab_Public_PlayFabAdminModelDecoder_h_103_PRIVATE_PROPERTY_OFFSET \
	Test_Plugins_EnginePlugins_PlayFab_Source_PlayFab_Public_PlayFabAdminModelDecoder_h_103_SPARSE_DATA \
	Test_Plugins_EnginePlugins_PlayFab_Source_PlayFab_Public_PlayFabAdminModelDecoder_h_103_RPC_WRAPPERS_NO_PURE_DECLS \
	Test_Plugins_EnginePlugins_PlayFab_Source_PlayFab_Public_PlayFabAdminModelDecoder_h_103_INCLASS_NO_PURE_DECLS \
	Test_Plugins_EnginePlugins_PlayFab_Source_PlayFab_Public_PlayFabAdminModelDecoder_h_103_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> PLAYFAB_API UClass* StaticClass<class UPlayFabAdminModelDecoder>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Test_Plugins_EnginePlugins_PlayFab_Source_PlayFab_Public_PlayFabAdminModelDecoder_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
