#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=PhysicsCore -ObjectName=EPhysicalSurface -FallbackName=EPhysicalSurface
#include "EBehaviorType.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=DataAsset -FallbackName=DataAsset
#include "BehaviorMovementConfig.h"
#include "MovementConfig.h"
#include "GlobalAIData.generated.h"

class UBlackboardData;
class UEnvQuery;

UCLASS(BlueprintType, Const)
class MAINE_API UGlobalAIData : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    UEnvQuery* StaticObstacleTargetLocationQuery;
    
    UPROPERTY(EditAnywhere)
    FMovementConfig DefaultMoveConfig;
    
    UPROPERTY(EditAnywhere)
    TMap<EBehaviorType, FBehaviorMovementConfig> MoveToConfig;
    
    UPROPERTY(EditAnywhere)
    UBlackboardData* DefaultBlackboard;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float FootstepNoiseCooldown;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float NoiseExpirationTime;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float NearPartyDistance;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float SenseThreatDecayTime;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float CombatThreatDecayTime;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float TargetAggressionDecayTime;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float ThreatDecayPerSecond;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    TArray<TEnumAsByte<EPhysicalSurface>> BurrowSurfaces;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    int32 MaxTokens;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    int32 MaxBuildingTokens;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float BuildingTokenCooldownModifier;
    
    UGlobalAIData();
};

