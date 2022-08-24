#pragma once
#include "CoreMinimal.h"
#include "ScriptCall.h"
#include "UObject/NoExportTypes.h"
#include "TimelineScriptCall.generated.h"

USTRUCT(BlueprintType)
struct OEISCRIPTING_API FTimelineScriptCall : public FScriptCall {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString TimelineName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGuid ID;
    
public:
    FTimelineScriptCall();
};

