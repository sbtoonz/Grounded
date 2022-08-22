#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
#include "ItemSpawnData.generated.h"

class UVisualEffect;
class AActor;

UCLASS(Blueprintable)
class MAINE_API UItemSpawnData : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    UVisualEffect* SpawnVFX;
    
    UPROPERTY(EditDefaultsOnly)
    FVector SpawnOffset;
    
    UPROPERTY(EditDefaultsOnly)
    bool SimulatePhysicsOnSpawn;
    
    UPROPERTY(EditDefaultsOnly)
    bool CanProxyOnSpawn;
    
protected:
    UPROPERTY(EditDefaultsOnly)
    TArray<TSoftClassPtr<AActor>> BlueprintPool;
    
public:
    UItemSpawnData();
    UFUNCTION(BlueprintNativeEvent)
    TArray<TSoftClassPtr<AActor>> GetPossibleActors();
    
};

