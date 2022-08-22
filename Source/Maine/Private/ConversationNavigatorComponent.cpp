#include "ConversationNavigatorComponent.h"

class AActor;
class ASurvivalCharacter;

void UConversationNavigatorComponent::StartLocalConversation(AActor* OwnerActor, const FGuid& ConversationId, int32 NodeId) {
}

bool UConversationNavigatorComponent::ShowConversation() {
    return false;
}

bool UConversationNavigatorComponent::ShouldQueue(const FGuid& ConversationId, EConversationPlayPriority Priority) {
    return false;
}

bool UConversationNavigatorComponent::ShouldInterrupt(const FGuid& ConversationId, EConversationPlayPriority Priority) {
    return false;
}

void UConversationNavigatorComponent::ServerStartConversation_Implementation(AActor* OwnerActor, const FGuid& ConversationId, int32 NodeId, EConversationPlayPriority Priority, TEnumAsByte<EConversationNodeDisplayStyle> DisplayStyle) {
}
bool UConversationNavigatorComponent::ServerStartConversation_Validate(AActor* OwnerActor, const FGuid& ConversationId, int32 NodeId, EConversationPlayPriority Priority, TEnumAsByte<EConversationNodeDisplayStyle> DisplayStyle) {
    return true;
}

void UConversationNavigatorComponent::ServerSelectPlayerResponse_Implementation(AActor* Owner, int32 ResponseNodeID) {
}
bool UConversationNavigatorComponent::ServerSelectPlayerResponse_Validate(AActor* Owner, int32 ResponseNodeID) {
    return true;
}

void UConversationNavigatorComponent::ServerEndPlayerDrivenConversation_Implementation(AActor* Owner) {
}
bool UConversationNavigatorComponent::ServerEndPlayerDrivenConversation_Validate(AActor* Owner) {
    return true;
}

void UConversationNavigatorComponent::ServerEndConversation_Implementation(const FGuid& ConversationId) {
}
bool UConversationNavigatorComponent::ServerEndConversation_Validate(const FGuid& ConversationId) {
    return true;
}

void UConversationNavigatorComponent::ServerAdvancePlayerDrivenConversation_Implementation(AActor* Owner) {
}
bool UConversationNavigatorComponent::ServerAdvancePlayerDrivenConversation_Validate(AActor* Owner) {
    return true;
}

void UConversationNavigatorComponent::ServerAdvanceConversation_Implementation(const FGuid& ConversationId) {
}
bool UConversationNavigatorComponent::ServerAdvanceConversation_Validate(const FGuid& ConversationId) {
    return true;
}

void UConversationNavigatorComponent::ServerAbortConversations_Implementation() {
}
bool UConversationNavigatorComponent::ServerAbortConversations_Validate() {
    return true;
}

void UConversationNavigatorComponent::RemovePlayerDrivenConversation(AActor* Owner) {
}

void UConversationNavigatorComponent::QueueConversation(AActor* OwnerActor, const FGuid& ConversationId, int32 NodeId, EConversationPlayPriority Priority, TEnumAsByte<EConversationNodeDisplayStyle> DisplayStyle) {
}

void UConversationNavigatorComponent::MulticastStartConversation_Implementation(FGuid ConversationId, TEnumAsByte<EConversationNodeDisplayStyle> DisplayStyle) {
}

void UConversationNavigatorComponent::MulticastPlayChatterNode_Implementation(ASurvivalCharacter* OwnerActor, int32 NodeId) {
}

void UConversationNavigatorComponent::MulticastEndConversation_Implementation(const FGuid& ConversationId) {
}

void UConversationNavigatorComponent::MulticastAdvanceConversation_Implementation(AActor* OwnerActor, const FLocString& PlayerResponseLocString, const FGuid& ConversationId, int32 NodeId, const FBitArrayWrapper& ReadNodes, TEnumAsByte<EConversationNodeDisplayStyle> DisplayStyle) {
}

bool UConversationNavigatorComponent::IsPlayerDrivenNode(TEnumAsByte<EConversationNodeDisplayStyle> DisplayStyle, FGuid ConversationNavigatorID) {
    return false;
}

bool UConversationNavigatorComponent::IsPlayerDrivenConversation(TEnumAsByte<EConversationNodeDisplayStyle> DisplayStyle) {
    return false;
}

bool UConversationNavigatorComponent::IsLocalConversationPlaying(AActor* OwnerActor, const FGuid& ConversationId) {
    return false;
}

TArray<FConversationPlayData> UConversationNavigatorComponent::GetConversationQueue() {
    return TArray<FConversationPlayData>();
}

void UConversationNavigatorComponent::EndLocalConversation(AActor* OwnerActor, const FGuid& ConversationId) {
}

void UConversationNavigatorComponent::EndConversation(const FGuid& ConversationId, bool bViaStartNewConversation) {
}

void UConversationNavigatorComponent::AdvanceConversationAndUpdateReadNodes(AActor* OwnerActor, FLocString PlayerResponse, const FGuid& ConversationId, int32 NodeId, TEnumAsByte<EConversationNodeDisplayStyle> DisplayStyle) {
}

void UConversationNavigatorComponent::AdvanceConversation(AActor* OwnerActor, const FLocString& PlayerResponseLocString, const FGuid& ConversationId, int32 NodeId, TEnumAsByte<EConversationNodeDisplayStyle> DisplayStyle) {
}

void UConversationNavigatorComponent::AddPlayerDrivenConversation(const FActiveConversationData& Convo) {
}

UConversationNavigatorComponent::UConversationNavigatorComponent() {
}

