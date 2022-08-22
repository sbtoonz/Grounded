#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "PersistentInterface.h"
#include "OverTimeEffect.generated.h"

class USurvivalDamageType;

UCLASS(BlueprintType)
class MAINE_API UOverTimeEffect : public UObject, public IPersistentInterface {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, Replicated)
    bool bIsEnabled;
    
    UPROPERTY(BlueprintReadWrite, Replicated)
    float MinimumValue;
    
    UPROPERTY(BlueprintReadWrite, Replicated)
    float MaximumValue;
    
    UPROPERTY(BlueprintReadWrite, Replicated)
    TSubclassOf<USurvivalDamageType> DamageType;
    
    UPROPERTY(BlueprintReadWrite, Replicated)
    float Rate;
    
    UPROPERTY(BlueprintReadWrite, Replicated)
    float TickInterval;
    
    UPROPERTY(BlueprintReadWrite, Replicated)
    float Duration;
    
    UPROPERTY(BlueprintReadOnly)
    float ElapsedTime;
    
    UPROPERTY(BlueprintReadOnly)
    float TickTimer;
    
    UOverTimeEffect();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
    UFUNCTION(BlueprintPure)
    float GetTimeRemaining() const;
    
    UFUNCTION(BlueprintPure)
    bool GetIsExpired() const;
    
    
    // Fix for true pure virtual functions not being implemented
};

