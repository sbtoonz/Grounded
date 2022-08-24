#pragma once
#include "CoreMinimal.h"
#include "EComparisonOperator.h"
#include "GlobalVariableReference.h"
#include "ConditionalMusicTrack.generated.h"

class UMusicTrackData;

USTRUCT(BlueprintType)
struct FConditionalMusicTrack {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMusicTrackData* MusicTrack;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGlobalVariableReference GlobalVariable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EComparisonOperator GlobalVariableComparisonOperator;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 GlobalVariableCompareValue;
    
    MAINE_API FConditionalMusicTrack();
};

