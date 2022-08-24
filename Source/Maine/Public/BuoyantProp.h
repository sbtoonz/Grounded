#pragma once
#include "CoreMinimal.h"
#include "LODableActorInterface.h"
#include "GameFramework/Actor.h"
#include "BuoyantProp.generated.h"

class UStaticMeshComponent;
class UActorLiteData;

UCLASS(Abstract, Blueprintable)
class MAINE_API ABuoyantProp : public AActor, public ILODableActorInterface {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bPhysicsAsleep: 1;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UActorLiteData* LiteData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UStaticMeshComponent* PropMesh;
    
public:
    ABuoyantProp();
    
    // Fix for true pure virtual functions not being implemented
};

