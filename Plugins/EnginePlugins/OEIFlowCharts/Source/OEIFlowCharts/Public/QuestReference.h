#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "QuestReference.generated.h"

USTRUCT(BlueprintType)
struct OEIFLOWCHARTS_API FQuestReference {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGuid ID;
    
public:
    FQuestReference();
};

