#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "ItemProcessingData.h"
#include "GameplayTagContainer.h"
#include "EItemProcessingState.h"
#include "ItemProcessingDataFunctionLibrary.generated.h"

UCLASS(Blueprintable)
class MAINE_API UItemProcessingDataFunctionLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UItemProcessingDataFunctionLibrary();
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsStarted(const FItemProcessingData& Data);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsProcessingTimeFinished(const FItemProcessingData& Data);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static float GetTotalProcessingTime(const FItemProcessingData& Data);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static float GetRemainingProcessingTime(const FItemProcessingData& Data);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static float GetProgress(const FItemProcessingData& Data);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FGameplayTag GetProcessingType(const FItemProcessingData& Data);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static EItemProcessingState GetProcessingState(const FItemProcessingData& Data);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static float GetElapsedProcessingTime(const FItemProcessingData& Data);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool CanProcess(const FItemProcessingData& Data);
    
};

