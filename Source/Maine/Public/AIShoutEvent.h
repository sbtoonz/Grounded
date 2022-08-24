#pragma once
#include "CoreMinimal.h"
#include "AIShoutEvent.generated.h"

class AActor;

USTRUCT(BlueprintType)
struct MAINE_API FAIShoutEvent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* Shouter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* Target;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName Tag;
    
    FAIShoutEvent();
};

