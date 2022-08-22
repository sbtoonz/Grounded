#include "InterfaceManagerComponent.h"
#include "Net/UnrealNetwork.h"

class AActor;
class UWindowWidget;

void UInterfaceManagerComponent::OnRep_OpenExclusiveWindows() {
}

bool UInterfaceManagerComponent::IsWindowLocked(const TSoftClassPtr<UWindowWidget>& Window) const {
    return false;
}

AActor* UInterfaceManagerComponent::GetWindowLocker(const TSoftClassPtr<UWindowWidget>& Window) const {
    return NULL;
}

void UInterfaceManagerComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UInterfaceManagerComponent, OpenExclusiveWindows);
}

UInterfaceManagerComponent::UInterfaceManagerComponent() {
}

