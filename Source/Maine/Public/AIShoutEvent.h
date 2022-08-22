#pragma once
#include "CoreMinimal.h"
#include "AIShoutEvent.generated.h"

class AActor;

USTRUCT(BlueprintType)
struct MAINE_API FAIShoutEvent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    AActor* Shouter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    AActor* Target;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FName Tag;
    
    FAIShoutEvent();
};

