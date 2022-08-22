#pragma once
#include "CoreMinimal.h"
#include "ELootLocationType.h"
#include "ELootType.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=DataTableRowHandle -FallbackName=DataTableRowHandle
#include "ELootSpawnType.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
#include "LootData.generated.h"

class ASpawnedItem;
class AActor;
class USceneComponent;

USTRUCT(BlueprintType)
struct FLootData {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    ELootType Type;
    
    UPROPERTY(EditAnywhere)
    FDataTableRowHandle ItemData;
    
    UPROPERTY(EditAnywhere)
    TSoftClassPtr<ASpawnedItem> OverrideWorldActor;
    
    UPROPERTY(EditAnywhere)
    TSoftClassPtr<AActor> ActorToSpawn;
    
    UPROPERTY(EditAnywhere)
    int32 Count;
    
    UPROPERTY(EditAnywhere)
    float DropChance;
    
    UPROPERTY(BlueprintReadWrite, Transient)
    float DropChanceMultiplier;
    
    UPROPERTY(EditAnywhere)
    ELootSpawnType SpawnType;
    
    UPROPERTY(EditAnywhere)
    ELootLocationType LocationType;
    
    UPROPERTY(EditAnywhere)
    FName SocketName;
    
    UPROPERTY(Export)
    USceneComponent* SpawnPoint;
    
    UPROPERTY(Transient)
    FVector SpawnPointPreviousVelocity;
    
    UPROPERTY(EditAnywhere)
    uint8 IgnoreObjectiveMarkers: 1;
    
    UPROPERTY(EditDefaultsOnly)
    uint8 bDoUnderFloorCheckDuringLootSpawn: 1;
    
    UPROPERTY(EditDefaultsOnly)
    uint8 bSpawnOnDecay: 1;
    
    UPROPERTY(EditDefaultsOnly)
    uint8 bCheckConditionals: 1;
    
    MAINE_API FLootData();
};

