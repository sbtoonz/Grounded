#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "Perception/AISenseConfig.h"
#include "AISenseConfig_Shout.generated.h"

class UAISense_Shout;

UCLASS(Blueprintable, EditInlineNew)
class MAINE_API UAISenseConfig_Shout : public UAISenseConfig {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, NoClear, meta=(AllowPrivateAccess=true))
    TSubclassOf<UAISense_Shout> Implementation;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ShoutHearingRadius;
    
    UAISenseConfig_Shout();
};

