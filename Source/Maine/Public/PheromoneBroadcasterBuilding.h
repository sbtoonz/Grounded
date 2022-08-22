#pragma once
#include "CoreMinimal.h"
#include "WidgetBuilding.h"
#include "PowerReservoir.h"
#include "PheromoneBroadcasterBuilding.generated.h"

class UItem;
class UBuildingManagerComponent;
class ABuilding;

UCLASS(Abstract)
class MAINE_API APheromoneBroadcasterBuilding : public AWidgetBuilding {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    float InfluenceRange;
    
    UPROPERTY(EditDefaultsOnly)
    float PheromoneCapacity;
    
    UPROPERTY(EditDefaultsOnly)
    float ConsumptionRate;
    
    UPROPERTY(BlueprintReadWrite, Replicated, Transient)
    FPowerReservoir PowerReservoir;
    
    APheromoneBroadcasterBuilding();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
    UFUNCTION(BlueprintCallable)
    void TurnOff();
    
private:
    UFUNCTION()
    void TickConsume(float DeltaTime);
    
public:
    UFUNCTION(BlueprintCallable)
    void SetGatheringEnabled(bool bState);
    
    UFUNCTION(BlueprintCallable)
    void SetBuildingEnabled(bool bState);
    
    UFUNCTION(BlueprintPure)
    bool IsAcceptablePowerItem(const UItem* Item) const;
    
protected:
    UFUNCTION()
    void HandleBuildingUnderConstruction(UBuildingManagerComponent* Sender, ABuilding* Building);
    
    UFUNCTION()
    void HandleBuildingNotUnderConstruction(UBuildingManagerComponent* Sender, ABuilding* Building);
    
public:
    UFUNCTION(BlueprintPure)
    bool GetGatheringEnabled() const;
    
    UFUNCTION(BlueprintPure)
    bool GetBuildingEnabled() const;
    
    UFUNCTION(BlueprintPure)
    bool CanStart() const;
    
};

