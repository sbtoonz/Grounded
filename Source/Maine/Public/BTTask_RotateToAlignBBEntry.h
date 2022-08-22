#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=AIModule -ObjectName=BTTask_RotateToFaceBBEntry -FallbackName=BTTask_RotateToFaceBBEntry
#include "BTTask_RotateToAlignBBEntry.generated.h"

UCLASS()
class MAINE_API UBTTask_RotateToAlignBBEntry : public UBTTask_RotateToFaceBBEntry {
    GENERATED_BODY()
public:
    UBTTask_RotateToAlignBBEntry();
};

