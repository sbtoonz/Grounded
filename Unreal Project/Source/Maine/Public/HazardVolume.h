#pragma once
#include "CoreMinimal.h"
#include "Hazard.h"
#include "HazardVolume.generated.h"

class AVolume;
class AActor;

UCLASS()
class MAINE_API AHazardVolume : public AHazard {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditInstanceOnly)
    AVolume* Volume;
    
public:
    AHazardVolume();
protected:
    UFUNCTION()
    void OnVolumeEndOverlap(AActor* OverlappedActor, AActor* OtherActor);
    
    UFUNCTION()
    void OnVolumeBeginOverlap(AActor* OverlappedActor, AActor* OtherActor);
    
};

