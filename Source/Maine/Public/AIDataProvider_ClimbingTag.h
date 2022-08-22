#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=AIModule -ObjectName=AIDataProvider -FallbackName=AIDataProvider
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayTags -ObjectName=GameplayTag -FallbackName=GameplayTag
#include "AIDataProvider_ClimbingTag.generated.h"

UCLASS(CollapseCategories, EditInlineNew)
class MAINE_API UAIDataProvider_ClimbingTag : public UAIDataProvider {
    GENERATED_BODY()
public:
    UPROPERTY(Transient)
    FGameplayTag Value;
    
    UAIDataProvider_ClimbingTag();
};

