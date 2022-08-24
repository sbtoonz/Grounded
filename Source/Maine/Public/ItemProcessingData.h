#pragma once
#include "CoreMinimal.h"
#include "GameFramework/OnlineReplStructs.h"
#include "GameplayTagContainer.h"
#include "ItemProcessingData.generated.h"

class AItemProcessingBuilding;
class UItem;
class ASpawnedItem;
class UParticleSystemComponent;

USTRUCT(BlueprintType)
struct MAINE_API FItemProcessingData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UItem* Item;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float FinishTime;
    
    UPROPERTY(EditAnywhere, Transient)
    int8 LocationIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ASpawnedItem* WorldItemActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, NotReplicated, Transient, meta=(AllowPrivateAccess=true))
    UParticleSystemComponent* VisualEffect;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, NotReplicated, meta=(AllowPrivateAccess=true))
    AItemProcessingBuilding* Owner;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, NotReplicated, meta=(AllowPrivateAccess=true))
    FUniqueNetIdRepl ProcessingInstigator;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, NotReplicated, meta=(AllowPrivateAccess=true))
    FGameplayTag ProcessingType;
    
public:
    FItemProcessingData();
};

