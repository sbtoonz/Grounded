#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ActorComponent -FallbackName=ActorComponent
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
#include "TelemetryComponent.generated.h"

UCLASS(ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class MAINE_API UTelemetryComponent : public UActorComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere)
    float MinMoveTelemetry;
    
    UPROPERTY(EditAnywhere)
    bool bEnableTelemetryTick;
    
public:
    UTelemetryComponent();
protected:
    UFUNCTION()
    void OnPlayerMove(const FVector& Location, const FString& MapName);
    
};

