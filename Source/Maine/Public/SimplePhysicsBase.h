#pragma once
#include "CoreMinimal.h"
#include "LODableActorInterface.h"
#include "GameFramework/Actor.h"
#include "UObject/NoExportTypes.h"
#include "SimplePhysicsBase.generated.h"

class USimplePhysicsBaseLiteData;

UCLASS(Blueprintable)
class MAINE_API ASimplePhysicsBase : public AActor, public ILODableActorInterface {
    GENERATED_BODY()
public:
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float LODFullActorMaxDistance;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USimplePhysicsBaseLiteData* LiteData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector PreviousVelocity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ImpactTimer;
    
public:
    ASimplePhysicsBase();
    
    // Fix for true pure virtual functions not being implemented
};

