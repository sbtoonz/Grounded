#pragma once
#include "CoreMinimal.h"
#include "PendingWaveSpawn.generated.h"

class ASurvivalCharacter;
class AWaveSpawnTarget;

USTRUCT()
struct FPendingWaveSpawn {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    TArray<TSoftClassPtr<ASurvivalCharacter>> Spawns;
    
    UPROPERTY(EditDefaultsOnly)
    AWaveSpawnTarget* SpawnTarget;
    
    UPROPERTY(EditDefaultsOnly)
    int32 SpawnRequestID;
    
    UPROPERTY()
    bool SpawnRequestReceived;
    
    UPROPERTY()
    bool SpawnRequestFailed;
    
    UPROPERTY()
    int32 WaveStartRequestID;
    
    UPROPERTY()
    bool WaveStartRequestReceived;
    
    UPROPERTY()
    bool WaveStartRequestFailed;
    
    UPROPERTY()
    float MaxMoveSpeedForWave;
    
    MAINE_API FPendingWaveSpawn();
};

