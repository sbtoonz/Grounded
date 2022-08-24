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
struct FMultiplayerCancelAllMatchmakingTicketsForPlayerResult;
struct FMultiplayerCancelAllServerBackfillTicketsForPlayerResult;
struct FMultiplayerCancelMatchmakingTicketResult;
struct FMultiplayerCancelServerBackfillTicketResult;
struct FMultiplayerBuildAliasDetailsResponse;
struct FMultiplayerCreateBuildWithCustomContainerResponse;
struct FMultiplayerCreateBuildWithManagedContainerResponse;
struct FMultiplayerCreateBuildWithProcessBasedServerResponse;
struct FMultiplayerCreateMatchmakingTicketResult;
struct FMultiplayerCreateRemoteUserResponse;
struct FMultiplayerCreateServerBackfillTicketResult;
struct FMultiplayerCreateTitleMultiplayerServersQuotaChangeResponse;
struct FMultiplayerEmptyResponse;
struct FMultiplayerEnableMultiplayerServersForTitleResponse;
struct FMultiplayerGetAssetUploadUrlResponse;
struct FMultiplayerGetBuildResponse;
struct FMultiplayerGetContainerRegistryCredentialsResponse;
struct FMultiplayerGetMatchResult;
struct FMultiplayerGetMatchmakingTicketResult;
struct FMultiplayerGetMultiplayerServerDetailsResponse;
struct FMultiplayerGetMultiplayerServerLogsResponse;
struct FMultiplayerGetQueueStatisticsResult;
struct FMultiplayerGetRemoteLoginEndpointResponse;
struct FMultiplayerGetServerBackfillTicketResult;
struct FMultiplayerGetTitleEnabledForMultiplayerServersStatusResponse;
struct FMultiplayerGetTitleMultiplayerServersQuotaChangeResponse;
struct FMultiplayerGetTitleMultiplayerServersQuotasResponse;
struct FMultiplayerJoinMatchmakingTicketResult;
struct FMultiplayerListMultiplayerServersResponse;
struct FMultiplayerListAssetSummariesResponse;
struct FMultiplayerListBuildAliasesForTitleResponse;
struct FMultiplayerListBuildSummariesResponse;
struct FMultiplayerListCertificateSummariesResponse;
struct FMultiplayerListContainerImagesResponse;
struct FMultiplayerListContainerImageTagsResponse;
struct FMultiplayerListMatchmakingTicketsForPlayerResult;
struct FMultiplayerListPartyQosServersResponse;
struct FMultiplayerListQosServersForTitleResponse;
struct FMultiplayerListServerBackfillTicketsForPlayerResult;
struct FMultiplayerListTitleMultiplayerServersQuotaChangesResponse;
struct FMultiplayerListVirtualMachineSummariesResponse;
struct FMultiplayerRequestMultiplayerServerResponse;
struct FMultiplayerRolloverContainerRegistryCredentialsResponse;
struct FMultiplayerCancelAllMatchmakingTicketsForPlayerRequest;
class UPlayFabMultiplayerAPI;
struct FMultiplayerCancelAllServerBackfillTicketsForPlayerRequest;
struct FMultiplayerCancelMatchmakingTicketRequest;
struct FMultiplayerCancelServerBackfillTicketRequest;
struct FMultiplayerCreateBuildAliasRequest;
struct FMultiplayerCreateBuildWithCustomContainerRequest;
struct FMultiplayerCreateBuildWithManagedContainerRequest;
struct FMultiplayerCreateBuildWithProcessBasedServerRequest;
struct FMultiplayerCreateMatchmakingTicketRequest;
struct FMultiplayerCreateRemoteUserRequest;
struct FMultiplayerCreateServerBackfillTicketRequest;
struct FMultiplayerCreateServerMatchmakingTicketRequest;
struct FMultiplayerCreateTitleMultiplayerServersQuotaChangeRequest;
struct FMultiplayerDeleteAssetRequest;
struct FMultiplayerDeleteBuildRequest;
struct FMultiplayerDeleteBuildAliasRequest;
struct FMultiplayerDeleteBuildRegionRequest;
struct FMultiplayerDeleteCertificateRequest;
struct FMultiplayerDeleteContainerImageRequest;
struct FMultiplayerDeleteRemoteUserRequest;
struct FMultiplayerEnableMultiplayerServersForTitleRequest;
struct FMultiplayerGetAssetUploadUrlRequest;
struct FMultiplayerGetBuildRequest;
struct FMultiplayerGetBuildAliasRequest;
struct FMultiplayerGetContainerRegistryCredentialsRequest;
struct FMultiplayerGetMatchRequest;
struct FMultiplayerGetMatchmakingTicketRequest;
struct FMultiplayerGetMultiplayerServerDetailsRequest;
struct FMultiplayerGetMultiplayerServerLogsRequest;
struct FMultiplayerGetMultiplayerSessionLogsBySessionIdRequest;
struct FMultiplayerGetQueueStatisticsRequest;
struct FMultiplayerGetRemoteLoginEndpointRequest;
struct FMultiplayerGetServerBackfillTicketRequest;
struct FMultiplayerGetTitleEnabledForMultiplayerServersStatusRequest;
struct FMultiplayerGetTitleMultiplayerServersQuotaChangeRequest;
struct FMultiplayerGetTitleMultiplayerServersQuotasRequest;
struct FPlayFabBaseModel;
struct FMultiplayerJoinMatchmakingTicketRequest;
struct FMultiplayerListMultiplayerServersRequest;
struct FMultiplayerListAssetSummariesRequest;
struct FMultiplayerMultiplayerEmptyRequest;
struct FMultiplayerListBuildSummariesRequest;
struct FMultiplayerListCertificateSummariesRequest;
struct FMultiplayerListContainerImagesRequest;
struct FMultiplayerListContainerImageTagsRequest;
struct FMultiplayerListMatchmakingTicketsForPlayerRequest;
struct FMultiplayerListPartyQosServersRequest;
struct FMultiplayerListQosServersForTitleRequest;
struct FMultiplayerListServerBackfillTicketsForPlayerRequest;
struct FMultiplayerListTitleMultiplayerServersQuotaChangesRequest;
struct FMultiplayerListVirtualMachineSummariesRequest;
struct FMultiplayerRequestMultiplayerServerRequest;
struct FMultiplayerRolloverContainerRegistryCredentialsRequest;
struct FMultiplayerShutdownMultiplayerServerRequest;
struct FMultiplayerUntagContainerImageRequest;
struct FMultiplayerUpdateBuildAliasRequest;
struct FMultiplayerUpdateBuildNameRequest;
struct FMultiplayerUpdateBuildRegionRequest;
struct FMultiplayerUpdateBuildRegionsRequest;
struct FMultiplayerUploadCertificateRequest;
#ifdef PLAYFAB_PlayFabMultiplayerAPI_generated_h
#error "PlayFabMultiplayerAPI.generated.h already included, missing '#pragma once' in PlayFabMultiplayerAPI.h"
#endif
#define PLAYFAB_PlayFabMultiplayerAPI_generated_h

#define Test_Plugins_EnginePlugins_PlayFab_Source_PlayFab_Public_PlayFabMultiplayerAPI_h_180_DELEGATE \
struct PlayFabMultiplayerAPI_eventDelegateOnFailurePlayFabError_Parms \
{ \
	FPlayFabError Error; \
	UObject* customData; \
}; \
static inline void FDelegateOnFailurePlayFabError_DelegateWrapper(const FScriptDelegate& DelegateOnFailurePlayFabError, FPlayFabError Error, UObject* customData) \
{ \
	PlayFabMultiplayerAPI_eventDelegateOnFailurePlayFabError_Parms Parms; \
	Parms.Error=Error; \
	Parms.customData=customData; \
	DelegateOnFailurePlayFabError.ProcessDelegate<UObject>(&Parms); \
}


#define Test_Plugins_EnginePlugins_PlayFab_Source_PlayFab_Public_PlayFabMultiplayerAPI_h_179_DELEGATE \
struct PlayFabMultiplayerAPI_eventDelegateOnSuccessCancelAllMatchmakingTicketsForPlayer_Parms \
{ \
	FMultiplayerCancelAllMatchmakingTicketsForPlayerResult Result; \
	UObject* customData; \
}; \
static inline void FDelegateOnSuccessCancelAllMatchmakingTicketsForPlayer_DelegateWrapper(const FScriptDelegate& DelegateOnSuccessCancelAllMatchmakingTicketsForPlayer, FMultiplayerCancelAllMatchmakingTicketsForPlayerResult Result, UObject* customData) \
{ \
	PlayFabMultiplayerAPI_eventDelegateOnSuccessCancelAllMatchmakingTicketsForPlayer_Parms Parms; \
	Parms.Result=Result; \
	Parms.customData=customData; \
	DelegateOnSuccessCancelAllMatchmakingTicketsForPlayer.ProcessDelegate<UObject>(&Parms); \
}


#define Test_Plugins_EnginePlugins_PlayFab_Source_PlayFab_Public_PlayFabMultiplayerAPI_h_178_DELEGATE \
struct PlayFabMultiplayerAPI_eventDelegateOnSuccessCancelAllServerBackfillTicketsForPlayer_Parms \
{ \
	FMultiplayerCancelAllServerBackfillTicketsForPlayerResult Result; \
	UObject* customData; \
}; \
static inline void FDelegateOnSuccessCancelAllServerBackfillTicketsForPlayer_DelegateWrapper(const FScriptDelegate& DelegateOnSuccessCancelAllServerBackfillTicketsForPlayer, FMultiplayerCancelAllServerBackfillTicketsForPlayerResult Result, UObject* customData) \
{ \
	PlayFabMultiplayerAPI_eventDelegateOnSuccessCancelAllServerBackfillTicketsForPlayer_Parms Parms; \
	Parms.Result=Result; \
	Parms.customData=customData; \
	DelegateOnSuccessCancelAllServerBackfillTicketsForPlayer.ProcessDelegate<UObject>(&Parms); \
}


#define Test_Plugins_EnginePlugins_PlayFab_Source_PlayFab_Public_PlayFabMultiplayerAPI_h_177_DELEGATE \
struct PlayFabMultiplayerAPI_eventDelegateOnSuccessCancelMatchmakingTicket_Parms \
{ \
	FMultiplayerCancelMatchmakingTicketResult Result; \
	UObject* customData; \
}; \
static inline void FDelegateOnSuccessCancelMatchmakingTicket_DelegateWrapper(const FScriptDelegate& DelegateOnSuccessCancelMatchmakingTicket, FMultiplayerCancelMatchmakingTicketResult Result, UObject* customData) \
{ \
	PlayFabMultiplayerAPI_eventDelegateOnSuccessCancelMatchmakingTicket_Parms Parms; \
	Parms.Result=Result; \
	Parms.customData=customData; \
	DelegateOnSuccessCancelMatchmakingTicket.ProcessDelegate<UObject>(&Parms); \
}


#define Test_Plugins_EnginePlugins_PlayFab_Source_PlayFab_Public_PlayFabMultiplayerAPI_h_176_DELEGATE \
struct PlayFabMultiplayerAPI_eventDelegateOnSuccessCancelServerBackfillTicket_Parms \
{ \
	FMultiplayerCancelServerBackfillTicketResult Result; \
	UObject* customData; \
}; \
static inline void FDelegateOnSuccessCancelServerBackfillTicket_DelegateWrapper(const FScriptDelegate& DelegateOnSuccessCancelServerBackfillTicket, FMultiplayerCancelServerBackfillTicketResult Result, UObject* customData) \
{ \
	PlayFabMultiplayerAPI_eventDelegateOnSuccessCancelServerBackfillTicket_Parms Parms; \
	Parms.Result=Result; \
	Parms.customData=customData; \
	DelegateOnSuccessCancelServerBackfillTicket.ProcessDelegate<UObject>(&Parms); \
}


#define Test_Plugins_EnginePlugins_PlayFab_Source_PlayFab_Public_PlayFabMultiplayerAPI_h_175_DELEGATE \
struct PlayFabMultiplayerAPI_eventDelegateOnSuccessCreateBuildAlias_Parms \
{ \
	FMultiplayerBuildAliasDetailsResponse Result; \
	UObject* customData; \
}; \
static inline void FDelegateOnSuccessCreateBuildAlias_DelegateWrapper(const FScriptDelegate& DelegateOnSuccessCreateBuildAlias, FMultiplayerBuildAliasDetailsResponse Result, UObject* customData) \
{ \
	PlayFabMultiplayerAPI_eventDelegateOnSuccessCreateBuildAlias_Parms Parms; \
	Parms.Result=Result; \
	Parms.customData=customData; \
	DelegateOnSuccessCreateBuildAlias.ProcessDelegate<UObject>(&Parms); \
}


#define Test_Plugins_EnginePlugins_PlayFab_Source_PlayFab_Public_PlayFabMultiplayerAPI_h_174_DELEGATE \
struct PlayFabMultiplayerAPI_eventDelegateOnSuccessCreateBuildWithCustomContainer_Parms \
{ \
	FMultiplayerCreateBuildWithCustomContainerResponse Result; \
	UObject* customData; \
}; \
static inline void FDelegateOnSuccessCreateBuildWithCustomContainer_DelegateWrapper(const FScriptDelegate& DelegateOnSuccessCreateBuildWithCustomContainer, FMultiplayerCreateBuildWithCustomContainerResponse Result, UObject* customData) \
{ \
	PlayFabMultiplayerAPI_eventDelegateOnSuccessCreateBuildWithCustomContainer_Parms Parms; \
	Parms.Result=Result; \
	Parms.customData=customData; \
	DelegateOnSuccessCreateBuildWithCustomContainer.ProcessDelegate<UObject>(&Parms); \
}


#define Test_Plugins_EnginePlugins_PlayFab_Source_PlayFab_Public_PlayFabMultiplayerAPI_h_173_DELEGATE \
struct PlayFabMultiplayerAPI_eventDelegateOnSuccessCreateBuildWithManagedContainer_Parms \
{ \
	FMultiplayerCreateBuildWithManagedContainerResponse Result; \
	UObject* customData; \
}; \
static inline void FDelegateOnSuccessCreateBuildWithManagedContainer_DelegateWrapper(const FScriptDelegate& DelegateOnSuccessCreateBuildWithManagedContainer, FMultiplayerCreateBuildWithManagedContainerResponse Result, UObject* customData) \
{ \
	PlayFabMultiplayerAPI_eventDelegateOnSuccessCreateBuildWithManagedContainer_Parms Parms; \
	Parms.Result=Result; \
	Parms.customData=customData; \
	DelegateOnSuccessCreateBuildWithManagedContainer.ProcessDelegate<UObject>(&Parms); \
}


#define Test_Plugins_EnginePlugins_PlayFab_Source_PlayFab_Public_PlayFabMultiplayerAPI_h_172_DELEGATE \
struct PlayFabMultiplayerAPI_eventDelegateOnSuccessCreateBuildWithProcessBasedServer_Parms \
{ \
	FMultiplayerCreateBuildWithProcessBasedServerResponse Result; \
	UObject* customData; \
}; \
static inline void FDelegateOnSuccessCreateBuildWithProcessBasedServer_DelegateWrapper(const FScriptDelegate& DelegateOnSuccessCreateBuildWithProcessBasedServer, FMultiplayerCreateBuildWithProcessBasedServerResponse Result, UObject* customData) \
{ \
	PlayFabMultiplayerAPI_eventDelegateOnSuccessCreateBuildWithProcessBasedServer_Parms Parms; \
	Parms.Result=Result; \
	Parms.customData=customData; \
	DelegateOnSuccessCreateBuildWithProcessBasedServer.ProcessDelegate<UObject>(&Parms); \
}


#define Test_Plugins_EnginePlugins_PlayFab_Source_PlayFab_Public_PlayFabMultiplayerAPI_h_171_DELEGATE \
struct PlayFabMultiplayerAPI_eventDelegateOnSuccessCreateMatchmakingTicket_Parms \
{ \
	FMultiplayerCreateMatchmakingTicketResult Result; \
	UObject* customData; \
}; \
static inline void FDelegateOnSuccessCreateMatchmakingTicket_DelegateWrapper(const FScriptDelegate& DelegateOnSuccessCreateMatchmakingTicket, FMultiplayerCreateMatchmakingTicketResult Result, UObject* customData) \
{ \
	PlayFabMultiplayerAPI_eventDelegateOnSuccessCreateMatchmakingTicket_Parms Parms; \
	Parms.Result=Result; \
	Parms.customData=customData; \
	DelegateOnSuccessCreateMatchmakingTicket.ProcessDelegate<UObject>(&Parms); \
}


#define Test_Plugins_EnginePlugins_PlayFab_Source_PlayFab_Public_PlayFabMultiplayerAPI_h_170_DELEGATE \
struct PlayFabMultiplayerAPI_eventDelegateOnSuccessCreateRemoteUser_Parms \
{ \
	FMultiplayerCreateRemoteUserResponse Result; \
	UObject* customData; \
}; \
static inline void FDelegateOnSuccessCreateRemoteUser_DelegateWrapper(const FScriptDelegate& DelegateOnSuccessCreateRemoteUser, FMultiplayerCreateRemoteUserResponse Result, UObject* customData) \
{ \
	PlayFabMultiplayerAPI_eventDelegateOnSuccessCreateRemoteUser_Parms Parms; \
	Parms.Result=Result; \
	Parms.customData=customData; \
	DelegateOnSuccessCreateRemoteUser.ProcessDelegate<UObject>(&Parms); \
}


#define Test_Plugins_EnginePlugins_PlayFab_Source_PlayFab_Public_PlayFabMultiplayerAPI_h_169_DELEGATE \
struct PlayFabMultiplayerAPI_eventDelegateOnSuccessCreateServerBackfillTicket_Parms \
{ \
	FMultiplayerCreateServerBackfillTicketResult Result; \
	UObject* customData; \
}; \
static inline void FDelegateOnSuccessCreateServerBackfillTicket_DelegateWrapper(const FScriptDelegate& DelegateOnSuccessCreateServerBackfillTicket, FMultiplayerCreateServerBackfillTicketResult Result, UObject* customData) \
{ \
	PlayFabMultiplayerAPI_eventDelegateOnSuccessCreateServerBackfillTicket_Parms Parms; \
	Parms.Result=Result; \
	Parms.customData=customData; \
	DelegateOnSuccessCreateServerBackfillTicket.ProcessDelegate<UObject>(&Parms); \
}


#define Test_Plugins_EnginePlugins_PlayFab_Source_PlayFab_Public_PlayFabMultiplayerAPI_h_168_DELEGATE \
struct PlayFabMultiplayerAPI_eventDelegateOnSuccessCreateServerMatchmakingTicket_Parms \
{ \
	FMultiplayerCreateMatchmakingTicketResult Result; \
	UObject* customData; \
}; \
static inline void FDelegateOnSuccessCreateServerMatchmakingTicket_DelegateWrapper(const FScriptDelegate& DelegateOnSuccessCreateServerMatchmakingTicket, FMultiplayerCreateMatchmakingTicketResult Result, UObject* customData) \
{ \
	PlayFabMultiplayerAPI_eventDelegateOnSuccessCreateServerMatchmakingTicket_Parms Parms; \
	Parms.Result=Result; \
	Parms.customData=customData; \
	DelegateOnSuccessCreateServerMatchmakingTicket.ProcessDelegate<UObject>(&Parms); \
}


#define Test_Plugins_EnginePlugins_PlayFab_Source_PlayFab_Public_PlayFabMultiplayerAPI_h_167_DELEGATE \
struct PlayFabMultiplayerAPI_eventDelegateOnSuccessCreateTitleMultiplayerServersQuotaChange_Parms \
{ \
	FMultiplayerCreateTitleMultiplayerServersQuotaChangeResponse Result; \
	UObject* customData; \
}; \
static inline void FDelegateOnSuccessCreateTitleMultiplayerServersQuotaChange_DelegateWrapper(const FScriptDelegate& DelegateOnSuccessCreateTitleMultiplayerServersQuotaChange, FMultiplayerCreateTitleMultiplayerServersQuotaChangeResponse Result, UObject* customData) \
{ \
	PlayFabMultiplayerAPI_eventDelegateOnSuccessCreateTitleMultiplayerServersQuotaChange_Parms Parms; \
	Parms.Result=Result; \
	Parms.customData=customData; \
	DelegateOnSuccessCreateTitleMultiplayerServersQuotaChange.ProcessDelegate<UObject>(&Parms); \
}


#define Test_Plugins_EnginePlugins_PlayFab_Source_PlayFab_Public_PlayFabMultiplayerAPI_h_166_DELEGATE \
struct PlayFabMultiplayerAPI_eventDelegateOnSuccessDeleteAsset_Parms \
{ \
	FMultiplayerEmptyResponse Result; \
	UObject* customData; \
}; \
static inline void FDelegateOnSuccessDeleteAsset_DelegateWrapper(const FScriptDelegate& DelegateOnSuccessDeleteAsset, FMultiplayerEmptyResponse Result, UObject* customData) \
{ \
	PlayFabMultiplayerAPI_eventDelegateOnSuccessDeleteAsset_Parms Parms; \
	Parms.Result=Result; \
	Parms.customData=customData; \
	DelegateOnSuccessDeleteAsset.ProcessDelegate<UObject>(&Parms); \
}


#define Test_Plugins_EnginePlugins_PlayFab_Source_PlayFab_Public_PlayFabMultiplayerAPI_h_165_DELEGATE \
struct PlayFabMultiplayerAPI_eventDelegateOnSuccessDeleteBuild_Parms \
{ \
	FMultiplayerEmptyResponse Result; \
	UObject* customData; \
}; \
static inline void FDelegateOnSuccessDeleteBuild_DelegateWrapper(const FScriptDelegate& DelegateOnSuccessDeleteBuild, FMultiplayerEmptyResponse Result, UObject* customData) \
{ \
	PlayFabMultiplayerAPI_eventDelegateOnSuccessDeleteBuild_Parms Parms; \
	Parms.Result=Result; \
	Parms.customData=customData; \
	DelegateOnSuccessDeleteBuild.ProcessDelegate<UObject>(&Parms); \
}


#define Test_Plugins_EnginePlugins_PlayFab_Source_PlayFab_Public_PlayFabMultiplayerAPI_h_164_DELEGATE \
struct PlayFabMultiplayerAPI_eventDelegateOnSuccessDeleteBuildAlias_Parms \
{ \
	FMultiplayerEmptyResponse Result; \
	UObject* customData; \
}; \
static inline void FDelegateOnSuccessDeleteBuildAlias_DelegateWrapper(const FScriptDelegate& DelegateOnSuccessDeleteBuildAlias, FMultiplayerEmptyResponse Result, UObject* customData) \
{ \
	PlayFabMultiplayerAPI_eventDelegateOnSuccessDeleteBuildAlias_Parms Parms; \
	Parms.Result=Result; \
	Parms.customData=customData; \
	DelegateOnSuccessDeleteBuildAlias.ProcessDelegate<UObject>(&Parms); \
}


#define Test_Plugins_EnginePlugins_PlayFab_Source_PlayFab_Public_PlayFabMultiplayerAPI_h_163_DELEGATE \
struct PlayFabMultiplayerAPI_eventDelegateOnSuccessDeleteBuildRegion_Parms \
{ \
	FMultiplayerEmptyResponse Result; \
	UObject* customData; \
}; \
static inline void FDelegateOnSuccessDeleteBuildRegion_DelegateWrapper(const FScriptDelegate& DelegateOnSuccessDeleteBuildRegion, FMultiplayerEmptyResponse Result, UObject* customData) \
{ \
	PlayFabMultiplayerAPI_eventDelegateOnSuccessDeleteBuildRegion_Parms Parms; \
	Parms.Result=Result; \
	Parms.customData=customData; \
	DelegateOnSuccessDeleteBuildRegion.ProcessDelegate<UObject>(&Parms); \
}


#define Test_Plugins_EnginePlugins_PlayFab_Source_PlayFab_Public_PlayFabMultiplayerAPI_h_162_DELEGATE \
struct PlayFabMultiplayerAPI_eventDelegateOnSuccessDeleteCertificate_Parms \
{ \
	FMultiplayerEmptyResponse Result; \
	UObject* customData; \
}; \
static inline void FDelegateOnSuccessDeleteCertificate_DelegateWrapper(const FScriptDelegate& DelegateOnSuccessDeleteCertificate, FMultiplayerEmptyResponse Result, UObject* customData) \
{ \
	PlayFabMultiplayerAPI_eventDelegateOnSuccessDeleteCertificate_Parms Parms; \
	Parms.Result=Result; \
	Parms.customData=customData; \
	DelegateOnSuccessDeleteCertificate.ProcessDelegate<UObject>(&Parms); \
}


#define Test_Plugins_EnginePlugins_PlayFab_Source_PlayFab_Public_PlayFabMultiplayerAPI_h_161_DELEGATE \
struct PlayFabMultiplayerAPI_eventDelegateOnSuccessDeleteContainerImageRepository_Parms \
{ \
	FMultiplayerEmptyResponse Result; \
	UObject* customData; \
}; \
static inline void FDelegateOnSuccessDeleteContainerImageRepository_DelegateWrapper(const FScriptDelegate& DelegateOnSuccessDeleteContainerImageRepository, FMultiplayerEmptyResponse Result, UObject* customData) \
{ \
	PlayFabMultiplayerAPI_eventDelegateOnSuccessDeleteContainerImageRepository_Parms Parms; \
	Parms.Result=Result; \
	Parms.customData=customData; \
	DelegateOnSuccessDeleteContainerImageRepository.ProcessDelegate<UObject>(&Parms); \
}


#define Test_Plugins_EnginePlugins_PlayFab_Source_PlayFab_Public_PlayFabMultiplayerAPI_h_160_DELEGATE \
struct PlayFabMultiplayerAPI_eventDelegateOnSuccessDeleteRemoteUser_Parms \
{ \
	FMultiplayerEmptyResponse Result; \
	UObject* customData; \
}; \
static inline void FDelegateOnSuccessDeleteRemoteUser_DelegateWrapper(const FScriptDelegate& DelegateOnSuccessDeleteRemoteUser, FMultiplayerEmptyResponse Result, UObject* customData) \
{ \
	PlayFabMultiplayerAPI_eventDelegateOnSuccessDeleteRemoteUser_Parms Parms; \
	Parms.Result=Result; \
	Parms.customData=customData; \
	DelegateOnSuccessDeleteRemoteUser.ProcessDelegate<UObject>(&Parms); \
}


#define Test_Plugins_EnginePlugins_PlayFab_Source_PlayFab_Public_PlayFabMultiplayerAPI_h_159_DELEGATE \
struct PlayFabMultiplayerAPI_eventDelegateOnSuccessEnableMultiplayerServersForTitle_Parms \
{ \
	FMultiplayerEnableMultiplayerServersForTitleResponse Result; \
	UObject* customData; \
}; \
static inline void FDelegateOnSuccessEnableMultiplayerServersForTitle_DelegateWrapper(const FScriptDelegate& DelegateOnSuccessEnableMultiplayerServersForTitle, FMultiplayerEnableMultiplayerServersForTitleResponse Result, UObject* customData) \
{ \
	PlayFabMultiplayerAPI_eventDelegateOnSuccessEnableMultiplayerServersForTitle_Parms Parms; \
	Parms.Result=Result; \
	Parms.customData=customData; \
	DelegateOnSuccessEnableMultiplayerServersForTitle.ProcessDelegate<UObject>(&Parms); \
}


#define Test_Plugins_EnginePlugins_PlayFab_Source_PlayFab_Public_PlayFabMultiplayerAPI_h_158_DELEGATE \
struct PlayFabMultiplayerAPI_eventDelegateOnSuccessGetAssetUploadUrl_Parms \
{ \
	FMultiplayerGetAssetUploadUrlResponse Result; \
	UObject* customData; \
}; \
static inline void FDelegateOnSuccessGetAssetUploadUrl_DelegateWrapper(const FScriptDelegate& DelegateOnSuccessGetAssetUploadUrl, FMultiplayerGetAssetUploadUrlResponse Result, UObject* customData) \
{ \
	PlayFabMultiplayerAPI_eventDelegateOnSuccessGetAssetUploadUrl_Parms Parms; \
	Parms.Result=Result; \
	Parms.customData=customData; \
	DelegateOnSuccessGetAssetUploadUrl.ProcessDelegate<UObject>(&Parms); \
}


#define Test_Plugins_EnginePlugins_PlayFab_Source_PlayFab_Public_PlayFabMultiplayerAPI_h_157_DELEGATE \
struct PlayFabMultiplayerAPI_eventDelegateOnSuccessGetBuild_Parms \
{ \
	FMultiplayerGetBuildResponse Result; \
	UObject* customData; \
}; \
static inline void FDelegateOnSuccessGetBuild_DelegateWrapper(const FScriptDelegate& DelegateOnSuccessGetBuild, FMultiplayerGetBuildResponse Result, UObject* customData) \
{ \
	PlayFabMultiplayerAPI_eventDelegateOnSuccessGetBuild_Parms Parms; \
	Parms.Result=Result; \
	Parms.customData=customData; \
	DelegateOnSuccessGetBuild.ProcessDelegate<UObject>(&Parms); \
}


#define Test_Plugins_EnginePlugins_PlayFab_Source_PlayFab_Public_PlayFabMultiplayerAPI_h_156_DELEGATE \
struct PlayFabMultiplayerAPI_eventDelegateOnSuccessGetBuildAlias_Parms \
{ \
	FMultiplayerBuildAliasDetailsResponse Result; \
	UObject* customData; \
}; \
static inline void FDelegateOnSuccessGetBuildAlias_DelegateWrapper(const FScriptDelegate& DelegateOnSuccessGetBuildAlias, FMultiplayerBuildAliasDetailsResponse Result, UObject* customData) \
{ \
	PlayFabMultiplayerAPI_eventDelegateOnSuccessGetBuildAlias_Parms Parms; \
	Parms.Result=Result; \
	Parms.customData=customData; \
	DelegateOnSuccessGetBuildAlias.ProcessDelegate<UObject>(&Parms); \
}


#define Test_Plugins_EnginePlugins_PlayFab_Source_PlayFab_Public_PlayFabMultiplayerAPI_h_155_DELEGATE \
struct PlayFabMultiplayerAPI_eventDelegateOnSuccessGetContainerRegistryCredentials_Parms \
{ \
	FMultiplayerGetContainerRegistryCredentialsResponse Result; \
	UObject* customData; \
}; \
static inline void FDelegateOnSuccessGetContainerRegistryCredentials_DelegateWrapper(const FScriptDelegate& DelegateOnSuccessGetContainerRegistryCredentials, FMultiplayerGetContainerRegistryCredentialsResponse Result, UObject* customData) \
{ \
	PlayFabMultiplayerAPI_eventDelegateOnSuccessGetContainerRegistryCredentials_Parms Parms; \
	Parms.Result=Result; \
	Parms.customData=customData; \
	DelegateOnSuccessGetContainerRegistryCredentials.ProcessDelegate<UObject>(&Parms); \
}


#define Test_Plugins_EnginePlugins_PlayFab_Source_PlayFab_Public_PlayFabMultiplayerAPI_h_154_DELEGATE \
struct PlayFabMultiplayerAPI_eventDelegateOnSuccessGetMatch_Parms \
{ \
	FMultiplayerGetMatchResult Result; \
	UObject* customData; \
}; \
static inline void FDelegateOnSuccessGetMatch_DelegateWrapper(const FScriptDelegate& DelegateOnSuccessGetMatch, FMultiplayerGetMatchResult Result, UObject* customData) \
{ \
	PlayFabMultiplayerAPI_eventDelegateOnSuccessGetMatch_Parms Parms; \
	Parms.Result=Result; \
	Parms.customData=customData; \
	DelegateOnSuccessGetMatch.ProcessDelegate<UObject>(&Parms); \
}


#define Test_Plugins_EnginePlugins_PlayFab_Source_PlayFab_Public_PlayFabMultiplayerAPI_h_153_DELEGATE \
struct PlayFabMultiplayerAPI_eventDelegateOnSuccessGetMatchmakingTicket_Parms \
{ \
	FMultiplayerGetMatchmakingTicketResult Result; \
	UObject* customData; \
}; \
static inline void FDelegateOnSuccessGetMatchmakingTicket_DelegateWrapper(const FScriptDelegate& DelegateOnSuccessGetMatchmakingTicket, FMultiplayerGetMatchmakingTicketResult Result, UObject* customData) \
{ \
	PlayFabMultiplayerAPI_eventDelegateOnSuccessGetMatchmakingTicket_Parms Parms; \
	Parms.Result=Result; \
	Parms.customData=customData; \
	DelegateOnSuccessGetMatchmakingTicket.ProcessDelegate<UObject>(&Parms); \
}


#define Test_Plugins_EnginePlugins_PlayFab_Source_PlayFab_Public_PlayFabMultiplayerAPI_h_152_DELEGATE \
struct PlayFabMultiplayerAPI_eventDelegateOnSuccessGetMultiplayerServerDetails_Parms \
{ \
	FMultiplayerGetMultiplayerServerDetailsResponse Result; \
	UObject* customData; \
}; \
static inline void FDelegateOnSuccessGetMultiplayerServerDetails_DelegateWrapper(const FScriptDelegate& DelegateOnSuccessGetMultiplayerServerDetails, FMultiplayerGetMultiplayerServerDetailsResponse Result, UObject* customData) \
{ \
	PlayFabMultiplayerAPI_eventDelegateOnSuccessGetMultiplayerServerDetails_Parms Parms; \
	Parms.Result=Result; \
	Parms.customData=customData; \
	DelegateOnSuccessGetMultiplayerServerDetails.ProcessDelegate<UObject>(&Parms); \
}


#define Test_Plugins_EnginePlugins_PlayFab_Source_PlayFab_Public_PlayFabMultiplayerAPI_h_151_DELEGATE \
struct PlayFabMultiplayerAPI_eventDelegateOnSuccessGetMultiplayerServerLogs_Parms \
{ \
	FMultiplayerGetMultiplayerServerLogsResponse Result; \
	UObject* customData; \
}; \
static inline void FDelegateOnSuccessGetMultiplayerServerLogs_DelegateWrapper(const FScriptDelegate& DelegateOnSuccessGetMultiplayerServerLogs, FMultiplayerGetMultiplayerServerLogsResponse Result, UObject* customData) \
{ \
	PlayFabMultiplayerAPI_eventDelegateOnSuccessGetMultiplayerServerLogs_Parms Parms; \
	Parms.Result=Result; \
	Parms.customData=customData; \
	DelegateOnSuccessGetMultiplayerServerLogs.ProcessDelegate<UObject>(&Parms); \
}


#define Test_Plugins_EnginePlugins_PlayFab_Source_PlayFab_Public_PlayFabMultiplayerAPI_h_150_DELEGATE \
struct PlayFabMultiplayerAPI_eventDelegateOnSuccessGetMultiplayerSessionLogsBySessionId_Parms \
{ \
	FMultiplayerGetMultiplayerServerLogsResponse Result; \
	UObject* customData; \
}; \
static inline void FDelegateOnSuccessGetMultiplayerSessionLogsBySessionId_DelegateWrapper(const FScriptDelegate& DelegateOnSuccessGetMultiplayerSessionLogsBySessionId, FMultiplayerGetMultiplayerServerLogsResponse Result, UObject* customData) \
{ \
	PlayFabMultiplayerAPI_eventDelegateOnSuccessGetMultiplayerSessionLogsBySessionId_Parms Parms; \
	Parms.Result=Result; \
	Parms.customData=customData; \
	DelegateOnSuccessGetMultiplayerSessionLogsBySessionId.ProcessDelegate<UObject>(&Parms); \
}


#define Test_Plugins_EnginePlugins_PlayFab_Source_PlayFab_Public_PlayFabMultiplayerAPI_h_149_DELEGATE \
struct PlayFabMultiplayerAPI_eventDelegateOnSuccessGetQueueStatistics_Parms \
{ \
	FMultiplayerGetQueueStatisticsResult Result; \
	UObject* customData; \
}; \
static inline void FDelegateOnSuccessGetQueueStatistics_DelegateWrapper(const FScriptDelegate& DelegateOnSuccessGetQueueStatistics, FMultiplayerGetQueueStatisticsResult Result, UObject* customData) \
{ \
	PlayFabMultiplayerAPI_eventDelegateOnSuccessGetQueueStatistics_Parms Parms; \
	Parms.Result=Result; \
	Parms.customData=customData; \
	DelegateOnSuccessGetQueueStatistics.ProcessDelegate<UObject>(&Parms); \
}


#define Test_Plugins_EnginePlugins_PlayFab_Source_PlayFab_Public_PlayFabMultiplayerAPI_h_148_DELEGATE \
struct PlayFabMultiplayerAPI_eventDelegateOnSuccessGetRemoteLoginEndpoint_Parms \
{ \
	FMultiplayerGetRemoteLoginEndpointResponse Result; \
	UObject* customData; \
}; \
static inline void FDelegateOnSuccessGetRemoteLoginEndpoint_DelegateWrapper(const FScriptDelegate& DelegateOnSuccessGetRemoteLoginEndpoint, FMultiplayerGetRemoteLoginEndpointResponse Result, UObject* customData) \
{ \
	PlayFabMultiplayerAPI_eventDelegateOnSuccessGetRemoteLoginEndpoint_Parms Parms; \
	Parms.Result=Result; \
	Parms.customData=customData; \
	DelegateOnSuccessGetRemoteLoginEndpoint.ProcessDelegate<UObject>(&Parms); \
}


#define Test_Plugins_EnginePlugins_PlayFab_Source_PlayFab_Public_PlayFabMultiplayerAPI_h_147_DELEGATE \
struct PlayFabMultiplayerAPI_eventDelegateOnSuccessGetServerBackfillTicket_Parms \
{ \
	FMultiplayerGetServerBackfillTicketResult Result; \
	UObject* customData; \
}; \
static inline void FDelegateOnSuccessGetServerBackfillTicket_DelegateWrapper(const FScriptDelegate& DelegateOnSuccessGetServerBackfillTicket, FMultiplayerGetServerBackfillTicketResult Result, UObject* customData) \
{ \
	PlayFabMultiplayerAPI_eventDelegateOnSuccessGetServerBackfillTicket_Parms Parms; \
	Parms.Result=Result; \
	Parms.customData=customData; \
	DelegateOnSuccessGetServerBackfillTicket.ProcessDelegate<UObject>(&Parms); \
}


#define Test_Plugins_EnginePlugins_PlayFab_Source_PlayFab_Public_PlayFabMultiplayerAPI_h_146_DELEGATE \
struct PlayFabMultiplayerAPI_eventDelegateOnSuccessGetTitleEnabledForMultiplayerServersStatus_Parms \
{ \
	FMultiplayerGetTitleEnabledForMultiplayerServersStatusResponse Result; \
	UObject* customData; \
}; \
static inline void FDelegateOnSuccessGetTitleEnabledForMultiplayerServersStatus_DelegateWrapper(const FScriptDelegate& DelegateOnSuccessGetTitleEnabledForMultiplayerServersStatus, FMultiplayerGetTitleEnabledForMultiplayerServersStatusResponse Result, UObject* customData) \
{ \
	PlayFabMultiplayerAPI_eventDelegateOnSuccessGetTitleEnabledForMultiplayerServersStatus_Parms Parms; \
	Parms.Result=Result; \
	Parms.customData=customData; \
	DelegateOnSuccessGetTitleEnabledForMultiplayerServersStatus.ProcessDelegate<UObject>(&Parms); \
}


#define Test_Plugins_EnginePlugins_PlayFab_Source_PlayFab_Public_PlayFabMultiplayerAPI_h_145_DELEGATE \
struct PlayFabMultiplayerAPI_eventDelegateOnSuccessGetTitleMultiplayerServersQuotaChange_Parms \
{ \
	FMultiplayerGetTitleMultiplayerServersQuotaChangeResponse Result; \
	UObject* customData; \
}; \
static inline void FDelegateOnSuccessGetTitleMultiplayerServersQuotaChange_DelegateWrapper(const FScriptDelegate& DelegateOnSuccessGetTitleMultiplayerServersQuotaChange, FMultiplayerGetTitleMultiplayerServersQuotaChangeResponse Result, UObject* customData) \
{ \
	PlayFabMultiplayerAPI_eventDelegateOnSuccessGetTitleMultiplayerServersQuotaChange_Parms Parms; \
	Parms.Result=Result; \
	Parms.customData=customData; \
	DelegateOnSuccessGetTitleMultiplayerServersQuotaChange.ProcessDelegate<UObject>(&Parms); \
}


#define Test_Plugins_EnginePlugins_PlayFab_Source_PlayFab_Public_PlayFabMultiplayerAPI_h_144_DELEGATE \
struct PlayFabMultiplayerAPI_eventDelegateOnSuccessGetTitleMultiplayerServersQuotas_Parms \
{ \
	FMultiplayerGetTitleMultiplayerServersQuotasResponse Result; \
	UObject* customData; \
}; \
static inline void FDelegateOnSuccessGetTitleMultiplayerServersQuotas_DelegateWrapper(const FScriptDelegate& DelegateOnSuccessGetTitleMultiplayerServersQuotas, FMultiplayerGetTitleMultiplayerServersQuotasResponse Result, UObject* customData) \
{ \
	PlayFabMultiplayerAPI_eventDelegateOnSuccessGetTitleMultiplayerServersQuotas_Parms Parms; \
	Parms.Result=Result; \
	Parms.customData=customData; \
	DelegateOnSuccessGetTitleMultiplayerServersQuotas.ProcessDelegate<UObject>(&Parms); \
}


#define Test_Plugins_EnginePlugins_PlayFab_Source_PlayFab_Public_PlayFabMultiplayerAPI_h_143_DELEGATE \
struct PlayFabMultiplayerAPI_eventDelegateOnSuccessJoinMatchmakingTicket_Parms \
{ \
	FMultiplayerJoinMatchmakingTicketResult Result; \
	UObject* customData; \
}; \
static inline void FDelegateOnSuccessJoinMatchmakingTicket_DelegateWrapper(const FScriptDelegate& DelegateOnSuccessJoinMatchmakingTicket, FMultiplayerJoinMatchmakingTicketResult Result, UObject* customData) \
{ \
	PlayFabMultiplayerAPI_eventDelegateOnSuccessJoinMatchmakingTicket_Parms Parms; \
	Parms.Result=Result; \
	Parms.customData=customData; \
	DelegateOnSuccessJoinMatchmakingTicket.ProcessDelegate<UObject>(&Parms); \
}


#define Test_Plugins_EnginePlugins_PlayFab_Source_PlayFab_Public_PlayFabMultiplayerAPI_h_142_DELEGATE \
struct PlayFabMultiplayerAPI_eventDelegateOnSuccessListArchivedMultiplayerServers_Parms \
{ \
	FMultiplayerListMultiplayerServersResponse Result; \
	UObject* customData; \
}; \
static inline void FDelegateOnSuccessListArchivedMultiplayerServers_DelegateWrapper(const FScriptDelegate& DelegateOnSuccessListArchivedMultiplayerServers, FMultiplayerListMultiplayerServersResponse Result, UObject* customData) \
{ \
	PlayFabMultiplayerAPI_eventDelegateOnSuccessListArchivedMultiplayerServers_Parms Parms; \
	Parms.Result=Result; \
	Parms.customData=customData; \
	DelegateOnSuccessListArchivedMultiplayerServers.ProcessDelegate<UObject>(&Parms); \
}


#define Test_Plugins_EnginePlugins_PlayFab_Source_PlayFab_Public_PlayFabMultiplayerAPI_h_141_DELEGATE \
struct PlayFabMultiplayerAPI_eventDelegateOnSuccessListAssetSummaries_Parms \
{ \
	FMultiplayerListAssetSummariesResponse Result; \
	UObject* customData; \
}; \
static inline void FDelegateOnSuccessListAssetSummaries_DelegateWrapper(const FScriptDelegate& DelegateOnSuccessListAssetSummaries, FMultiplayerListAssetSummariesResponse Result, UObject* customData) \
{ \
	PlayFabMultiplayerAPI_eventDelegateOnSuccessListAssetSummaries_Parms Parms; \
	Parms.Result=Result; \
	Parms.customData=customData; \
	DelegateOnSuccessListAssetSummaries.ProcessDelegate<UObject>(&Parms); \
}


#define Test_Plugins_EnginePlugins_PlayFab_Source_PlayFab_Public_PlayFabMultiplayerAPI_h_140_DELEGATE \
struct PlayFabMultiplayerAPI_eventDelegateOnSuccessListBuildAliases_Parms \
{ \
	FMultiplayerListBuildAliasesForTitleResponse Result; \
	UObject* customData; \
}; \
static inline void FDelegateOnSuccessListBuildAliases_DelegateWrapper(const FScriptDelegate& DelegateOnSuccessListBuildAliases, FMultiplayerListBuildAliasesForTitleResponse Result, UObject* customData) \
{ \
	PlayFabMultiplayerAPI_eventDelegateOnSuccessListBuildAliases_Parms Parms; \
	Parms.Result=Result; \
	Parms.customData=customData; \
	DelegateOnSuccessListBuildAliases.ProcessDelegate<UObject>(&Parms); \
}


#define Test_Plugins_EnginePlugins_PlayFab_Source_PlayFab_Public_PlayFabMultiplayerAPI_h_139_DELEGATE \
struct PlayFabMultiplayerAPI_eventDelegateOnSuccessListBuildSummariesV2_Parms \
{ \
	FMultiplayerListBuildSummariesResponse Result; \
	UObject* customData; \
}; \
static inline void FDelegateOnSuccessListBuildSummariesV2_DelegateWrapper(const FScriptDelegate& DelegateOnSuccessListBuildSummariesV2, FMultiplayerListBuildSummariesResponse Result, UObject* customData) \
{ \
	PlayFabMultiplayerAPI_eventDelegateOnSuccessListBuildSummariesV2_Parms Parms; \
	Parms.Result=Result; \
	Parms.customData=customData; \
	DelegateOnSuccessListBuildSummariesV2.ProcessDelegate<UObject>(&Parms); \
}


#define Test_Plugins_EnginePlugins_PlayFab_Source_PlayFab_Public_PlayFabMultiplayerAPI_h_138_DELEGATE \
struct PlayFabMultiplayerAPI_eventDelegateOnSuccessListCertificateSummaries_Parms \
{ \
	FMultiplayerListCertificateSummariesResponse Result; \
	UObject* customData; \
}; \
static inline void FDelegateOnSuccessListCertificateSummaries_DelegateWrapper(const FScriptDelegate& DelegateOnSuccessListCertificateSummaries, FMultiplayerListCertificateSummariesResponse Result, UObject* customData) \
{ \
	PlayFabMultiplayerAPI_eventDelegateOnSuccessListCertificateSummaries_Parms Parms; \
	Parms.Result=Result; \
	Parms.customData=customData; \
	DelegateOnSuccessListCertificateSummaries.ProcessDelegate<UObject>(&Parms); \
}


#define Test_Plugins_EnginePlugins_PlayFab_Source_PlayFab_Public_PlayFabMultiplayerAPI_h_137_DELEGATE \
struct PlayFabMultiplayerAPI_eventDelegateOnSuccessListContainerImages_Parms \
{ \
	FMultiplayerListContainerImagesResponse Result; \
	UObject* customData; \
}; \
static inline void FDelegateOnSuccessListContainerImages_DelegateWrapper(const FScriptDelegate& DelegateOnSuccessListContainerImages, FMultiplayerListContainerImagesResponse Result, UObject* customData) \
{ \
	PlayFabMultiplayerAPI_eventDelegateOnSuccessListContainerImages_Parms Parms; \
	Parms.Result=Result; \
	Parms.customData=customData; \
	DelegateOnSuccessListContainerImages.ProcessDelegate<UObject>(&Parms); \
}


#define Test_Plugins_EnginePlugins_PlayFab_Source_PlayFab_Public_PlayFabMultiplayerAPI_h_136_DELEGATE \
struct PlayFabMultiplayerAPI_eventDelegateOnSuccessListContainerImageTags_Parms \
{ \
	FMultiplayerListContainerImageTagsResponse Result; \
	UObject* customData; \
}; \
static inline void FDelegateOnSuccessListContainerImageTags_DelegateWrapper(const FScriptDelegate& DelegateOnSuccessListContainerImageTags, FMultiplayerListContainerImageTagsResponse Result, UObject* customData) \
{ \
	PlayFabMultiplayerAPI_eventDelegateOnSuccessListContainerImageTags_Parms Parms; \
	Parms.Result=Result; \
	Parms.customData=customData; \
	DelegateOnSuccessListContainerImageTags.ProcessDelegate<UObject>(&Parms); \
}


#define Test_Plugins_EnginePlugins_PlayFab_Source_PlayFab_Public_PlayFabMultiplayerAPI_h_135_DELEGATE \
struct PlayFabMultiplayerAPI_eventDelegateOnSuccessListMatchmakingTicketsForPlayer_Parms \
{ \
	FMultiplayerListMatchmakingTicketsForPlayerResult Result; \
	UObject* customData; \
}; \
static inline void FDelegateOnSuccessListMatchmakingTicketsForPlayer_DelegateWrapper(const FScriptDelegate& DelegateOnSuccessListMatchmakingTicketsForPlayer, FMultiplayerListMatchmakingTicketsForPlayerResult Result, UObject* customData) \
{ \
	PlayFabMultiplayerAPI_eventDelegateOnSuccessListMatchmakingTicketsForPlayer_Parms Parms; \
	Parms.Result=Result; \
	Parms.customData=customData; \
	DelegateOnSuccessListMatchmakingTicketsForPlayer.ProcessDelegate<UObject>(&Parms); \
}


#define Test_Plugins_EnginePlugins_PlayFab_Source_PlayFab_Public_PlayFabMultiplayerAPI_h_134_DELEGATE \
struct PlayFabMultiplayerAPI_eventDelegateOnSuccessListMultiplayerServers_Parms \
{ \
	FMultiplayerListMultiplayerServersResponse Result; \
	UObject* customData; \
}; \
static inline void FDelegateOnSuccessListMultiplayerServers_DelegateWrapper(const FScriptDelegate& DelegateOnSuccessListMultiplayerServers, FMultiplayerListMultiplayerServersResponse Result, UObject* customData) \
{ \
	PlayFabMultiplayerAPI_eventDelegateOnSuccessListMultiplayerServers_Parms Parms; \
	Parms.Result=Result; \
	Parms.customData=customData; \
	DelegateOnSuccessListMultiplayerServers.ProcessDelegate<UObject>(&Parms); \
}


#define Test_Plugins_EnginePlugins_PlayFab_Source_PlayFab_Public_PlayFabMultiplayerAPI_h_133_DELEGATE \
struct PlayFabMultiplayerAPI_eventDelegateOnSuccessListPartyQosServers_Parms \
{ \
	FMultiplayerListPartyQosServersResponse Result; \
	UObject* customData; \
}; \
static inline void FDelegateOnSuccessListPartyQosServers_DelegateWrapper(const FScriptDelegate& DelegateOnSuccessListPartyQosServers, FMultiplayerListPartyQosServersResponse Result, UObject* customData) \
{ \
	PlayFabMultiplayerAPI_eventDelegateOnSuccessListPartyQosServers_Parms Parms; \
	Parms.Result=Result; \
	Parms.customData=customData; \
	DelegateOnSuccessListPartyQosServers.ProcessDelegate<UObject>(&Parms); \
}


#define Test_Plugins_EnginePlugins_PlayFab_Source_PlayFab_Public_PlayFabMultiplayerAPI_h_132_DELEGATE \
struct PlayFabMultiplayerAPI_eventDelegateOnSuccessListQosServersForTitle_Parms \
{ \
	FMultiplayerListQosServersForTitleResponse Result; \
	UObject* customData; \
}; \
static inline void FDelegateOnSuccessListQosServersForTitle_DelegateWrapper(const FScriptDelegate& DelegateOnSuccessListQosServersForTitle, FMultiplayerListQosServersForTitleResponse Result, UObject* customData) \
{ \
	PlayFabMultiplayerAPI_eventDelegateOnSuccessListQosServersForTitle_Parms Parms; \
	Parms.Result=Result; \
	Parms.customData=customData; \
	DelegateOnSuccessListQosServersForTitle.ProcessDelegate<UObject>(&Parms); \
}


#define Test_Plugins_EnginePlugins_PlayFab_Source_PlayFab_Public_PlayFabMultiplayerAPI_h_131_DELEGATE \
struct PlayFabMultiplayerAPI_eventDelegateOnSuccessListServerBackfillTicketsForPlayer_Parms \
{ \
	FMultiplayerListServerBackfillTicketsForPlayerResult Result; \
	UObject* customData; \
}; \
static inline void FDelegateOnSuccessListServerBackfillTicketsForPlayer_DelegateWrapper(const FScriptDelegate& DelegateOnSuccessListServerBackfillTicketsForPlayer, FMultiplayerListServerBackfillTicketsForPlayerResult Result, UObject* customData) \
{ \
	PlayFabMultiplayerAPI_eventDelegateOnSuccessListServerBackfillTicketsForPlayer_Parms Parms; \
	Parms.Result=Result; \
	Parms.customData=customData; \
	DelegateOnSuccessListServerBackfillTicketsForPlayer.ProcessDelegate<UObject>(&Parms); \
}


#define Test_Plugins_EnginePlugins_PlayFab_Source_PlayFab_Public_PlayFabMultiplayerAPI_h_130_DELEGATE \
struct PlayFabMultiplayerAPI_eventDelegateOnSuccessListTitleMultiplayerServersQuotaChanges_Parms \
{ \
	FMultiplayerListTitleMultiplayerServersQuotaChangesResponse Result; \
	UObject* customData; \
}; \
static inline void FDelegateOnSuccessListTitleMultiplayerServersQuotaChanges_DelegateWrapper(const FScriptDelegate& DelegateOnSuccessListTitleMultiplayerServersQuotaChanges, FMultiplayerListTitleMultiplayerServersQuotaChangesResponse Result, UObject* customData) \
{ \
	PlayFabMultiplayerAPI_eventDelegateOnSuccessListTitleMultiplayerServersQuotaChanges_Parms Parms; \
	Parms.Result=Result; \
	Parms.customData=customData; \
	DelegateOnSuccessListTitleMultiplayerServersQuotaChanges.ProcessDelegate<UObject>(&Parms); \
}


#define Test_Plugins_EnginePlugins_PlayFab_Source_PlayFab_Public_PlayFabMultiplayerAPI_h_129_DELEGATE \
struct PlayFabMultiplayerAPI_eventDelegateOnSuccessListVirtualMachineSummaries_Parms \
{ \
	FMultiplayerListVirtualMachineSummariesResponse Result; \
	UObject* customData; \
}; \
static inline void FDelegateOnSuccessListVirtualMachineSummaries_DelegateWrapper(const FScriptDelegate& DelegateOnSuccessListVirtualMachineSummaries, FMultiplayerListVirtualMachineSummariesResponse Result, UObject* customData) \
{ \
	PlayFabMultiplayerAPI_eventDelegateOnSuccessListVirtualMachineSummaries_Parms Parms; \
	Parms.Result=Result; \
	Parms.customData=customData; \
	DelegateOnSuccessListVirtualMachineSummaries.ProcessDelegate<UObject>(&Parms); \
}


#define Test_Plugins_EnginePlugins_PlayFab_Source_PlayFab_Public_PlayFabMultiplayerAPI_h_128_DELEGATE \
struct PlayFabMultiplayerAPI_eventDelegateOnSuccessRequestMultiplayerServer_Parms \
{ \
	FMultiplayerRequestMultiplayerServerResponse Result; \
	UObject* customData; \
}; \
static inline void FDelegateOnSuccessRequestMultiplayerServer_DelegateWrapper(const FScriptDelegate& DelegateOnSuccessRequestMultiplayerServer, FMultiplayerRequestMultiplayerServerResponse Result, UObject* customData) \
{ \
	PlayFabMultiplayerAPI_eventDelegateOnSuccessRequestMultiplayerServer_Parms Parms; \
	Parms.Result=Result; \
	Parms.customData=customData; \
	DelegateOnSuccessRequestMultiplayerServer.ProcessDelegate<UObject>(&Parms); \
}


#define Test_Plugins_EnginePlugins_PlayFab_Source_PlayFab_Public_PlayFabMultiplayerAPI_h_127_DELEGATE \
struct PlayFabMultiplayerAPI_eventDelegateOnSuccessRolloverContainerRegistryCredentials_Parms \
{ \
	FMultiplayerRolloverContainerRegistryCredentialsResponse Result; \
	UObject* customData; \
}; \
static inline void FDelegateOnSuccessRolloverContainerRegistryCredentials_DelegateWrapper(const FScriptDelegate& DelegateOnSuccessRolloverContainerRegistryCredentials, FMultiplayerRolloverContainerRegistryCredentialsResponse Result, UObject* customData) \
{ \
	PlayFabMultiplayerAPI_eventDelegateOnSuccessRolloverContainerRegistryCredentials_Parms Parms; \
	Parms.Result=Result; \
	Parms.customData=customData; \
	DelegateOnSuccessRolloverContainerRegistryCredentials.ProcessDelegate<UObject>(&Parms); \
}


#define Test_Plugins_EnginePlugins_PlayFab_Source_PlayFab_Public_PlayFabMultiplayerAPI_h_126_DELEGATE \
struct PlayFabMultiplayerAPI_eventDelegateOnSuccessShutdownMultiplayerServer_Parms \
{ \
	FMultiplayerEmptyResponse Result; \
	UObject* customData; \
}; \
static inline void FDelegateOnSuccessShutdownMultiplayerServer_DelegateWrapper(const FScriptDelegate& DelegateOnSuccessShutdownMultiplayerServer, FMultiplayerEmptyResponse Result, UObject* customData) \
{ \
	PlayFabMultiplayerAPI_eventDelegateOnSuccessShutdownMultiplayerServer_Parms Parms; \
	Parms.Result=Result; \
	Parms.customData=customData; \
	DelegateOnSuccessShutdownMultiplayerServer.ProcessDelegate<UObject>(&Parms); \
}


#define Test_Plugins_EnginePlugins_PlayFab_Source_PlayFab_Public_PlayFabMultiplayerAPI_h_125_DELEGATE \
struct PlayFabMultiplayerAPI_eventDelegateOnSuccessUntagContainerImage_Parms \
{ \
	FMultiplayerEmptyResponse Result; \
	UObject* customData; \
}; \
static inline void FDelegateOnSuccessUntagContainerImage_DelegateWrapper(const FScriptDelegate& DelegateOnSuccessUntagContainerImage, FMultiplayerEmptyResponse Result, UObject* customData) \
{ \
	PlayFabMultiplayerAPI_eventDelegateOnSuccessUntagContainerImage_Parms Parms; \
	Parms.Result=Result; \
	Parms.customData=customData; \
	DelegateOnSuccessUntagContainerImage.ProcessDelegate<UObject>(&Parms); \
}


#define Test_Plugins_EnginePlugins_PlayFab_Source_PlayFab_Public_PlayFabMultiplayerAPI_h_124_DELEGATE \
struct PlayFabMultiplayerAPI_eventDelegateOnSuccessUpdateBuildAlias_Parms \
{ \
	FMultiplayerBuildAliasDetailsResponse Result; \
	UObject* customData; \
}; \
static inline void FDelegateOnSuccessUpdateBuildAlias_DelegateWrapper(const FScriptDelegate& DelegateOnSuccessUpdateBuildAlias, FMultiplayerBuildAliasDetailsResponse Result, UObject* customData) \
{ \
	PlayFabMultiplayerAPI_eventDelegateOnSuccessUpdateBuildAlias_Parms Parms; \
	Parms.Result=Result; \
	Parms.customData=customData; \
	DelegateOnSuccessUpdateBuildAlias.ProcessDelegate<UObject>(&Parms); \
}


#define Test_Plugins_EnginePlugins_PlayFab_Source_PlayFab_Public_PlayFabMultiplayerAPI_h_123_DELEGATE \
struct PlayFabMultiplayerAPI_eventDelegateOnSuccessUpdateBuildName_Parms \
{ \
	FMultiplayerEmptyResponse Result; \
	UObject* customData; \
}; \
static inline void FDelegateOnSuccessUpdateBuildName_DelegateWrapper(const FScriptDelegate& DelegateOnSuccessUpdateBuildName, FMultiplayerEmptyResponse Result, UObject* customData) \
{ \
	PlayFabMultiplayerAPI_eventDelegateOnSuccessUpdateBuildName_Parms Parms; \
	Parms.Result=Result; \
	Parms.customData=customData; \
	DelegateOnSuccessUpdateBuildName.ProcessDelegate<UObject>(&Parms); \
}


#define Test_Plugins_EnginePlugins_PlayFab_Source_PlayFab_Public_PlayFabMultiplayerAPI_h_122_DELEGATE \
struct PlayFabMultiplayerAPI_eventDelegateOnSuccessUpdateBuildRegion_Parms \
{ \
	FMultiplayerEmptyResponse Result; \
	UObject* customData; \
}; \
static inline void FDelegateOnSuccessUpdateBuildRegion_DelegateWrapper(const FScriptDelegate& DelegateOnSuccessUpdateBuildRegion, FMultiplayerEmptyResponse Result, UObject* customData) \
{ \
	PlayFabMultiplayerAPI_eventDelegateOnSuccessUpdateBuildRegion_Parms Parms; \
	Parms.Result=Result; \
	Parms.customData=customData; \
	DelegateOnSuccessUpdateBuildRegion.ProcessDelegate<UObject>(&Parms); \
}


#define Test_Plugins_EnginePlugins_PlayFab_Source_PlayFab_Public_PlayFabMultiplayerAPI_h_121_DELEGATE \
struct PlayFabMultiplayerAPI_eventDelegateOnSuccessUpdateBuildRegions_Parms \
{ \
	FMultiplayerEmptyResponse Result; \
	UObject* customData; \
}; \
static inline void FDelegateOnSuccessUpdateBuildRegions_DelegateWrapper(const FScriptDelegate& DelegateOnSuccessUpdateBuildRegions, FMultiplayerEmptyResponse Result, UObject* customData) \
{ \
	PlayFabMultiplayerAPI_eventDelegateOnSuccessUpdateBuildRegions_Parms Parms; \
	Parms.Result=Result; \
	Parms.customData=customData; \
	DelegateOnSuccessUpdateBuildRegions.ProcessDelegate<UObject>(&Parms); \
}


#define Test_Plugins_EnginePlugins_PlayFab_Source_PlayFab_Public_PlayFabMultiplayerAPI_h_120_DELEGATE \
struct PlayFabMultiplayerAPI_eventDelegateOnSuccessUploadCertificate_Parms \
{ \
	FMultiplayerEmptyResponse Result; \
	UObject* customData; \
}; \
static inline void FDelegateOnSuccessUploadCertificate_DelegateWrapper(const FScriptDelegate& DelegateOnSuccessUploadCertificate, FMultiplayerEmptyResponse Result, UObject* customData) \
{ \
	PlayFabMultiplayerAPI_eventDelegateOnSuccessUploadCertificate_Parms Parms; \
	Parms.Result=Result; \
	Parms.customData=customData; \
	DelegateOnSuccessUploadCertificate.ProcessDelegate<UObject>(&Parms); \
}


#define Test_Plugins_EnginePlugins_PlayFab_Source_PlayFab_Public_PlayFabMultiplayerAPI_h_118_SPARSE_DATA
#define Test_Plugins_EnginePlugins_PlayFab_Source_PlayFab_Public_PlayFabMultiplayerAPI_h_118_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execCancelAllMatchmakingTicketsForPlayer); \
	DECLARE_FUNCTION(execCancelAllServerBackfillTicketsForPlayer); \
	DECLARE_FUNCTION(execCancelMatchmakingTicket); \
	DECLARE_FUNCTION(execCancelServerBackfillTicket); \
	DECLARE_FUNCTION(execCreateBuildAlias); \
	DECLARE_FUNCTION(execCreateBuildWithCustomContainer); \
	DECLARE_FUNCTION(execCreateBuildWithManagedContainer); \
	DECLARE_FUNCTION(execCreateBuildWithProcessBasedServer); \
	DECLARE_FUNCTION(execCreateMatchmakingTicket); \
	DECLARE_FUNCTION(execCreateRemoteUser); \
	DECLARE_FUNCTION(execCreateServerBackfillTicket); \
	DECLARE_FUNCTION(execCreateServerMatchmakingTicket); \
	DECLARE_FUNCTION(execCreateTitleMultiplayerServersQuotaChange); \
	DECLARE_FUNCTION(execDeleteAsset); \
	DECLARE_FUNCTION(execDeleteBuild); \
	DECLARE_FUNCTION(execDeleteBuildAlias); \
	DECLARE_FUNCTION(execDeleteBuildRegion); \
	DECLARE_FUNCTION(execDeleteCertificate); \
	DECLARE_FUNCTION(execDeleteContainerImageRepository); \
	DECLARE_FUNCTION(execDeleteRemoteUser); \
	DECLARE_FUNCTION(execEnableMultiplayerServersForTitle); \
	DECLARE_FUNCTION(execGetAssetUploadUrl); \
	DECLARE_FUNCTION(execGetBuild); \
	DECLARE_FUNCTION(execGetBuildAlias); \
	DECLARE_FUNCTION(execGetContainerRegistryCredentials); \
	DECLARE_FUNCTION(execGetMatch); \
	DECLARE_FUNCTION(execGetMatchmakingTicket); \
	DECLARE_FUNCTION(execGetMultiplayerServerDetails); \
	DECLARE_FUNCTION(execGetMultiplayerServerLogs); \
	DECLARE_FUNCTION(execGetMultiplayerSessionLogsBySessionId); \
	DECLARE_FUNCTION(execGetQueueStatistics); \
	DECLARE_FUNCTION(execGetRemoteLoginEndpoint); \
	DECLARE_FUNCTION(execGetServerBackfillTicket); \
	DECLARE_FUNCTION(execGetTitleEnabledForMultiplayerServersStatus); \
	DECLARE_FUNCTION(execGetTitleMultiplayerServersQuotaChange); \
	DECLARE_FUNCTION(execGetTitleMultiplayerServersQuotas); \
	DECLARE_FUNCTION(execHelperCancelAllMatchmakingTicketsForPlayer); \
	DECLARE_FUNCTION(execHelperCancelAllServerBackfillTicketsForPlayer); \
	DECLARE_FUNCTION(execHelperCancelMatchmakingTicket); \
	DECLARE_FUNCTION(execHelperCancelServerBackfillTicket); \
	DECLARE_FUNCTION(execHelperCreateBuildAlias); \
	DECLARE_FUNCTION(execHelperCreateBuildWithCustomContainer); \
	DECLARE_FUNCTION(execHelperCreateBuildWithManagedContainer); \
	DECLARE_FUNCTION(execHelperCreateBuildWithProcessBasedServer); \
	DECLARE_FUNCTION(execHelperCreateMatchmakingTicket); \
	DECLARE_FUNCTION(execHelperCreateRemoteUser); \
	DECLARE_FUNCTION(execHelperCreateServerBackfillTicket); \
	DECLARE_FUNCTION(execHelperCreateServerMatchmakingTicket); \
	DECLARE_FUNCTION(execHelperCreateTitleMultiplayerServersQuotaChange); \
	DECLARE_FUNCTION(execHelperDeleteAsset); \
	DECLARE_FUNCTION(execHelperDeleteBuild); \
	DECLARE_FUNCTION(execHelperDeleteBuildAlias); \
	DECLARE_FUNCTION(execHelperDeleteBuildRegion); \
	DECLARE_FUNCTION(execHelperDeleteCertificate); \
	DECLARE_FUNCTION(execHelperDeleteContainerImageRepository); \
	DECLARE_FUNCTION(execHelperDeleteRemoteUser); \
	DECLARE_FUNCTION(execHelperEnableMultiplayerServersForTitle); \
	DECLARE_FUNCTION(execHelperGetAssetUploadUrl); \
	DECLARE_FUNCTION(execHelperGetBuild); \
	DECLARE_FUNCTION(execHelperGetBuildAlias); \
	DECLARE_FUNCTION(execHelperGetContainerRegistryCredentials); \
	DECLARE_FUNCTION(execHelperGetMatch); \
	DECLARE_FUNCTION(execHelperGetMatchmakingTicket); \
	DECLARE_FUNCTION(execHelperGetMultiplayerServerDetails); \
	DECLARE_FUNCTION(execHelperGetMultiplayerServerLogs); \
	DECLARE_FUNCTION(execHelperGetMultiplayerSessionLogsBySessionId); \
	DECLARE_FUNCTION(execHelperGetQueueStatistics); \
	DECLARE_FUNCTION(execHelperGetRemoteLoginEndpoint); \
	DECLARE_FUNCTION(execHelperGetServerBackfillTicket); \
	DECLARE_FUNCTION(execHelperGetTitleEnabledForMultiplayerServersStatus); \
	DECLARE_FUNCTION(execHelperGetTitleMultiplayerServersQuotaChange); \
	DECLARE_FUNCTION(execHelperGetTitleMultiplayerServersQuotas); \
	DECLARE_FUNCTION(execHelperJoinMatchmakingTicket); \
	DECLARE_FUNCTION(execHelperListArchivedMultiplayerServers); \
	DECLARE_FUNCTION(execHelperListAssetSummaries); \
	DECLARE_FUNCTION(execHelperListBuildAliases); \
	DECLARE_FUNCTION(execHelperListBuildSummariesV2); \
	DECLARE_FUNCTION(execHelperListCertificateSummaries); \
	DECLARE_FUNCTION(execHelperListContainerImages); \
	DECLARE_FUNCTION(execHelperListContainerImageTags); \
	DECLARE_FUNCTION(execHelperListMatchmakingTicketsForPlayer); \
	DECLARE_FUNCTION(execHelperListMultiplayerServers); \
	DECLARE_FUNCTION(execHelperListPartyQosServers); \
	DECLARE_FUNCTION(execHelperListQosServersForTitle); \
	DECLARE_FUNCTION(execHelperListServerBackfillTicketsForPlayer); \
	DECLARE_FUNCTION(execHelperListTitleMultiplayerServersQuotaChanges); \
	DECLARE_FUNCTION(execHelperListVirtualMachineSummaries); \
	DECLARE_FUNCTION(execHelperRequestMultiplayerServer); \
	DECLARE_FUNCTION(execHelperRolloverContainerRegistryCredentials); \
	DECLARE_FUNCTION(execHelperShutdownMultiplayerServer); \
	DECLARE_FUNCTION(execHelperUntagContainerImage); \
	DECLARE_FUNCTION(execHelperUpdateBuildAlias); \
	DECLARE_FUNCTION(execHelperUpdateBuildName); \
	DECLARE_FUNCTION(execHelperUpdateBuildRegion); \
	DECLARE_FUNCTION(execHelperUpdateBuildRegions); \
	DECLARE_FUNCTION(execHelperUploadCertificate); \
	DECLARE_FUNCTION(execJoinMatchmakingTicket); \
	DECLARE_FUNCTION(execListArchivedMultiplayerServers); \
	DECLARE_FUNCTION(execListAssetSummaries); \
	DECLARE_FUNCTION(execListBuildAliases); \
	DECLARE_FUNCTION(execListBuildSummariesV2); \
	DECLARE_FUNCTION(execListCertificateSummaries); \
	DECLARE_FUNCTION(execListContainerImages); \
	DECLARE_FUNCTION(execListContainerImageTags); \
	DECLARE_FUNCTION(execListMatchmakingTicketsForPlayer); \
	DECLARE_FUNCTION(execListMultiplayerServers); \
	DECLARE_FUNCTION(execListPartyQosServers); \
	DECLARE_FUNCTION(execListQosServersForTitle); \
	DECLARE_FUNCTION(execListServerBackfillTicketsForPlayer); \
	DECLARE_FUNCTION(execListTitleMultiplayerServersQuotaChanges); \
	DECLARE_FUNCTION(execListVirtualMachineSummaries); \
	DECLARE_FUNCTION(execRequestMultiplayerServer); \
	DECLARE_FUNCTION(execRolloverContainerRegistryCredentials); \
	DECLARE_FUNCTION(execShutdownMultiplayerServer); \
	DECLARE_FUNCTION(execUntagContainerImage); \
	DECLARE_FUNCTION(execUpdateBuildAlias); \
	DECLARE_FUNCTION(execUpdateBuildName); \
	DECLARE_FUNCTION(execUpdateBuildRegion); \
	DECLARE_FUNCTION(execUpdateBuildRegions); \
	DECLARE_FUNCTION(execUploadCertificate);


#define Test_Plugins_EnginePlugins_PlayFab_Source_PlayFab_Public_PlayFabMultiplayerAPI_h_118_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execCancelAllMatchmakingTicketsForPlayer); \
	DECLARE_FUNCTION(execCancelAllServerBackfillTicketsForPlayer); \
	DECLARE_FUNCTION(execCancelMatchmakingTicket); \
	DECLARE_FUNCTION(execCancelServerBackfillTicket); \
	DECLARE_FUNCTION(execCreateBuildAlias); \
	DECLARE_FUNCTION(execCreateBuildWithCustomContainer); \
	DECLARE_FUNCTION(execCreateBuildWithManagedContainer); \
	DECLARE_FUNCTION(execCreateBuildWithProcessBasedServer); \
	DECLARE_FUNCTION(execCreateMatchmakingTicket); \
	DECLARE_FUNCTION(execCreateRemoteUser); \
	DECLARE_FUNCTION(execCreateServerBackfillTicket); \
	DECLARE_FUNCTION(execCreateServerMatchmakingTicket); \
	DECLARE_FUNCTION(execCreateTitleMultiplayerServersQuotaChange); \
	DECLARE_FUNCTION(execDeleteAsset); \
	DECLARE_FUNCTION(execDeleteBuild); \
	DECLARE_FUNCTION(execDeleteBuildAlias); \
	DECLARE_FUNCTION(execDeleteBuildRegion); \
	DECLARE_FUNCTION(execDeleteCertificate); \
	DECLARE_FUNCTION(execDeleteContainerImageRepository); \
	DECLARE_FUNCTION(execDeleteRemoteUser); \
	DECLARE_FUNCTION(execEnableMultiplayerServersForTitle); \
	DECLARE_FUNCTION(execGetAssetUploadUrl); \
	DECLARE_FUNCTION(execGetBuild); \
	DECLARE_FUNCTION(execGetBuildAlias); \
	DECLARE_FUNCTION(execGetContainerRegistryCredentials); \
	DECLARE_FUNCTION(execGetMatch); \
	DECLARE_FUNCTION(execGetMatchmakingTicket); \
	DECLARE_FUNCTION(execGetMultiplayerServerDetails); \
	DECLARE_FUNCTION(execGetMultiplayerServerLogs); \
	DECLARE_FUNCTION(execGetMultiplayerSessionLogsBySessionId); \
	DECLARE_FUNCTION(execGetQueueStatistics); \
	DECLARE_FUNCTION(execGetRemoteLoginEndpoint); \
	DECLARE_FUNCTION(execGetServerBackfillTicket); \
	DECLARE_FUNCTION(execGetTitleEnabledForMultiplayerServersStatus); \
	DECLARE_FUNCTION(execGetTitleMultiplayerServersQuotaChange); \
	DECLARE_FUNCTION(execGetTitleMultiplayerServersQuotas); \
	DECLARE_FUNCTION(execHelperCancelAllMatchmakingTicketsForPlayer); \
	DECLARE_FUNCTION(execHelperCancelAllServerBackfillTicketsForPlayer); \
	DECLARE_FUNCTION(execHelperCancelMatchmakingTicket); \
	DECLARE_FUNCTION(execHelperCancelServerBackfillTicket); \
	DECLARE_FUNCTION(execHelperCreateBuildAlias); \
	DECLARE_FUNCTION(execHelperCreateBuildWithCustomContainer); \
	DECLARE_FUNCTION(execHelperCreateBuildWithManagedContainer); \
	DECLARE_FUNCTION(execHelperCreateBuildWithProcessBasedServer); \
	DECLARE_FUNCTION(execHelperCreateMatchmakingTicket); \
	DECLARE_FUNCTION(execHelperCreateRemoteUser); \
	DECLARE_FUNCTION(execHelperCreateServerBackfillTicket); \
	DECLARE_FUNCTION(execHelperCreateServerMatchmakingTicket); \
	DECLARE_FUNCTION(execHelperCreateTitleMultiplayerServersQuotaChange); \
	DECLARE_FUNCTION(execHelperDeleteAsset); \
	DECLARE_FUNCTION(execHelperDeleteBuild); \
	DECLARE_FUNCTION(execHelperDeleteBuildAlias); \
	DECLARE_FUNCTION(execHelperDeleteBuildRegion); \
	DECLARE_FUNCTION(execHelperDeleteCertificate); \
	DECLARE_FUNCTION(execHelperDeleteContainerImageRepository); \
	DECLARE_FUNCTION(execHelperDeleteRemoteUser); \
	DECLARE_FUNCTION(execHelperEnableMultiplayerServersForTitle); \
	DECLARE_FUNCTION(execHelperGetAssetUploadUrl); \
	DECLARE_FUNCTION(execHelperGetBuild); \
	DECLARE_FUNCTION(execHelperGetBuildAlias); \
	DECLARE_FUNCTION(execHelperGetContainerRegistryCredentials); \
	DECLARE_FUNCTION(execHelperGetMatch); \
	DECLARE_FUNCTION(execHelperGetMatchmakingTicket); \
	DECLARE_FUNCTION(execHelperGetMultiplayerServerDetails); \
	DECLARE_FUNCTION(execHelperGetMultiplayerServerLogs); \
	DECLARE_FUNCTION(execHelperGetMultiplayerSessionLogsBySessionId); \
	DECLARE_FUNCTION(execHelperGetQueueStatistics); \
	DECLARE_FUNCTION(execHelperGetRemoteLoginEndpoint); \
	DECLARE_FUNCTION(execHelperGetServerBackfillTicket); \
	DECLARE_FUNCTION(execHelperGetTitleEnabledForMultiplayerServersStatus); \
	DECLARE_FUNCTION(execHelperGetTitleMultiplayerServersQuotaChange); \
	DECLARE_FUNCTION(execHelperGetTitleMultiplayerServersQuotas); \
	DECLARE_FUNCTION(execHelperJoinMatchmakingTicket); \
	DECLARE_FUNCTION(execHelperListArchivedMultiplayerServers); \
	DECLARE_FUNCTION(execHelperListAssetSummaries); \
	DECLARE_FUNCTION(execHelperListBuildAliases); \
	DECLARE_FUNCTION(execHelperListBuildSummariesV2); \
	DECLARE_FUNCTION(execHelperListCertificateSummaries); \
	DECLARE_FUNCTION(execHelperListContainerImages); \
	DECLARE_FUNCTION(execHelperListContainerImageTags); \
	DECLARE_FUNCTION(execHelperListMatchmakingTicketsForPlayer); \
	DECLARE_FUNCTION(execHelperListMultiplayerServers); \
	DECLARE_FUNCTION(execHelperListPartyQosServers); \
	DECLARE_FUNCTION(execHelperListQosServersForTitle); \
	DECLARE_FUNCTION(execHelperListServerBackfillTicketsForPlayer); \
	DECLARE_FUNCTION(execHelperListTitleMultiplayerServersQuotaChanges); \
	DECLARE_FUNCTION(execHelperListVirtualMachineSummaries); \
	DECLARE_FUNCTION(execHelperRequestMultiplayerServer); \
	DECLARE_FUNCTION(execHelperRolloverContainerRegistryCredentials); \
	DECLARE_FUNCTION(execHelperShutdownMultiplayerServer); \
	DECLARE_FUNCTION(execHelperUntagContainerImage); \
	DECLARE_FUNCTION(execHelperUpdateBuildAlias); \
	DECLARE_FUNCTION(execHelperUpdateBuildName); \
	DECLARE_FUNCTION(execHelperUpdateBuildRegion); \
	DECLARE_FUNCTION(execHelperUpdateBuildRegions); \
	DECLARE_FUNCTION(execHelperUploadCertificate); \
	DECLARE_FUNCTION(execJoinMatchmakingTicket); \
	DECLARE_FUNCTION(execListArchivedMultiplayerServers); \
	DECLARE_FUNCTION(execListAssetSummaries); \
	DECLARE_FUNCTION(execListBuildAliases); \
	DECLARE_FUNCTION(execListBuildSummariesV2); \
	DECLARE_FUNCTION(execListCertificateSummaries); \
	DECLARE_FUNCTION(execListContainerImages); \
	DECLARE_FUNCTION(execListContainerImageTags); \
	DECLARE_FUNCTION(execListMatchmakingTicketsForPlayer); \
	DECLARE_FUNCTION(execListMultiplayerServers); \
	DECLARE_FUNCTION(execListPartyQosServers); \
	DECLARE_FUNCTION(execListQosServersForTitle); \
	DECLARE_FUNCTION(execListServerBackfillTicketsForPlayer); \
	DECLARE_FUNCTION(execListTitleMultiplayerServersQuotaChanges); \
	DECLARE_FUNCTION(execListVirtualMachineSummaries); \
	DECLARE_FUNCTION(execRequestMultiplayerServer); \
	DECLARE_FUNCTION(execRolloverContainerRegistryCredentials); \
	DECLARE_FUNCTION(execShutdownMultiplayerServer); \
	DECLARE_FUNCTION(execUntagContainerImage); \
	DECLARE_FUNCTION(execUpdateBuildAlias); \
	DECLARE_FUNCTION(execUpdateBuildName); \
	DECLARE_FUNCTION(execUpdateBuildRegion); \
	DECLARE_FUNCTION(execUpdateBuildRegions); \
	DECLARE_FUNCTION(execUploadCertificate);


#define Test_Plugins_EnginePlugins_PlayFab_Source_PlayFab_Public_PlayFabMultiplayerAPI_h_118_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPlayFabMultiplayerAPI(); \
	friend struct Z_Construct_UClass_UPlayFabMultiplayerAPI_Statics; \
public: \
	DECLARE_CLASS(UPlayFabMultiplayerAPI, UOnlineBlueprintCallProxyBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/PlayFab"), NO_API) \
	DECLARE_SERIALIZER(UPlayFabMultiplayerAPI)


#define Test_Plugins_EnginePlugins_PlayFab_Source_PlayFab_Public_PlayFabMultiplayerAPI_h_118_INCLASS \
private: \
	static void StaticRegisterNativesUPlayFabMultiplayerAPI(); \
	friend struct Z_Construct_UClass_UPlayFabMultiplayerAPI_Statics; \
public: \
	DECLARE_CLASS(UPlayFabMultiplayerAPI, UOnlineBlueprintCallProxyBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/PlayFab"), NO_API) \
	DECLARE_SERIALIZER(UPlayFabMultiplayerAPI)


#define Test_Plugins_EnginePlugins_PlayFab_Source_PlayFab_Public_PlayFabMultiplayerAPI_h_118_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UPlayFabMultiplayerAPI(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPlayFabMultiplayerAPI) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPlayFabMultiplayerAPI); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPlayFabMultiplayerAPI); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UPlayFabMultiplayerAPI(UPlayFabMultiplayerAPI&&); \
	NO_API UPlayFabMultiplayerAPI(const UPlayFabMultiplayerAPI&); \
public:


#define Test_Plugins_EnginePlugins_PlayFab_Source_PlayFab_Public_PlayFabMultiplayerAPI_h_118_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UPlayFabMultiplayerAPI(UPlayFabMultiplayerAPI&&); \
	NO_API UPlayFabMultiplayerAPI(const UPlayFabMultiplayerAPI&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPlayFabMultiplayerAPI); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPlayFabMultiplayerAPI); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UPlayFabMultiplayerAPI)


#define Test_Plugins_EnginePlugins_PlayFab_Source_PlayFab_Public_PlayFabMultiplayerAPI_h_118_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__CallAuthenticationContext() { return STRUCT_OFFSET(UPlayFabMultiplayerAPI, CallAuthenticationContext); } \
	FORCEINLINE static uint32 __PPO__RequestJsonObj() { return STRUCT_OFFSET(UPlayFabMultiplayerAPI, RequestJsonObj); } \
	FORCEINLINE static uint32 __PPO__ResponseJsonObj() { return STRUCT_OFFSET(UPlayFabMultiplayerAPI, ResponseJsonObj); }


#define Test_Plugins_EnginePlugins_PlayFab_Source_PlayFab_Public_PlayFabMultiplayerAPI_h_116_PROLOG
#define Test_Plugins_EnginePlugins_PlayFab_Source_PlayFab_Public_PlayFabMultiplayerAPI_h_118_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Test_Plugins_EnginePlugins_PlayFab_Source_PlayFab_Public_PlayFabMultiplayerAPI_h_118_PRIVATE_PROPERTY_OFFSET \
	Test_Plugins_EnginePlugins_PlayFab_Source_PlayFab_Public_PlayFabMultiplayerAPI_h_118_SPARSE_DATA \
	Test_Plugins_EnginePlugins_PlayFab_Source_PlayFab_Public_PlayFabMultiplayerAPI_h_118_RPC_WRAPPERS \
	Test_Plugins_EnginePlugins_PlayFab_Source_PlayFab_Public_PlayFabMultiplayerAPI_h_118_INCLASS \
	Test_Plugins_EnginePlugins_PlayFab_Source_PlayFab_Public_PlayFabMultiplayerAPI_h_118_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Test_Plugins_EnginePlugins_PlayFab_Source_PlayFab_Public_PlayFabMultiplayerAPI_h_118_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Test_Plugins_EnginePlugins_PlayFab_Source_PlayFab_Public_PlayFabMultiplayerAPI_h_118_PRIVATE_PROPERTY_OFFSET \
	Test_Plugins_EnginePlugins_PlayFab_Source_PlayFab_Public_PlayFabMultiplayerAPI_h_118_SPARSE_DATA \
	Test_Plugins_EnginePlugins_PlayFab_Source_PlayFab_Public_PlayFabMultiplayerAPI_h_118_RPC_WRAPPERS_NO_PURE_DECLS \
	Test_Plugins_EnginePlugins_PlayFab_Source_PlayFab_Public_PlayFabMultiplayerAPI_h_118_INCLASS_NO_PURE_DECLS \
	Test_Plugins_EnginePlugins_PlayFab_Source_PlayFab_Public_PlayFabMultiplayerAPI_h_118_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> PLAYFAB_API UClass* StaticClass<class UPlayFabMultiplayerAPI>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Test_Plugins_EnginePlugins_PlayFab_Source_PlayFab_Public_PlayFabMultiplayerAPI_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
