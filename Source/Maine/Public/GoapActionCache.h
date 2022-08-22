#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "GoapActionCache.generated.h"

class UGoapActionCacheData;
class UGoapAction;

UCLASS()
class MAINE_API UGoapActionCache : public UObject {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(Transient)
    UGoapActionCacheData* CacheData;
    
    UPROPERTY(Transient)
    TArray<UGoapAction*> CachedActions;
    
public:
    UGoapActionCache();
};

