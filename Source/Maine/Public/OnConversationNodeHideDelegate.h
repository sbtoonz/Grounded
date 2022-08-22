#pragma once
#include "CoreMinimal.h"
#include "EConversationNodeDisplayStyle.h"
#include "OnConversationNodeHideDelegate.generated.h"

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnConversationNodeHide, TEnumAsByte<EConversationNodeDisplayStyle>, DisplayStyle);

