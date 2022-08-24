#pragma once
#include "CoreMinimal.h"
#include "ActorLiteData.h"
#include "SimplePhysicsBaseLiteData.generated.h"

UCLASS(Blueprintable)
class MAINE_API USimplePhysicsBaseLiteData : public UActorLiteData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float LODFullActorMaxDistance;
    
    USimplePhysicsBaseLiteData();
};

