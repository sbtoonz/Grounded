#pragma once
#include "CoreMinimal.h"
#include "PushbackActorData.generated.h"

class AActor;

USTRUCT(BlueprintType)
struct MAINE_API FPushbackActorData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* Instigator;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TimeSincePushed;
    
    FPushbackActorData();
};

