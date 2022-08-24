#pragma once
#include "CoreMinimal.h"
#include "BTTask_PlayEmote.h"
#include "BTTask_PlayFidget.generated.h"

UCLASS(Blueprintable)
class MAINE_API UBTTask_PlayFidget : public UBTTask_PlayEmote {
    GENERATED_BODY()
public:
    UBTTask_PlayFidget();
};

