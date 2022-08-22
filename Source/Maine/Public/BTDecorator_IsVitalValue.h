#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayTags -ObjectName=GameplayTag -FallbackName=GameplayTag
//CROSS-MODULE INCLUDE V2: -ModuleName=AIModule -ObjectName=BTDecorator -FallbackName=BTDecorator
#include "BTDecorator_IsVitalValue.generated.h"

UCLASS()
class MAINE_API UBTDecorator_IsVitalValue : public UBTDecorator {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere)
    FGameplayTag Semantic;
    
    UPROPERTY(EditAnywhere)
    float TargetValue;
    
public:
    UBTDecorator_IsVitalValue();
};

