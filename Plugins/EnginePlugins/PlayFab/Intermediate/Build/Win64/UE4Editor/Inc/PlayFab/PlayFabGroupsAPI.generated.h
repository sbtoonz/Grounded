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
struct FGroupsEmptyResponse;
struct FGroupsApplyToGroupResponse;
struct FGroupsCreateGroupResponse;
struct FGroupsCreateGroupRoleResponse;
struct FGroupsGetGroupResponse;
struct FGroupsInviteToGroupResponse;
struct FGroupsIsMemberResponse;
struct FGroupsListGroupApplicationsResponse;
struct FGroupsListGroupBlocksResponse;
struct FGroupsListGroupInvitationsResponse;
struct FGroupsListGroupMembersResponse;
struct FGroupsListMembershipResponse;
struct FGroupsListMembershipOpportunitiesResponse;
struct FGroupsUpdateGroupResponse;
struct FGroupsUpdateGroupRoleResponse;
struct FGroupsAcceptGroupApplicationRequest;
class UPlayFabGroupsAPI;
struct FGroupsAcceptGroupInvitationRequest;
struct FGroupsAddMembersRequest;
struct FGroupsApplyToGroupRequest;
struct FGroupsBlockEntityRequest;
struct FGroupsChangeMemberRoleRequest;
struct FGroupsCreateGroupRequest;
struct FGroupsCreateGroupRoleRequest;
struct FGroupsDeleteGroupRequest;
struct FGroupsDeleteRoleRequest;
struct FGroupsGetGroupRequest;
struct FPlayFabBaseModel;
struct FGroupsInviteToGroupRequest;
struct FGroupsIsMemberRequest;
struct FGroupsListGroupApplicationsRequest;
struct FGroupsListGroupBlocksRequest;
struct FGroupsListGroupInvitationsRequest;
struct FGroupsListGroupMembersRequest;
struct FGroupsListMembershipRequest;
struct FGroupsListMembershipOpportunitiesRequest;
struct FGroupsRemoveGroupApplicationRequest;
struct FGroupsRemoveGroupInvitationRequest;
struct FGroupsRemoveMembersRequest;
struct FGroupsUnblockEntityRequest;
struct FGroupsUpdateGroupRequest;
struct FGroupsUpdateGroupRoleRequest;
#ifdef PLAYFAB_PlayFabGroupsAPI_generated_h
#error "PlayFabGroupsAPI.generated.h already included, missing '#pragma once' in PlayFabGroupsAPI.h"
#endif
#define PLAYFAB_PlayFabGroupsAPI_generated_h

#define Test_Plugins_EnginePlugins_PlayFab_Source_PlayFab_Public_PlayFabGroupsAPI_h_83_DELEGATE \
struct PlayFabGroupsAPI_eventDelegateOnFailurePlayFabError_Parms \
{ \
	FPlayFabError Error; \
	UObject* customData; \
}; \
static inline void FDelegateOnFailurePlayFabError_DelegateWrapper(const FScriptDelegate& DelegateOnFailurePlayFabError, FPlayFabError Error, UObject* customData) \
{ \
	PlayFabGroupsAPI_eventDelegateOnFailurePlayFabError_Parms Parms; \
	Parms.Error=Error; \
	Parms.customData=customData; \
	DelegateOnFailurePlayFabError.ProcessDelegate<UObject>(&Parms); \
}


#define Test_Plugins_EnginePlugins_PlayFab_Source_PlayFab_Public_PlayFabGroupsAPI_h_82_DELEGATE \
struct PlayFabGroupsAPI_eventDelegateOnSuccessAcceptGroupApplication_Parms \
{ \
	FGroupsEmptyResponse Result; \
	UObject* customData; \
}; \
static inline void FDelegateOnSuccessAcceptGroupApplication_DelegateWrapper(const FScriptDelegate& DelegateOnSuccessAcceptGroupApplication, FGroupsEmptyResponse Result, UObject* customData) \
{ \
	PlayFabGroupsAPI_eventDelegateOnSuccessAcceptGroupApplication_Parms Parms; \
	Parms.Result=Result; \
	Parms.customData=customData; \
	DelegateOnSuccessAcceptGroupApplication.ProcessDelegate<UObject>(&Parms); \
}


#define Test_Plugins_EnginePlugins_PlayFab_Source_PlayFab_Public_PlayFabGroupsAPI_h_81_DELEGATE \
struct PlayFabGroupsAPI_eventDelegateOnSuccessAcceptGroupInvitation_Parms \
{ \
	FGroupsEmptyResponse Result; \
	UObject* customData; \
}; \
static inline void FDelegateOnSuccessAcceptGroupInvitation_DelegateWrapper(const FScriptDelegate& DelegateOnSuccessAcceptGroupInvitation, FGroupsEmptyResponse Result, UObject* customData) \
{ \
	PlayFabGroupsAPI_eventDelegateOnSuccessAcceptGroupInvitation_Parms Parms; \
	Parms.Result=Result; \
	Parms.customData=customData; \
	DelegateOnSuccessAcceptGroupInvitation.ProcessDelegate<UObject>(&Parms); \
}


#define Test_Plugins_EnginePlugins_PlayFab_Source_PlayFab_Public_PlayFabGroupsAPI_h_80_DELEGATE \
struct PlayFabGroupsAPI_eventDelegateOnSuccessAddMembers_Parms \
{ \
	FGroupsEmptyResponse Result; \
	UObject* customData; \
}; \
static inline void FDelegateOnSuccessAddMembers_DelegateWrapper(const FScriptDelegate& DelegateOnSuccessAddMembers, FGroupsEmptyResponse Result, UObject* customData) \
{ \
	PlayFabGroupsAPI_eventDelegateOnSuccessAddMembers_Parms Parms; \
	Parms.Result=Result; \
	Parms.customData=customData; \
	DelegateOnSuccessAddMembers.ProcessDelegate<UObject>(&Parms); \
}


#define Test_Plugins_EnginePlugins_PlayFab_Source_PlayFab_Public_PlayFabGroupsAPI_h_79_DELEGATE \
struct PlayFabGroupsAPI_eventDelegateOnSuccessApplyToGroup_Parms \
{ \
	FGroupsApplyToGroupResponse Result; \
	UObject* customData; \
}; \
static inline void FDelegateOnSuccessApplyToGroup_DelegateWrapper(const FScriptDelegate& DelegateOnSuccessApplyToGroup, FGroupsApplyToGroupResponse Result, UObject* customData) \
{ \
	PlayFabGroupsAPI_eventDelegateOnSuccessApplyToGroup_Parms Parms; \
	Parms.Result=Result; \
	Parms.customData=customData; \
	DelegateOnSuccessApplyToGroup.ProcessDelegate<UObject>(&Parms); \
}


#define Test_Plugins_EnginePlugins_PlayFab_Source_PlayFab_Public_PlayFabGroupsAPI_h_78_DELEGATE \
struct PlayFabGroupsAPI_eventDelegateOnSuccessBlockEntity_Parms \
{ \
	FGroupsEmptyResponse Result; \
	UObject* customData; \
}; \
static inline void FDelegateOnSuccessBlockEntity_DelegateWrapper(const FScriptDelegate& DelegateOnSuccessBlockEntity, FGroupsEmptyResponse Result, UObject* customData) \
{ \
	PlayFabGroupsAPI_eventDelegateOnSuccessBlockEntity_Parms Parms; \
	Parms.Result=Result; \
	Parms.customData=customData; \
	DelegateOnSuccessBlockEntity.ProcessDelegate<UObject>(&Parms); \
}


#define Test_Plugins_EnginePlugins_PlayFab_Source_PlayFab_Public_PlayFabGroupsAPI_h_77_DELEGATE \
struct PlayFabGroupsAPI_eventDelegateOnSuccessChangeMemberRole_Parms \
{ \
	FGroupsEmptyResponse Result; \
	UObject* customData; \
}; \
static inline void FDelegateOnSuccessChangeMemberRole_DelegateWrapper(const FScriptDelegate& DelegateOnSuccessChangeMemberRole, FGroupsEmptyResponse Result, UObject* customData) \
{ \
	PlayFabGroupsAPI_eventDelegateOnSuccessChangeMemberRole_Parms Parms; \
	Parms.Result=Result; \
	Parms.customData=customData; \
	DelegateOnSuccessChangeMemberRole.ProcessDelegate<UObject>(&Parms); \
}


#define Test_Plugins_EnginePlugins_PlayFab_Source_PlayFab_Public_PlayFabGroupsAPI_h_76_DELEGATE \
struct PlayFabGroupsAPI_eventDelegateOnSuccessCreateGroup_Parms \
{ \
	FGroupsCreateGroupResponse Result; \
	UObject* customData; \
}; \
static inline void FDelegateOnSuccessCreateGroup_DelegateWrapper(const FScriptDelegate& DelegateOnSuccessCreateGroup, FGroupsCreateGroupResponse Result, UObject* customData) \
{ \
	PlayFabGroupsAPI_eventDelegateOnSuccessCreateGroup_Parms Parms; \
	Parms.Result=Result; \
	Parms.customData=customData; \
	DelegateOnSuccessCreateGroup.ProcessDelegate<UObject>(&Parms); \
}


#define Test_Plugins_EnginePlugins_PlayFab_Source_PlayFab_Public_PlayFabGroupsAPI_h_75_DELEGATE \
struct PlayFabGroupsAPI_eventDelegateOnSuccessCreateRole_Parms \
{ \
	FGroupsCreateGroupRoleResponse Result; \
	UObject* customData; \
}; \
static inline void FDelegateOnSuccessCreateRole_DelegateWrapper(const FScriptDelegate& DelegateOnSuccessCreateRole, FGroupsCreateGroupRoleResponse Result, UObject* customData) \
{ \
	PlayFabGroupsAPI_eventDelegateOnSuccessCreateRole_Parms Parms; \
	Parms.Result=Result; \
	Parms.customData=customData; \
	DelegateOnSuccessCreateRole.ProcessDelegate<UObject>(&Parms); \
}


#define Test_Plugins_EnginePlugins_PlayFab_Source_PlayFab_Public_PlayFabGroupsAPI_h_74_DELEGATE \
struct PlayFabGroupsAPI_eventDelegateOnSuccessDeleteGroup_Parms \
{ \
	FGroupsEmptyResponse Result; \
	UObject* customData; \
}; \
static inline void FDelegateOnSuccessDeleteGroup_DelegateWrapper(const FScriptDelegate& DelegateOnSuccessDeleteGroup, FGroupsEmptyResponse Result, UObject* customData) \
{ \
	PlayFabGroupsAPI_eventDelegateOnSuccessDeleteGroup_Parms Parms; \
	Parms.Result=Result; \
	Parms.customData=customData; \
	DelegateOnSuccessDeleteGroup.ProcessDelegate<UObject>(&Parms); \
}


#define Test_Plugins_EnginePlugins_PlayFab_Source_PlayFab_Public_PlayFabGroupsAPI_h_73_DELEGATE \
struct PlayFabGroupsAPI_eventDelegateOnSuccessDeleteRole_Parms \
{ \
	FGroupsEmptyResponse Result; \
	UObject* customData; \
}; \
static inline void FDelegateOnSuccessDeleteRole_DelegateWrapper(const FScriptDelegate& DelegateOnSuccessDeleteRole, FGroupsEmptyResponse Result, UObject* customData) \
{ \
	PlayFabGroupsAPI_eventDelegateOnSuccessDeleteRole_Parms Parms; \
	Parms.Result=Result; \
	Parms.customData=customData; \
	DelegateOnSuccessDeleteRole.ProcessDelegate<UObject>(&Parms); \
}


#define Test_Plugins_EnginePlugins_PlayFab_Source_PlayFab_Public_PlayFabGroupsAPI_h_72_DELEGATE \
struct PlayFabGroupsAPI_eventDelegateOnSuccessGetGroup_Parms \
{ \
	FGroupsGetGroupResponse Result; \
	UObject* customData; \
}; \
static inline void FDelegateOnSuccessGetGroup_DelegateWrapper(const FScriptDelegate& DelegateOnSuccessGetGroup, FGroupsGetGroupResponse Result, UObject* customData) \
{ \
	PlayFabGroupsAPI_eventDelegateOnSuccessGetGroup_Parms Parms; \
	Parms.Result=Result; \
	Parms.customData=customData; \
	DelegateOnSuccessGetGroup.ProcessDelegate<UObject>(&Parms); \
}


#define Test_Plugins_EnginePlugins_PlayFab_Source_PlayFab_Public_PlayFabGroupsAPI_h_71_DELEGATE \
struct PlayFabGroupsAPI_eventDelegateOnSuccessInviteToGroup_Parms \
{ \
	FGroupsInviteToGroupResponse Result; \
	UObject* customData; \
}; \
static inline void FDelegateOnSuccessInviteToGroup_DelegateWrapper(const FScriptDelegate& DelegateOnSuccessInviteToGroup, FGroupsInviteToGroupResponse Result, UObject* customData) \
{ \
	PlayFabGroupsAPI_eventDelegateOnSuccessInviteToGroup_Parms Parms; \
	Parms.Result=Result; \
	Parms.customData=customData; \
	DelegateOnSuccessInviteToGroup.ProcessDelegate<UObject>(&Parms); \
}


#define Test_Plugins_EnginePlugins_PlayFab_Source_PlayFab_Public_PlayFabGroupsAPI_h_70_DELEGATE \
struct PlayFabGroupsAPI_eventDelegateOnSuccessIsMember_Parms \
{ \
	FGroupsIsMemberResponse Result; \
	UObject* customData; \
}; \
static inline void FDelegateOnSuccessIsMember_DelegateWrapper(const FScriptDelegate& DelegateOnSuccessIsMember, FGroupsIsMemberResponse Result, UObject* customData) \
{ \
	PlayFabGroupsAPI_eventDelegateOnSuccessIsMember_Parms Parms; \
	Parms.Result=Result; \
	Parms.customData=customData; \
	DelegateOnSuccessIsMember.ProcessDelegate<UObject>(&Parms); \
}


#define Test_Plugins_EnginePlugins_PlayFab_Source_PlayFab_Public_PlayFabGroupsAPI_h_69_DELEGATE \
struct PlayFabGroupsAPI_eventDelegateOnSuccessListGroupApplications_Parms \
{ \
	FGroupsListGroupApplicationsResponse Result; \
	UObject* customData; \
}; \
static inline void FDelegateOnSuccessListGroupApplications_DelegateWrapper(const FScriptDelegate& DelegateOnSuccessListGroupApplications, FGroupsListGroupApplicationsResponse Result, UObject* customData) \
{ \
	PlayFabGroupsAPI_eventDelegateOnSuccessListGroupApplications_Parms Parms; \
	Parms.Result=Result; \
	Parms.customData=customData; \
	DelegateOnSuccessListGroupApplications.ProcessDelegate<UObject>(&Parms); \
}


#define Test_Plugins_EnginePlugins_PlayFab_Source_PlayFab_Public_PlayFabGroupsAPI_h_68_DELEGATE \
struct PlayFabGroupsAPI_eventDelegateOnSuccessListGroupBlocks_Parms \
{ \
	FGroupsListGroupBlocksResponse Result; \
	UObject* customData; \
}; \
static inline void FDelegateOnSuccessListGroupBlocks_DelegateWrapper(const FScriptDelegate& DelegateOnSuccessListGroupBlocks, FGroupsListGroupBlocksResponse Result, UObject* customData) \
{ \
	PlayFabGroupsAPI_eventDelegateOnSuccessListGroupBlocks_Parms Parms; \
	Parms.Result=Result; \
	Parms.customData=customData; \
	DelegateOnSuccessListGroupBlocks.ProcessDelegate<UObject>(&Parms); \
}


#define Test_Plugins_EnginePlugins_PlayFab_Source_PlayFab_Public_PlayFabGroupsAPI_h_67_DELEGATE \
struct PlayFabGroupsAPI_eventDelegateOnSuccessListGroupInvitations_Parms \
{ \
	FGroupsListGroupInvitationsResponse Result; \
	UObject* customData; \
}; \
static inline void FDelegateOnSuccessListGroupInvitations_DelegateWrapper(const FScriptDelegate& DelegateOnSuccessListGroupInvitations, FGroupsListGroupInvitationsResponse Result, UObject* customData) \
{ \
	PlayFabGroupsAPI_eventDelegateOnSuccessListGroupInvitations_Parms Parms; \
	Parms.Result=Result; \
	Parms.customData=customData; \
	DelegateOnSuccessListGroupInvitations.ProcessDelegate<UObject>(&Parms); \
}


#define Test_Plugins_EnginePlugins_PlayFab_Source_PlayFab_Public_PlayFabGroupsAPI_h_66_DELEGATE \
struct PlayFabGroupsAPI_eventDelegateOnSuccessListGroupMembers_Parms \
{ \
	FGroupsListGroupMembersResponse Result; \
	UObject* customData; \
}; \
static inline void FDelegateOnSuccessListGroupMembers_DelegateWrapper(const FScriptDelegate& DelegateOnSuccessListGroupMembers, FGroupsListGroupMembersResponse Result, UObject* customData) \
{ \
	PlayFabGroupsAPI_eventDelegateOnSuccessListGroupMembers_Parms Parms; \
	Parms.Result=Result; \
	Parms.customData=customData; \
	DelegateOnSuccessListGroupMembers.ProcessDelegate<UObject>(&Parms); \
}


#define Test_Plugins_EnginePlugins_PlayFab_Source_PlayFab_Public_PlayFabGroupsAPI_h_65_DELEGATE \
struct PlayFabGroupsAPI_eventDelegateOnSuccessListMembership_Parms \
{ \
	FGroupsListMembershipResponse Result; \
	UObject* customData; \
}; \
static inline void FDelegateOnSuccessListMembership_DelegateWrapper(const FScriptDelegate& DelegateOnSuccessListMembership, FGroupsListMembershipResponse Result, UObject* customData) \
{ \
	PlayFabGroupsAPI_eventDelegateOnSuccessListMembership_Parms Parms; \
	Parms.Result=Result; \
	Parms.customData=customData; \
	DelegateOnSuccessListMembership.ProcessDelegate<UObject>(&Parms); \
}


#define Test_Plugins_EnginePlugins_PlayFab_Source_PlayFab_Public_PlayFabGroupsAPI_h_64_DELEGATE \
struct PlayFabGroupsAPI_eventDelegateOnSuccessListMembershipOpportunities_Parms \
{ \
	FGroupsListMembershipOpportunitiesResponse Result; \
	UObject* customData; \
}; \
static inline void FDelegateOnSuccessListMembershipOpportunities_DelegateWrapper(const FScriptDelegate& DelegateOnSuccessListMembershipOpportunities, FGroupsListMembershipOpportunitiesResponse Result, UObject* customData) \
{ \
	PlayFabGroupsAPI_eventDelegateOnSuccessListMembershipOpportunities_Parms Parms; \
	Parms.Result=Result; \
	Parms.customData=customData; \
	DelegateOnSuccessListMembershipOpportunities.ProcessDelegate<UObject>(&Parms); \
}


#define Test_Plugins_EnginePlugins_PlayFab_Source_PlayFab_Public_PlayFabGroupsAPI_h_63_DELEGATE \
struct PlayFabGroupsAPI_eventDelegateOnSuccessRemoveGroupApplication_Parms \
{ \
	FGroupsEmptyResponse Result; \
	UObject* customData; \
}; \
static inline void FDelegateOnSuccessRemoveGroupApplication_DelegateWrapper(const FScriptDelegate& DelegateOnSuccessRemoveGroupApplication, FGroupsEmptyResponse Result, UObject* customData) \
{ \
	PlayFabGroupsAPI_eventDelegateOnSuccessRemoveGroupApplication_Parms Parms; \
	Parms.Result=Result; \
	Parms.customData=customData; \
	DelegateOnSuccessRemoveGroupApplication.ProcessDelegate<UObject>(&Parms); \
}


#define Test_Plugins_EnginePlugins_PlayFab_Source_PlayFab_Public_PlayFabGroupsAPI_h_62_DELEGATE \
struct PlayFabGroupsAPI_eventDelegateOnSuccessRemoveGroupInvitation_Parms \
{ \
	FGroupsEmptyResponse Result; \
	UObject* customData; \
}; \
static inline void FDelegateOnSuccessRemoveGroupInvitation_DelegateWrapper(const FScriptDelegate& DelegateOnSuccessRemoveGroupInvitation, FGroupsEmptyResponse Result, UObject* customData) \
{ \
	PlayFabGroupsAPI_eventDelegateOnSuccessRemoveGroupInvitation_Parms Parms; \
	Parms.Result=Result; \
	Parms.customData=customData; \
	DelegateOnSuccessRemoveGroupInvitation.ProcessDelegate<UObject>(&Parms); \
}


#define Test_Plugins_EnginePlugins_PlayFab_Source_PlayFab_Public_PlayFabGroupsAPI_h_61_DELEGATE \
struct PlayFabGroupsAPI_eventDelegateOnSuccessRemoveMembers_Parms \
{ \
	FGroupsEmptyResponse Result; \
	UObject* customData; \
}; \
static inline void FDelegateOnSuccessRemoveMembers_DelegateWrapper(const FScriptDelegate& DelegateOnSuccessRemoveMembers, FGroupsEmptyResponse Result, UObject* customData) \
{ \
	PlayFabGroupsAPI_eventDelegateOnSuccessRemoveMembers_Parms Parms; \
	Parms.Result=Result; \
	Parms.customData=customData; \
	DelegateOnSuccessRemoveMembers.ProcessDelegate<UObject>(&Parms); \
}


#define Test_Plugins_EnginePlugins_PlayFab_Source_PlayFab_Public_PlayFabGroupsAPI_h_60_DELEGATE \
struct PlayFabGroupsAPI_eventDelegateOnSuccessUnblockEntity_Parms \
{ \
	FGroupsEmptyResponse Result; \
	UObject* customData; \
}; \
static inline void FDelegateOnSuccessUnblockEntity_DelegateWrapper(const FScriptDelegate& DelegateOnSuccessUnblockEntity, FGroupsEmptyResponse Result, UObject* customData) \
{ \
	PlayFabGroupsAPI_eventDelegateOnSuccessUnblockEntity_Parms Parms; \
	Parms.Result=Result; \
	Parms.customData=customData; \
	DelegateOnSuccessUnblockEntity.ProcessDelegate<UObject>(&Parms); \
}


#define Test_Plugins_EnginePlugins_PlayFab_Source_PlayFab_Public_PlayFabGroupsAPI_h_59_DELEGATE \
struct PlayFabGroupsAPI_eventDelegateOnSuccessUpdateGroup_Parms \
{ \
	FGroupsUpdateGroupResponse Result; \
	UObject* customData; \
}; \
static inline void FDelegateOnSuccessUpdateGroup_DelegateWrapper(const FScriptDelegate& DelegateOnSuccessUpdateGroup, FGroupsUpdateGroupResponse Result, UObject* customData) \
{ \
	PlayFabGroupsAPI_eventDelegateOnSuccessUpdateGroup_Parms Parms; \
	Parms.Result=Result; \
	Parms.customData=customData; \
	DelegateOnSuccessUpdateGroup.ProcessDelegate<UObject>(&Parms); \
}


#define Test_Plugins_EnginePlugins_PlayFab_Source_PlayFab_Public_PlayFabGroupsAPI_h_58_DELEGATE \
struct PlayFabGroupsAPI_eventDelegateOnSuccessUpdateRole_Parms \
{ \
	FGroupsUpdateGroupRoleResponse Result; \
	UObject* customData; \
}; \
static inline void FDelegateOnSuccessUpdateRole_DelegateWrapper(const FScriptDelegate& DelegateOnSuccessUpdateRole, FGroupsUpdateGroupRoleResponse Result, UObject* customData) \
{ \
	PlayFabGroupsAPI_eventDelegateOnSuccessUpdateRole_Parms Parms; \
	Parms.Result=Result; \
	Parms.customData=customData; \
	DelegateOnSuccessUpdateRole.ProcessDelegate<UObject>(&Parms); \
}


#define Test_Plugins_EnginePlugins_PlayFab_Source_PlayFab_Public_PlayFabGroupsAPI_h_56_SPARSE_DATA
#define Test_Plugins_EnginePlugins_PlayFab_Source_PlayFab_Public_PlayFabGroupsAPI_h_56_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execAcceptGroupApplication); \
	DECLARE_FUNCTION(execAcceptGroupInvitation); \
	DECLARE_FUNCTION(execAddMembers); \
	DECLARE_FUNCTION(execApplyToGroup); \
	DECLARE_FUNCTION(execBlockEntity); \
	DECLARE_FUNCTION(execChangeMemberRole); \
	DECLARE_FUNCTION(execCreateGroup); \
	DECLARE_FUNCTION(execCreateRole); \
	DECLARE_FUNCTION(execDeleteGroup); \
	DECLARE_FUNCTION(execDeleteRole); \
	DECLARE_FUNCTION(execGetGroup); \
	DECLARE_FUNCTION(execHelperAcceptGroupApplication); \
	DECLARE_FUNCTION(execHelperAcceptGroupInvitation); \
	DECLARE_FUNCTION(execHelperAddMembers); \
	DECLARE_FUNCTION(execHelperApplyToGroup); \
	DECLARE_FUNCTION(execHelperBlockEntity); \
	DECLARE_FUNCTION(execHelperChangeMemberRole); \
	DECLARE_FUNCTION(execHelperCreateGroup); \
	DECLARE_FUNCTION(execHelperCreateRole); \
	DECLARE_FUNCTION(execHelperDeleteGroup); \
	DECLARE_FUNCTION(execHelperDeleteRole); \
	DECLARE_FUNCTION(execHelperGetGroup); \
	DECLARE_FUNCTION(execHelperInviteToGroup); \
	DECLARE_FUNCTION(execHelperIsMember); \
	DECLARE_FUNCTION(execHelperListGroupApplications); \
	DECLARE_FUNCTION(execHelperListGroupBlocks); \
	DECLARE_FUNCTION(execHelperListGroupInvitations); \
	DECLARE_FUNCTION(execHelperListGroupMembers); \
	DECLARE_FUNCTION(execHelperListMembership); \
	DECLARE_FUNCTION(execHelperListMembershipOpportunities); \
	DECLARE_FUNCTION(execHelperRemoveGroupApplication); \
	DECLARE_FUNCTION(execHelperRemoveGroupInvitation); \
	DECLARE_FUNCTION(execHelperRemoveMembers); \
	DECLARE_FUNCTION(execHelperUnblockEntity); \
	DECLARE_FUNCTION(execHelperUpdateGroup); \
	DECLARE_FUNCTION(execHelperUpdateRole); \
	DECLARE_FUNCTION(execInviteToGroup); \
	DECLARE_FUNCTION(execIsMember); \
	DECLARE_FUNCTION(execListGroupApplications); \
	DECLARE_FUNCTION(execListGroupBlocks); \
	DECLARE_FUNCTION(execListGroupInvitations); \
	DECLARE_FUNCTION(execListGroupMembers); \
	DECLARE_FUNCTION(execListMembership); \
	DECLARE_FUNCTION(execListMembershipOpportunities); \
	DECLARE_FUNCTION(execRemoveGroupApplication); \
	DECLARE_FUNCTION(execRemoveGroupInvitation); \
	DECLARE_FUNCTION(execRemoveMembers); \
	DECLARE_FUNCTION(execUnblockEntity); \
	DECLARE_FUNCTION(execUpdateGroup); \
	DECLARE_FUNCTION(execUpdateRole);


#define Test_Plugins_EnginePlugins_PlayFab_Source_PlayFab_Public_PlayFabGroupsAPI_h_56_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execAcceptGroupApplication); \
	DECLARE_FUNCTION(execAcceptGroupInvitation); \
	DECLARE_FUNCTION(execAddMembers); \
	DECLARE_FUNCTION(execApplyToGroup); \
	DECLARE_FUNCTION(execBlockEntity); \
	DECLARE_FUNCTION(execChangeMemberRole); \
	DECLARE_FUNCTION(execCreateGroup); \
	DECLARE_FUNCTION(execCreateRole); \
	DECLARE_FUNCTION(execDeleteGroup); \
	DECLARE_FUNCTION(execDeleteRole); \
	DECLARE_FUNCTION(execGetGroup); \
	DECLARE_FUNCTION(execHelperAcceptGroupApplication); \
	DECLARE_FUNCTION(execHelperAcceptGroupInvitation); \
	DECLARE_FUNCTION(execHelperAddMembers); \
	DECLARE_FUNCTION(execHelperApplyToGroup); \
	DECLARE_FUNCTION(execHelperBlockEntity); \
	DECLARE_FUNCTION(execHelperChangeMemberRole); \
	DECLARE_FUNCTION(execHelperCreateGroup); \
	DECLARE_FUNCTION(execHelperCreateRole); \
	DECLARE_FUNCTION(execHelperDeleteGroup); \
	DECLARE_FUNCTION(execHelperDeleteRole); \
	DECLARE_FUNCTION(execHelperGetGroup); \
	DECLARE_FUNCTION(execHelperInviteToGroup); \
	DECLARE_FUNCTION(execHelperIsMember); \
	DECLARE_FUNCTION(execHelperListGroupApplications); \
	DECLARE_FUNCTION(execHelperListGroupBlocks); \
	DECLARE_FUNCTION(execHelperListGroupInvitations); \
	DECLARE_FUNCTION(execHelperListGroupMembers); \
	DECLARE_FUNCTION(execHelperListMembership); \
	DECLARE_FUNCTION(execHelperListMembershipOpportunities); \
	DECLARE_FUNCTION(execHelperRemoveGroupApplication); \
	DECLARE_FUNCTION(execHelperRemoveGroupInvitation); \
	DECLARE_FUNCTION(execHelperRemoveMembers); \
	DECLARE_FUNCTION(execHelperUnblockEntity); \
	DECLARE_FUNCTION(execHelperUpdateGroup); \
	DECLARE_FUNCTION(execHelperUpdateRole); \
	DECLARE_FUNCTION(execInviteToGroup); \
	DECLARE_FUNCTION(execIsMember); \
	DECLARE_FUNCTION(execListGroupApplications); \
	DECLARE_FUNCTION(execListGroupBlocks); \
	DECLARE_FUNCTION(execListGroupInvitations); \
	DECLARE_FUNCTION(execListGroupMembers); \
	DECLARE_FUNCTION(execListMembership); \
	DECLARE_FUNCTION(execListMembershipOpportunities); \
	DECLARE_FUNCTION(execRemoveGroupApplication); \
	DECLARE_FUNCTION(execRemoveGroupInvitation); \
	DECLARE_FUNCTION(execRemoveMembers); \
	DECLARE_FUNCTION(execUnblockEntity); \
	DECLARE_FUNCTION(execUpdateGroup); \
	DECLARE_FUNCTION(execUpdateRole);


#define Test_Plugins_EnginePlugins_PlayFab_Source_PlayFab_Public_PlayFabGroupsAPI_h_56_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPlayFabGroupsAPI(); \
	friend struct Z_Construct_UClass_UPlayFabGroupsAPI_Statics; \
public: \
	DECLARE_CLASS(UPlayFabGroupsAPI, UOnlineBlueprintCallProxyBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/PlayFab"), NO_API) \
	DECLARE_SERIALIZER(UPlayFabGroupsAPI)


#define Test_Plugins_EnginePlugins_PlayFab_Source_PlayFab_Public_PlayFabGroupsAPI_h_56_INCLASS \
private: \
	static void StaticRegisterNativesUPlayFabGroupsAPI(); \
	friend struct Z_Construct_UClass_UPlayFabGroupsAPI_Statics; \
public: \
	DECLARE_CLASS(UPlayFabGroupsAPI, UOnlineBlueprintCallProxyBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/PlayFab"), NO_API) \
	DECLARE_SERIALIZER(UPlayFabGroupsAPI)


#define Test_Plugins_EnginePlugins_PlayFab_Source_PlayFab_Public_PlayFabGroupsAPI_h_56_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UPlayFabGroupsAPI(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPlayFabGroupsAPI) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPlayFabGroupsAPI); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPlayFabGroupsAPI); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UPlayFabGroupsAPI(UPlayFabGroupsAPI&&); \
	NO_API UPlayFabGroupsAPI(const UPlayFabGroupsAPI&); \
public:


#define Test_Plugins_EnginePlugins_PlayFab_Source_PlayFab_Public_PlayFabGroupsAPI_h_56_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UPlayFabGroupsAPI(UPlayFabGroupsAPI&&); \
	NO_API UPlayFabGroupsAPI(const UPlayFabGroupsAPI&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPlayFabGroupsAPI); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPlayFabGroupsAPI); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UPlayFabGroupsAPI)


#define Test_Plugins_EnginePlugins_PlayFab_Source_PlayFab_Public_PlayFabGroupsAPI_h_56_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__CallAuthenticationContext() { return STRUCT_OFFSET(UPlayFabGroupsAPI, CallAuthenticationContext); } \
	FORCEINLINE static uint32 __PPO__RequestJsonObj() { return STRUCT_OFFSET(UPlayFabGroupsAPI, RequestJsonObj); } \
	FORCEINLINE static uint32 __PPO__ResponseJsonObj() { return STRUCT_OFFSET(UPlayFabGroupsAPI, ResponseJsonObj); }


#define Test_Plugins_EnginePlugins_PlayFab_Source_PlayFab_Public_PlayFabGroupsAPI_h_54_PROLOG
#define Test_Plugins_EnginePlugins_PlayFab_Source_PlayFab_Public_PlayFabGroupsAPI_h_56_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Test_Plugins_EnginePlugins_PlayFab_Source_PlayFab_Public_PlayFabGroupsAPI_h_56_PRIVATE_PROPERTY_OFFSET \
	Test_Plugins_EnginePlugins_PlayFab_Source_PlayFab_Public_PlayFabGroupsAPI_h_56_SPARSE_DATA \
	Test_Plugins_EnginePlugins_PlayFab_Source_PlayFab_Public_PlayFabGroupsAPI_h_56_RPC_WRAPPERS \
	Test_Plugins_EnginePlugins_PlayFab_Source_PlayFab_Public_PlayFabGroupsAPI_h_56_INCLASS \
	Test_Plugins_EnginePlugins_PlayFab_Source_PlayFab_Public_PlayFabGroupsAPI_h_56_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Test_Plugins_EnginePlugins_PlayFab_Source_PlayFab_Public_PlayFabGroupsAPI_h_56_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Test_Plugins_EnginePlugins_PlayFab_Source_PlayFab_Public_PlayFabGroupsAPI_h_56_PRIVATE_PROPERTY_OFFSET \
	Test_Plugins_EnginePlugins_PlayFab_Source_PlayFab_Public_PlayFabGroupsAPI_h_56_SPARSE_DATA \
	Test_Plugins_EnginePlugins_PlayFab_Source_PlayFab_Public_PlayFabGroupsAPI_h_56_RPC_WRAPPERS_NO_PURE_DECLS \
	Test_Plugins_EnginePlugins_PlayFab_Source_PlayFab_Public_PlayFabGroupsAPI_h_56_INCLASS_NO_PURE_DECLS \
	Test_Plugins_EnginePlugins_PlayFab_Source_PlayFab_Public_PlayFabGroupsAPI_h_56_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> PLAYFAB_API UClass* StaticClass<class UPlayFabGroupsAPI>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Test_Plugins_EnginePlugins_PlayFab_Source_PlayFab_Public_PlayFabGroupsAPI_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
