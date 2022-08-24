#pragma once
#include "CoreMinimal.h"
#include "ProxyStandInActor.h"
#include "FlySwimCharacterWiggle.h"
#include "ProxyCharacterStandInActor.generated.h"

UCLASS(Abstract, Blueprintable)
class MAINE_API AProxyCharacterStandInActor : public AProxyStandInActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    FFlySwimCharacterWiggle WiggleData;
    
public:
    AProxyCharacterStandInActor();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
};

