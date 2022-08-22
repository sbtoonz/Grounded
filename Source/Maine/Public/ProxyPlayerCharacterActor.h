#pragma once
#include "CoreMinimal.h"
#include "ProxyCharacterActor.h"
#include "ProxyPlayerCharacterActor.generated.h"

class UCreatureLODActor;

UCLASS()
class MAINE_API UProxyPlayerCharacterActor : public UProxyCharacterActor {
    GENERATED_BODY()
public:
    UPROPERTY()
    TWeakObjectPtr<UCreatureLODActor> CurrentPet;
    
    UProxyPlayerCharacterActor();
};

