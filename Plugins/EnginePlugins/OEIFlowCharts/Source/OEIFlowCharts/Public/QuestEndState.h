#pragma once
#include "CoreMinimal.h"
#include "QuestEndState.generated.h"

USTRUCT(BlueprintType)
struct FQuestEndState {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ID;
    
public:
    OEIFLOWCHARTS_API FQuestEndState();
};

