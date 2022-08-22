#pragma once
#include "CoreMinimal.h"
#include "ActorLiteData.h"
#include "SimplePhysicsBaseLiteData.generated.h"

UCLASS()
class MAINE_API USimplePhysicsBaseLiteData : public UActorLiteData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    float LODFullActorMaxDistance;
    
    USimplePhysicsBaseLiteData();
};

