#include "TurretPawn.h"
#include "Net/UnrealNetwork.h"

class ATurret;
class ASurvivalCharacter;

void ATurretPawn::ServerUpdateRotation_Implementation(FRotator NewDesiredRotation) {
}
bool ATurretPawn::ServerUpdateRotation_Validate(FRotator NewDesiredRotation) {
    return true;
}

void ATurretPawn::ServerReleaseAttack_Implementation() {
}
bool ATurretPawn::ServerReleaseAttack_Validate() {
    return true;
}

void ATurretPawn::ServerCancel_Implementation() {
}
bool ATurretPawn::ServerCancel_Validate() {
    return true;
}

void ATurretPawn::ServerAttack_Implementation() {
}
bool ATurretPawn::ServerAttack_Validate() {
    return true;
}

void ATurretPawn::OnRep_Turret(ATurret* PrevTurret) {
}

void ATurretPawn::OnRep_DesiredRotation() {
}

void ATurretPawn::ClientSetEnemy_Implementation(ASurvivalCharacter* Enemy) {
}

void ATurretPawn::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(ATurretPawn, Turret);
    DOREPLIFETIME(ATurretPawn, DesiredRotation);
}

ATurretPawn::ATurretPawn() {
    this->Turret = NULL;
    this->InputRotationScale = 1.00f;
    this->StickInputRotationScale = 1.00f;
}

