#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=OEIGlobalVariables -ObjectName=GlobalVariableReference -FallbackName=GlobalVariableReference
//CROSS-MODULE INCLUDE V2: -ModuleName=OEICommon -ObjectName=EComparisonOperator -FallbackName=EComparisonOperator
#include "ConditionalMusicTrack.generated.h"

class UMusicTrackData;

USTRUCT(BlueprintType)
struct FConditionalMusicTrack {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    UMusicTrackData* MusicTrack;
    
    UPROPERTY(EditDefaultsOnly)
    FGlobalVariableReference GlobalVariable;
    
    UPROPERTY(EditDefaultsOnly)
    EComparisonOperator GlobalVariableComparisonOperator;
    
    UPROPERTY(EditDefaultsOnly)
    int32 GlobalVariableCompareValue;
    
    MAINE_API FConditionalMusicTrack();
};

