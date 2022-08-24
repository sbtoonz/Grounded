#include "OEIGlobalVariableLibrary.h"

FGlobalVariableReference UOEIGlobalVariableLibrary::MakeGlobalVariableReference(FGuid ID) {
    return FGlobalVariableReference{};
}

FGuid UOEIGlobalVariableLibrary::GetGlobalVariableID(const FGlobalVariableReference& Variable) {
    return FGuid{};
}

UOEIGlobalVariableLibrary::UOEIGlobalVariableLibrary() {
}

