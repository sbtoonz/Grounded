#pragma once
#include "CoreMinimal.h"
#include "ProxyStandInActor.h"
#include "FlySwimCharacterWiggle.h"
#include "ProxyCharacterStandInActor.generated.h"

UCLASS(Abstract)
class MAINE_API AProxyCharacterStandInActor : public AProxyStandInActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(Replicated)
    FFlySwimCharacterWiggle WiggleData;
    
public:
    AProxyCharacterStandInActor();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
};

