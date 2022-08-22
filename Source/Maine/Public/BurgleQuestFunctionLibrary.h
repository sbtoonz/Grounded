#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintFunctionLibrary -FallbackName=BlueprintFunctionLibrary
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayTags -ObjectName=GameplayTag -FallbackName=GameplayTag
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=FloatRange -FallbackName=FloatRange
#include "BurgleQuestFunctionLibrary.generated.h"

class UObject;
class UBurgleObjectiveSimple;
class ABurgleQuestOptionActor;
class UBurgleQuestInstance;
class UBurgleObjectiveProgress;

UCLASS(BlueprintType)
class MAINE_API UBurgleQuestFunctionLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UBurgleQuestFunctionLibrary();
    UFUNCTION(BlueprintCallable)
    static void LogBurgleQuestWarning(const FString& Message);
    
    UFUNCTION(BlueprintCallable)
    static void LogBurgleQuestLog(const FString& Message);
    
    UFUNCTION(BlueprintCallable)
    static void LogBurgleQuestError(const FString& Message);
    
    UFUNCTION(BlueprintPure)
    static bool IsBurgleQuestProgressAtLeast(const UObject* WorldContextObject, float Progress);
    
    UFUNCTION(BlueprintPure)
    static ABurgleQuestOptionActor* GetRandomQuestOption(const UObject* WorldContextObject, const FGameplayTag& Tag);
    
    UFUNCTION(BlueprintCallable)
    static UBurgleObjectiveSimple* CreateBurgleQuestSimpleObjective(UBurgleQuestInstance* ParentQuest, int32 ObjectiveIndex);
    
    UFUNCTION(BlueprintCallable)
    static UBurgleObjectiveProgress* CreateBurgleQuestProgressObjective(UBurgleQuestInstance* ParentQuest, int32 ObjectiveIndex, int32 MaxProgress);
    
    UFUNCTION(BlueprintPure)
    static int32 CalculateBurgleQuestTargetCount(const UObject* WorldContextObject, FFloatRange AvailableProgressRange, int32 MinCount, int32 MaxCount, float MaxCountAt);
    
};

