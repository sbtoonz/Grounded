#include "NonPlayerInteraction.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=SceneComponent -FallbackName=SceneComponent
#include "PersistenceComponent.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=OEICommon -ObjectName=ObsidianIDComponent -FallbackName=ObsidianIDComponent
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BillboardComponent -FallbackName=BillboardComponent
#include "ConditionalToggleComponent.h"

class AActor;
class ASurvivalCharacter;

void ANonPlayerInteraction::PlayInteractConversation(AActor* Interactor, AActor* Character) {
}

void ANonPlayerInteraction::PlayAttractRepeatConversation(AActor* Character) {
}

void ANonPlayerInteraction::PlayAttractConversation(AActor* Character) {
}

bool ANonPlayerInteraction::IsInteractConversationEnabled(AActor* Interactor, AActor* Character) const {
    return false;
}

void ANonPlayerInteraction::HandleConversationComplete(FGuid ConversationId, TEnumAsByte<EConversationNodeDisplayStyle> DisplayStyle) {
}

bool ANonPlayerInteraction::CharacterCanInteract_Implementation(ASurvivalCharacter* Character) const {
    return false;
}

ANonPlayerInteraction::ANonPlayerInteraction() {
    this->SceneRootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("RootComponent"));
    this->WaypointComponent = CreateDefaultSubobject<UBillboardComponent>(TEXT("Waypoint"));
    this->ObsidianIDComponent = CreateDefaultSubobject<UObsidianIDComponent>(TEXT("ObsidianIDComponent"));
    this->PersistenceComponent = CreateDefaultSubobject<UPersistenceComponent>(TEXT("PersistenceComponent"));
    this->ShowTalkIconConditionalToggle = CreateDefaultSubobject<UConditionalToggleComponent>(TEXT("ShowTalkIconConditionalToggle"));
    this->BarkConditionalToggle = CreateDefaultSubobject<UConditionalToggleComponent>(TEXT("BarkConditionalToggle"));
    this->bUnlimitedRange = false;
    this->EligibleRange = 1000.00f;
    this->AttractStartNode = 0;
    this->AttractRepeatStartNode = 0;
    this->AttractRepeatInterval = 15.00f;
    this->InteractStartNode = 0;
    this->bDisableInteractBeforeAttract = false;
}

