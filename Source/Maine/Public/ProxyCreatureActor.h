#pragma once
#include "CoreMinimal.h"
#include "ProxyCharacterActor.h"
#include "HUDMarkerTargetInterface.h"
#include "ProxyCreatureActor.generated.h"

class UTamedCreatureData;

UCLASS(Blueprintable)
class MAINE_API UProxyCreatureActor : public UProxyCharacterActor, public IHUDMarkerTargetInterface {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTamedCreatureData* TameData;
    
    UProxyCreatureActor();
    
    // Fix for true pure virtual functions not being implemented
};

