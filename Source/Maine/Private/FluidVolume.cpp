#include "FluidVolume.h"

class UPrimitiveComponent;
class AActor;
class APhotoPawn;

void AFluidVolume::TickMaintainActorList(float DeltaTime) {
}

void AFluidVolume::TickCreateRipples(float DeltaTime) {
}

void AFluidVolume::SpawnSplashVFX(AActor* Actor, bool IsOverlapEvent) {
}


void AFluidVolume::SetTickEnabled(bool Enabled) {
}

void AFluidVolume::OnPhotoModeExit() {
}

void AFluidVolume::OnPhotoModeEntered(APhotoPawn* PhotoPawn) {
}

void AFluidVolume::OnColliderOverlapEnd(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex) {
}

void AFluidVolume::OnColliderOverlapBegin(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult) {
}

void AFluidVolume::OnCameraColliderOverlapEnd(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex) {
}

void AFluidVolume::OnCameraColliderOverlapBegin(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult) {
}

void AFluidVolume::NativeToggleDepthImpostorVisibility() {
}

bool AFluidVolume::NativeQualifyActor(AActor* ActorToCheck) {
    return false;
}

void AFluidVolume::NativeModifyRipple() {
}

void AFluidVolume::NativeMaintainActorList() {
}

bool AFluidVolume::NativeIsLocalPlayerInTickRange() const {
    return false;
}

void AFluidVolume::NativeInitDepthImpostor() {
}

void AFluidVolume::NativeDrawAtLocation(FNativeRippleEvent RippleEvent) {
}

void AFluidVolume::NativeCreateRippleEvents(bool bIsOverlapEvent) {
}

void AFluidVolume::NativeCreateOverlapRipple() {
}

bool AFluidVolume::IsCameraInVolume(bool XYOnly) const {
    return false;
}

bool AFluidVolume::IsActorNearWaterSurface(AActor* Actor) {
    return false;
}

void AFluidVolume::GetInitialOverlaps() {
}

AFluidVolume::AFluidVolume() {
    this->NativeWaterPlane = NULL;
    this->NativeDepthImpostor = NULL;
    this->NativePostProcessAnchor = NULL;
    this->NativePostProcessBox = NULL;
    this->NativePostProcessUnderWater = NULL;
    this->NativeCollider = NULL;
    this->NativeColliderCamera = NULL;
    this->NativeTickBoundsPadding = 2000.00f;
    this->NativeSetFootstepsInShallowWater = true;
    this->NativeActivationRange = 3000.00f;
    this->NativeOpacityFadeDistance = 6000.00f;
    this->NativeEnableDepthImpostor = false;
    this->NativeDepthLimitOffsetScale = -0.40f;
    this->PebbleClass = NULL;
    this->NativeMaxRippleCount = 60;
    this->NativeNumRipples = 0;
    this->NativeFadeSpeed = 2.50f;
    this->NativeRippleSpeed = 950.00f;
    this->NativeRTGlobalData = NULL;
    this->NativeRippleAddMaterial = NULL;
    this->NativeOutputRT = NULL;
    this->RippleUVBoundary = 0.50f;
    this->NativeSplashVFX = NULL;
    this->NativeAllowTick = false;
    this->RippleAddMID = NULL;
    this->RippleRandomTickMin = 0.15f;
    this->RippleRandomTickMax = 0.30f;
    this->RTManager = NULL;
}

