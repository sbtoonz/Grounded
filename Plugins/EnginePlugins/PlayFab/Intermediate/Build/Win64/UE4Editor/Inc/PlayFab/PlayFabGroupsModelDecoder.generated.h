// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UPlayFabJsonObject;
struct FGroupsApplyToGroupResponse;
struct FGroupsCreateGroupResponse;
struct FGroupsCreateGroupRoleResponse;
struct FGroupsEmptyResponse;
struct FGroupsGetGroupResponse;
struct FGroupsInviteToGroupResponse;
struct FGroupsIsMemberResponse;
struct FGroupsListGroupApplicationsResponse;
struct FGroupsListGroupBlocksResponse;
struct FGroupsListGroupInvitationsResponse;
struct FGroupsListGroupMembersResponse;
struct FGroupsListMembershipOpportunitiesResponse;
struct FGroupsListMembershipResponse;
struct FGroupsUpdateGroupResponse;
struct FGroupsUpdateGroupRoleResponse;
#ifdef PLAYFAB_PlayFabGroupsModelDecoder_generated_h
#error "PlayFabGroupsModelDecoder.generated.h already included, missing '#pragma once' in PlayFabGroupsModelDecoder.h"
#endif
#define PLAYFAB_PlayFabGroupsModelDecoder_generated_h

#define Test_Plugins_EnginePlugins_PlayFab_Source_PlayFab_Public_PlayFabGroupsModelDecoder_h_25_SPARSE_DATA
#define Test_Plugins_EnginePlugins_PlayFab_Source_PlayFab_Public_PlayFabGroupsModelDecoder_h_25_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execdecodeApplyToGroupResponseResponse); \
	DECLARE_FUNCTION(execdecodeCreateGroupResponseResponse); \
	DECLARE_FUNCTION(execdecodeCreateGroupRoleResponseResponse); \
	DECLARE_FUNCTION(execdecodeEmptyResponseResponse); \
	DECLARE_FUNCTION(execdecodeGetGroupResponseResponse); \
	DECLARE_FUNCTION(execdecodeInviteToGroupResponseResponse); \
	DECLARE_FUNCTION(execdecodeIsMemberResponseResponse); \
	DECLARE_FUNCTION(execdecodeListGroupApplicationsResponseResponse); \
	DECLARE_FUNCTION(execdecodeListGroupBlocksResponseResponse); \
	DECLARE_FUNCTION(execdecodeListGroupInvitationsResponseResponse); \
	DECLARE_FUNCTION(execdecodeListGroupMembersResponseResponse); \
	DECLARE_FUNCTION(execdecodeListMembershipOpportunitiesResponseResponse); \
	DECLARE_FUNCTION(execdecodeListMembershipResponseResponse); \
	DECLARE_FUNCTION(execdecodeUpdateGroupResponseResponse); \
	DECLARE_FUNCTION(execdecodeUpdateGroupRoleResponseResponse);


#define Test_Plugins_EnginePlugins_PlayFab_Source_PlayFab_Public_PlayFabGroupsModelDecoder_h_25_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execdecodeApplyToGroupResponseResponse); \
	DECLARE_FUNCTION(execdecodeCreateGroupResponseResponse); \
	DECLARE_FUNCTION(execdecodeCreateGroupRoleResponseResponse); \
	DECLARE_FUNCTION(execdecodeEmptyResponseResponse); \
	DECLARE_FUNCTION(execdecodeGetGroupResponseResponse); \
	DECLARE_FUNCTION(execdecodeInviteToGroupResponseResponse); \
	DECLARE_FUNCTION(execdecodeIsMemberResponseResponse); \
	DECLARE_FUNCTION(execdecodeListGroupApplicationsResponseResponse); \
	DECLARE_FUNCTION(execdecodeListGroupBlocksResponseResponse); \
	DECLARE_FUNCTION(execdecodeListGroupInvitationsResponseResponse); \
	DECLARE_FUNCTION(execdecodeListGroupMembersResponseResponse); \
	DECLARE_FUNCTION(execdecodeListMembershipOpportunitiesResponseResponse); \
	DECLARE_FUNCTION(execdecodeListMembershipResponseResponse); \
	DECLARE_FUNCTION(execdecodeUpdateGroupResponseResponse); \
	DECLARE_FUNCTION(execdecodeUpdateGroupRoleResponseResponse);


#define Test_Plugins_EnginePlugins_PlayFab_Source_PlayFab_Public_PlayFabGroupsModelDecoder_h_25_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPlayFabGroupsModelDecoder(); \
	friend struct Z_Construct_UClass_UPlayFabGroupsModelDecoder_Statics; \
public: \
	DECLARE_CLASS(UPlayFabGroupsModelDecoder, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/PlayFab"), NO_API) \
	DECLARE_SERIALIZER(UPlayFabGroupsModelDecoder)


#define Test_Plugins_EnginePlugins_PlayFab_Source_PlayFab_Public_PlayFabGroupsModelDecoder_h_25_INCLASS \
private: \
	static void StaticRegisterNativesUPlayFabGroupsModelDecoder(); \
	friend struct Z_Construct_UClass_UPlayFabGroupsModelDecoder_Statics; \
public: \
	DECLARE_CLASS(UPlayFabGroupsModelDecoder, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/PlayFab"), NO_API) \
	DECLARE_SERIALIZER(UPlayFabGroupsModelDecoder)


#define Test_Plugins_EnginePlugins_PlayFab_Source_PlayFab_Public_PlayFabGroupsModelDecoder_h_25_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UPlayFabGroupsModelDecoder(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPlayFabGroupsModelDecoder) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPlayFabGroupsModelDecoder); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPlayFabGroupsModelDecoder); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UPlayFabGroupsModelDecoder(UPlayFabGroupsModelDecoder&&); \
	NO_API UPlayFabGroupsModelDecoder(const UPlayFabGroupsModelDecoder&); \
public:


#define Test_Plugins_EnginePlugins_PlayFab_Source_PlayFab_Public_PlayFabGroupsModelDecoder_h_25_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UPlayFabGroupsModelDecoder(UPlayFabGroupsModelDecoder&&); \
	NO_API UPlayFabGroupsModelDecoder(const UPlayFabGroupsModelDecoder&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPlayFabGroupsModelDecoder); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPlayFabGroupsModelDecoder); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UPlayFabGroupsModelDecoder)


#define Test_Plugins_EnginePlugins_PlayFab_Source_PlayFab_Public_PlayFabGroupsModelDecoder_h_25_PRIVATE_PROPERTY_OFFSET
#define Test_Plugins_EnginePlugins_PlayFab_Source_PlayFab_Public_PlayFabGroupsModelDecoder_h_23_PROLOG
#define Test_Plugins_EnginePlugins_PlayFab_Source_PlayFab_Public_PlayFabGroupsModelDecoder_h_25_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Test_Plugins_EnginePlugins_PlayFab_Source_PlayFab_Public_PlayFabGroupsModelDecoder_h_25_PRIVATE_PROPERTY_OFFSET \
	Test_Plugins_EnginePlugins_PlayFab_Source_PlayFab_Public_PlayFabGroupsModelDecoder_h_25_SPARSE_DATA \
	Test_Plugins_EnginePlugins_PlayFab_Source_PlayFab_Public_PlayFabGroupsModelDecoder_h_25_RPC_WRAPPERS \
	Test_Plugins_EnginePlugins_PlayFab_Source_PlayFab_Public_PlayFabGroupsModelDecoder_h_25_INCLASS \
	Test_Plugins_EnginePlugins_PlayFab_Source_PlayFab_Public_PlayFabGroupsModelDecoder_h_25_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Test_Plugins_EnginePlugins_PlayFab_Source_PlayFab_Public_PlayFabGroupsModelDecoder_h_25_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Test_Plugins_EnginePlugins_PlayFab_Source_PlayFab_Public_PlayFabGroupsModelDecoder_h_25_PRIVATE_PROPERTY_OFFSET \
	Test_Plugins_EnginePlugins_PlayFab_Source_PlayFab_Public_PlayFabGroupsModelDecoder_h_25_SPARSE_DATA \
	Test_Plugins_EnginePlugins_PlayFab_Source_PlayFab_Public_PlayFabGroupsModelDecoder_h_25_RPC_WRAPPERS_NO_PURE_DECLS \
	Test_Plugins_EnginePlugins_PlayFab_Source_PlayFab_Public_PlayFabGroupsModelDecoder_h_25_INCLASS_NO_PURE_DECLS \
	Test_Plugins_EnginePlugins_PlayFab_Source_PlayFab_Public_PlayFabGroupsModelDecoder_h_25_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> PLAYFAB_API UClass* StaticClass<class UPlayFabGroupsModelDecoder>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Test_Plugins_EnginePlugins_PlayFab_Source_PlayFab_Public_PlayFabGroupsModelDecoder_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
