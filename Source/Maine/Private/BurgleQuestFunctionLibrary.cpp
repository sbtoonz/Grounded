#include "BurgleQuestFunctionLibrary.h"

class UBurgleQuestInstance;
class UObject;
class UBurgleObjectiveSimple;
class ABurgleQuestOptionActor;
class UBurgleObjectiveProgress;

void UBurgleQuestFunctionLibrary::LogBurgleQuestWarning(const FString& Message) {
}

void UBurgleQuestFunctionLibrary::LogBurgleQuestLog(const FString& Message) {
}

void UBurgleQuestFunctionLibrary::LogBurgleQuestError(const FString& Message) {
}

bool UBurgleQuestFunctionLibrary::IsBurgleQuestProgressAtLeast(const UObject* WorldContextObject, float Progress) {
    return false;
}

ABurgleQuestOptionActor* UBurgleQuestFunctionLibrary::GetRandomQuestOption(const UObject* WorldContextObject, const FGameplayTag& Tag) {
    return NULL;
}

UBurgleObjectiveSimple* UBurgleQuestFunctionLibrary::CreateBurgleQuestSimpleObjective(UBurgleQuestInstance* ParentQuest, int32 ObjectiveIndex) {
    return NULL;
}

UBurgleObjectiveProgress* UBurgleQuestFunctionLibrary::CreateBurgleQuestProgressObjective(UBurgleQuestInstance* ParentQuest, int32 ObjectiveIndex, int32 MaxProgress) {
    return NULL;
}

int32 UBurgleQuestFunctionLibrary::CalculateBurgleQuestTargetCount(const UObject* WorldContextObject, FFloatRange AvailableProgressRange, int32 MinCount, int32 MaxCount, float MaxCountAt) {
    return 0;
}

UBurgleQuestFunctionLibrary::UBurgleQuestFunctionLibrary() {
}

