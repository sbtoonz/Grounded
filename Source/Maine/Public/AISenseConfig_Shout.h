#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=AIModule -ObjectName=AISenseConfig -FallbackName=AISenseConfig
#include "AISenseConfig_Shout.generated.h"

class UAISense_Shout;

UCLASS(EditInlineNew)
class MAINE_API UAISenseConfig_Shout : public UAISenseConfig {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, Config, EditDefaultsOnly, NoClear)
    TSubclassOf<UAISense_Shout> Implementation;
    
    UPROPERTY(BlueprintReadOnly, Config, EditDefaultsOnly)
    float ShoutHearingRadius;
    
    UAISenseConfig_Shout();
};

