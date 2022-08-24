#pragma once
#include "CoreMinimal.h"
#include "Hazard.h"
#include "HazardVolume.generated.h"

class AVolume;
class AActor;

UCLASS(Blueprintable)
class MAINE_API AHazardVolume : public AHazard {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AVolume* Volume;
    
public:
    AHazardVolume();
protected:
    UFUNCTION(BlueprintCallable)
    void OnVolumeEndOverlap(AActor* OverlappedActor, AActor* OtherActor);
    
    UFUNCTION(BlueprintCallable)
    void OnVolumeBeginOverlap(AActor* OverlappedActor, AActor* OtherActor);
    
};

