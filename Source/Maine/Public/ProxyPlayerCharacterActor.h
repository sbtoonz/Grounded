#pragma once
#include "CoreMinimal.h"
#include "ProxyCharacterActor.h"
#include "ProxyPlayerCharacterActor.generated.h"

class UCreatureLODActor;

UCLASS(Blueprintable)
class MAINE_API UProxyPlayerCharacterActor : public UProxyCharacterActor {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    TWeakObjectPtr<UCreatureLODActor> CurrentPet;
    
    UProxyPlayerCharacterActor();
};

