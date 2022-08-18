#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "GameplayTagContainer.h"
#include "ItemProcessingData.h"
#include "EItemProcessingState.h"
#include "ItemProcessingDataFunctionLibrary.generated.h"

UCLASS(BlueprintType)
class MAINE_API UItemProcessingDataFunctionLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UItemProcessingDataFunctionLibrary();
    UFUNCTION(BlueprintPure)
    static bool IsStarted(const FItemProcessingData& Data);
    
    UFUNCTION(BlueprintPure)
    static bool IsProcessingTimeFinished(const FItemProcessingData& Data);
    
    UFUNCTION(BlueprintPure)
    static float GetTotalProcessingTime(const FItemProcessingData& Data);
    
    UFUNCTION(BlueprintPure)
    static float GetRemainingProcessingTime(const FItemProcessingData& Data);
    
    UFUNCTION(BlueprintPure)
    static float GetProgress(const FItemProcessingData& Data);
    
    UFUNCTION(BlueprintPure)
    static FGameplayTag GetProcessingType(const FItemProcessingData& Data);
    
    UFUNCTION(BlueprintPure)
    static EItemProcessingState GetProcessingState(const FItemProcessingData& Data);
    
    UFUNCTION(BlueprintPure)
    static float GetElapsedProcessingTime(const FItemProcessingData& Data);
    
    UFUNCTION(BlueprintPure)
    static bool CanProcess(const FItemProcessingData& Data);
    
};

