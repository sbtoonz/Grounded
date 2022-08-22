#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Interface -FallbackName=Interface
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
    UFUNCTION(BlueprintNativeEvent)
    bool IsSwitchActive() const;
    
    UFUNCTION(BlueprintNativeEvent)
    bool IsSwitch() const;
    
    UFUNCTION(BlueprintNativeEvent)
    bool IsPowerSource() const;
    
    UFUNCTION(BlueprintNativeEvent)
    bool IsPowerReceiver() const;
    
    UFUNCTION(BlueprintNativeEvent)
    bool HasValidPowerId() const;
    
    UFUNCTION(BlueprintNativeEvent)
    float GetPowerValue() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    EBuildingPowerState GetPowerState() const;
    
    UFUNCTION(BlueprintNativeEvent)
    FBuildingPowerId GetBuildingPowerId() const;
    
    UFUNCTION(BlueprintNativeEvent)
    bool CanJoinPowerNetwork() const;
    
};

