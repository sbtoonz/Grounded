#include "CDOFunctionLibrary.h"
#include "Templates/SubclassOf.h"

class UObject;
class AActor;
class USceneComponent;
class UActorComponent;

bool UCDOFunctionLibrary::IsDefaultObject(const UObject* Object) {
    return false;
}

USceneComponent* UCDOFunctionLibrary::GetRootComponent(const AActor* Actor) {
    return NULL;
}

UActorComponent* UCDOFunctionLibrary::GetDefaultComponent(const UActorComponent* Component) {
    return NULL;
}

TArray<UActorComponent*> UCDOFunctionLibrary::FindDefaultComponentsByClass(const AActor* Actor, const TSubclassOf<UActorComponent> ComponentClass) {
    return TArray<UActorComponent*>();
}

UActorComponent* UCDOFunctionLibrary::FindDefaultComponentByName(const AActor* Actor, FName ComponentName) {
    return NULL;
}

UActorComponent* UCDOFunctionLibrary::FindDefaultComponentByClass(const AActor* Actor, const TSubclassOf<UActorComponent> ComponentClass) {
    return NULL;
}

UCDOFunctionLibrary::UCDOFunctionLibrary() {
}

