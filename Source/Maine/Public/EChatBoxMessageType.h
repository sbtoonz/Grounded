#pragma once
#include "CoreMinimal.h"
#include "EChatBoxMessageType.generated.h"

UENUM(BlueprintType)
enum class EChatBoxMessageType : uint8 {
    Other,
    Chat,
};

