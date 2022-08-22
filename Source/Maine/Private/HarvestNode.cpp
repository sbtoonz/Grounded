#include "HarvestNode.h"
#include "Net/UnrealNetwork.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=OEICommon -ObjectName=ObsidianIDComponent -FallbackName=ObsidianIDComponent
#include "HealthComponent.h"
#include "TeamComponent.h"

class UObject;
class AController;
class UBaseLODActor;

void AHarvestNode::SetAdditiveRotationQuat(UObject* Source, const FQuat& Rotation) {
}

void AHarvestNode::SetAdditiveRotation(UObject* Source, const FRotator& Rotation) {
}

void AHarvestNode::OnDeath(const FDamageInfo& DamageInfo) {
}

void AHarvestNode::OnDamaged(float Damage, const FDamageInfo& DamageInfo, AController* InstigatedBy, UBaseLODActor* DamageCauser, bool IsKillingBlow) {
}

bool AHarvestNode::HasTag(FGameplayTag InTag) const {
    return false;
}

bool AHarvestNode::HasAnyTag(FGameplayTagContainer InTags) const {
    return false;
}

void AHarvestNode::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AHarvestNode, SourceFoliage);
}

AHarvestNode::AHarvestNode() {
    this->LODFullActorMaxDistance = 7500.00f;
    this->bAllowLODNavDirtying = false;
    this->bAllowFoliageRespawn = false;
    this->HealthComponent = CreateDefaultSubobject<UHealthComponent>(TEXT("HealthComponent"));
    this->TeamComponent = CreateDefaultSubobject<UTeamComponent>(TEXT("TeamComponent"));
    this->ProceduralAnimationComponent = NULL;
    this->ObsidianIDComponent = CreateDefaultSubobject<UObsidianIDComponent>(TEXT("ObsidianIDComponent"));
    this->LootComponent = NULL;
    this->LiteData = NULL;
    this->bUseOverrideGameHourLifetime = false;
    this->OverrideGameHourLifetime = 0.00f;
}

