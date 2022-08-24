#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "EConversationNodeDisplayStyle.h"
#include "OnConversationStartDelegate.generated.h"

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnConversationStart, FGuid, ConversationId, TEnumAsByte<EConversationNodeDisplayStyle>, DisplayStyle);

