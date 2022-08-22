#pragma once
#include "CoreMinimal.h"
#include "AuraReceiverComponent.h"
#include "PlayerScalingReceiverComponent.generated.h"

class UDefenseScalingData;

UCLASS(BlueprintType, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class MAINE_API UPlayerScalingReceiverComponent : public UAuraReceiverComponent {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    UDefenseScalingData* ScalingTable;
    
    UPlayerScalingReceiverComponent();
    UFUNCTION(BlueprintPure)
    float GetStunDurationMultiplier() const;
    
    UFUNCTION(BlueprintPure)
    float GetMaxStunMultiplier() const;
    
    UFUNCTION(BlueprintPure)
    float GetMaxHealthMultiplier() const;
    
    UFUNCTION(BlueprintPure)
    float GetDamageResistanceMultiplier() const;
    
};

