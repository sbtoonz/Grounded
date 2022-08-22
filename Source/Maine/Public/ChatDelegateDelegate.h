#pragma once
#include "CoreMinimal.h"
#include "ChatDelegateDelegate.generated.h"

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FChatDelegate, const FString&, ChatText);

