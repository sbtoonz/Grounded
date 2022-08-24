#pragma once
#include "CoreMinimal.h"
#include "EncounterCompleteDelegateDelegate.h"
#include "GameFramework/Actor.h"
#include "SpawnKilledDelegateDelegate.h"
#include "PersistentInterface.h"
#include "GlobalVariableReferenceConditional.h"
#include "SpawnData.h"
#include "EGameDifficulty.h"
#include "DamageInfo.h"
#include "UObject/NoExportTypes.h"
#include "Encounter.generated.h"

class UBillboardComponent;
class UDrawSphereComponent;
class UPersistenceComponent;
class UObsidianIDComponent;
class UBaseLODActor;

UCLASS(Blueprintable)
class MAINE_API AEncounter : public AActor, public IPersistentInterface {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintAuthorityOnly, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSpawnKilledDelegate OnEncounterSpawnKilled;
    
    UPROPERTY(BlueprintAssignable, BlueprintAuthorityOnly, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSpawnKilledDelegate OnEncounterSpawnDestroyed;
    
    UPROPERTY(BlueprintAssignable, BlueprintAuthorityOnly, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEncounterCompleteDelegate OnEncounterComplete;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSpawnData> SpawnList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGlobalVariableReferenceConditional GlobalVariableConditional;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EGameDifficulty MinimumDifficulty;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MinimumPlayers;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool StartActivated;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool SpawnRandomlyInRadius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bSpawnOnNavMesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Radius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float RespawnTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PlayerSpawnDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PlayerDistanceCheckInterval;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bResetSpawnLocationsOnLoad: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bQuestCriticalEncounter: 1;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UBillboardComponent* SpriteComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UDrawSphereComponent* SphereComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UPersistenceComponent* PersistenceComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UObsidianIDComponent* ObsidianIDComponent;
    
public:
    AEncounter();
    UFUNCTION(BlueprintCallable)
    void Spawn(bool bForceSpawn);
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnSpawnKilled(const FDamageInfo& DamageInfo);
    
    UFUNCTION(BlueprintCallable)
    void OnSpawnDestroyed(UBaseLODActor* LODActor);
    
    UFUNCTION(BlueprintCallable)
    void OnGlobalVariableChanged(const FGuid& GlobalVariableID, int32 VariableValue, AActor* ActionInstigator);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsComplete() const;
    
    UFUNCTION(BlueprintCallable)
    void Despawn(bool bImmediate);
    
    
    // Fix for true pure virtual functions not being implemented
};

