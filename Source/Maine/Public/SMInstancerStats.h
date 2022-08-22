#pragma once
#include "CoreMinimal.h"
#include "SMInstancerStats.generated.h"

USTRUCT()
struct FSMInstancerStats {
    GENERATED_BODY()
public:
    UPROPERTY()
    int32 NumActorsModified;
    
    UPROPERTY()
    int32 NumIncompatibleActorsSkipped;
    
    UPROPERTY()
    int32 NumLevelsModified;
    
    UPROPERTY()
    int32 NumDistinctSMAs;
    
    UPROPERTY()
    int32 DistinctSMAsBelowInstanceThreshold;
    
    UPROPERTY()
    int32 BelowInstanceThresholdButNotUniqueTotal;
    
    UPROPERTY()
    int32 UniqueSMAs;
    
    UPROPERTY()
    int32 HISMACount;
    
    UPROPERTY()
    int32 HISMComponentCount;
    
    UPROPERTY()
    int32 OutlierCount;
    
    MAINE_API FSMInstancerStats();
};

