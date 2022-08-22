#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Actor -FallbackName=Actor
#include "PersistentInterface.h"
#include "OnAssociationEnableChangedDelegate.h"
#include "SpawnAssociatedActor.generated.h"

class UPersistenceComponent;
class UBaseLODActor;
class UObsidianIDComponent;

UCLASS()
class MAINE_API ASpawnAssociatedActor : public AActor, public IPersistentInterface {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable)
    FOnAssociationEnableChanged OnEnableChanged;
    
protected:
    UPROPERTY(ReplicatedUsing=OnRep_IsEnabled)
    bool bIsEnabled;
    
    UPROPERTY(Export, VisibleAnywhere)
    UPersistenceComponent* PersistenceComponent;
    
    UPROPERTY(Export, VisibleAnywhere)
    UObsidianIDComponent* ObsidianIDComponent;
    
public:
    ASpawnAssociatedActor();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
protected:
    UFUNCTION()
    void OnRep_IsEnabled();
    
    UFUNCTION()
    void OnRegisteredActorDestroyed(UBaseLODActor* LODActor);
    
public:
    UFUNCTION(BlueprintPure)
    bool IsEnabled() const;
    
    
    // Fix for true pure virtual functions not being implemented
};

