#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintFunctionLibrary -FallbackName=BlueprintFunctionLibrary
#include "PowerReservoir.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayTags -ObjectName=GameplayTag -FallbackName=GameplayTag
#include "PowerReservoirLibrary.generated.h"

UCLASS(BlueprintType)
class MAINE_API UPowerReservoirLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UPowerReservoirLibrary();
    UFUNCTION(BlueprintPure)
    static bool UsesPowerType(const FPowerReservoir& Reservoir, FGameplayTag PowerType);
    
    UFUNCTION(BlueprintCallable)
    static bool RemoveCharges(UPARAM(Ref) FPowerReservoir& Reservoir, float Count);
    
    UFUNCTION(BlueprintPure)
    static bool IsValid(const FPowerReservoir& Reservoir);
    
    UFUNCTION(BlueprintPure)
    static bool IsFull(const FPowerReservoir& Reservoir);
    
    UFUNCTION(BlueprintPure)
    static bool IsEmpty(const FPowerReservoir& Reservoir);
    
    UFUNCTION(BlueprintPure)
    static float GetPowerPercentage(const FPowerReservoir& Reservoir);
    
    UFUNCTION(BlueprintPure)
    static float GetEmptySpace(const FPowerReservoir& Reservoir);
    
    UFUNCTION(BlueprintPure)
    static FGameplayTag GetCurrentPowerType(const FPowerReservoir& Reservoir);
    
    UFUNCTION(BlueprintPure)
    static float GetCurrentCharges(const FPowerReservoir& Reservoir);
    
    UFUNCTION(BlueprintPure)
    static float GetCapacity(const FPowerReservoir& Reservoir);
    
    UFUNCTION(BlueprintPure)
    static FGameplayTag GetAllowedPowerType(const FPowerReservoir& Reservoir);
    
    UFUNCTION(BlueprintPure)
    static bool CanAcceptPowerType(const FPowerReservoir& Reservoir, FGameplayTag PowerType);
    
    UFUNCTION(BlueprintCallable)
    static bool AddCharges(UPARAM(Ref) FPowerReservoir& Reservoir, FGameplayTag PowerTag, float Count);
    
};

