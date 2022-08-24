#include "CustomPropertyComponent.h"
#include "Net/UnrealNetwork.h"

class ASurvivalPlayerCharacter;
class UCustomPropertiesWindowWidget;

void UCustomPropertyComponent::SetIsInUse(ASurvivalPlayerCharacter* InCustomizingPlayer, bool InUse) {
}

void UCustomPropertyComponent::SetCustomPropertyValue(FName PropertyName, float Value) {
}

void UCustomPropertyComponent::OnUIReady(UCustomPropertiesWindowWidget* Widget) {
}

void UCustomPropertyComponent::OnRep_IsInUseCustomizingPlayer() {
}

void UCustomPropertyComponent::OnRep_CustomizedValuesArray(const TArray<FCustomizedValue>& PreviousCustomizedValuesArray) {
}

bool UCustomPropertyComponent::NeedsManualValueTextUpdates() const {
    return false;
}

void UCustomPropertyComponent::NativeOnPropertyChanged(FName PropertyName, float PropertyValue) {
}

bool UCustomPropertyComponent::IsPropertyCustomized(FName Property) const {
    return false;
}

bool UCustomPropertyComponent::HasCustomProperties() const {
    return false;
}

bool UCustomPropertyComponent::GetIsInUse() const {
    return false;
}

void UCustomPropertyComponent::GetCustomPropertyValue(FName PropertyName, float& AsFloat, int32& AsInt, bool& AsBool) {
}

FVector UCustomPropertyComponent::GetCameraInterestLocation_Implementation() const {
    return FVector{};
}

void UCustomPropertyComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UCustomPropertyComponent, CustomLookAtLocationWS);
    DOREPLIFETIME(UCustomPropertyComponent, CustomizedValuesArray);
    DOREPLIFETIME(UCustomPropertyComponent, IsInUse);
    DOREPLIFETIME(UCustomPropertyComponent, CustomizingPlayer);
}

UCustomPropertyComponent::UCustomPropertyComponent() {
    this->CustomizationPoseSet = NULL;
    this->HasCustomLookAtLocation = false;
    this->CustomPropertyData = NULL;
    this->IsInUse = false;
    this->CustomizingPlayer = NULL;
    this->DesiredCameraDistance = 500.00f;
    this->AcceptableCameraDistance = 250.00f;
    this->DesiredCameraAngleVertical = 25.00f;
    this->CameraCollisionInsetDistance = 16.00f;
}

