#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=PhysicsCore -ObjectName=EPhysicalSurface -FallbackName=EPhysicalSurface
#include "HazardVolume.h"
#include "HeatEmitter.h"
#include "DamageData.h"
#include "HeatHazardVolume.generated.h"

class UHeatHazardComponent;

UCLASS()
class MAINE_API AHeatHazardVolume : public AHazardVolume {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float HazardStartTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float HazardEndTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<TEnumAsByte<EPhysicalSurface>> HotSurfaceTypes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<FHeatEmitter> HeatEmitters;
    
    AHeatHazardVolume();
    UFUNCTION(BlueprintPure)
    FDamageData GetDamageData() const;
    
    UFUNCTION(BlueprintNativeEvent)
    float EvaluateHeatHazard(UHeatHazardComponent* HazardComponent);
    
};

