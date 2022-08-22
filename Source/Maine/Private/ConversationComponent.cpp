#include "ConversationComponent.h"

class AActor;

void UConversationComponent::StartInteractConversation(AActor* InstigatedBy) {
}

void UConversationComponent::StartConversation(const FConversationReference& InConversation, int32 InStartNode, AActor* InstigatedBy, TEnumAsByte<EConversationNodeDisplayStyle> DisplayStyle) {
}

void UConversationComponent::EndConversation(AActor* InstigatedBy) {
}

UConversationComponent::UConversationComponent() {
    this->StartNode = 0;
}

