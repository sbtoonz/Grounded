#include "ZiplineSelectorPawn.h"
#include "Net/UnrealNetwork.h"

class UZiplineAnchor;
class AZiplineLine;

void AZiplineSelectorPawn::ServerSetCurrentAnchor_Implementation(UZiplineAnchor* ToOther) {
}
bool AZiplineSelectorPawn::ServerSetCurrentAnchor_Validate(UZiplineAnchor* ToOther) {
    return true;
}

void AZiplineSelectorPawn::ServerCreateZipline_Implementation(UZiplineAnchor* ToOther) {
}
bool AZiplineSelectorPawn::ServerCreateZipline_Validate(UZiplineAnchor* ToOther) {
    return true;
}

void AZiplineSelectorPawn::ServerCancel_Implementation() {
}
bool AZiplineSelectorPawn::ServerCancel_Validate() {
    return true;
}

void AZiplineSelectorPawn::OnRep_OriginAnchor() {
}

bool AZiplineSelectorPawn::IsValidAnchor(const UZiplineAnchor* Anchor) {
    return false;
}

bool AZiplineSelectorPawn::IsSelectableAnchor(const UZiplineAnchor* Anchor) {
    return false;
}

bool AZiplineSelectorPawn::IsConnectionBlocked(const UZiplineAnchor* Anchor) {
    return false;
}

bool AZiplineSelectorPawn::IsAlreadyConnected(const UZiplineAnchor* Anchor) {
    return false;
}

void AZiplineSelectorPawn::HandleZiplineAttachedToOriginAnchor(UZiplineAnchor* Sender, AZiplineLine* Line) {
}

FString AZiplineSelectorPawn::GetErrorString(const UZiplineAnchor* Anchor) {
    return TEXT("");
}

TArray<FRecipeRequirements> AZiplineSelectorPawn::GetCurrentAnchorRequirements() const {
    return TArray<FRecipeRequirements>();
}

void AZiplineSelectorPawn::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AZiplineSelectorPawn, OriginAnchor);
}

AZiplineSelectorPawn::AZiplineSelectorPawn() {
    this->CurrentAnchor = NULL;
    this->OriginAnchor = NULL;
    this->CameraComponent = NULL;
    this->LineClass = NULL;
    this->LerpTime = 0.30f;
}

