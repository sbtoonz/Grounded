#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "ProxyActor.h"
#include "ProxyColorCollectibleActor.generated.h"

class UGlobalColorTheme;

UCLASS()
class MAINE_API UProxyColorCollectibleActor : public UProxyActor {
    GENERATED_BODY()
public:
    UPROPERTY()
    TSubclassOf<UGlobalColorTheme> UnlockedTheme;
    
    UProxyColorCollectibleActor();
};

