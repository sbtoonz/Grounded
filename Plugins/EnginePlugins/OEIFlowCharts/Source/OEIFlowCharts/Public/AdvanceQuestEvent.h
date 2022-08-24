#pragma once
#include "CoreMinimal.h"
#include "ScriptEvent.h"
#include "QuestReference.h"
#include "AdvanceQuestEvent.generated.h"

UCLASS(Blueprintable, CollapseCategories, EditInlineNew)
class OEIFLOWCHARTS_API UAdvanceQuestEvent : public UScriptEvent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FQuestReference Quest;
    
    UAdvanceQuestEvent();
};

