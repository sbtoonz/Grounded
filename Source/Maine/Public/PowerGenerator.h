#pragma once
#include "CoreMinimal.h"
#include "Building.h"
#include "PowerReservoir.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayTags -ObjectName=GameplayTag -FallbackName=GameplayTag
//CROSS-MODULE INCLUDE V2: -ModuleName=OEIText -ObjectName=LocString -FallbackName=LocString
#include "PowerGenerator.generated.h"

UCLASS(Abstract)
class MAINE_API APowerGenerator : public ABuilding {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(Replicated, Transient)
    FPowerReservoir PowerReservoir;
    
    UPROPERTY(EditDefaultsOnly)
    int32 MaxPowerCapacity;
    
    UPROPERTY(EditDefaultsOnly)
    FGameplayTag PowerType;
    
    UPROPERTY(EditDefaultsOnly)
    int32 HoursPerTick;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FLocString ItemChargeText;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FLocString UseText;
    
public:
    APowerGenerator();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
private:
    UFUNCTION()
    void TickUpdatePower(float DeltaTime);
    
};

