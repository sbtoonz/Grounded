#include "BurgleQuestInstanceSingleRow.h"
#include "Net/UnrealNetwork.h"

void UBurgleQuestInstanceSingleRow::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UBurgleQuestInstanceSingleRow, RowHandle);
}

UBurgleQuestInstanceSingleRow::UBurgleQuestInstanceSingleRow() {
}

