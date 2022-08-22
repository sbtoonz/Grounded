#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Volume -FallbackName=Volume
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
#include "WaveSpawnRegionVolume.generated.h"

class AWaveSpawnRegionVolume;

UCLASS()
class MAINE_API AWaveSpawnRegionVolume : public AVolume {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FName Name;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    int32 Priority;
    
    UPROPERTY(EditAnywhere)
    uint32 FlyingCreatureWaveRegions;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool FlyingCreatureOnlyVolume;
    
    AWaveSpawnRegionVolume();
    UFUNCTION(BlueprintPure)
    bool IsPointInVolume(FVector Point);
    
    UFUNCTION(BlueprintCallable)
    static bool CanFlyingCreaturesCrossRegions(AWaveSpawnRegionVolume* RegionA, AWaveSpawnRegionVolume* RegionB);
    
};

