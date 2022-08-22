#pragma once
#include "CoreMinimal.h"
#include "LODableActorInterface.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Actor -FallbackName=Actor
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
#include "SimplePhysicsBase.generated.h"

class USimplePhysicsBaseLiteData;

UCLASS()
class MAINE_API ASimplePhysicsBase : public AActor, public ILODableActorInterface {
    GENERATED_BODY()
public:
    UPROPERTY(AdvancedDisplay, EditDefaultsOnly)
    float LODFullActorMaxDistance;
    
protected:
    UPROPERTY(VisibleDefaultsOnly)
    USimplePhysicsBaseLiteData* LiteData;
    
    UPROPERTY(BlueprintReadWrite)
    FVector PreviousVelocity;
    
    UPROPERTY(BlueprintReadWrite)
    float ImpactTimer;
    
public:
    ASimplePhysicsBase();
    
    // Fix for true pure virtual functions not being implemented
};

