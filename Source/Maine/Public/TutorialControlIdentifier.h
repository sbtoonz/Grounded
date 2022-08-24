#pragma once
#include "CoreMinimal.h"
#include "TutorialControlIdentifier.generated.h"

USTRUCT(BlueprintType)
struct MAINE_API FTutorialControlIdentifier {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName AxisName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAxisPositive;
    
    FTutorialControlIdentifier();
};

