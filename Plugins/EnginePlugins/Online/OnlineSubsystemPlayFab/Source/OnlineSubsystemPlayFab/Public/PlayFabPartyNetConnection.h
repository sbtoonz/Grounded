#pragma once
#include "CoreMinimal.h"
#include "IpConnection.h"
#include "PlayFabPartyNetConnection.generated.h"

UCLASS(Blueprintable, NonTransient)
class UPlayFabPartyNetConnection : public UIpConnection {
    GENERATED_BODY()
public:
    UPlayFabPartyNetConnection();
};

