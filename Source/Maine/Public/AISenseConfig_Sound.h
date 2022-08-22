#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=AIModule -ObjectName=AISenseConfig -FallbackName=AISenseConfig
#include "AISenseConfig_Sound.generated.h"

class UAISense_Sound;

UCLASS(EditInlineNew)
class MAINE_API UAISenseConfig_Sound : public UAISenseConfig {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, Config, EditDefaultsOnly, NoClear)
    TSubclassOf<UAISense_Sound> Implementation;
    
    UPROPERTY(BlueprintReadOnly, Config, EditDefaultsOnly)
    float HearingRadius;
    
    UAISenseConfig_Sound();
};

