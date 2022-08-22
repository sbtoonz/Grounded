#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Actor -FallbackName=Actor
#include "LODableActorInterface.h"
#include "InteractableInterface.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=OEIText -ObjectName=LocString -FallbackName=LocString
#include "SwappableFoliageInterface.h"
#include "LootableInterface.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=AIModule -ObjectName=AISightTargetInterface -FallbackName=AISightTargetInterface
//CROSS-MODULE INCLUDE V2: -ModuleName=AIModule -ObjectName=GenericTeamAgentInterface -FallbackName=GenericTeamAgentInterface
#include "DamageInfo.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayTags -ObjectName=GameplayTagContainer -FallbackName=GameplayTagContainer
#include "FoliageKey.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayTags -ObjectName=GameplayTag -FallbackName=GameplayTag
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Quat -FallbackName=Quat
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Rotator -FallbackName=Rotator
#include "HarvestNode.generated.h"

class UHealthComponent;
class UTeamComponent;
class UHarvestNodeLiteData;
class UProceduralAnimationComponent;
class UBaseLODActor;
class ULootComponent;
class UObsidianIDComponent;
class UObject;
class AController;

UCLASS(Abstract)
class MAINE_API AHarvestNode : public AActor, public IInteractableInterface, public ISwappableFoliageInterface, public IGenericTeamAgentInterface, public IAISightTargetInterface, public ILODableActorInterface, public ILootableInterface {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    FLocString DisplayName;
    
    UPROPERTY(AdvancedDisplay, EditDefaultsOnly)
    float LODFullActorMaxDistance;
    
    UPROPERTY(AdvancedDisplay, EditDefaultsOnly)
    uint8 bAllowLODNavDirtying: 1;
    
    UPROPERTY(EditDefaultsOnly)
    uint8 bAllowFoliageRespawn: 1;
    
protected:
    UPROPERTY(BlueprintReadOnly, Export, VisibleAnywhere)
    UHealthComponent* HealthComponent;
    
    UPROPERTY(BlueprintReadOnly, Export, VisibleAnywhere)
    UTeamComponent* TeamComponent;
    
    UPROPERTY(BlueprintReadOnly, Export)
    UProceduralAnimationComponent* ProceduralAnimationComponent;
    
    UPROPERTY(Export, VisibleAnywhere)
    UObsidianIDComponent* ObsidianIDComponent;
    
    UPROPERTY(Export)
    ULootComponent* LootComponent;
    
    UPROPERTY(VisibleDefaultsOnly)
    UHarvestNodeLiteData* LiteData;
    
    UPROPERTY(EditDefaultsOnly)
    FGameplayTagContainer HarvestNodeTags;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    uint8 bUseOverrideGameHourLifetime: 1;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    float OverrideGameHourLifetime;
    
    UPROPERTY(BlueprintReadOnly, Replicated)
    FFoliageKey SourceFoliage;
    
public:
    AHarvestNode();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
    UFUNCTION(BlueprintCallable)
    void SetAdditiveRotationQuat(UObject* Source, const FQuat& Rotation);
    
    UFUNCTION(BlueprintCallable)
    void SetAdditiveRotation(UObject* Source, const FRotator& Rotation);
    
protected:
    UFUNCTION()
    void OnDeath(const FDamageInfo& DamageInfo);
    
    UFUNCTION()
    void OnDamaged(float Damage, const FDamageInfo& DamageInfo, AController* InstigatedBy, UBaseLODActor* DamageCauser, bool IsKillingBlow);
    
public:
    UFUNCTION(BlueprintPure)
    bool HasTag(FGameplayTag InTag) const;
    
    UFUNCTION(BlueprintPure)
    bool HasAnyTag(FGameplayTagContainer InTags) const;
    
    
    // Fix for true pure virtual functions not being implemented
};

