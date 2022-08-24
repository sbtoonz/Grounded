#pragma once
#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "EBuildingPowerState.h"
#include "BuildingPowerId.h"
#include "PoweredBuilding.generated.h"

UINTERFACE(Blueprintable, MinimalAPI)
class UPoweredBuilding : public UInterface {
    GENERATED_BODY()
};

class IPoweredBuilding : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool IsSwitchActive() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool IsSwitch() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool IsPowerSource() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool IsPowerReceiver() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool HasValidPowerId() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    float GetPowerValue() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    EBuildingPowerState GetPowerState() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    FBuildingPowerId GetBuildingPowerId() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool CanJoinPowerNetwork() const;
    
};

