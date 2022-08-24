#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Volume.h"
#include "UObject/NoExportTypes.h"
#include "WaveSpawnRegionVolume.generated.h"

class AWaveSpawnRegionVolume;

UCLASS(Blueprintable)
class MAINE_API AWaveSpawnRegionVolume : public AVolume {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName Name;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Priority;
    
    UPROPERTY(EditAnywhere)
    uint32 FlyingCreatureWaveRegions;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool FlyingCreatureOnlyVolume;
    
    AWaveSpawnRegionVolume();
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsPointInVolume(FVector Point);
    
    UFUNCTION(BlueprintCallable)
    static bool CanFlyingCreaturesCrossRegions(AWaveSpawnRegionVolume* RegionA, AWaveSpawnRegionVolume* RegionB);
    
};

