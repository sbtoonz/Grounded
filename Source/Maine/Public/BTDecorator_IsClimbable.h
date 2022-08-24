#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/Decorators/BTDecorator_BlackboardBase.h"
#include "GameplayTagContainer.h"
#include "BTDecorator_IsClimbable.generated.h"

UCLASS(Blueprintable)
class MAINE_API UBTDecorator_IsClimbable : public UBTDecorator_BlackboardBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag Role;
    
public:
    UBTDecorator_IsClimbable();
};

