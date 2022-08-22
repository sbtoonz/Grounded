#pragma once
#include "CoreMinimal.h"
#include "CollectedDelegateDelegate.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Actor -FallbackName=Actor
#include "LODableActorInterface.h"
#include "InteractableInterface.h"
#include "PersistentInterface.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=HitResult -FallbackName=HitResult
#include "ScienceCollectable.generated.h"

class USceneComponent;
class UActorLiteData;
class USphereComponent;
class UObsidianIDComponent;
class UPrimitiveComponent;

UCLASS(Abstract)
class MAINE_API AScienceCollectable : public AActor, public IInteractableInterface, public IPersistentInterface, public ILODableActorInterface {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable)
    FCollectedDelegate OnCollected;
    
protected:
    UPROPERTY(EditDefaultsOnly)
    FText DisplayName;
    
    UPROPERTY(EditDefaultsOnly)
    int32 ScienceAmount;
    
    UPROPERTY(VisibleDefaultsOnly)
    UActorLiteData* LiteData;
    
    UPROPERTY(Export, VisibleAnywhere)
    USceneComponent* SceneRootComponent;
    
    UPROPERTY(Export, VisibleAnywhere)
    USphereComponent* SphereComponent;
    
    UPROPERTY(BlueprintReadOnly, Export, VisibleAnywhere)
    UObsidianIDComponent* ObsidianIDComponent;
    
public:
    AScienceCollectable();
    UFUNCTION()
    void SetScienceAmount(int32 Amount);
    
protected:
    UFUNCTION()
    void OnOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    
    
    // Fix for true pure virtual functions not being implemented
};

