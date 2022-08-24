#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "PersistentInterface.h"
#include "OnAssociationEnableChangedDelegate.h"
#include "SpawnAssociatedActor.generated.h"

class UPersistenceComponent;
class UObsidianIDComponent;
class UBaseLODActor;

UCLASS(Blueprintable)
class MAINE_API ASpawnAssociatedActor : public AActor, public IPersistentInterface {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnAssociationEnableChanged OnEnableChanged;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_IsEnabled, meta=(AllowPrivateAccess=true))
    bool bIsEnabled;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UPersistenceComponent* PersistenceComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UObsidianIDComponent* ObsidianIDComponent;
    
public:
    ASpawnAssociatedActor();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnRep_IsEnabled();
    
    UFUNCTION(BlueprintCallable)
    void OnRegisteredActorDestroyed(UBaseLODActor* LODActor);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsEnabled() const;
    
    
    // Fix for true pure virtual functions not being implemented
};

