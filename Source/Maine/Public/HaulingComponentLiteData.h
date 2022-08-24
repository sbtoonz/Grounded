#pragma once
#include "CoreMinimal.h"
#include "ComponentLiteData.h"
#include "HaulingComponentLiteData.generated.h"

UCLASS(Blueprintable)
class MAINE_API UHaulingComponentLiteData : public UComponentLiteData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bHaulAnything;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Capacity;
    
    UHaulingComponentLiteData();
};

