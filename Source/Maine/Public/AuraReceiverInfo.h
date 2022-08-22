#pragma once
#include "CoreMinimal.h"
#include "AuraInfoBase.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayTags -ObjectName=GameplayTag -FallbackName=GameplayTag
#include "AuraOverlapCounts.h"
#include "AuraReceiverInfo.generated.h"

class UAuraReceiverComponent;

USTRUCT(BlueprintType)
struct FAuraReceiverInfo : public FAuraInfoBase {
    GENERATED_BODY()
public:
    UPROPERTY()
    TMap<FGameplayTag, FAuraOverlapCounts> AuraTagOverlapCount;
    
    UPROPERTY(Export)
    UAuraReceiverComponent* Receiver;
    
    MAINE_API FAuraReceiverInfo();
};

