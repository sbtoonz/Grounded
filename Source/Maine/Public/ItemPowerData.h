#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayTags -ObjectName=GameplayTag -FallbackName=GameplayTag
#include "ItemPowerConversion.h"
#include "EInteractAnimType.h"
#include "ItemPowerData.generated.h"

USTRUCT(BlueprintType)
struct FItemPowerData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    uint8 UsesPower: 1;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    uint8 AlwaysOn: 1;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    uint8 bConsumesPowerDuringRest: 1;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    uint8 bCanBeUsedInWater: 1;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FGameplayTag UsesPowerType;
    
    UPROPERTY(EditDefaultsOnly)
    TArray<FItemPowerConversion> PowerConversions;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FGameplayTag ProvidesPower;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float TotalPowerTimeInHours;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float TotalCharges;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    EInteractAnimType ChargingAnimType;
    
    MAINE_API FItemPowerData();
};

