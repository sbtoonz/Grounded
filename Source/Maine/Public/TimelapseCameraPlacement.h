#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Actor -FallbackName=Actor
#include "TimelapseCameraPlacement.generated.h"

class USplineComponent;

UCLASS()
class MAINE_API ATimelapseCameraPlacement : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(Export, VisibleAnywhere)
    USplineComponent* Spline;
    
    ATimelapseCameraPlacement();
    UFUNCTION(BlueprintCallable)
    void Start(AActor* InCameraActor);
    
    UFUNCTION()
    void OnTimelapseChange(bool Active);
    
    UFUNCTION(BlueprintCallable)
    void End();
    
};

