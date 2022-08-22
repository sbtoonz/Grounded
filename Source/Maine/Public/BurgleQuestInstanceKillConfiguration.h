#pragma once
#include "CoreMinimal.h"
#include "BurgleQuestParameterValue.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayTags -ObjectName=GameplayTag -FallbackName=GameplayTag
#include "BurgleQuestInstanceKillConfiguration.generated.h"

USTRUCT(BlueprintType)
struct MAINE_API FBurgleQuestInstanceKillConfiguration : public FBurgleQuestParameterValue {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    FGameplayTag CreatureTag;
    
    UPROPERTY(EditDefaultsOnly)
    int32 MinCount;
    
    UPROPERTY(EditDefaultsOnly)
    int32 MaxCount;
    
    UPROPERTY(EditDefaultsOnly)
    float MaxCountProgress;
    
    FBurgleQuestInstanceKillConfiguration();
};

