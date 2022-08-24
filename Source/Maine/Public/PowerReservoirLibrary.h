#pragma once
#include "CoreMinimal.h"
#include "PowerReservoir.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "GameplayTagContainer.h"
#include "PowerReservoirLibrary.generated.h"

UCLASS(Blueprintable)
class MAINE_API UPowerReservoirLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UPowerReservoirLibrary();
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool UsesPowerType(const FPowerReservoir& Reservoir, FGameplayTag PowerType);
    
    UFUNCTION(BlueprintCallable)
    static bool RemoveCharges(UPARAM(Ref) FPowerReservoir& Reservoir, float Count);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsValid(const FPowerReservoir& Reservoir);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsFull(const FPowerReservoir& Reservoir);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsEmpty(const FPowerReservoir& Reservoir);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static float GetPowerPercentage(const FPowerReservoir& Reservoir);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static float GetEmptySpace(const FPowerReservoir& Reservoir);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FGameplayTag GetCurrentPowerType(const FPowerReservoir& Reservoir);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static float GetCurrentCharges(const FPowerReservoir& Reservoir);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static float GetCapacity(const FPowerReservoir& Reservoir);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FGameplayTag GetAllowedPowerType(const FPowerReservoir& Reservoir);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool CanAcceptPowerType(const FPowerReservoir& Reservoir, FGameplayTag PowerType);
    
    UFUNCTION(BlueprintCallable)
    static bool AddCharges(UPARAM(Ref) FPowerReservoir& Reservoir, FGameplayTag PowerTag, float Count);
    
};

