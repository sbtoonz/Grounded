#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=UniqueNetIdRepl -FallbackName=UniqueNetIdRepl
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayTags -ObjectName=GameplayTag -FallbackName=GameplayTag
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

