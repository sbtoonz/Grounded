#pragma once
#include "CoreMinimal.h"
#include "ScriptEvent.h"
#include "QuestReference.h"
#include "TriggerQuestAddendumEvent.generated.h"

UCLASS(Blueprintable, CollapseCategories, EditInlineNew)
class OEIFLOWCHARTS_API UTriggerQuestAddendumEvent : public UScriptEvent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FQuestReference Quest;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 AddendumID;
    
    UTriggerQuestAddendumEvent();
};

