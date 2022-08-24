#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "Perception/AISenseConfig.h"
#include "AISenseConfig_Sound.generated.h"

class UAISense_Sound;

UCLASS(Blueprintable, EditInlineNew)
class MAINE_API UAISenseConfig_Sound : public UAISenseConfig {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, NoClear, meta=(AllowPrivateAccess=true))
    TSubclassOf<UAISense_Sound> Implementation;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float HearingRadius;
    
    UAISenseConfig_Sound();
};

