#pragma once
#include "CoreMinimal.h"
#include "LODableActorInterface.h"
#include "GameFramework/Actor.h"
#include "DamageInfo.h"
#include "GameplayTagContainer.h"
#include "InteractableInterface.h"
#include "SwappableFoliageInterface.h"
#include "LootableInterface.h"
#include "Perception/AISightTargetInterface.h"
#include "GenericTeamAgentInterface.h"
#include "UObject/NoExportTypes.h"
#include "LocString.h"
#include "FoliageKey.h"
#include "UObject/NoExportTypes.h"
#include "GameplayTagContainer.h"
#include "HarvestNode.generated.h"

class UHealthComponent;
class UObsidianIDComponent;
class UTeamComponent;
class UProceduralAnimationComponent;
class UBaseLODActor;
class UObject;
class ULootComponent;
class UHarvestNodeLiteData;
class AController;

UCLASS(Abstract, Blueprintable)
class MAINE_API AHarvestNode : public AActor, public IInteractableInterface, public ISwappableFoliageInterface, public IGenericTeamAgentInterface, public IAISightTargetInterface, public ILODableActorInterface, public ILootableInterface {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLocString DisplayName;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float LODFullActorMaxDistance;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bAllowLODNavDirtying: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bAllowFoliageRespawn: 1;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UHealthComponent* HealthComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UTeamComponent* TeamComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UProceduralAnimationComponent* ProceduralAnimationComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UObsidianIDComponent* ObsidianIDComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    ULootComponent* LootComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UHarvestNodeLiteData* LiteData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer HarvestNodeTags;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bUseOverrideGameHourLifetime: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float OverrideGameHourLifetime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    FFoliageKey SourceFoliage;
    
public:
    AHarvestNode();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
    UFUNCTION(BlueprintCallable)
    void SetAdditiveRotationQuat(UObject* Source, const FQuat& Rotation);
    
    UFUNCTION(BlueprintCallable)
    void SetAdditiveRotation(UObject* Source, const FRotator& Rotation);
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnDeath(const FDamageInfo& DamageInfo);
    
    UFUNCTION(BlueprintCallable)
    void OnDamaged(float Damage, const FDamageInfo& DamageInfo, AController* InstigatedBy, UBaseLODActor* DamageCauser, bool IsKillingBlow);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasTag(FGameplayTag InTag) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasAnyTag(FGameplayTagContainer InTags) const;
    
    
    // Fix for true pure virtual functions not being implemented
};

