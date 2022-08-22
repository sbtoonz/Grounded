#pragma once
#include "CoreMinimal.h"
#include "ComponentLiteData.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayTags -ObjectName=GameplayTag -FallbackName=GameplayTag
#include "ColonyMemberComponentLiteData.generated.h"

UCLASS(BlueprintType)
class MAINE_API UColonyMemberComponentLiteData : public UComponentLiteData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    FGameplayTag DefaultColonyTag;
    
    UColonyMemberComponentLiteData();
};

