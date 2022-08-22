#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ActorComponent -FallbackName=ActorComponent
#include "PopulationMonitorComponent.generated.h"

UCLASS(BlueprintType, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class MAINE_API UPopulationMonitorComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPopulationMonitorComponent();
protected:
    UFUNCTION()
    void OnHourChanged(int32 DayHour, int32 Day);
    
public:
    UFUNCTION(BlueprintCallable)
    void DumpSamplesToFile();
    
};

