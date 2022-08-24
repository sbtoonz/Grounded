#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "ProxyActor.h"
#include "ProxyColorCollectibleActor.generated.h"

class UGlobalColorTheme;

UCLASS(Blueprintable)
class MAINE_API UProxyColorCollectibleActor : public UProxyActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UGlobalColorTheme> UnlockedTheme;
    
    UProxyColorCollectibleActor();
};

