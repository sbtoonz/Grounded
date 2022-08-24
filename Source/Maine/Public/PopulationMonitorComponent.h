#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "PopulationMonitorComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class MAINE_API UPopulationMonitorComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPopulationMonitorComponent();
protected:
    UFUNCTION(BlueprintCallable)
    void OnHourChanged(int32 DayHour, int32 Day);
    
public:
    UFUNCTION(BlueprintCallable)
    void DumpSamplesToFile();
    
};

