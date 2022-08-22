#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Actor -FallbackName=Actor
#include "EBirdState.h"
#include "PersistentInterface.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=FloatRange -FallbackName=FloatRange
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Guid -FallbackName=Guid
#include "Bird.generated.h"

class ABirdLandSpot;
class UObsidianIDComponent;
class UPersistenceComponent;

UCLASS()
class MAINE_API ABird : public AActor, public IPersistentInterface {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere)
    FFloatRange LandedTime;
    
    UPROPERTY(EditAnywhere)
    FFloatRange TimeBetweenSpawns;
    
    UPROPERTY(EditAnywhere)
    FFloatRange ActiveHours;
    
    UPROPERTY(Transient)
    TArray<float> SpawnProgressValues;
    
    UPROPERTY(EditAnywhere)
    float FlySpeed;
    
    UPROPERTY(EditAnywhere)
    float LandingDistance;
    
    UPROPERTY(EditAnywhere)
    float TakeOffDistance;
    
    UPROPERTY(Transient, ReplicatedUsing=OnRep_CurrentState)
    EBirdState CurrentState;
    
    UPROPERTY(Replicated, Transient)
    ABirdLandSpot* CurrentLandSpot;
    
    UPROPERTY(Transient)
    FGuid CurrentLandSpotGuid;
    
    UPROPERTY(Export, VisibleAnywhere)
    UPersistenceComponent* PersistenceComponent;
    
    UPROPERTY(Export, VisibleAnywhere)
    UObsidianIDComponent* ObsidianIDComponent;
    
    UPROPERTY(Transient)
    float Progress;
    
    UPROPERTY(Transient)
    float TotalProgress;
    
    UPROPERTY(BlueprintReadOnly)
    bool HiddenForTimelapse;
    
public:
    ABird();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
protected:
    UFUNCTION()
    void OnTimelapseChange(bool bActive);
    
    UFUNCTION()
    void OnRep_CurrentState();
    
    UFUNCTION(BlueprintImplementableEvent)
    void HandleSpawn();
    
    UFUNCTION(BlueprintImplementableEvent)
    void HandleDespawn();
    
public:
    UFUNCTION(BlueprintPure)
    EBirdState GetState() const;
    
    UFUNCTION(BlueprintPure)
    ABirdLandSpot* GetCurrentLandSpot() const;
    
    
    // Fix for true pure virtual functions not being implemented
};

