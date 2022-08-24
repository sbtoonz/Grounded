#include "GlobalVariableScripts.h"

class AActor;

void UGlobalVariableScripts::SetGlobalValue(FGuid Variable, int32 Value, AActor* Instigator) {
}

void UGlobalVariableScripts::SetGlobalIfGlobal(FGuid ConditionVariable, int32 ConditionValue, FGuid Variable, int32 Value, AActor* Instigator) {
}

void UGlobalVariableScripts::RandomizeGlobalValueWithGlobals(FGuid Variable, FGuid MinValueGlobal, FGuid MaxValueGlobal, AActor* Instigator) {
}

void UGlobalVariableScripts::RandomizeGlobalValue(FGuid Variable, int32 MinValue, int32 MaxValue, AActor* Instigator) {
}

void UGlobalVariableScripts::IncrementGlobalValue(FGuid Variable, int32 IncrementValue, AActor* Instigator) {
}

UGlobalVariableScripts::UGlobalVariableScripts() {
}

