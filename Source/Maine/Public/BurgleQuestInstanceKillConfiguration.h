#pragma once
#include "CoreMinimal.h"
#include "BurgleQuestParameterValue.h"
#include "GameplayTagContainer.h"
#include "BurgleQuestInstanceKillConfiguration.generated.h"

USTRUCT(BlueprintType)
struct MAINE_API FBurgleQuestInstanceKillConfiguration : public FBurgleQuestParameterValue {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag CreatureTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MinCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MaxCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxCountProgress;
    
    FBurgleQuestInstanceKillConfiguration();
};

