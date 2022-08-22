#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintFunctionLibrary -FallbackName=BlueprintFunctionLibrary
#include "EItemProcessingState.h"
#include "ItemProcessingData.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayTags -ObjectName=GameplayTag -FallbackName=GameplayTag
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

