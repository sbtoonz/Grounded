#pragma once
#include "CoreMinimal.h"
#include "ScriptEvent.h"
#include "QuestReference.h"
#include "StartQuestEvent.generated.h"

UCLASS(Blueprintable, CollapseCategories, EditInlineNew)
class OEIFLOWCHARTS_API UStartQuestEvent : public UScriptEvent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FQuestReference Quest;
    
    UStartQuestEvent();
};

