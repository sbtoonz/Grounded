#pragma once
#include "CoreMinimal.h"
#include "AuraReceiverComponent.h"
#include "PlayerScalingReceiverComponent.generated.h"

class UDefenseScalingData;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class MAINE_API UPlayerScalingReceiverComponent : public UAuraReceiverComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDefenseScalingData* ScalingTable;
    
    UPlayerScalingReceiverComponent();
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetStunDurationMultiplier() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetMaxStunMultiplier() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetMaxHealthMultiplier() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetDamageResistanceMultiplier() const;
    
};

