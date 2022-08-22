#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "SpawnedItem.h"
#include "DropletAbsorbDelegateDelegate.h"
#include "DropletMergeDelegateDelegate.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayTags -ObjectName=GameplayTag -FallbackName=GameplayTag
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
#include "SpawnedItemDroplet.generated.h"

class UParticleSystem;
class UCurveFloat;
class AActor;
class ASpawnedItemDroplet;
class UMaterialInstanceDynamic;
class AController;

UCLASS(Abstract)
class MAINE_API ASpawnedItemDroplet : public ASpawnedItem {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool bIsFrozen;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    TSubclassOf<ASpawnedItemDroplet> UnfrozenReplacement;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float ServingVolume;
    
    UPROPERTY(EditDefaultsOnly)
    float DefaultRadius;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float BufferVolumeRatio;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    int32 MaxServings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float EjectForce;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float InteractLinearDampening;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    UParticleSystem* SplashVFX;
    
    UPROPERTY(EditAnywhere)
    UCurveFloat* ScaleAnimCurve;
    
    UPROPERTY(EditAnywhere)
    UCurveFloat* WobbleStrengthCurve;
    
    UPROPERTY(BlueprintAssignable)
    FDropletMergeDelegate OnDropletMergeIn;
    
    UPROPERTY(BlueprintAssignable)
    FDropletAbsorbDelegate OnAbsorbActor;
    
protected:
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FGameplayTag PowerTag;
    
    UPROPERTY(BlueprintReadWrite)
    UMaterialInstanceDynamic* MIDDroplet;
    
    UPROPERTY(BlueprintReadWrite)
    float NativeWobbleStrength;
    
private:
    UPROPERTY(Transient, ReplicatedUsing=OnRep_Servings)
    int32 Servings;
    
    UPROPERTY(Transient, ReplicatedUsing=OnRep_ActorsContained)
    TArray<TWeakObjectPtr<AActor>> ActorsContained;
    
    UPROPERTY(Transient)
    TArray<TWeakObjectPtr<AActor>> OldActorsContained;
    
public:
    ASpawnedItemDroplet();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
    UFUNCTION(BlueprintCallable)
    void Unfreeze(AController* InstigatorController, AActor* Actor);
    
    UFUNCTION(BlueprintCallable)
    void SetServings(int32 NewServings);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void PlayContactWobble();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void PlayContactEffects(FVector Offset);
    
private:
    UFUNCTION()
    void OnRep_Servings();
    
    UFUNCTION()
    void OnRep_ActorsContained();
    
public:
    UFUNCTION(BlueprintImplementableEvent)
    void OnDropletUnfrozen(AController* InstigatorController, AActor* Actor);
    
    UFUNCTION(BlueprintPure)
    float GetVolume() const;
    
    UFUNCTION(BlueprintPure)
    int32 GetServings() const;
    
    UFUNCTION(BlueprintPure)
    float GetRadius() const;
    
    UFUNCTION(BlueprintPure)
    float GetOccupiedVolume() const;
    
    UFUNCTION(BlueprintPure)
    int32 GetNumActorContained() const;
    
    UFUNCTION(BlueprintPure)
    float GetAvailableVolume() const;
    
    UFUNCTION(BlueprintPure)
    AActor* GetActorContained(int32 Index) const;
    
    UFUNCTION(BlueprintCallable)
    void EjectRandomActor();
    
    UFUNCTION(BlueprintCallable)
    void EjectAllActors();
    
    UFUNCTION(BlueprintCallable)
    void EjectActor(AActor* Actor);
    
    UFUNCTION(BlueprintCallable)
    void AdjustServings(int32 Delta);
    
};

