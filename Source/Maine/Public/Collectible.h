#pragma once
#include "CoreMinimal.h"
#include "OnCollectableCollectedDelegateDelegate.h"
#include "LODableActorInterface.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Actor -FallbackName=Actor
#include "InteractableInterface.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=OEIText -ObjectName=LocString -FallbackName=LocString
#include "Collectible.generated.h"

class UCollectibleLiteData;
class UObsidianIDComponent;

UCLASS(Abstract)
class MAINE_API ACollectible : public AActor, public IInteractableInterface, public ILODableActorInterface {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable)
    FOnCollectableCollectedDelegate OnCollectableCollected;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FLocString DisplayName;
    
protected:
    UPROPERTY(VisibleDefaultsOnly)
    UCollectibleLiteData* LiteData;
    
    UPROPERTY(BlueprintReadOnly, Export, VisibleAnywhere)
    UObsidianIDComponent* ObsidianIDComponent;
    
public:
    ACollectible();
    
    // Fix for true pure virtual functions not being implemented
};

