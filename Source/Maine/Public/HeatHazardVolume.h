#pragma once
#include "CoreMinimal.h"
#include "HazardVolume.h"
#include "Chaos/ChaosEngineInterface.h"
#include "HeatEmitter.h"
#include "DamageData.h"
#include "HeatHazardVolume.generated.h"

class UHeatHazardComponent;

UCLASS(Blueprintable)
class MAINE_API AHeatHazardVolume : public AHazardVolume {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float HazardStartTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float HazardEndTime;
    
    UPROPERTY(EditAnywhere)
    TArray<TEnumAsByte<EPhysicalSurface>> HotSurfaceTypes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FHeatEmitter> HeatEmitters;
    
    AHeatHazardVolume();
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FDamageData GetDamageData() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    float EvaluateHeatHazard(UHeatHazardComponent* HazardComponent);
    
};

