#pragma once
#include "CoreMinimal.h"
#include "LODableActorInterface.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Actor -FallbackName=Actor
#include "BuoyantProp.generated.h"

class UActorLiteData;
class UStaticMeshComponent;

UCLASS(Abstract)
class MAINE_API ABuoyantProp : public AActor, public ILODableActorInterface {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite)
    uint8 bPhysicsAsleep: 1;
    
protected:
    UPROPERTY(VisibleDefaultsOnly)
    UActorLiteData* LiteData;
    
    UPROPERTY(Export)
    UStaticMeshComponent* PropMesh;
    
public:
    ABuoyantProp();
    
    // Fix for true pure virtual functions not being implemented
};

