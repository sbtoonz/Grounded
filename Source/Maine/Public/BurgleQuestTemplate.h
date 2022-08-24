#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "BurgleQuestTemplate.generated.h"

UCLASS(Abstract, Blueprintable)
class MAINE_API UBurgleQuestTemplate : public UDataAsset {
    GENERATED_BODY()
public:
    UBurgleQuestTemplate();
};

