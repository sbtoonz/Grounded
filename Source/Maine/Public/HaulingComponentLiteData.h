#pragma once
#include "CoreMinimal.h"
#include "ComponentLiteData.h"
#include "HaulingComponentLiteData.generated.h"

UCLASS(BlueprintType)
class MAINE_API UHaulingComponentLiteData : public UComponentLiteData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    bool bHaulAnything;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    int32 Capacity;
    
    UHaulingComponentLiteData();
};

