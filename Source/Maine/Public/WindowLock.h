#pragma once
#include "CoreMinimal.h"
#include "WindowLock.generated.h"

class AActor;
class UWindowWidget;

USTRUCT(BlueprintType)
struct FWindowLock {
    GENERATED_BODY()
public:
    UPROPERTY()
    TSoftClassPtr<UWindowWidget> Window;
    
    UPROPERTY()
    TWeakObjectPtr<AActor> Locker;
    
    MAINE_API FWindowLock();
};

