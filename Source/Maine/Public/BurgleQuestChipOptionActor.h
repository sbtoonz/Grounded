#pragma once
#include "CoreMinimal.h"
#include "BurgleQuestOptionActor.h"
#include "Engine/DataTable.h"
#include "BurgleQuestChipOptionActor.generated.h"

class UItem;
class ASpawnedItem;
class UPersistenceComponent;
class UConditionalToggleComponent;

UCLASS(Abstract, Blueprintable)
class MAINE_API ABurgleQuestChipOptionActor : public ABurgleQuestOptionActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UItem* ChipItem;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    uint8 bHasInitializedChip: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<ASpawnedItem> ChipClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UPersistenceComponent* PersistenceComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UConditionalToggleComponent* ConditionalToggleComponent;
    
public:
    ABurgleQuestChipOptionActor();
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsComplete();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FDataTableRowHandle GetChipItemType() const;
    
};

