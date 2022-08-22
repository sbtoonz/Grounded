#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=AIModule -ObjectName=EnvQueryTest -FallbackName=EnvQueryTest
//CROSS-MODULE INCLUDE V2: -ModuleName=AIModule -ObjectName=AIDataProviderBoolValue -FallbackName=AIDataProviderBoolValue
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector2D -FallbackName=Vector2D
#include "EnvQueryTest_WalkWaveReachable.generated.h"

UCLASS()
class MAINE_API UEnvQueryTest_WalkWaveReachable : public UEnvQueryTest {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditDefaultsOnly)
    FAIDataProviderBoolValue IsFlyingCreatureWave;
    
    UPROPERTY(EditDefaultsOnly)
    bool bUseVolumes;
    
    UPROPERTY(EditDefaultsOnly)
    FVector PondLocation;
    
    UPROPERTY(EditDefaultsOnly)
    FVector PondRightVector;
    
    UPROPERTY(EditDefaultsOnly)
    FVector2D PondMinMaxY;
    
public:
    UEnvQueryTest_WalkWaveReachable();
};

