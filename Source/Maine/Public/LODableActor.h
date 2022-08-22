#pragma once
#include "CoreMinimal.h"
#include "LODableActorInterface.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Actor -FallbackName=Actor
#include "LODableActor.generated.h"

class UActorLiteData;

UCLASS(Abstract)
class MAINE_API ALODableActor : public AActor, public ILODableActorInterface {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(VisibleDefaultsOnly)
    UActorLiteData* LiteData;
    
public:
    ALODableActor();
    
    // Fix for true pure virtual functions not being implemented
};

