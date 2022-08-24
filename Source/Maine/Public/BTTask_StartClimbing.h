#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/Tasks/BTTask_BlackboardBase.h"
#include "GameplayTagContainer.h"
#include "BTTask_StartClimbing.generated.h"

UCLASS(Blueprintable)
class MAINE_API UBTTask_StartClimbing : public UBTTask_BlackboardBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag Role;
    
    UBTTask_StartClimbing();
};

