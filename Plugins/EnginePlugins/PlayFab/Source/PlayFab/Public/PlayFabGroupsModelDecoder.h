#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "GroupsUpdateGroupRoleResponse.h"
#include "GroupsListGroupMembersResponse.h"
#include "GroupsUpdateGroupResponse.h"
#include "GroupsListMembershipResponse.h"
#include "GroupsListMembershipOpportunitiesResponse.h"
#include "GroupsListGroupInvitationsResponse.h"
#include "GroupsListGroupBlocksResponse.h"
#include "GroupsListGroupApplicationsResponse.h"
#include "GroupsIsMemberResponse.h"
#include "GroupsInviteToGroupResponse.h"
#include "GroupsGetGroupResponse.h"
#include "GroupsEmptyResponse.h"
#include "GroupsCreateGroupRoleResponse.h"
#include "GroupsCreateGroupResponse.h"
#include "GroupsApplyToGroupResponse.h"
#include "PlayFabGroupsModelDecoder.generated.h"

class UPlayFabJsonObject;

UCLASS(Blueprintable)
class PLAYFAB_API UPlayFabGroupsModelDecoder : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UPlayFabGroupsModelDecoder();
    UFUNCTION(BlueprintCallable)
    static FGroupsUpdateGroupRoleResponse decodeUpdateGroupRoleResponseResponse(UPlayFabJsonObject* response);
    
    UFUNCTION(BlueprintCallable)
    static FGroupsUpdateGroupResponse decodeUpdateGroupResponseResponse(UPlayFabJsonObject* response);
    
    UFUNCTION(BlueprintCallable)
    static FGroupsListMembershipResponse decodeListMembershipResponseResponse(UPlayFabJsonObject* response);
    
    UFUNCTION(BlueprintCallable)
    static FGroupsListMembershipOpportunitiesResponse decodeListMembershipOpportunitiesResponseResponse(UPlayFabJsonObject* response);
    
    UFUNCTION(BlueprintCallable)
    static FGroupsListGroupMembersResponse decodeListGroupMembersResponseResponse(UPlayFabJsonObject* response);
    
    UFUNCTION(BlueprintCallable)
    static FGroupsListGroupInvitationsResponse decodeListGroupInvitationsResponseResponse(UPlayFabJsonObject* response);
    
    UFUNCTION(BlueprintCallable)
    static FGroupsListGroupBlocksResponse decodeListGroupBlocksResponseResponse(UPlayFabJsonObject* response);
    
    UFUNCTION(BlueprintCallable)
    static FGroupsListGroupApplicationsResponse decodeListGroupApplicationsResponseResponse(UPlayFabJsonObject* response);
    
    UFUNCTION(BlueprintCallable)
    static FGroupsIsMemberResponse decodeIsMemberResponseResponse(UPlayFabJsonObject* response);
    
    UFUNCTION(BlueprintCallable)
    static FGroupsInviteToGroupResponse decodeInviteToGroupResponseResponse(UPlayFabJsonObject* response);
    
    UFUNCTION(BlueprintCallable)
    static FGroupsGetGroupResponse decodeGetGroupResponseResponse(UPlayFabJsonObject* response);
    
    UFUNCTION(BlueprintCallable)
    static FGroupsEmptyResponse decodeEmptyResponseResponse(UPlayFabJsonObject* response);
    
    UFUNCTION(BlueprintCallable)
    static FGroupsCreateGroupRoleResponse decodeCreateGroupRoleResponseResponse(UPlayFabJsonObject* response);
    
    UFUNCTION(BlueprintCallable)
    static FGroupsCreateGroupResponse decodeCreateGroupResponseResponse(UPlayFabJsonObject* response);
    
    UFUNCTION(BlueprintCallable)
    static FGroupsApplyToGroupResponse decodeApplyToGroupResponseResponse(UPlayFabJsonObject* response);
    
};

