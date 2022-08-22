#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Guid -FallbackName=Guid
#include "EConversationNodeDisplayStyle.h"
#include "OnConversationCompleteDelegate.generated.h"

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnConversationComplete, FGuid, ConversationId, TEnumAsByte<EConversationNodeDisplayStyle>, DisplayStyle);

