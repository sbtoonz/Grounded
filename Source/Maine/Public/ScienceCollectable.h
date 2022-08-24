#pragma once
#include "CoreMinimal.h"
#include "CollectedDelegateDelegate.h"
#include "LODableActorInterface.h"
#include "GameFramework/Actor.h"
#include "InteractableInterface.h"
#include "PersistentInterface.h"
#include "Engine/EngineTypes.h"
#include "ScienceCollectable.generated.h"

class UActorLiteData;
class USphereComponent;
class USceneComponent;
class UObsidianIDComponent;
class UPrimitiveComponent;

UCLASS(Abstract, Blueprintable)
class MAINE_API AScienceCollectable : public AActor, public IInteractableInterface, public IPersistentInterface, public ILODableActorInterface {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCollectedDelegate OnCollected;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText DisplayName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ScienceAmount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UActorLiteData* LiteData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    USceneComponent* SceneRootComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    USphereComponent* SphereComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UObsidianIDComponent* ObsidianIDComponent;
    
public:
    AScienceCollectable();
    UFUNCTION(BlueprintCallable)
    void SetScienceAmount(int32 Amount);
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    
    
    // Fix for true pure virtual functions not being implemented
};

