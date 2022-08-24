#include "ActorPoolComponent.h"

class AActor;

void UActorPoolComponent::ReleaseInstance(AActor* Instance) {
}

AActor* UActorPoolComponent::GetInstance() {
    return NULL;
}

UActorPoolComponent::UActorPoolComponent() {
    this->BaseObject = NULL;
}

