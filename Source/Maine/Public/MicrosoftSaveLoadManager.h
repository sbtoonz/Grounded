#pragma once
#include "CoreMinimal.h"
#include "SaveLoadManager.h"
#include "MicrosoftSaveLoadManager.generated.h"

UCLASS(Blueprintable)
class MAINE_API UMicrosoftSaveLoadManager : public USaveLoadManager {
    GENERATED_BODY()
public:
    UMicrosoftSaveLoadManager();
};

