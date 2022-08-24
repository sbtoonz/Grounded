#pragma once
#include "CoreMinimal.h"
#include "QuestEvent.generated.h"

USTRUCT(BlueprintType)
struct OEIFLOWCHARTS_API FQuestEvent {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 EventId;
    
public:
    FQuestEvent();
};

