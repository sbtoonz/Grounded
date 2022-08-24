#include "ZiplineLine.h"
#include "Net/UnrealNetwork.h"
#include "Components/SplineMeshComponent.h"

class UZiplineAnchor;

void AZiplineLine::TickUpdatePosition(float DeltaTime) {
}

void AZiplineLine::OnRep_AnchorLocation() {
}

void AZiplineLine::OnRep_Anchor2() {
}

void AZiplineLine::OnRep_Anchor1() {
}

bool AZiplineLine::HasAnchor(const UZiplineAnchor* Anchor) const {
    return false;
}

float AZiplineLine::GetTerminalSpeed(float VerticalTerminalSpeed) const {
    return 0.0f;
}

float AZiplineLine::GetSlope() const {
    return 0.0f;
}

FVector AZiplineLine::GetRightDirection() const {
    return FVector{};
}

UZiplineAnchor* AZiplineLine::GetOtherAnchor(UZiplineAnchor* Anchor) const {
    return NULL;
}

float AZiplineLine::GetLength() const {
    return 0.0f;
}

FVector AZiplineLine::GetDirection() const {
    return FVector{};
}

FRotator AZiplineLine::GetAttachedRotation() const {
    return FRotator{};
}

float AZiplineLine::GetAscendSpeed(float BaseSpeed) const {
    return 0.0f;
}

FVector AZiplineLine::GetAnchorLocation2() const {
    return FVector{};
}

FVector AZiplineLine::GetAnchorLocation1() const {
    return FVector{};
}

UZiplineAnchor* AZiplineLine::GetAnchor2() const {
    return NULL;
}

UZiplineAnchor* AZiplineLine::GetAnchor1() const {
    return NULL;
}



bool AZiplineLine::AreAnchors(const UZiplineAnchor* AnchorA, const UZiplineAnchor* AnchorB) const {
    return false;
}

void AZiplineLine::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AZiplineLine, Anchor1);
    DOREPLIFETIME(AZiplineLine, Anchor2);
    DOREPLIFETIME(AZiplineLine, AnchorLocation1);
    DOREPLIFETIME(AZiplineLine, AnchorLocation2);
}

AZiplineLine::AZiplineLine() {
    this->SplineMesh = CreateDefaultSubobject<USplineMeshComponent>(TEXT("SplineMesh"));
    this->SplineCollision = CreateDefaultSubobject<USplineMeshComponent>(TEXT("SplineCollision"));
    this->InitialAnchorA = NULL;
    this->InitialAnchorB = NULL;
    this->Anchor1 = NULL;
    this->Anchor2 = NULL;
    this->IngredientLengthUnit = 2000.00f;
    this->ItemAttachmentAudio = NULL;
}

