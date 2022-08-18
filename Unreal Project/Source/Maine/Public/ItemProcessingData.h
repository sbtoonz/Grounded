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
    UPROPERTY(BlueprintReadOnly, Transient)
    UItem* Item;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    float FinishTime;
    
    UPROPERTY(Transient)
    int8 LocationIndex;
    
    UPROPERTY(Transient)
    ASpawnedItem* WorldItemActor;
    
    UPROPERTY(Export, NotReplicated, Transient)
    UParticleSystemComponent* VisualEffect;
    
protected:
    UPROPERTY(BlueprintReadOnly, NotReplicated)
    AItemProcessingBuilding* Owner;
    
    UPROPERTY(BlueprintReadOnly, NotReplicated)
    FUniqueNetIdRepl ProcessingInstigator;
    
private:
    UPROPERTY(NotReplicated)
    FGameplayTag ProcessingType;
    
public:
    FItemProcessingData();
};

