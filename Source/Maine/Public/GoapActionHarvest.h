#pragma once
#include "CoreMinimal.h"
#include "ELootSpawnType.h"
#include "GoapAction.h"
#include "HarvestLootData.h"
#include "GoapActionHarvest.generated.h"

UCLASS()
class MAINE_API UGoapActionHarvest : public UGoapAction {
    GENERATED_BODY()
public:
    UPROPERTY()
    TArray<FHarvestLootData> LootData;
    
    UPROPERTY()
    ELootSpawnType LootSpawnType;
    
    UGoapActionHarvest();
};

