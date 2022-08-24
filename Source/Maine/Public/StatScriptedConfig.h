#pragma once
#include "CoreMinimal.h"
#include "PlayerStatConfig.h"
#include "StatScriptedConfig.generated.h"

UCLASS(Blueprintable)
class MAINE_API UStatScriptedConfig : public UPlayerStatConfig {
    GENERATED_BODY()
public:
    UStatScriptedConfig();
};

