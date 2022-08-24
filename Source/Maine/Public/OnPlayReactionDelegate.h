#pragma once
#include "CoreMinimal.h"
#include "EHitReactionType.h"
#include "OnPlayReactionDelegate.generated.h"

class UReactionComponent;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnPlayReaction, UReactionComponent*, Sender, EHitReactionType, ReactionType);

