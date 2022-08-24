#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "EConversationNodeDisplayStyle.h"
#include "OnConversationCompleteDelegate.generated.h"

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnConversationComplete, FGuid, ConversationId, TEnumAsByte<EConversationNodeDisplayStyle>, DisplayStyle);

