#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=AIModule -ObjectName=AIDataProvider -FallbackName=AIDataProvider
#include "AIDataProvider_WanderRange.generated.h"

UCLASS(CollapseCategories, EditInlineNew)
class MAINE_API UAIDataProvider_WanderRange : public UAIDataProvider {
    GENERATED_BODY()
public:
    UPROPERTY(Transient)
    float Value;
    
    UAIDataProvider_WanderRange();
};

