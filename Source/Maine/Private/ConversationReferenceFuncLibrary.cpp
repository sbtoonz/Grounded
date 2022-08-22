#include "ConversationReferenceFuncLibrary.h"

class AActor;

bool UConversationReferenceFuncLibrary::IsValid(FConversationReference Reference) {
    return false;
}

FString UConversationReferenceFuncLibrary::BuildConversationString(const FGuid& ConversationId, int32 NodeId, AActor* OwnerActor) {
    return TEXT("");
}

UConversationReferenceFuncLibrary::UConversationReferenceFuncLibrary() {
}

