#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=DataAsset -FallbackName=DataAsset
#include "BurgleQuestTemplate.generated.h"

UCLASS(Abstract)
class MAINE_API UBurgleQuestTemplate : public UDataAsset {
    GENERATED_BODY()
public:
    UBurgleQuestTemplate();
};

