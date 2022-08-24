#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "TimelapseCameraPlacement.generated.h"

class USplineComponent;

UCLASS(Blueprintable)
class MAINE_API ATimelapseCameraPlacement : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    USplineComponent* Spline;
    
    ATimelapseCameraPlacement();
    UFUNCTION(BlueprintCallable)
    void Start(AActor* InCameraActor);
    
    UFUNCTION(BlueprintCallable)
    void OnTimelapseChange(bool Active);
    
    UFUNCTION(BlueprintCallable)
    void End();
    
};

