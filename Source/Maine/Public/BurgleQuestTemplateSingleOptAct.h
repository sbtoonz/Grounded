#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayTags -ObjectName=GameplayTag -FallbackName=GameplayTag
#include "BurgleQuestTemplate.h"
#include "BurgleQuestTemplateSingleOptAct.generated.h"

UCLASS(Abstract, BlueprintType)
class MAINE_API UBurgleQuestTemplateSingleOptAct : public UBurgleQuestTemplate {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FGameplayTag OptionTag;
    
    UBurgleQuestTemplateSingleOptAct();
};

