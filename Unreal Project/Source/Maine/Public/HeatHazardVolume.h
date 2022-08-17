#pragma once
#include "CoreMinimal.h"
#include "Chaos/ChaosEngineInterface.h"
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
    TArray<FHeatEmitter> HeatEmitters;
    
    AHeatHazardVolume();
    UFUNCTION(BlueprintPure)
    FDamageData GetDamageData() const;
    
    UFUNCTION(BlueprintNativeEvent)
    float EvaluateHeatHazard(UHeatHazardComponent* HazardComponent);
    
};

