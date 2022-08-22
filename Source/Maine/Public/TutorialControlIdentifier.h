#pragma once
#include "CoreMinimal.h"
#include "TutorialControlIdentifier.generated.h"

USTRUCT(BlueprintType)
struct MAINE_API FTutorialControlIdentifier {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FName AxisName;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    bool bAxisPositive;
    
    FTutorialControlIdentifier();
};

