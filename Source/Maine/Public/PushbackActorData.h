#pragma once
#include "CoreMinimal.h"
#include "PushbackActorData.generated.h"

class AActor;

USTRUCT()
struct MAINE_API FPushbackActorData {
    GENERATED_BODY()
public:
    UPROPERTY()
    AActor* Instigator;
    
    UPROPERTY()
    float TimeSincePushed;
    
    FPushbackActorData();
};

