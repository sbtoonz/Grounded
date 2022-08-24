#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "SpawnedItem.h"
#include "GameplayTagContainer.h"
#include "DropletAbsorbDelegateDelegate.h"
#include "UObject/NoExportTypes.h"
#include "DropletMergeDelegateDelegate.h"
#include "SpawnedItemDroplet.generated.h"

class UCurveFloat;
class ASpawnedItemDroplet;
class UParticleSystem;
class UMaterialInstanceDynamic;
class AActor;
class AController;

UCLASS(Abstract, Blueprintable)
class MAINE_API ASpawnedItemDroplet : public ASpawnedItem {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsFrozen;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<ASpawnedItemDroplet> UnfrozenReplacement;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ServingVolume;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DefaultRadius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float BufferVolumeRatio;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MaxServings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float EjectForce;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float InteractLinearDampening;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UParticleSystem* SplashVFX;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCurveFloat* ScaleAnimCurve;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCurveFloat* WobbleStrengthCurve;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDropletMergeDelegate OnDropletMergeIn;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDropletAbsorbDelegate OnAbsorbActor;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag PowerTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialInstanceDynamic* MIDDroplet;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float NativeWobbleStrength;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_Servings, meta=(AllowPrivateAccess=true))
    int32 Servings;
    
    UPROPERTY(EditAnywhere, Transient, ReplicatedUsing=OnRep_ActorsContained)
    TArray<TWeakObjectPtr<AActor>> ActorsContained;
    
    UPROPERTY(EditAnywhere, Transient)
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
    UFUNCTION(BlueprintCallable)
    void OnRep_Servings();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_ActorsContained();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnDropletUnfrozen(AController* InstigatorController, AActor* Actor);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetVolume() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetServings() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetRadius() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetOccupiedVolume() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetNumActorContained() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetAvailableVolume() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
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

