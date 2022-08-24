#include "ScriptLibrary.h"

FGlobalScriptReference UScriptLibrary::MakeGlobalScriptReference(FGuid ID) {
    return FGlobalScriptReference{};
}

FGuid UScriptLibrary::GetGlobalScriptID(const FGlobalScriptReference& GlobalScript) {
    return FGuid{};
}

UScriptLibrary::UScriptLibrary() {
}

