#include "BurgleObjectiveProgress.h"
#include "Net/UnrealNetwork.h"

class UBurgleQuestInstance;

void UBurgleObjectiveProgress::SetMaxProgress(int32 InTarget) {
}

void UBurgleObjectiveProgress::InitializeProgress(UBurgleQuestInstance* InParentQuest, int32 InObjectiveIndex, int32 InMaxProgress) {
}

int32 UBurgleObjectiveProgress::GetProgress() const {
    return 0;
}

int32 UBurgleObjectiveProgress::GetMaxProgress() const {
    return 0;
}

void UBurgleObjectiveProgress::AddProgress(int32 Progress) {
}

void UBurgleObjectiveProgress::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UBurgleObjectiveProgress, ProgressCount);
    DOREPLIFETIME(UBurgleObjectiveProgress, MaxProgress);
}

UBurgleObjectiveProgress::UBurgleObjectiveProgress() {
    this->ProgressCount = 0;
    this->MaxProgress = 0;
}

