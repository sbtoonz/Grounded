#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Actor -FallbackName=Actor
#include "PersistentInterface.h"
#include "SpawnKilledDelegateDelegate.h"
#include "EGameDifficulty.h"
#include "EncounterCompleteDelegateDelegate.h"
#include "GlobalVariableReferenceConditional.h"
#include "SpawnData.h"
#include "DamageInfo.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Guid -FallbackName=Guid
#include "Encounter.generated.h"

class UBillboardComponent;
class UDrawSphereComponent;
class UPersistenceComponent;
class UBaseLODActor;
class UObsidianIDComponent;

UCLASS()
class MAINE_API AEncounter : public AActor, public IPersistentInterface {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintAuthorityOnly)
    FSpawnKilledDelegate OnEncounterSpawnKilled;
    
    UPROPERTY(BlueprintAssignable, BlueprintAuthorityOnly)
    FSpawnKilledDelegate OnEncounterSpawnDestroyed;
    
    UPROPERTY(BlueprintAssignable, BlueprintAuthorityOnly)
    FEncounterCompleteDelegate OnEncounterComplete;
    
protected:
    UPROPERTY(EditAnywhere)
    TArray<FSpawnData> SpawnList;
    
    UPROPERTY(EditAnywhere)
    FGlobalVariableReferenceConditional GlobalVariableConditional;
    
    UPROPERTY(EditAnywhere)
    EGameDifficulty MinimumDifficulty;
    
    UPROPERTY(EditAnywhere)
    int32 MinimumPlayers;
    
    UPROPERTY(EditAnywhere)
    bool StartActivated;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool SpawnRandomlyInRadius;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool bSpawnOnNavMesh;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float Radius;
    
    UPROPERTY(EditAnywhere)
    float RespawnTime;
    
    UPROPERTY(EditAnywhere)
    float PlayerSpawnDistance;
    
    UPROPERTY(EditAnywhere)
    float PlayerDistanceCheckInterval;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    uint8 bResetSpawnLocationsOnLoad: 1;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    uint8 bQuestCriticalEncounter: 1;
    
private:
    UPROPERTY(BlueprintReadOnly, Export, VisibleAnywhere, meta=(AllowPrivateAccess=true))
    UBillboardComponent* SpriteComponent;
    
    UPROPERTY(BlueprintReadOnly, Export, VisibleAnywhere, meta=(AllowPrivateAccess=true))
    UDrawSphereComponent* SphereComponent;
    
    UPROPERTY(Export, VisibleAnywhere)
    UPersistenceComponent* PersistenceComponent;
    
    UPROPERTY(Export, VisibleAnywhere)
    UObsidianIDComponent* ObsidianIDComponent;
    
public:
    AEncounter();
    UFUNCTION(BlueprintCallable)
    void Spawn(bool bForceSpawn);
    
protected:
    UFUNCTION()
    void OnSpawnKilled(const FDamageInfo& DamageInfo);
    
    UFUNCTION()
    void OnSpawnDestroyed(UBaseLODActor* LODActor);
    
    UFUNCTION()
    void OnGlobalVariableChanged(const FGuid& GlobalVariableID, int32 VariableValue, AActor* ActionInstigator);
    
public:
    UFUNCTION(BlueprintPure)
    bool IsComplete() const;
    
    UFUNCTION(BlueprintCallable)
    void Despawn(bool bImmediate);
    
    
    // Fix for true pure virtual functions not being implemented
};

