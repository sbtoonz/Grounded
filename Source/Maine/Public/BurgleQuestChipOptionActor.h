#pragma once
#include "CoreMinimal.h"
#include "BurgleQuestOptionActor.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=DataTableRowHandle -FallbackName=DataTableRowHandle
#include "BurgleQuestChipOptionActor.generated.h"

class UItem;
class ASpawnedItem;
class UPersistenceComponent;
class UConditionalToggleComponent;

UCLASS(Abstract)
class MAINE_API ABurgleQuestChipOptionActor : public ABurgleQuestOptionActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, Transient)
    UItem* ChipItem;
    
    UPROPERTY(BlueprintReadWrite, Transient)
    uint8 bHasInitializedChip: 1;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TSoftClassPtr<ASpawnedItem> ChipClass;
    
    UPROPERTY(Export, VisibleAnywhere)
    UPersistenceComponent* PersistenceComponent;
    
    UPROPERTY(Export, VisibleAnywhere)
    UConditionalToggleComponent* ConditionalToggleComponent;
    
public:
    ABurgleQuestChipOptionActor();
    UFUNCTION(BlueprintPure)
    bool IsComplete();
    
    UFUNCTION(BlueprintPure)
    FDataTableRowHandle GetChipItemType() const;
    
};

