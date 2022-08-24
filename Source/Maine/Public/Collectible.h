#pragma once
#include "CoreMinimal.h"
#include "OnCollectableCollectedDelegateDelegate.h"
#include "LODableActorInterface.h"
#include "GameFramework/Actor.h"
#include "InteractableInterface.h"
#include "LocString.h"
#include "Collectible.generated.h"

class UCollectibleLiteData;
class UObsidianIDComponent;

UCLASS(Abstract, Blueprintable)
class MAINE_API ACollectible : public AActor, public IInteractableInterface, public ILODableActorInterface {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnCollectableCollectedDelegate OnCollectableCollected;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLocString DisplayName;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCollectibleLiteData* LiteData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UObsidianIDComponent* ObsidianIDComponent;
    
public:
    ACollectible();
    
    // Fix for true pure virtual functions not being implemented
};

