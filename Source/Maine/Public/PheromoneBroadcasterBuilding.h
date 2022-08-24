#pragma once
#include "CoreMinimal.h"
#include "WidgetBuilding.h"
#include "PowerReservoir.h"
#include "PheromoneBroadcasterBuilding.generated.h"

class UBuildingManagerComponent;
class UItem;
class ABuilding;

UCLASS(Abstract, Blueprintable)
class MAINE_API APheromoneBroadcasterBuilding : public AWidgetBuilding {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float InfluenceRange;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PheromoneCapacity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ConsumptionRate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    FPowerReservoir PowerReservoir;
    
    APheromoneBroadcasterBuilding();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
    UFUNCTION(BlueprintCallable)
    void TurnOff();
    
private:
    UFUNCTION(BlueprintCallable)
    void TickConsume(float DeltaTime);
    
public:
    UFUNCTION(BlueprintCallable)
    void SetGatheringEnabled(bool bState);
    
    UFUNCTION(BlueprintCallable)
    void SetBuildingEnabled(bool bState);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsAcceptablePowerItem(const UItem* Item) const;
    
protected:
    UFUNCTION(BlueprintCallable)
    void HandleBuildingUnderConstruction(UBuildingManagerComponent* Sender, ABuilding* Building);
    
    UFUNCTION(BlueprintCallable)
    void HandleBuildingNotUnderConstruction(UBuildingManagerComponent* Sender, ABuilding* Building);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetGatheringEnabled() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetBuildingEnabled() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CanStart() const;
    
};

