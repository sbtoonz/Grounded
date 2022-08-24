#include "Building.h"
#include "Net/UnrealNetwork.h"
#include "NavModifierComponent.h"
#include "MaterialSwapComponent.h"
#include "HealthComponent.h"
#include "Perception/AIPerceptionStimuliSourceComponent.h"
#include "ObsidianIDComponent.h"
#include "TeamComponent.h"
#include "PersistenceComponent.h"
#include "ProceduralAnimationComponent.h"
#include "NavAreas/NavArea_Obstacle.h"

class UPrimitiveComponent;
class AActor;
class UBuildingGridComponent;
class UMaterialInterface;
class UMaterialInstanceDynamic;
class AController;
class UBaseLODActor;
class USceneComponent;
class UItem;
class ABuilding;
class UBuildingShape;
class UMeshComponent;

bool ABuilding::UsesCrenellation() const {
    return false;
}

void ABuilding::Use_Implementation(EInteractionChannel Channel, AActor* InstigatedBy) {
}

void ABuilding::UpdateCollisionStateChange_Implementation() {
}

void ABuilding::UpdateAllMaterials() {
}

void ABuilding::UnsetPlacedThisFrame() {
}

FBuildingGridKey ABuilding::TransformSlot(const UBuildingGridComponent* Grid, FBuildingGridKey Slot) const {
    return FBuildingGridKey{};
}

void ABuilding::TickDebugDraw(float DeltaTime) {
}

void ABuilding::TickCancelled(float DeltaTime) {
}

void ABuilding::StartPlacementMode() {
}

void ABuilding::SetUnderConstruction() {
}

void ABuilding::SetStencilOnBuildingStateChanged(AActor* InInstigator, EBuildingState NewState) {
}

void ABuilding::SetHUDMarkerVariant(int32 Variant) {
}

void ABuilding::SetHUDMarkerColorVariant(int32 Variant) {
}

void ABuilding::ServerStartPlacementMode_Implementation() {
}
bool ABuilding::ServerStartPlacementMode_Validate() {
    return true;
}

void ABuilding::SelfComponentEndOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex) {
}

void ABuilding::SelfComponentBeginOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult) {
}

void ABuilding::RegisterBuildingChangedCallbacks_Implementation() {
}

void ABuilding::RegisterBuildingChangedCallback(FBuildingGridKey Key) {
}



void ABuilding::OnWaveAttackStateChanged(EWaveAttackState AttackState) {
}

void ABuilding::OnRep_ReplicatedData() {
}

void ABuilding::OnRep_NetworkPower() {
}

void ABuilding::OnRep_Items() {
}

void ABuilding::OnRep_IsLitWithFireChanged() {
}

void ABuilding::OnRep_BuildingStateChanged(EBuildingState OldState) {
}

void ABuilding::OnPowerSwitchOpenCloseStateChanged(bool bIsOpen, AActor* InInstigator) {
}

void ABuilding::OnPlayerPossessed() {
}

void ABuilding::OnPlayerEquipmentChanged() {
}


void ABuilding::OnNetworkPowerChanged(int32 NetworkId, float Power) {
}

void ABuilding::OnFragilityLevelChanged(int32 CurrentFragilityLevel) {
}

void ABuilding::OnDefensePointActiveChanged(bool bActive) {
}

void ABuilding::OnBuildingIsFragileChanged(UHealthComponent* Sender, bool bIsFragile) {
}

void ABuilding::OnBuildingHealthChanged(UHealthComponent* SourceHealthComponent, float NewHealth, float OldHealth) {
}

void ABuilding::OnBuildingDestroyed_Implementation(const FDamageInfo& DamageInfo) {
}

void ABuilding::OnBuildingDamaged_Implementation(float Damage, const FDamageInfo& DamageInfo, AController* InstigatedBy, UBaseLODActor* DamageCauser, bool IsKillingBlow) {
}

void ABuilding::NotifyPendingBuildingMoved_Implementation(FBuildingGridLocation NewLocation) {
}

void ABuilding::NotifyBuildingChanged_Implementation(FBuildingGridLocation Location) {
}

void ABuilding::MulticastHandleDestroyed_Implementation() {
}

void ABuilding::MulticastHandleDemolish_Implementation() {
}

void ABuilding::MulticastHandleDeconstruction_Implementation() {
}

void ABuilding::MulticastHandleDamaged_Implementation() {
}

void ABuilding::MulticastHandleBuildingPlacement_Implementation() {
}

void ABuilding::MulticastHandleBuildingCompletedSFX_Implementation(AActor* InstigatedBy) {
}

void ABuilding::MulticastBuildingMoved_Implementation(USceneComponent* AttachParent, const FTransform& RelativeTransform) {
}


bool ABuilding::IsUnderConstruction() const {
    return false;
}

bool ABuilding::IsReplacementBuilding() const {
    return false;
}

bool ABuilding::IsPlaced() const {
    return false;
}

bool ABuilding::IsOverloaded() const {
    return false;
}

bool ABuilding::IsBuilt() const {
    return false;
}

bool ABuilding::IsBeingReplaced() const {
    return false;
}

bool ABuilding::IsBeingPlacedLocal() const {
    return false;
}

bool ABuilding::IsBeingPlaced() const {
    return false;
}

FBuildingGridKey ABuilding::InverseTransformSlot(const UBuildingGridComponent* Grid, FBuildingGridKey Slot) const {
    return FBuildingGridKey{};
}

bool ABuilding::HasTag(FGameplayTag InTag) const {
    return false;
}

bool ABuilding::HasParentGrid() const {
    return false;
}

bool ABuilding::HasAnyTag(FGameplayTagContainer InTags) const {
    return false;
}

void ABuilding::HandleFinishCollapseDestroy() {
}

float ABuilding::GetWeight() const {
    return 0.0f;
}

FText ABuilding::GetUseText_Implementation(EInteractionChannel Channel, const AActor* InstigatedBy) const {
    return FText::GetEmpty();
}

EInteractionType ABuilding::GetUseInteractionType_Implementation(EInteractionChannel Channel, const AActor* InstigatedBy) const {
    return EInteractionType::None;
}

bool ABuilding::GetUseFacingHelper() const {
    return false;
}

EInteractAnimType ABuilding::GetUseAnimType_Implementation(EInteractionChannel Channel, const AActor* InstigatedBy) const {
    return EInteractAnimType::None;
}

float ABuilding::GetTotalBurnTimeHours() const {
    return 0.0f;
}

UTeamComponent* ABuilding::GetTeamComponent() const {
    return NULL;
}

TArray<FBuildingGridKey> ABuilding::GetSupportedByCells(const FBuildingGridLocation& At) const {
    return TArray<FBuildingGridKey>();
}

float ABuilding::GetSturdiness() const {
    return 0.0f;
}

TArray<FBuildingGridKey> ABuilding::GetSoftCells() const {
    return TArray<FBuildingGridKey>();
}

bool ABuilding::GetShouldShowHUDMarker_Implementation() const {
    return false;
}

ABuilding* ABuilding::GetReplacementBuilding() const {
    return NULL;
}

TArray<FRecipeRequirements> ABuilding::GetRemainingRequirements() const {
    return TArray<FRecipeRequirements>();
}

TEnumAsByte<EInteractionState> ABuilding::GetRelocationEnabledState(const AActor* InstigatedBy) const {
    return Hidden;
}

int32 ABuilding::GetRecipeIngredientCountRequired(FDataTableRowHandle Ingredient) {
    return 0;
}

int32 ABuilding::GetRecipeIngredientCountRemaining(FDataTableRowHandle Ingredient) {
    return 0;
}

int32 ABuilding::GetRecipeIngredientCountAdded(FDataTableRowHandle Ingredient) {
    return 0;
}

bool ABuilding::GetProvidesSupport() const {
    return false;
}

bool ABuilding::GetPlacementValid() const {
    return false;
}

UBuildingGridComponent* ABuilding::GetParentGrid() const {
    return NULL;
}

TArray<FIntVector> ABuilding::GetOverrideSnaps() const {
    return TArray<FIntVector>();
}

UObsidianIDComponent* ABuilding::GetObsidianIDComponent() const {
    return NULL;
}

FString ABuilding::GetName() const {
    return TEXT("");
}

bool ABuilding::GetIsFoundation() const {
    return false;
}

bool ABuilding::GetIsAnchoredCompleteTransitive() const {
    return false;
}

bool ABuilding::GetIsAnchor() const {
    return false;
}

int32 ABuilding::GetHUDMarkerVariant() const {
    return 0;
}

EHUDMarkerType ABuilding::GetHUDMarkerType() const {
    return EHUDMarkerType::None;
}

FString ABuilding::GetHUDMarkerDisplayName() const {
    return TEXT("");
}

int32 ABuilding::GetHUDMarkerColorVariant() const {
    return 0;
}

UHealthComponent* ABuilding::GetHealthComponent() const {
    return NULL;
}

UBuildingShape* ABuilding::GetGridShape() const {
    return NULL;
}

FTransform ABuilding::GetGridOriginTransform() const {
    return FTransform{};
}

FVector ABuilding::GetGridOriginOffset() const {
    return FVector{};
}

FBuildingGridLocation ABuilding::GetGridLocation() const {
    return FBuildingGridLocation{};
}

FBuildingGridKey ABuilding::GetGridKey() const {
    return FBuildingGridKey{};
}

FBuildingGridBuildingId ABuilding::GetGridBuildingId() const {
    return FBuildingGridBuildingId{};
}

FVector ABuilding::GetGeometricOriginOffset() const {
    return FVector{};
}

TArray<FBuildingGridKey> ABuilding::GetFlatFootprintAt(FBuildingGridLocation At, float InActualWorldRotation) const {
    return TArray<FBuildingGridKey>();
}

TArray<FBuildingGridKey> ABuilding::GetFlatFootprint() const {
    return TArray<FBuildingGridKey>();
}

TArray<FBuildingGridKey> ABuilding::GetComboFootprintAt(FBuildingGridLocation At, float InActualWorldRotation) const {
    return TArray<FBuildingGridKey>();
}

TArray<FBuildingGridKey> ABuilding::GetComboFootprint() const {
    return TArray<FBuildingGridKey>();
}

int32 ABuilding::GetCollapseCount() const {
    return 0;
}

TArray<FBuildingGridKey> ABuilding::GetCells(float AngleZ, EGetCellFlags Flags) const {
    return TArray<FBuildingGridKey>();
}

TArray<FBuildingGridKey> ABuilding::GetCeilingFootprintAt(FBuildingGridLocation At, float InActualWorldRotation) const {
    return TArray<FBuildingGridKey>();
}

TArray<FBuildingGridKey> ABuilding::GetCeilingFootprint() const {
    return TArray<FBuildingGridKey>();
}

TArray<FBuildingGridKey> ABuilding::GetBaseFootprintAt(FBuildingGridLocation At, float InActualWorldRotation) const {
    return TArray<FBuildingGridKey>();
}

TArray<FBuildingGridKey> ABuilding::GetBaseFootprint() const {
    return TArray<FBuildingGridKey>();
}

EBuildingGridSurfaceType ABuilding::GetAnchoredSurface() const {
    return EBuildingGridSurfaceType::None;
}

TArray<FBuildingGridKey> ABuilding::GetAdjacentCells() const {
    return TArray<FBuildingGridKey>();
}

float ABuilding::GetActualWorldRotation() const {
    return 0.0f;
}

void ABuilding::DropNewItem(const FDataTableRowHandle& ItemData, FTransform AtTransform, UBaseLODActor* ThisActor, UBaseLODActor* InstigatedBy) {
}

void ABuilding::DropItem(UItem* Item, FTransform AtTransform, UBaseLODActor* ThisActor, UBaseLODActor* InstigatedBy) {
}

bool ABuilding::DoesCompletionCauseOverload() const {
    return false;
}

void ABuilding::DeactivateLightsAndParticles() {
}

bool ABuilding::CheckAdditionalPlacementRequirements_Implementation(FBuildingGridLocation At) const {
    return false;
}

TEnumAsByte<EInteractionState> ABuilding::CanUse_Implementation(EInteractionChannel Channel, const AActor* InstigatedBy) const {
    return Hidden;
}

void ABuilding::CancelBuild(AActor* InstigatedBy) {
}

bool ABuilding::CanAddIngredients() const {
    return false;
}

int32 ABuilding::CalculateRequiredItemCount_Implementation(const FRecipeRequirements& Requirement) const {
    return 0;
}

UMaterialInstanceDynamic* ABuilding::BuildingCreateDynamicMaterialInstance(UMeshComponent* Target, int32 ElementIndex, UMaterialInterface* SourceMaterial, FName OptionalName) {
    return NULL;
}


void ABuilding::ActivateLightsAndParticles() {
}

void ABuilding::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(ABuilding, ActualWorldRotation);
    DOREPLIFETIME(ABuilding, NetworkPower);
    DOREPLIFETIME(ABuilding, BuildingState);
    DOREPLIFETIME(ABuilding, ReplicatedData);
    DOREPLIFETIME(ABuilding, RegisteredBuildingPowerId);
    DOREPLIFETIME(ABuilding, RecipeItems);
    DOREPLIFETIME(ABuilding, HUDMarkerVariant);
    DOREPLIFETIME(ABuilding, HUDMarkerColorVariant);
    DOREPLIFETIME(ABuilding, IsLitWithFire);
    DOREPLIFETIME(ABuilding, SourceCreatureName);
    DOREPLIFETIME(ABuilding, AnchoredSurface);
    DOREPLIFETIME(ABuilding, AttachedGridBuilding);
}

ABuilding::ABuilding() {
    this->Shape = NULL;
    this->LiteData = NULL;
    this->ActualWorldRotation = 0.00f;
    this->TerrainConform = EBuildingTerrainConformMode::MatchTerrain;
    this->bAutoPlacementLocations = false;
    this->RequiredPointsOfContact = 3;
    this->MaxSlope = 20.00f;
    this->GeneralPenetrationAllowance.AddDefaulted(1);
    this->EnvironmentPenetrationAllowance.AddDefaulted(1);
    this->bIsRelocatable = true;
    this->bCanCancel = true;
    this->bCanDemolish = true;
    this->bForceMinorActorType = false;
    this->WaveRegion = NULL;
    this->bIsPowerSource = false;
    this->bIsPowerReceiver = false;
    this->bIsPowerSwitch = false;
    this->bIsSwitchActive = false;
    this->PowerValue = 0.00f;
    this->NetworkPower = 0.00f;
    this->BaseIndex = -1;
    this->BuildingState = EBuildingState::None;
    this->StaticMeshComponent = NULL;
    this->DeconstructionVFX = NULL;
    this->HUDMarkerVariant = 0;
    this->HUDMarkerColorVariant = -1;
    this->BuiltHUDMakerType = EHUDMarkerType::None;
    this->UseInteractionType = EInteractionType::None;
    this->FireType = EBuildingFireType::None;
    this->ShowDistanceOnHudMarker = false;
    this->IsLitWithFire = false;
    this->bProvidesSupport = true;
    this->bIsFoundation = false;
    this->bBaseBuilding = true;
    this->bThreatBuilding = false;
    this->bCanBeInstanced = false;
    this->bCanAutoComplete = true;
    this->bWiggleOnDamage = true;
    this->bDropToInventory = false;
    this->bDropIngredientsWhenDestroyed = true;
    this->bSightStimulus = false;
    this->bAlwaysSightStimulus = false;
    this->DropIngredientsPercentage = 0.50f;
    this->DestroyedByCreatureDropIngredientsPercentage = 0.25f;
    this->WeightMultiplier = 1.00f;
    this->NavAreaClass = UNavArea_Obstacle::StaticClass();
    this->AnchoredSurface = EBuildingGridSurfaceType::None;
    this->IsValidWaveAnchor = false;
    this->HealthComponent = CreateDefaultSubobject<UHealthComponent>(TEXT("HealthComponent"));
    this->TeamComponent = CreateDefaultSubobject<UTeamComponent>(TEXT("TeamComponent"));
    this->ProceduralAnimationComponent = CreateDefaultSubobject<UProceduralAnimationComponent>(TEXT("ProceduralAnimationComponent"));
    this->NavModifierComponent = CreateDefaultSubobject<UNavModifierComponent>(TEXT("NavModifierComponent"));
    this->PersistenceComponent = CreateDefaultSubobject<UPersistenceComponent>(TEXT("PersistenceComponent"));
    this->ObsidianIDComponent = CreateDefaultSubobject<UObsidianIDComponent>(TEXT("ObsidianIDComponent"));
    this->BuildingPowerOCLComponent = NULL;
    this->PerceptionSourceComponent = CreateDefaultSubobject<UAIPerceptionStimuliSourceComponent>(TEXT("PerceptionStimuliSourceComponent"));
    this->FacingHelperComponent = NULL;
    this->MaterialSwapComponent = CreateDefaultSubobject<UMaterialSwapComponent>(TEXT("MaterialSwapComponent"));
    this->CustomProperties = NULL;
}

