#include "ConditionalLibrary.h"

FGlobalConditionalReference UConditionalLibrary::MakeGlobalConditionalReference(FGuid ID) {
    return FGlobalConditionalReference{};
}

FGuid UConditionalLibrary::GetGlobalConditionalID(const FGlobalConditionalReference& GlobalConditional) {
    return FGuid{};
}

UConditionalLibrary::UConditionalLibrary() {
}

