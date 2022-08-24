#pragma once
#include "CoreMinimal.h"
#include "BurgleQuestTemplate.h"
#include "GameplayTagContainer.h"
#include "BurgleQuestTemplateSingleOptAct.generated.h"

UCLASS(Abstract, Blueprintable)
class MAINE_API UBurgleQuestTemplateSingleOptAct : public UBurgleQuestTemplate {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag OptionTag;
    
    UBurgleQuestTemplateSingleOptAct();
};

