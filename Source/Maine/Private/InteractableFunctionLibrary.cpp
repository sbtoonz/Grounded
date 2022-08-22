#include "InteractableFunctionLibrary.h"

class UObject;
class AActor;
class UItem;

bool UInteractableFunctionLibrary::ShowInteractionInterface(const UObject* Interactable, EInteractionChannel Channel, const AActor* InstigatedBy) {
    return false;
}

bool UInteractableFunctionLibrary::ShouldShowAnyInteractionInterface(const UObject* Interactable, const AActor* InstigatedBy) {
    return false;
}

void UInteractableFunctionLibrary::SendInteractError(UObject* Source, AActor* InstigatedBy, const FText& Warning) {
}

bool UInteractableFunctionLibrary::IsAnyInteractionEnabled(const UObject* Interactable, const AActor* InstigatedBy) {
    return false;
}

UItem* UInteractableFunctionLibrary::GetInteractItem(const AActor* InstigatedBy) {
    return NULL;
}

EInteractionType UInteractableFunctionLibrary::GetFirstEnabledPrimaryInteractionType(const UObject* Interactable, const AActor* InstigatedBy) {
    return EInteractionType::None;
}

UInteractableFunctionLibrary::UInteractableFunctionLibrary() {
}

