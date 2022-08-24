#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BTTaskNode.h"
#include "GameplayTagContainer.h"
#include "BTTask_PlayEmote.generated.h"

UCLASS(Blueprintable)
class MAINE_API UBTTask_PlayEmote : public UBTTaskNode {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag OverrideEmoteType;
    
    UBTTask_PlayEmote();
};

