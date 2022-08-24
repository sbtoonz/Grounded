#pragma once
#include "CoreMinimal.h"
#include "GoapAction.h"
#include "HarvestLootData.h"
#include "ELootSpawnType.h"
#include "GoapActionHarvest.generated.h"

UCLASS(Blueprintable)
class MAINE_API UGoapActionHarvest : public UGoapAction {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FHarvestLootData> LootData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ELootSpawnType LootSpawnType;
    
    UGoapActionHarvest();
};

