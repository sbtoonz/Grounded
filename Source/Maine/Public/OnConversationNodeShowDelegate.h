#pragma once
#include "CoreMinimal.h"
#include "ShowConversationNodeParams.h"
#include "OnConversationNodeShowDelegate.generated.h"

class AActor;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnConversationNodeShow, AActor*, OwnerActor, FShowConversationNodeParams, NodeInfo);

